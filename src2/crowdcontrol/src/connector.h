#pragma once
#define DEFAULT_BUFLEN 8192


#include <vector>
#include <mutex>
#include <future>
#include <thread>
#include <array>
#include <map>
#include <condition_variable>
#include <chrono>

template <class value_type>
class value_lock
{
private:
	value_type* value;
	value_type unlock_value;

	bool locked = false;

public:
	value_lock(value_type* value, value_type lock_value, value_type unlock_value)
	{
		this->value = value;
		this->unlock_value = unlock_value;

		*value = lock_value;
		locked = true;
	}

	~value_lock()
	{
		if (locked)
		{
			*value = unlock_value;
			locked = false;
		}
	}

	void Unlock()
	{
		if (locked)
		{
			*value = unlock_value;
			locked = false;
		}
	}
};

struct Command
{
public:
	UINT id = 0;
	std::string command;
	std::string viewer;
	int type;
	long long time;
	int duration;
};

class Connector
{
	SOCKET m_socket = INVALID_SOCKET;
	int iResult = 0;

	bool hasError = false;
	char error[100];

	std::mutex m_mutex;
	std::map<UINT, std::shared_ptr<Command>> command_map;
	std::map<UINT, std::shared_ptr<Command>> pending_command_map;
	std::map<std::string, std::shared_ptr<Command>> timer_map;

	std::future<void> run_thread;
	std::future<void> command_check_thread;
	std::future<bool> connect_thread;
	std::future<void> papyrus_check;

	std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
	std::chrono::steady_clock::time_point last_update = std::chrono::steady_clock::now();

	long long GetElapsedTime();
	long long GetElapsedTime(std::chrono::steady_clock::time_point time);

	void _RunTimer();
	void _Run();

	std::string socketBuffer = "";
	std::vector<std::string> BufferSocketResponse(const char* buf, size_t buf_size);

	bool running = false;
	bool connecting = false;
	bool checking = false;
	bool menuOpened = false;
	bool wsaInitialized = false;
	bool stopping = false;
	bool m_game_update_requested = false;
	unsigned m_game_update_request_id = 0;

	std::mutex m_stop_mutex;
	std::condition_variable m_stop_cv;

	void waitForThread(std::future<void>& thread);
	void waitForConnectThread(std::future<bool>& thread);
	void setSocketTimeouts(SOCKET socket);
	bool connectWithTimeout(SOCKET socket, const sockaddr* addr, int addrlen);

public:

	Connector();
	~Connector();

	std::vector<std::string> msgs;
	std::mutex msgs_mutex;
	void ResetError();
	const char* GetError();
	bool HasError();
	bool IsConnected();
	bool IsRunning();

	void OnMenu(bool isOpen);

	int GetItemCount();
	int GetPendingCommandCount();
	std::shared_ptr<Command> PopItem();
	std::shared_ptr<Command> PopCommand();

	void NewTimer(UINT command_id, int miliseconds);
	void ExtendTimer(UINT command_id, int miliseconds);
	bool HasTimer(UINT command_id);
	bool HasTimer(std::string command_name);
	void ClearTimers();
	void ClearAllCommands();

	void HandleDisconnect();
	void ConnectAsync();
	bool Connect();
    void Stop();

	void Respond(int id, int status, std::string message, int miliseconds);
	void Respond(int id, int status, std::string message);
	void RespondVis(std::string code, int status, std::string message);
	void RespondTimed(int id, int status, std::string message, int dur);
	void CompleteCommand(UINT command_id);

	bool PollGameUpdateRequest(unsigned& out_id);
	void SendGameUpdate(unsigned id, int state);

	void Run();
};
