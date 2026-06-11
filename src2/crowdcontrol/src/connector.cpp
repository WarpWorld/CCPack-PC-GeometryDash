#include <Geode/Geode.hpp>

#include <stdio.h>
#include <iostream>
#include <functional>
#include <chrono>
#include "Connector.h"


#pragma comment(lib, "Ws2_32.lib")

namespace
{
	constexpr int REQUEST_TYPE_TEST = 0;
	constexpr int REQUEST_TYPE_START = 1;
	constexpr int REQUEST_TYPE_STOP = 2;
	constexpr int REQUEST_TYPE_GAME_UPDATE = 0xFD;
	constexpr int REQUEST_TYPE_LOGIN = 0xF0;
	constexpr int REQUEST_TYPE_KEEPALIVE = 0xFF;
	constexpr int RESPONSE_TYPE_GAME_UPDATE = 0xFD;

	std::string escapeJsonString(const std::string& value)
	{
		std::string escaped;
		escaped.reserve(value.size());
		for (const char c : value)
		{
			switch (c)
			{
				case '\\': escaped += "\\\\"; break;
				case '"': escaped += "\\\""; break;
				case '\n': escaped += "\\n"; break;
				case '\r': escaped += "\\r"; break;
				case '\t': escaped += "\\t"; break;
				default: escaped += c; break;
			}
		}
		return escaped;
	}

	bool tryParseInt(const std::string& value, int& out)
	{
		if (value.empty()) return false;
		try
		{
			size_t idx = 0;
			const int parsed = std::stoi(value, &idx);
			if (idx != value.size()) return false;
			out = parsed;
			return true;
		}
		catch (...) { return false; }
	}

	bool tryParseUInt(const std::string& value, unsigned int& out)
	{
		int parsed = 0;
		if (!tryParseInt(value, parsed) || parsed < 0) return false;
		out = static_cast<unsigned int>(parsed);
		return true;
	}

	void SendLoginSuccess(SOCKET socket, unsigned int request_id)
	{
		if (socket == INVALID_SOCKET) return;
		std::string buf = "{\"id\":";
		buf += std::to_string(request_id);
		buf += ",\"type\":241,\"status\":0}";
		buf += '\0';
		send(socket, buf.c_str(), static_cast<int>(buf.length()), 0);
	}
}

Connector::Connector()
{
	WSADATA wsaData = {};
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) == 0)
		wsaInitialized = true;
}

Connector::~Connector()
{
    Stop();
}

void Connector::waitForThread(std::future<void>& thread)
{
	if (!thread.valid()) return;

	const auto status = thread.wait_for(std::chrono::seconds(2));
	if (status == std::future_status::ready)
		thread.get();

	thread = std::future<void>();
}

void Connector::waitForConnectThread(std::future<bool>& thread)
{
	if (!thread.valid()) return;

	const auto status = thread.wait_for(std::chrono::seconds(2));
	if (status == std::future_status::ready)
		thread.get();

	thread = std::future<bool>();
}

void Connector::setSocketTimeouts(SOCKET socket)
{
	if (socket == INVALID_SOCKET) return;

	DWORD timeoutMs = 2000;
	setsockopt(socket, SOL_SOCKET, SO_RCVTIMEO, reinterpret_cast<const char*>(&timeoutMs), sizeof(timeoutMs));
	setsockopt(socket, SOL_SOCKET, SO_SNDTIMEO, reinterpret_cast<const char*>(&timeoutMs), sizeof(timeoutMs));
}

bool Connector::connectWithTimeout(SOCKET socket, const sockaddr* addr, int addrlen)
{
	u_long nonBlocking = 1;
	if (ioctlsocket(socket, FIONBIO, &nonBlocking) != 0)
		return false;

	const int result = connect(socket, addr, addrlen);
	if (result == 0)
	{
		nonBlocking = 0;
		ioctlsocket(socket, FIONBIO, &nonBlocking);
		return true;
	}

	const int connectError = WSAGetLastError();
	if (connectError != WSAEWOULDBLOCK && connectError != WSAEINVAL)
		return false;

	fd_set writeSet;
	FD_ZERO(&writeSet);
	FD_SET(socket, &writeSet);

	const auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(2);
	while (!stopping)
	{
		const auto now = std::chrono::steady_clock::now();
		if (now >= deadline)
			return false;

		const auto remainingMs = std::chrono::duration_cast<std::chrono::milliseconds>(deadline - now).count();
		const long waitMs = static_cast<long>(remainingMs > 100 ? 100 : remainingMs);

		FD_ZERO(&writeSet);
		FD_SET(socket, &writeSet);

		const timeval tv = { waitMs / 1000, static_cast<long>((waitMs % 1000) * 1000) };
		const int selectResult = select(0, nullptr, &writeSet, nullptr, &tv);
		if (selectResult == 0)
			continue;

		if (selectResult == SOCKET_ERROR)
			return false;

		if (!FD_ISSET(socket, &writeSet))
			continue;

		int soError = 0;
		int soErrorLen = sizeof(soError);
		if (getsockopt(socket, SOL_SOCKET, SO_ERROR, reinterpret_cast<char*>(&soError), &soErrorLen) != 0)
			return false;

		if (soError != 0)
			return false;

		nonBlocking = 0;
		ioctlsocket(socket, FIONBIO, &nonBlocking);
		return true;
	}

	return false;
}

void Connector::Stop()
{
	if (stopping)
		return;

	stopping = true;
	m_stop_cv.notify_all();

	HandleDisconnect();

	waitForThread(run_thread);
	waitForThread(command_check_thread);
	waitForConnectThread(connect_thread);

	running = false;
	checking = false;
	connecting = false;

	if (wsaInitialized)
	{
		WSACleanup();
		wsaInitialized = false;
	}
}

bool Connector::HasError()
{
	return hasError;
}

const char* Connector::GetError()
{
	return (const char*)error;
}

void Connector::ResetError()
{
	hasError = false;
	ZeroMemory(&error, sizeof(error));
}

bool Connector::IsConnected()
{
	return m_socket != INVALID_SOCKET && !connecting;
}

bool Connector::IsRunning()
{
	return running && checking;
}

void Connector::OnMenu(bool isOpen)
{
	std::lock_guard guard(m_mutex);
	menuOpened = isOpen;
}

int Connector::GetItemCount()
{
	std::lock_guard guard(m_mutex);
	return command_map.size();
}

int Connector::GetPendingCommandCount()
{
	std::lock_guard guard(m_mutex);
	return command_map.size();
}

std::shared_ptr<Command> Connector::PopCommand()
{
	try
	{
		std::lock_guard guard(m_mutex);
		if (command_map.empty())
			return nullptr;

		auto iter = command_map.begin();
		auto command = iter->second;
		pending_command_map[command->id] = command;
		command_map.erase(iter);
		return command;
	}
	catch (const std::exception&)
	{
	}

	return nullptr;
}

std::shared_ptr<Command> Connector::PopItem()
{
	return PopCommand();
}

void Connector::NewTimer(UINT command_id, int miliseconds)
{
	std::lock_guard guard(m_mutex);
	std::shared_ptr<Command> c;
	auto pending_iter = pending_command_map.find(command_id);
	if (pending_iter != pending_command_map.end())
		c = pending_iter->second;
	else
	{
		auto iter = command_map.find(command_id);
		if (iter == command_map.end()) return;
		c = iter->second;
	}
	c->type = 2;
	if (c->duration > 0) miliseconds = c->duration;
	c->time = GetElapsedTime() + (long long)miliseconds;
	timer_map.insert({ c->command, c });
}

void Connector::ExtendTimer(UINT command_id, int miliseconds)
{
	std::lock_guard guard(m_mutex);
	std::shared_ptr<Command> c;
	auto pending_iter = pending_command_map.find(command_id);
	if (pending_iter != pending_command_map.end())
		c = pending_iter->second;
	else
	{
		auto iter = command_map.find(command_id);
		if (iter == command_map.end()) return;
		c = iter->second;
	}
	c->time += miliseconds;
}

bool Connector::HasTimer(UINT command_id)
{
	try
	{
		std::lock_guard guard(m_mutex);
		std::shared_ptr<Command> c;
		auto pending_iter = pending_command_map.find(command_id);
		if (pending_iter != pending_command_map.end())
			c = pending_iter->second;
		else
		{
			auto iter = command_map.find(command_id);
			if (iter == command_map.end()) return false;
			c = iter->second;
		}
		return HasTimer(c->command);
	}
	catch (const std::exception&)
	{
	}

	return false;
}

bool Connector::HasTimer(std::string command_name)
{
	return timer_map.find(command_name) != timer_map.end();
}

void Connector::ClearTimers()
{
	std::lock_guard lock(m_mutex);
	timer_map.clear();
}

void Connector::ClearAllCommands()
{
	std::lock_guard lock(m_mutex);
	timer_map.clear();
	pending_command_map.clear();
	command_map.clear();
}

void Connector::HandleDisconnect()
{
	if (m_socket != INVALID_SOCKET)
	{
		closesocket(m_socket);
		m_socket = INVALID_SOCKET;
	}

	connect_thread = std::future<bool>();
}

void Connector::ConnectAsync()
{
	if (stopping) return;

	if (IsConnected() && IsRunning()) return;

	if (IsConnected() && !IsRunning())
		HandleDisconnect();

	if (connecting) return;
	if (connect_thread.valid())
	{
		auto status = connect_thread.wait_for(std::chrono::milliseconds::zero());
		if (status == std::future_status::ready)
		{
			bool result = connect_thread.get();

			if (!result)
				connect_thread = std::async(&Connector::Connect, this);

			else
				connect_thread = std::future<bool>();
		}
	}
	else
	{
		connect_thread = std::async(&Connector::Connect, this);
	}
}

bool Connector::Connect()
{
	if (stopping) return false;

	value_lock connect_lock(&connecting, true, false);

	try
	{
		if (stopping) return false;

		m_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

		if (m_socket == INVALID_SOCKET)
		{
			hasError = true;
			//snprintf(error, sizeof(error), "Socket creation failed: %d", WSAGetLastError());

			return false;
		}

        sockaddr_in  serv_addr;
        memset(&serv_addr, 0, sizeof(serv_addr));
        serv_addr.sin_family = AF_INET;

        serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1"); 
        serv_addr.sin_port        = htons(33940);
        

		if (!connectWithTimeout(m_socket, reinterpret_cast<LPSOCKADDR>(&serv_addr), sizeof(serv_addr)))
		{
			hasError = true;
			closesocket(m_socket);
			m_socket = INVALID_SOCKET;
			return false;
		}

		ResetError();
		
		{
			std::lock_guard guard(msgs_mutex);
			msgs.push_back("Connected to Crowd Control");
		}

		connecting = false;
		if (!stopping)
			Run();

		return true;
	}
	catch (const std::exception&)
	{
		//Output::send<LogLevel::Verbose>(STR("Connect error: {}\n"));
		if (m_socket != INVALID_SOCKET)
		{
			closesocket(m_socket);
			m_socket = INVALID_SOCKET;
		}
	}

	return false;
}


void Connector::Respond(int id, int status, std::string message, int miliseconds)
{
	if (stopping) return;

	try
	{
		std::shared_ptr<Command> c;
		{
			std::lock_guard lock(m_mutex);
			auto iter = pending_command_map.find((UINT)id);
			if (iter == pending_command_map.end())
			{
				iter = command_map.find((UINT)id);
				if (iter == command_map.end())
					return;
			}
			c = iter->second;
		}

		bool timer_created = false;
		if (status == 4)
		{
			timer_created = true;
			status = 0;
			if (!HasTimer(id))
			{
				NewTimer(id, miliseconds);
			}
			else
			{
				ExtendTimer(id, miliseconds);
			}
		}

		if (timer_created && miliseconds > 0)
			RespondTimed(id, status, message, miliseconds);
		else if (c->type == 1 || timer_created)
			Respond(id, status, message);

		std::lock_guard lock(m_mutex);
		pending_command_map.erase(c->id);
		command_map.erase(c->id);
	}
	catch (const std::exception&)
	{
	}
}

void Connector::CompleteCommand(UINT command_id)
{
	std::lock_guard lock(m_mutex);
	pending_command_map.erase(command_id);
	command_map.erase(command_id);
}

void Connector::Respond(int id, int status, std::string message)
{
	if (stopping || !IsConnected()) return;

	try
	{
        std::string buf = "{";

		buf += "\"id\":";
        buf += std::to_string(id);

		buf += ", \"status\":";
        buf += std::to_string(status);

		if (message.length() > 0)
        {
            buf += ",\"message\":\"";
            buf += escapeJsonString(message);
            buf += "\"";
        }
        buf += "}";


		buf += '\0';

		if (IsConnected())
			send(m_socket, buf.c_str(), buf.length(), 0);
	}
	catch (const std::exception&)
	{
	}
}

void Connector::RespondVis(std::string code, int status, std::string message)
{
	if (stopping || !IsConnected()) return;

	try
	{
        std::string buf = "{";

		buf += "\"id\":0";
		buf += ",\"type\":1";

		buf += ",\"code\":\"";
        buf += code;
		buf += "\"";

		buf += ", \"status\":";
        buf += std::to_string(status);

		if (message.length() > 0)
        {
            buf += ",\"message\":\"";
            buf += escapeJsonString(message);
            buf += "\"";
        }
        buf += "}";

		buf += '\0';

		if (IsConnected())
			send(m_socket, buf.c_str(), buf.length(), 0);
	}
	catch (const std::exception&)
	{
	}
}

bool Connector::PollGameUpdateRequest(unsigned& out_id)
{
	std::lock_guard<std::mutex> lock(m_mutex);
	if (!m_game_update_requested)
		return false;

	out_id = m_game_update_request_id;
	m_game_update_requested = false;
	m_game_update_request_id = 0;
	return true;
}

void Connector::SendGameUpdate(unsigned id, int state)
{
	if (stopping || m_socket == INVALID_SOCKET)
		return;

	try
	{
		std::string buf = "{\"id\":";
		buf += std::to_string(id);
		buf += ",\"type\":";
		buf += std::to_string(RESPONSE_TYPE_GAME_UPDATE);
		buf += ",\"state\":";
		buf += std::to_string(state);
		buf += "}";

		buf += '\0';
		if (IsConnected())
			send(m_socket, buf.c_str(), static_cast<int>(buf.length()), 0);
	}
	catch (const std::exception&)
	{
	}
}

void Connector::RespondTimed(int id, int status, std::string message, int dur)
{
	if (stopping || !IsConnected()) return;

	try
	{
        std::string buf = "{";

		buf += "\"id\":";
        buf += std::to_string(id);

		buf += ", \"status\":";
        buf += std::to_string(status);

		buf += ", \"timeRemaining\":";
        buf += std::to_string(dur);

		if (message.length() > 0)
        {
            buf += ",\"message\":\"";
            buf += escapeJsonString(message);
            buf += "\"";
        }
        buf += "}";

		buf += '\0';

		if (IsConnected())
			send(m_socket, buf.c_str(), buf.length(), 0);
	}
	catch (const std::exception&)
	{
		//Output::send<LogLevel::Verbose>(STR("Respond error normal: {}\n"));
	}
}

void Connector::Run()
{
	if (stopping || !IsConnected()) return;
	if (run_thread.valid())
	{
		auto status = run_thread.wait_for(std::chrono::milliseconds::zero());

		if (status == std::future_status::ready)
		{
			run_thread = std::async(&Connector::_Run, this);
		}
	}
	else
	{
		run_thread = std::async(&Connector::_Run, this);
	}

	if (command_check_thread.valid())
	{
		auto status = command_check_thread.wait_for(std::chrono::milliseconds::zero());

		if (status == std::future_status::ready)
		{
			command_check_thread = std::async(&Connector::_RunTimer, this);
		}
	}
	else
	{
		command_check_thread = std::async(&Connector::_RunTimer, this);
	}
}

long long Connector::GetElapsedTime()
{
	return GetElapsedTime(start_time);
}

long long Connector::GetElapsedTime(std::chrono::steady_clock::time_point time)
{
	return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - time).count();
}

void Connector::_RunTimer()
{
	value_lock check_lock(&checking, true, false);
	while (!stopping)
	{
		{
			std::unique_lock lock(m_stop_mutex);
			m_stop_cv.wait_for(lock, std::chrono::milliseconds(500), [this] { return stopping; });
		}
		if (stopping) break;

		try
		{
			std::vector<int> timedOutIds;
			{
				std::lock_guard guard(m_mutex);

				long long delta_time = 0;
				if (menuOpened)
				{
					delta_time = GetElapsedTime(last_update);
				}

				long long cur_timer = GetElapsedTime();

				auto timeoutCommand = [&](std::map<UINT, std::shared_ptr<Command>>& map) {
					auto iter = map.begin();
					while (iter != map.end())
					{
						const int cmd_type = iter->second->type;
						if ((cmd_type == 0 || cmd_type == 1) && cur_timer - iter->second->time > 15000)
						{
							timedOutIds.push_back((int)iter->first);
							iter = map.erase(iter);
						}
						else iter++;
					}
				};

				timeoutCommand(command_map);
				timeoutCommand(pending_command_map);

				auto timer_iter = timer_map.begin();
				while (timer_iter != timer_map.end())
				{
					timer_iter->second->time += delta_time;
					auto c = timer_iter->second;
					if (cur_timer > c->time)
					{
						command_map.insert({ c->id, c });
						timer_iter = timer_map.erase(timer_iter);
					}
					else timer_iter++;
				}

				last_update = std::chrono::steady_clock::now();
			}

			if (!stopping)
				for (int id : timedOutIds)
					Respond(id, 1, "");
		}
		catch (const std::exception&)
		{
		}
	}
}

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

void replaceAll(std::wstring& str, const std::wstring& from, const std::wstring& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

std::vector<std::string> split(std::string s, std::string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::string token;
    std::vector<std::string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

std::string getField(std::string str, std::string field)
{
    std::string res = "";

	std::string delim = "\"";
    delim += field;
    delim += "\":";

    auto parts = split(str, delim);

	if (parts.size() < 2)
    {
        delim = field;
        delim += ":";
        parts = split(str, delim);
    }

    if (parts.size() < 2)
		return "";

	res = parts[1];

	auto parts2 = split(res, ",");
    res = parts2[0];

	replaceAll(res, "\"", "");
    return res;
}

void Connector::_Run()
{
	value_lock run_lock(&running, true, false);
	while (!stopping)
	{
		try
		{
			if (stopping || m_socket == INVALID_SOCKET)
				break;

			ResetError();
			int last_error = 0;
			int recvbuflen = DEFAULT_BUFLEN;
			char recvbuf[DEFAULT_BUFLEN];
			ZeroMemory(&recvbuf, sizeof(recvbuf));

			iResult = recv(m_socket, recvbuf, recvbuflen, 0);
			if (iResult > 0)
			{

				// EXAMPLE: {"id":1,"code":"spawn_dragon","viewer":"sdk","type":1}\0

				auto commands = BufferSocketResponse(recvbuf, iResult);

				for (auto c : commands)
				{
					if (c.length() == 0) continue;

					try
					{
					std::string delim = "\"viewers\":[";
					auto parts = split(c, delim);
                    if (parts.size() > 1)
                    {
                        delim = "]";
                        auto parts2 = split(parts[1], delim);

						if (parts2.size() > 1)
                        {
                            c = parts[0];
                            c += parts2[1];
                        }
                    }

					delim = "\"targets\":[";
					parts = split(c, delim);
                    if (parts.size() > 1)
                    {
                        delim = "]";
                        auto parts2 = split(parts[1], delim);

						if (parts2.size() > 1)
                        {
                            c = parts[0];
                            c += parts2[1];
                        }
                    }

					std::string type = getField(c, "type");
					int command_type = 0;
					if (!tryParseInt(type, command_type))
						continue;

					if (command_type == REQUEST_TYPE_KEEPALIVE)
						continue;

					if (command_type == REQUEST_TYPE_LOGIN)
					{
						unsigned int login_id = 0;
						tryParseUInt(getField(c, "id"), login_id);
						SendLoginSuccess(m_socket, login_id);
						continue;
					}

					if (command_type == REQUEST_TYPE_GAME_UPDATE)
					{
						unsigned int update_id = 0;
						tryParseUInt(getField(c, "id"), update_id);
						std::lock_guard<std::mutex> lock(m_mutex);
						m_game_update_request_id = update_id;
						m_game_update_requested = true;
						continue;
					}

					if (command_type != REQUEST_TYPE_TEST &&
					    command_type != REQUEST_TYPE_START &&
					    command_type != REQUEST_TYPE_STOP)
						continue;

					unsigned int command_id = 0;
					if (!tryParseUInt(getField(c, "id"), command_id))
						continue;

					std::string command_code = getField(c, "code");
					std::string command_viewer = getField(c, "viewer");

					int command_dur = 0;
					std::string dur = getField(c, "duration");
					if (!dur.empty())
					{
						int parsed_dur = 0;
						if (tryParseInt(dur, parsed_dur))
							command_dur = parsed_dur;
					}

					if (command_type == REQUEST_TYPE_STOP && command_code.empty())
						command_code = "stopall";

					std::lock_guard<std::mutex> lock(m_mutex);
					command_map[command_id] = std::make_shared<Command>(Command{
						command_id,
						command_code,
						command_viewer,
						command_type,
						GetElapsedTime(),
						command_dur
					});
					}
					catch (const std::exception&)
					{
						continue;
					}
				}
			}
			else if (iResult == 0)
			{
				hasError = true;
				//Output::send<LogLevel::Verbose>(STR("Connection closed\n"));
				m_socket = INVALID_SOCKET;
				break;
			}

			else
			{
				last_error = WSAGetLastError();
				if (last_error == (int)WSAEWOULDBLOCK ||
				    last_error == (int)WSAETIMEDOUT ||
				    last_error == (int)WSAEINTR)
					continue;

				hasError = true;
				m_socket = INVALID_SOCKET;
				break;
			}

		}
		catch (const std::exception&)
		{
		}
	}
}

std::vector<std::string> Connector::BufferSocketResponse(const char* buf, size_t buf_size)
{
	socketBuffer.append(buf, buf_size);
	if (socketBuffer.size() > 65536)
		socketBuffer.clear();

	std::vector<std::string> buffer_array;

	size_t index = socketBuffer.find('\0');
	while (index != std::string::npos)
	{
		buffer_array.push_back(socketBuffer.substr(0, index));
		socketBuffer = socketBuffer.substr(index+1);
		index = socketBuffer.find('\0');
	}

	return buffer_array;
}