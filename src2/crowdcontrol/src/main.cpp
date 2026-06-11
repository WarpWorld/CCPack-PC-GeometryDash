/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
#include <Geode/loader/Dirs.hpp>
#include <algorithm>
#include <cstdio>
#include <fstream>
#include <memory>
#include <mutex>
#include <optional>
#include <string>
#include <vector>
#include "connector.h"

 /**
  * Brings cocos2d and all Geode namespaces to the current scope.
  */
using namespace geode::prelude;

/**
 * `$modify` lets you extend and modify GD's classes.
 * To hook a function in Geode, simply $modify the class
 * and write a new function definition with the signature of
 * the function you want to hook.
 *
 * Here we use the overloaded `$modify` macro to set our own class name,
 * so that we can use it for button callbacks.
 *
 * Notice the header being included, you *must* include the header for
 * the class you are modifying, or you will get a compile error.
 */

enum Status
{
	STATUS_SUCCESS,
	STATUS_FAILURE,
	STATUS_UNAVAIL,
	STATUS_RETRY,
	STATUS_START = 5,
	STATUS_PAUSE = 6,
	STATUS_RESUME = 7,
	STATUS_STOP = 8,

	STATUS_VISIBLE = 0x80,
	STATUS_NOTVISIBLE = 0x81,
	STATUS_SELECTABLE = 0x82,
	STATUS_NOTSELECTABLE = 0x83,

	STATUS_KEEPALIVE = 255
};


int retry = 0;
static std::unique_ptr<Connector> connector;

static void CrowdControlReconnect()
{
	if (!connector) return;
	connector->ConnectAsync();
}

static void publishGameState();
static void updateLevelEffectAvailability();
static void syncTimedEffectsToCC(bool gamePaused);
static void performFullClearStateImmediate();
static void updateCcDebugOverlay();
static void ccLog(const char* event, PlayLayer* pl, const char* detail = "");
static void processNextCommand();

// Isolation toggles while debugging pause/movement bugs.
static constexpr bool CC_DISABLE_CHECKEFFECT = false;
static constexpr bool CC_DISABLE_CHECKEFFECT_PLAYER = false;
static constexpr bool CC_SHOW_DEBUG_STATS = false;

static void shutdownCrowdControl() {
	if (!connector) return;
	connector->Stop();
	connector.reset();
}

cocos2d::CCLabelBMFont* label;
cocos2d::CCLabelBMFont* label2;
cocos2d::ccColor3B color;
bool colorm = false;
std::string currentColorCode;
PlayLayer* layer = 0;
PlayerObject* player = 0;
int delay = -1;
int dur;
float spin = -1.0f;
int endid = -1;
int colorid = -1;
float scale = 0;
bool autojump = false;
int depth = 0;
bool invert = false;
int remainingMs = 0;
int colorRemainingMs = 0;
bool ccPauseSent = false;
bool colorPauseSent = false;
bool effectApplied = false;
bool levelEffectsSelectable = false;

static constexpr int CC_LEVEL_DEBUG_TAG = 0xCCD001;
static constexpr int CC_MENU_DEBUG_TAG = 0xCCD002;

static std::mutex g_ccLogMutex;
static bool g_ccLogInitialized = false;
static bool g_ccLogWritable = false;
static std::string g_ccLogPathHint = "no log yet";

#include <Geode/modify/MenuLayer.hpp>
class $modify(MyMenuLayer, MenuLayer) {
	/**
	 * Typically classes in GD are initialized using the `init` function, (though not always!),
	 * so here we use it to add our own button to the bottom menu.
	 *
	 * Note that for all hooks, your signature has to *match exactly*,
	 * `void init()` would not place a hook!
	*/
	bool init() {
		/**
		 * We call the original init function so that the
		 * original class is properly initialized.
		 */
		if (!MenuLayer::init()) {
			return false;
		}

		if (!connector) {
			connector = std::make_unique<Connector>();
			CrowdControlReconnect();
		}

		ccLog("session_start", nullptr, "");

		this->scheduleOnce(schedule_selector(MyMenuLayer::checkmsg), 1.0);

		if (CC_SHOW_DEBUG_STATS) {
			auto menuLbl = CCLabelBMFont::create("[CC] starting...", "chatFont.fnt");
			menuLbl->setTag(CC_MENU_DEBUG_TAG);
			menuLbl->setScale(0.55f);
			menuLbl->setAnchorPoint({ 0.0f, 1.0f });
			menuLbl->setPosition(10.0f, CCDirector::get()->getWinSize().height - 10.0f);
			menuLbl->setColor({ 140, 235, 140 });
			this->addChild(menuLbl, 9999);
		}

		return true;
	}

	void onEnter() {
		MenuLayer::onEnter();
		if (connector) connector->OnMenu(true);
	}

	void onExit() {
		if (connector) connector->OnMenu(false);
		MenuLayer::onExit();
	}

	void checkmsg(float dt) {
		if (!connector) return;

		std::string m;
		{
			std::lock_guard guard(connector->msgs_mutex);
			if (connector->msgs.empty()) return;
			m = connector->msgs.back();
			connector->msgs.pop_back();
		}
		FLAlertLayer::create("", m, "OK")->show();
	}

};

static void cancelEffectSchedulesOnLayer();

void (*func)();
void (*func2)();

enum class GDPlayState {
	Unknown,
	Ready,
	Paused,
	Dead
};

static std::optional<GDPlayState> lastPublishedState;
static GDPlayState s_lastPlayState = GDPlayState::Unknown;

static void resetCcPlaySession() {
	lastPublishedState = std::nullopt;
	s_lastPlayState = GDPlayState::Unknown;
	ccPauseSent = false;
	colorPauseSent = false;
}

static PlayLayer* getActiveLayer() {
	auto pl = PlayLayer::get();
	if (pl) return pl;
	return layer;
}

static PlayerObject* getActivePlayer() {
	auto pl = getActiveLayer();
	if (!pl || !pl->m_player1) return nullptr;
	return pl->m_player1;
}

static void clearEffectState() {
	cancelEffectSchedulesOnLayer();
	delay = -1;
	endid = -1;
	spin = -1;
	colorid = -1;
	dur = 0;
	remainingMs = 0;
	colorRemainingMs = 0;
	ccPauseSent = false;
	colorPauseSent = false;
	effectApplied = false;
	colorm = false;
	currentColorCode.clear();
	autojump = false;
	invert = false;
	scale = 0;
	func = nullptr;
	func2 = nullptr;
	player = nullptr;
	if (label) label->setString("", true);
	if (label2) label2->setString("", true);
}

static const char* playStateName(GDPlayState state) {
	switch (state) {
	case GDPlayState::Ready: return "Ready";
	case GDPlayState::Paused: return "Paused";
	case GDPlayState::Dead: return "Dead";
	default: return "Unknown";
	}
}

static GDPlayState playStateFromLayer(PlayLayer* pl) {
	if (!pl) return GDPlayState::Unknown;
	if (pl->m_isPaused) return GDPlayState::Paused;
	auto p = pl->m_player1;
	if (!p) return GDPlayState::Unknown;
	if (p->m_isDead) return GDPlayState::Dead;
	return GDPlayState::Ready;
}

static GDPlayState queryPlayState() {
	return playStateFromLayer(PlayLayer::get());
}

static std::vector<std::filesystem::path> ccLogFilePaths() {
	// Game folder (next to GeometryDash.exe) is easiest to find; Geode save is backup.
	return {
		dirs::getGameDir() / "crowdcontrol_pause.log",
		dirs::getGeodeDir() / "save" / "crowdcontrol.crowdcontrol" / "crowdcontrol_pause.log",
	};
}

static bool ccWriteLogLine(const std::string& line) {
	bool any = false;
	for (auto const& path : ccLogFilePaths()) {
		std::error_code ec;
		std::filesystem::create_directories(path.parent_path(), ec);
		std::ofstream out(path, std::ios::app);
		if (!out) continue;
		out << line;
		any = true;
		if (g_ccLogPathHint == "no log yet")
			g_ccLogPathHint = path.string();
	}
	g_ccLogWritable = any;
	return any;
}

static void ccLogInit() {
	std::lock_guard<std::mutex> lock(g_ccLogMutex);
	if (g_ccLogInitialized) return;
	g_ccLogInitialized = true;

	std::string header = "Crowd Control pause debug log\n";
	for (auto const& path : ccLogFilePaths())
		header += "path: " + path.string() + "\n";
	header += "\n";

	for (auto const& path : ccLogFilePaths()) {
		std::error_code ec;
		std::filesystem::create_directories(path.parent_path(), ec);
		std::ofstream out(path, std::ios::trunc);
		if (!out) {
			log::warn("Crowd Control: could not open pause log at {}", path.string());
			continue;
		}
		out << header;
		g_ccLogWritable = true;
		g_ccLogPathHint = path.string();
	}
}

static void ccLog(const char* event, PlayLayer* pl, const char* detail) {
	ccLogInit();

	std::string line = event;
	if (detail && detail[0]) {
		line += " ";
		line += detail;
	}
	if (pl) {
		auto p = pl->m_player1;
		line += " | mIsPaused=" + std::to_string(pl->m_isPaused)
			+ " play=" + std::to_string(pl->isGameplayActive())
			+ " actions=" + std::to_string(pl->numberOfRunningActions());
		if (p) {
			line += " dead=" + std::to_string(p->m_isDead)
				+ " inLock=" + std::to_string(p->m_inputsLocked)
				+ " locked=" + std::to_string(p->m_isLocked)
				+ " ctrlOff=" + std::to_string(p->m_controlsDisabled)
				+ " px=" + std::to_string((int)p->getPositionX());
		}
		line += " ccState=" + std::string(playStateName(playStateFromLayer(pl)));
	} else {
		line += " ccState=" + std::string(playStateName(GDPlayState::Unknown));
	}
	line += "\n";

	log::info("[CC pause] {}", line);

	std::lock_guard<std::mutex> lock(g_ccLogMutex);
	ccWriteLogLine(line);
}

static bool effectsShouldFreeze(GDPlayState state) {
	return state == GDPlayState::Paused || state == GDPlayState::Dead;
}

static int ccGameStateValue(GDPlayState state) {
	switch (state) {
	case GDPlayState::Ready: return 1;
	case GDPlayState::Paused: return -7;
	case GDPlayState::Dead: return -12;
	default: return 0;
	}
}

static void ensureCountdownLabels() {
	auto scene = CCDirector::sharedDirector()->getRunningScene();
	if (!scene) return;
	auto winSize = CCDirector::get()->getWinSize();
	if (!label) {
		label = CCLabelBMFont::create("", "bigFont.fnt");
		label->setPosition(winSize.width / 2, winSize.height / 2 + winSize.height / 4);
		scene->addChild(label, 9998);
	}
	if (!label2) {
		label2 = CCLabelBMFont::create("", "bigFont.fnt");
		label2->setPosition(winSize.width / 2, winSize.height / 2);
		label2->setScale(2.0f);
		scene->addChild(label2, 9998);
	}
}

static CCLabelBMFont* findMenuDebugLabel() {
	auto scene = CCDirector::sharedDirector()->getRunningScene();
	if (!scene) return nullptr;
	auto children = scene->getChildren();
	if (!children) return nullptr;
	for (auto child : CCArrayExt<CCNode*>(children)) {
		if (auto lbl = typeinfo_cast<CCLabelBMFont*>(child->getChildByTag(CC_MENU_DEBUG_TAG)))
			return lbl;
		auto sub = child->getChildren();
		if (!sub) continue;
		for (auto nested : CCArrayExt<CCNode*>(sub)) {
			if (auto lbl = typeinfo_cast<CCLabelBMFont*>(nested->getChildByTag(CC_MENU_DEBUG_TAG)))
				return lbl;
		}
	}
	return nullptr;
}

static void updateCcDebugOverlay() {
	if (!CC_SHOW_DEBUG_STATS) return;

	char buf[480];
	const bool connected = connector && connector->IsConnected();
	auto pl = PlayLayer::get();
	const bool mPaused = pl && pl->m_isPaused;
	auto p1 = pl ? pl->m_player1 : nullptr;
	const bool inputsLocked = p1 && p1->m_inputsLocked;
	const bool isLocked = p1 && p1->m_isLocked;
	const bool controlsOff = p1 && p1->m_controlsDisabled;
	const bool isDead = p1 && p1->m_isDead;
	const bool gameplay = pl && pl->isGameplayActive();
	const auto state = queryPlayState();
	const int ccVal = ccGameStateValue(state);

	snprintf(buf, sizeof(buf),
		"[CC] %s | state:%s(%d) mIsPaused:%d\n"
		"dead:%d play:%d inLock:%d locked:%d ctrlOff:%d\n"
		"rem:%dms delay:%d endid:%d ccPause:%d applied:%d\n"
		"chkOff:%d playerOff:%d log:%s",
		connected ? "CONNECTED" : "offline",
		playStateName(state), ccVal,
		mPaused ? 1 : 0,
		isDead ? 1 : 0, gameplay ? 1 : 0,
		inputsLocked ? 1 : 0, isLocked ? 1 : 0, controlsOff ? 1 : 0,
		remainingMs, delay, endid, ccPauseSent ? 1 : 0, effectApplied ? 1 : 0,
		CC_DISABLE_CHECKEFFECT ? 1 : 0, CC_DISABLE_CHECKEFFECT_PLAYER ? 1 : 0,
		g_ccLogWritable ? "OK" : "FAIL");

	// Debug label lives on PlayLayer like the old working countdown labels.
	if (pl) {
		if (auto lbl = typeinfo_cast<CCLabelBMFont*>(pl->getChildByTag(CC_LEVEL_DEBUG_TAG)))
			lbl->setString(buf, true);
	}

	if (!pl) {
		if (auto menuLbl = findMenuDebugLabel()) {
			snprintf(buf, sizeof(buf), "[CC] %s | %s", connected ? "ON" : "OFF", playStateName(state));
			menuLbl->setString(buf, true);
		}
	}
}

static bool isLevelGameplayActive() {
	auto pl = PlayLayer::get();
	return pl && pl->isGameplayActive();
}

static bool gameReadyForEffects() {
	if (!isLevelGameplayActive()) return false;
	return queryPlayState() == GDPlayState::Ready;
}

static void publishGameState() {
	if (!connector || !connector->IsConnected()) return;

	const auto state = queryPlayState();
	const int cc_state = ccGameStateValue(state);
	unsigned request_id = 0;
	const bool requested = connector->PollGameUpdateRequest(request_id);
	const bool changed = !lastPublishedState.has_value() || *lastPublishedState != state;
	if (!requested && !changed) return;

	lastPublishedState = state;
	connector->SendGameUpdate(requested ? request_id : 0, cc_state);
}

static const char* levelEffectCodes[] = {
	"zoomin", "zoomout", "zoomout2", "rotate", "rotate2", "rotate3", "rotate4",
	"rotate5", "rotate6", "spin", "jump", "invis", "reverse", "invert",
	"giant", "tiny", "red", "orange", "yellow", "green", "blue", "purple",
	"pink", "white", "black", nullptr
};

static void updateLevelEffectAvailability() {
	if (!connector || !connector->IsConnected()) return;

	const auto state = queryPlayState();
	const bool gameplayActive = isLevelGameplayActive();
	const bool selectable = gameplayActive && state == GDPlayState::Ready;
	if (selectable == levelEffectsSelectable) return;

	levelEffectsSelectable = selectable;
	const int visStatus = selectable ? STATUS_SELECTABLE : STATUS_NOTSELECTABLE;
	for (int i = 0; levelEffectCodes[i]; ++i)
		connector->RespondVis(levelEffectCodes[i], visStatus, "");
}

void ZoomIn() {
	if (!layer) return;
	layer->setScale(2.0f);
}

void ZoomOut() {
	if (!layer) return;
	layer->setScale(0.5f);
}

void ZoomOut2() {
	if (!layer) return;
	layer->setScale(0.25f);
}

void ResetZoom() {
	if (!layer) return;
	layer->setScale(1.0f);
}

void ResetRotate() {
	if (!layer) return;
	layer->setRotationX(0.0f);
	layer->setRotationY(0.0f);
}


void Rotate() {
	if (!layer) return;
	layer->setRotationX(30.0f);
}

void Rotate2() {
	if (!layer) return;
	layer->setRotationX(60.0f);
}

void Rotate3() {
	if (!layer) return;
	layer->setRotationY(30.0f);
}

void Rotate4() {
	if (!layer) return;
	layer->setRotationY(60.0f);
}

void Rotate5() {
	if (!layer) return;
	layer->setRotationX(45.0f);
	layer->setRotationY(45.0f);
}

void Rotate6() {
	if (!layer) return;
	layer->setRotationX(180.0f);
	layer->setRotationY(180.0f);
}

void Spin() {
	spin = 0.0f;
}

void ResetMode() {
	auto p = getActivePlayer();
	if (!p) return;
	p->toggleBirdMode(false, false);
}

void ResetVis() {
	auto p = getActivePlayer();
	if (!p) return;
	player = p;
	p->toggleVisibility(true);
}

void Invis() {
	auto p = getActivePlayer();
	if (!p) return;
	player = p;
	p->toggleVisibility(false);
}

void Giant() {
	scale = 3.0f;
}

void Tiny() {
	scale = 0.4f;
}

void ResetScale() {
	auto p = getActivePlayer();
	if (!p) return;
	player = p;
	p->setScale(1.0f);
	scale = 0;
}

void Red() {
	color = { 255,0,0 };
	colorm = true;
}

void Orange() {
	color = { 255,128,64 };
	colorm = true;
}

void Yellow() {
	color = { 255,255,0 };
	colorm = true;
}

void Green() {
	color = { 0,255,0 };
	colorm = true;
}

void Blue() {
	color = { 0,0,255 };
	colorm = true;
}

void Purple() {
	color = { 190,0,190 };
	colorm = true;
}

void Pink() {

	color = { 255,164,190 };
	colorm = true;
}

void Black() {
	color = { 0,0,0 };
	colorm = true;
}

void White() {
	color = { 255,255,255 };
	colorm = true;
}

void Reverse() {
	auto p = getActivePlayer();
	if (!p) return;
	player = p;
	p->doReversePlayer(true);
}

void ResetReverse() {
	auto p = getActivePlayer();
	if (!p) return;
	player = p;
	p->doReversePlayer(false);
}

void Invert() {
	invert = true;
}

void ResetInvert() {
	invert = false;
}

void Bird() {
	auto p = getActivePlayer();
	if (!p) return;
	player = p;
	p->toggleBirdMode(true, false);
}

#include <Geode/modify/PlayerObject.hpp>
class $modify(PT, PlayerObject) {
	void pushButton(PlayerButton po) {
		depth++;
		if (depth % 2 == 1 && invert)
			PlayerObject::releaseButton(po);
		else
			PlayerObject::pushButton(po);
	}

	void releaseButton(PlayerButton po) {
		depth++;
		if (depth % 2 == 0 || !invert)
			PlayerObject::releaseButton(po);
		else
			PlayerObject::pushButton(po);
	}
};

static bool isGamePaused() {
	return queryPlayState() == GDPlayState::Paused;
}

// Send the end-of-effect status for the active timed effect and revert it.
// Only reverts if the effect actually got applied (countdown finished) — calling
// resets like doReversePlayer(false) on a player that was never reversed is
// exactly the kind of thing that corrupts PlayerObject state.
static void finishTimedEffect() {
	if (effectApplied && func2) func2();
	if (connector && endid >= 0)
		connector->RespondTimed(endid, STATUS_STOP, "", 0);
	endid = -1;
	remainingMs = 0;
	dur = 0;
	ccPauseSent = false;
	effectApplied = false;
	func = nullptr;
	func2 = nullptr;
}

static void finishColorEffect() {
	if (connector && colorid >= 0)
		connector->RespondTimed(colorid, STATUS_STOP, "", 0);
	colorm = false;
	currentColorCode.clear();
	colorid = -1;
	colorRemainingMs = 0;
	colorPauseSent = false;
}

static void abandonTimedEffectsOnLevelExit() {
	ccLog("level_exit_complete_effects", PlayLayer::get(), "");
	if (connector) {
		if (endid >= 0) {
			if (ccPauseSent)
				connector->RespondTimed(endid, STATUS_RESUME, "level exited", 0);
			connector->RespondTimed(endid, STATUS_STOP, "level exited", 0);
		}
		if (colorid >= 0) {
			if (colorPauseSent)
				connector->RespondTimed(colorid, STATUS_RESUME, "level exited", 0);
			connector->RespondTimed(colorid, STATUS_STOP, "level exited", 0);
		}
	}

	delay = -1;
	endid = -1;
	colorid = -1;
	remainingMs = 0;
	colorRemainingMs = 0;
	ccPauseSent = false;
	colorPauseSent = false;
	effectApplied = false;
	colorm = false;
	currentColorCode.clear();
	func = nullptr;
	func2 = nullptr;
}

static void performFullClearStateImmediate() {
	if (layer) {
		// Layer-only transforms are always safe to reset.
		ResetZoom();
		ResetRotate();
		// Player-touching resets only if the corresponding effect was applied.
		if (effectApplied && func2) func2();
		if (scale > 0) ResetScale();
	}
	ResetInvert();
	clearEffectState();
	if (connector) connector->ClearAllCommands();
}

static void performFullClearState() {
	if (isGamePaused()) return;
	performFullClearStateImmediate();
}

static void handleStop(const std::shared_ptr<Command>& cmd) {
	if (!connector) return;

	if (isGamePaused()) {
		connector->Respond((int)cmd->id, STATUS_SUCCESS, "");
		connector->CompleteCommand(cmd->id);
		return;
	}

	if (cmd->command.empty() || cmd->command == "stopall") {
		performFullClearStateImmediate();
	} else if (endid == (int)cmd->id) {
		if (effectApplied && func2) func2();
		clearEffectState();
	} else if (colorid == (int)cmd->id) {
		colorm = false;
		currentColorCode.clear();
		colorid = -1;
		colorRemainingMs = 0;
		colorPauseSent = false;
	}

	connector->Respond((int)cmd->id, STATUS_SUCCESS, "");
	connector->CompleteCommand(cmd->id);
}

// Notify Crowd Control that timed effects are paused/resumed so the overlay
// timers stop and the extension shows the right status.
static void syncTimedEffectsToCC(bool gamePaused) {
	if (!connector || !connector->IsConnected()) return;

	if (gamePaused) {
		if (endid >= 0 && !ccPauseSent) {
			connector->RespondTimed(endid, STATUS_PAUSE, "", remainingMs);
			ccPauseSent = true;
		}
		if (colorid >= 0 && colorm && !colorPauseSent) {
			connector->RespondTimed(colorid, STATUS_PAUSE, "", colorRemainingMs);
			colorPauseSent = true;
		}
		return;
	}

	if (endid >= 0 && ccPauseSent) {
		connector->RespondTimed(endid, STATUS_RESUME, "", remainingMs);
		ccPauseSent = false;
	}
	if (colorid >= 0 && colorm && colorPauseSent) {
		connector->RespondTimed(colorid, STATUS_RESUME, "", colorRemainingMs);
		colorPauseSent = false;
	}
}

#include <Geode/modify/PlayLayer.hpp>
class $modify(T, PlayLayer) {
	// NOTE: Do NOT hook pauseGame/resume. The old working build never touched
	// them; overriding resume() and calling resumeSchedulerAndActions() on top
	// of vanilla's resume corrupts GD's pause state and freezes the player on
	// unpause. Vanilla pause/resume must stay completely untouched.

	void cancelCountdownSchedules() {
		this->unschedule(schedule_selector(T::tick));
		this->unschedule(schedule_selector(T::tickb));
	}

	void cancelEffectSchedules() {
		cancelCountdownSchedules();
		this->unschedule(schedule_selector(T::end));
		this->unschedule(schedule_selector(T::resetColorTimer));
	}

	void updateCountdownLabel() {
		if (!label2 || delay <= 0) return;

		char temp[8];
		itoa(delay, temp, 10);
		label2->setString(temp, true);

		if (delay >= 3) label2->setColor({ 0, 200, 0 });
		else if (delay == 2) label2->setColor({ 200, 200, 0 });
		else if (delay == 1) label2->setColor({ 200, 0, 0 });
	}

	// Per-frame gameplay cosmetics only. All Crowd Control plumbing (state
	// reporting and command processing) lives here like the old working build,
	// so vanilla pause/resume naturally suspends and resumes it with PlayLayer.
	void checkeffect(float dt) {
		if (queryPlayState() != GDPlayState::Ready) return;

		syncAfterVanillaResume();
		updateCcDebugOverlay();

		if (!CC_DISABLE_CHECKEFFECT_PLAYER) {
			if (autojump) {
				auto p = getActivePlayer();
				if (p && p->m_isOnGround && !p->m_isDead) {
					p->pushButton(PlayerButton::Jump);
					p->releaseButton(PlayerButton::Jump);
					autojump = false;
				}
			}

			if (colorm) {
				auto p = getActivePlayer();
				if (p) {
					player = p;
					p->setColor(color);
				}
			}
		}

		if (spin >= 0.0f && layer) {
			spin += 160.0f * dt;
			if (spin >= 360) {
				spin = -1.0f;
				layer->setRotationX(0);
				layer->setRotationY(0);
			}
			else {
				layer->setRotationX(spin);
				layer->setRotationY(spin);
			}
		}

		const int elapsedMs = (int)(dt * 1000.0f);
		if (endid >= 0 && delay < 0 && remainingMs > 0)
			remainingMs = std::max(0, remainingMs - elapsedMs);
		if (colorid >= 0 && colorm && colorRemainingMs > 0)
			colorRemainingMs = std::max(0, colorRemainingMs - elapsedMs);

		if (!CC_DISABLE_CHECKEFFECT_PLAYER && scale > 0) {
			auto p = getActivePlayer();
			if (p) {
				player = p;
				p->setScale(scale);
			}
		}

		if (!connector || !connector->IsConnected()) return;

		static float networkAccum = 0.0f;
		networkAccum += dt;
		if (networkAccum < 0.1f) return;
		networkAccum = 0.0f;

		retry++;
		if (retry >= 100) {
			retry = 0;
			CrowdControlReconnect();
		}

		publishGameState();
		updateLevelEffectAvailability();
		processNextCommand();
	}

	void startColorEffect(int id, const char* code, int len, void (*colorFn)()) {
		if (colorm && currentColorCode == code) {
			connector->RespondTimed(id, STATUS_RETRY, "", 0);
			connector->CompleteCommand(id);
			return;
		}
		if (delay >= 0 || endid >= 0) {
			connector->RespondTimed(id, STATUS_RETRY, "", 0);
			connector->CompleteCommand(id);
			return;
		}
		if (colorm) {
			this->unschedule(schedule_selector(T::resetColorTimer));
			finishColorEffect();
		}

		colorFn();
		currentColorCode = code;
		colorid = id;
		if (len <= 0) len = 30;
		colorRemainingMs = len * 1000;
		colorPauseSent = false;
		connector->RespondTimed(id, STATUS_SUCCESS, "", colorRemainingMs);
		connector->CompleteCommand(id);
		this->scheduleOnce(schedule_selector(T::resetColorTimer), static_cast<float>(len));
	}

	void syncAfterVanillaResume() {
		if (!connector || !connector->IsConnected()) return;
		if (ccPauseSent || colorPauseSent) {
			syncTimedEffectsToCC(false);
			publishGameState();
			updateLevelEffectAvailability();
			ccLog("resume_sync", this, "");
		}
	}

	void resetColorTimer(float dt) {
		finishColorEffect();
	}

	void dispatchEffect(const std::shared_ptr<Command>& command) {
		const char* code = command->command.c_str();
		int id = (int)command->id;
		int len = command->duration / 1000;

		if (!strcmp(code, "zoomin")) {
				startTimer(id, "Close Up Cam In...", 3, len, ZoomIn, ResetZoom);
				return;
			}
			if (!strcmp(code, "zoomout")) {
				startTimer(id, "Far Cam In...", 3, len, ZoomOut, ResetZoom);
				return;
			}
			if (!strcmp(code, "zoomout2")) {
				startTimer(id, "Ultra Far Cam In...", 3, len, ZoomOut2, ResetZoom);
				return;
			}
			if (!strcmp(code, "rotate")) {
				startTimer(id, "Skew Camera In...", 3, len, Rotate, ResetRotate);
				return;
			}
			if (!strcmp(code, "rotate2")) {
				startTimer(id, "Big Skew Camera In...", 3, len, Rotate2, ResetRotate);
				return;
			}
			if (!strcmp(code, "rotate3")) {
				startTimer(id, "Tilt Camera In...", 3, len, Rotate3, ResetRotate);
				return;
			}
			if (!strcmp(code, "rotate4")) {
				startTimer(id, "Big Tilt Camera In...", 3, len, Rotate4, ResetRotate);
				return;
			}
			if (!strcmp(code, "rotate5")) {
				startTimer(id, "Rotate Camera In...", 3, len, Rotate5, ResetRotate);
				return;
			}
			if (!strcmp(code, "rotate6")) {
				startTimer(id, "Flip Camera In...", 3, len, Rotate6, ResetRotate);
				return;
			}
			if (!strcmp(code, "spin")) {
				startTimer(id, "Spin Camera In...", 3, len, Spin, 0);
				return;
			}
			if (!strcmp(code, "invis")) {
				startTimer(id, "Invisible In...", 3, 5, Invis, ResetVis);
				return;
			}

			if (!strcmp(code, "giant")) {
				startTimer(id, "Giant Mode In...", 3, len, Giant, ResetScale);
				return;
			}

			if (!strcmp(code, "tiny")) {
				startTimer(id, "Tiny Mode In...", 3, len, Tiny, ResetScale);
				return;
			}

			if (!strcmp(code, "bird")) {
				startTimer(id, "Bird Mode In...", 3, len, Bird, ResetMode);
				return;
			}

			if (!strcmp(code, "reverse")) {
				startTimer(id, "Reverse In...", 3, len, Reverse, ResetReverse);
				return;
			}

			if (!strcmp(code, "invert")) {
				startTimer(id, "Invert Controls In...", 3, len, Invert, ResetInvert);
				return;
			}

			if (!strcmp(code, "jump")) {
				if (autojump) {
					connector->RespondTimed(id, STATUS_RETRY, "", 0);
					connector->CompleteCommand(id);
					return;
				}
				autojump = true;
				connector->RespondTimed(id, STATUS_SUCCESS, "", 0);
				connector->CompleteCommand(id);
				return;
			}

			if (!strcmp(code, "red")) {
				startColorEffect(id, code, len, Red);
				return;
			}
			if (!strcmp(code, "orange")) {
				startColorEffect(id, code, len, Orange);
				return;
			}
			if (!strcmp(code, "yellow")) {
				startColorEffect(id, code, len, Yellow);
				return;
			}
			if (!strcmp(code, "green")) {
				startColorEffect(id, code, len, Green);
				return;
			}
			if (!strcmp(code, "blue")) {
				startColorEffect(id, code, len, Blue);
				return;
			}
			if (!strcmp(code, "purple")) {
				startColorEffect(id, code, len, Purple);
				return;
			}
			if (!strcmp(code, "pink")) {
				startColorEffect(id, code, len, Pink);
				return;
			}
			if (!strcmp(code, "black")) {
				startColorEffect(id, code, len, Black);
				return;
			}
			if (!strcmp(code, "white")) {
				startColorEffect(id, code, len, White);
				return;
			}

		connector->RespondTimed(id, STATUS_FAILURE, "", 0);
		connector->CompleteCommand(id);
	}

	void startTimer(int id, const char* text, int time, int len, void (*effect)(), void (*end)()) {
		ensureCountdownLabels();
		if (!label || !label2) {
			connector->RespondTimed(id, STATUS_FAILURE, "", 0);
			connector->CompleteCommand(id);
			return;
		}

		if (delay >= 0 || endid >= 0) {
			connector->RespondTimed(id, STATUS_RETRY, "", 0);
			connector->CompleteCommand(id);
			return;
		}

		cancelEffectSchedules();

		endid = id;
		delay = time;
		dur = len;
		remainingMs = (time + len) * 1000;
		ccPauseSent = false;
		effectApplied = false;
		func = effect;
		func2 = end;
		label->setString(text, true);
		char temp[4];
		itoa(delay, temp, 10);
		label2->setString(temp, true);

		if (delay >= 3) {
			label2->setColor({ 0,200,0 });
		}
		if (delay == 2)label2->setColor({ 200,200,0 });
		if (delay == 1)label2->setColor({ 200,0,0 });

		connector->RespondTimed(id, STATUS_SUCCESS, "", remainingMs);
		connector->CompleteCommand(id);
		this->scheduleOnce(schedule_selector(T::tick), 1.0);
	}

	void tick(float dt) {
		if (!label || !label2) return;

		if (delay <= 0) {
			cancelCountdownSchedules();
			return;
		}

		if (queryPlayState() != GDPlayState::Ready) {
			this->scheduleOnce(schedule_selector(T::tick), 1.0f);
			return;
		}

		delay--;
		if (remainingMs > 0) remainingMs -= 1000;

		if (delay <= 0) {
			delay = -1;
			cancelCountdownSchedules();
			label->setString("", true);
			label2->setString("", true);

			if (func) {
				func();
				effectApplied = true;
			}
			if (dur > 0) {
				remainingMs = dur * 1000;
				this->scheduleOnce(schedule_selector(T::end), static_cast<float>(dur));
			} else if (endid >= 0) {
				endid = -1;
				remainingMs = 0;
				ccPauseSent = false;
				effectApplied = false;
				func2 = nullptr;
			}
			func = nullptr;
			return;
		}

		updateCountdownLabel();
		this->scheduleOnce(schedule_selector(T::tickb), 1.0f);
	}

	void tickb(float dt) {
		if (!label || !label2) return;

		if (delay <= 0) {
			cancelCountdownSchedules();
			return;
		}

		if (queryPlayState() != GDPlayState::Ready) {
			this->scheduleOnce(schedule_selector(T::tickb), 1.0f);
			return;
		}

		delay--;
		if (remainingMs > 0) remainingMs -= 1000;

		if (delay <= 0) {
			delay = -1;
			cancelCountdownSchedules();
			label->setString("", true);
			label2->setString("", true);

			if (func) {
				func();
				effectApplied = true;
			}
			if (dur > 0) {
				remainingMs = dur * 1000;
				this->scheduleOnce(schedule_selector(T::end), static_cast<float>(dur));
			} else if (endid >= 0) {
				endid = -1;
				remainingMs = 0;
				ccPauseSent = false;
				effectApplied = false;
				func2 = nullptr;
			}
			func = nullptr;
			return;
		}

		updateCountdownLabel();
		this->scheduleOnce(schedule_selector(T::tick), 1.0f);
	}

	void end(float dt) {
		finishTimedEffect();
	}

	bool init(GJGameLevel * level, bool useReplay, bool dontCreateObjects) {
		if (!PlayLayer::init(level, useReplay, dontCreateObjects))
			return false;

		auto winSize = CCDirector::get()->getWinSize();

		label = CCLabelBMFont::create("", "bigFont.fnt");
		label->setPosition(winSize.width / 2, winSize.height / 2 + winSize.height / 4);
		this->addChild(label);

		label2 = CCLabelBMFont::create("", "bigFont.fnt");
		label2->setPosition(winSize.width / 2, winSize.height / 2);
		label2->setScale(2.0f);
		this->addChild(label2);

		if (CC_SHOW_DEBUG_STATS) {
			auto dbgLbl = CCLabelBMFont::create("[CC] in level...", "chatFont.fnt");
			dbgLbl->setTag(CC_LEVEL_DEBUG_TAG);
			dbgLbl->setScale(0.55f);
			dbgLbl->setAnchorPoint({ 0.0f, 1.0f });
			dbgLbl->setPosition(10.0f, winSize.height - 10.0f);
			dbgLbl->setColor({ 140, 235, 140 });
			this->addChild(dbgLbl, 1000000);
		}

		if (!CC_DISABLE_CHECKEFFECT)
			this->schedule(schedule_selector(T::checkeffect), 1.0f / 60.0f);

		layer = this;
		ccLog("level_init", this, "");

		return true;
	}

	void onQuit() {
		abandonTimedEffectsOnLevelExit();
		PlayLayer::onQuit();
	}

	void onExit() {
		// Opening the pause layer can transition nodes; do not mark effects
		// complete while vanilla still considers the level paused.
		if (!this->m_isPaused)
			abandonTimedEffectsOnLevelExit();
		if (layer == this)
			layer = nullptr;
		label = nullptr;
		label2 = nullptr;
		player = nullptr;
		levelEffectsSelectable = false;
		lastPublishedState = std::nullopt;
		PlayLayer::onExit();
	}

	void checkmsg(float dt) {
		if (!connector) return;

		std::string m;
		{
			std::lock_guard guard(connector->msgs_mutex);
			if (connector->msgs.empty()) return;
			m = connector->msgs.back();
			connector->msgs.pop_back();
		}
			FLAlertLayer::create("", m, "OK")->show();
	}
};

#include <Geode/modify/PauseLayer.hpp>
class $modify(CCPauseEffectStatusHook, PauseLayer) {
	void customSetup() {
		PauseLayer::customSetup();
		publishGameState();
		updateLevelEffectAvailability();
		syncTimedEffectsToCC(true);
		updateCcDebugOverlay();
		ccLog("pause_status", PlayLayer::get(), "");
	}

	void onResume(CCObject* sender) {
		// Status-only hook: do not touch PlayLayer scheduling/actions/player state.
		syncTimedEffectsToCC(false);
		ccLog("resume_status", PlayLayer::get(), "");
		PauseLayer::onResume(sender);
		publishGameState();
		updateLevelEffectAvailability();
	}
};

static void cancelEffectSchedulesOnLayer() {
	if (!layer) return;
	static_cast<T*>(layer)->cancelEffectSchedules();
}

static void processNextCommand() {
	auto command = connector->PopItem();
	if (!command) return;

	int id = (int)command->id;
	const char* code = command->command.c_str();

	if (command->type == 2) {
		handleStop(command);
		return;
	}

	if (!strcmp(code, "clearState") || !strcmp(code, "stopall")) {
		performFullClearState();
		connector->Respond(id, STATUS_SUCCESS, "");
		connector->CompleteCommand(id);
		return;
	}

	if (!gameReadyForEffects()) {
		const char* retryMsg = isLevelGameplayActive() ? "game paused" : "level not started";
		connector->Respond(id, STATUS_RETRY, retryMsg);
		connector->CompleteCommand(id);
		return;
	}

	auto pl = PlayLayer::get();
	if (!pl) {
		connector->Respond(id, STATUS_RETRY, "not in level");
		connector->CompleteCommand(id);
		return;
	}

	static_cast<T*>(pl)->dispatchEffect(command);
}

#include <Geode/modify/CCDirector.hpp>
class $modify(CCDirectorHook, CCDirector) {
	void purgeDirector() {
		shutdownCrowdControl();
		CCDirector::purgeDirector();
	}
};