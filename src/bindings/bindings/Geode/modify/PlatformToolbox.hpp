#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlatformToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_activateGameCenter
		#define GEODE_STATICS_activateGameCenter
		GEODE_AS_STATIC_FUNCTION(activateGameCenter) 
	#endif

	#ifndef GEODE_STATICS_copyToClipboard
		#define GEODE_STATICS_copyToClipboard
		GEODE_AS_STATIC_FUNCTION(copyToClipboard) 
	#endif

	#ifndef GEODE_STATICS_doesFileExist
		#define GEODE_STATICS_doesFileExist
		GEODE_AS_STATIC_FUNCTION(doesFileExist) 
	#endif

	#ifndef GEODE_STATICS_downloadAndSavePromoImage
		#define GEODE_STATICS_downloadAndSavePromoImage
		GEODE_AS_STATIC_FUNCTION(downloadAndSavePromoImage) 
	#endif

	#ifndef GEODE_STATICS_gameDidSave
		#define GEODE_STATICS_gameDidSave
		GEODE_AS_STATIC_FUNCTION(gameDidSave) 
	#endif

	#ifndef GEODE_STATICS_getDeviceRefreshRate
		#define GEODE_STATICS_getDeviceRefreshRate
		GEODE_AS_STATIC_FUNCTION(getDeviceRefreshRate) 
	#endif

	#ifndef GEODE_STATICS_getDisplaySize
		#define GEODE_STATICS_getDisplaySize
		GEODE_AS_STATIC_FUNCTION(getDisplaySize) 
	#endif

	#ifndef GEODE_STATICS_getRawPath
		#define GEODE_STATICS_getRawPath
		GEODE_AS_STATIC_FUNCTION(getRawPath) 
	#endif

	#ifndef GEODE_STATICS_getUniqueUserID
		#define GEODE_STATICS_getUniqueUserID
		GEODE_AS_STATIC_FUNCTION(getUniqueUserID) 
	#endif

	#ifndef GEODE_STATICS_getUserID
		#define GEODE_STATICS_getUserID
		GEODE_AS_STATIC_FUNCTION(getUserID) 
	#endif

	#ifndef GEODE_STATICS_hideCursor
		#define GEODE_STATICS_hideCursor
		GEODE_AS_STATIC_FUNCTION(hideCursor) 
	#endif

	#ifndef GEODE_STATICS_isHD
		#define GEODE_STATICS_isHD
		GEODE_AS_STATIC_FUNCTION(isHD) 
	#endif

	#ifndef GEODE_STATICS_isLocalPlayerAuthenticated
		#define GEODE_STATICS_isLocalPlayerAuthenticated
		GEODE_AS_STATIC_FUNCTION(isLocalPlayerAuthenticated) 
	#endif

	#ifndef GEODE_STATICS_isLowMemoryDevice
		#define GEODE_STATICS_isLowMemoryDevice
		GEODE_AS_STATIC_FUNCTION(isLowMemoryDevice) 
	#endif

	#ifndef GEODE_STATICS_isNetworkAvailable
		#define GEODE_STATICS_isNetworkAvailable
		GEODE_AS_STATIC_FUNCTION(isNetworkAvailable) 
	#endif

	#ifndef GEODE_STATICS_isSignedInGooglePlay
		#define GEODE_STATICS_isSignedInGooglePlay
		GEODE_AS_STATIC_FUNCTION(isSignedInGooglePlay) 
	#endif

	#ifndef GEODE_STATICS_loadAndDecryptFileToString
		#define GEODE_STATICS_loadAndDecryptFileToString
		GEODE_AS_STATIC_FUNCTION(loadAndDecryptFileToString) 
	#endif

	#ifndef GEODE_STATICS_logEvent
		#define GEODE_STATICS_logEvent
		GEODE_AS_STATIC_FUNCTION(logEvent) 
	#endif

	#ifndef GEODE_STATICS_onGameLaunch
		#define GEODE_STATICS_onGameLaunch
		GEODE_AS_STATIC_FUNCTION(onGameLaunch) 
	#endif

	#ifndef GEODE_STATICS_onNativePause
		#define GEODE_STATICS_onNativePause
		GEODE_AS_STATIC_FUNCTION(onNativePause) 
	#endif

	#ifndef GEODE_STATICS_onNativeResume
		#define GEODE_STATICS_onNativeResume
		GEODE_AS_STATIC_FUNCTION(onNativeResume) 
	#endif

	#ifndef GEODE_STATICS_onToggleKeyboard
		#define GEODE_STATICS_onToggleKeyboard
		GEODE_AS_STATIC_FUNCTION(onToggleKeyboard) 
	#endif

	#ifndef GEODE_STATICS_openAppPage
		#define GEODE_STATICS_openAppPage
		GEODE_AS_STATIC_FUNCTION(openAppPage) 
	#endif

	#ifndef GEODE_STATICS_platformShutdown
		#define GEODE_STATICS_platformShutdown
		GEODE_AS_STATIC_FUNCTION(platformShutdown) 
	#endif

	#ifndef GEODE_STATICS_refreshWindow
		#define GEODE_STATICS_refreshWindow
		GEODE_AS_STATIC_FUNCTION(refreshWindow) 
	#endif

	#ifndef GEODE_STATICS_reportAchievementWithID
		#define GEODE_STATICS_reportAchievementWithID
		GEODE_AS_STATIC_FUNCTION(reportAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_reportLoadingFinished
		#define GEODE_STATICS_reportLoadingFinished
		GEODE_AS_STATIC_FUNCTION(reportLoadingFinished) 
	#endif

	#ifndef GEODE_STATICS_resizeWindow
		#define GEODE_STATICS_resizeWindow
		GEODE_AS_STATIC_FUNCTION(resizeWindow) 
	#endif

	#ifndef GEODE_STATICS_saveAndEncryptStringToFile
		#define GEODE_STATICS_saveAndEncryptStringToFile
		GEODE_AS_STATIC_FUNCTION(saveAndEncryptStringToFile) 
	#endif

	#ifndef GEODE_STATICS_sendMail
		#define GEODE_STATICS_sendMail
		GEODE_AS_STATIC_FUNCTION(sendMail) 
	#endif

	#ifndef GEODE_STATICS_setBlockBackButton
		#define GEODE_STATICS_setBlockBackButton
		GEODE_AS_STATIC_FUNCTION(setBlockBackButton) 
	#endif

	#ifndef GEODE_STATICS_setKeyboardState
		#define GEODE_STATICS_setKeyboardState
		GEODE_AS_STATIC_FUNCTION(setKeyboardState) 
	#endif

	#ifndef GEODE_STATICS_shouldResumeSound
		#define GEODE_STATICS_shouldResumeSound
		GEODE_AS_STATIC_FUNCTION(shouldResumeSound) 
	#endif

	#ifndef GEODE_STATICS_showAchievements
		#define GEODE_STATICS_showAchievements
		GEODE_AS_STATIC_FUNCTION(showAchievements) 
	#endif

	#ifndef GEODE_STATICS_showCursor
		#define GEODE_STATICS_showCursor
		GEODE_AS_STATIC_FUNCTION(showCursor) 
	#endif

	#ifndef GEODE_STATICS_signInGooglePlay
		#define GEODE_STATICS_signInGooglePlay
		GEODE_AS_STATIC_FUNCTION(signInGooglePlay) 
	#endif

	#ifndef GEODE_STATICS_signOutGooglePlay
		#define GEODE_STATICS_signOutGooglePlay
		GEODE_AS_STATIC_FUNCTION(signOutGooglePlay) 
	#endif

	#ifndef GEODE_STATICS_spriteFromSavedFile
		#define GEODE_STATICS_spriteFromSavedFile
		GEODE_AS_STATIC_FUNCTION(spriteFromSavedFile) 
	#endif

	#ifndef GEODE_STATICS_toggleCallGLFinish
		#define GEODE_STATICS_toggleCallGLFinish
		GEODE_AS_STATIC_FUNCTION(toggleCallGLFinish) 
	#endif

	#ifndef GEODE_STATICS_toggleCPUSleepMode
		#define GEODE_STATICS_toggleCPUSleepMode
		GEODE_AS_STATIC_FUNCTION(toggleCPUSleepMode) 
	#endif

	#ifndef GEODE_STATICS_toggleForceTimer
		#define GEODE_STATICS_toggleForceTimer
		GEODE_AS_STATIC_FUNCTION(toggleForceTimer) 
	#endif

	#ifndef GEODE_STATICS_toggleFullScreen
		#define GEODE_STATICS_toggleFullScreen
		GEODE_AS_STATIC_FUNCTION(toggleFullScreen) 
	#endif

	#ifndef GEODE_STATICS_toggleLockCursor
		#define GEODE_STATICS_toggleLockCursor
		GEODE_AS_STATIC_FUNCTION(toggleLockCursor) 
	#endif

	#ifndef GEODE_STATICS_toggleMouseControl
		#define GEODE_STATICS_toggleMouseControl
		GEODE_AS_STATIC_FUNCTION(toggleMouseControl) 
	#endif

	#ifndef GEODE_STATICS_toggleSmoothFix
		#define GEODE_STATICS_toggleSmoothFix
		GEODE_AS_STATIC_FUNCTION(toggleSmoothFix) 
	#endif

	#ifndef GEODE_STATICS_toggleVerticalSync
		#define GEODE_STATICS_toggleVerticalSync
		GEODE_AS_STATIC_FUNCTION(toggleVerticalSync) 
	#endif

	#ifndef GEODE_STATICS_tryShowRateDialog
		#define GEODE_STATICS_tryShowRateDialog
		GEODE_AS_STATIC_FUNCTION(tryShowRateDialog) 
	#endif

	#ifndef GEODE_STATICS_updateMouseControl
		#define GEODE_STATICS_updateMouseControl
		GEODE_AS_STATIC_FUNCTION(updateMouseControl) 
	#endif

	#ifndef GEODE_STATICS_updateWindowedSize
		#define GEODE_STATICS_updateWindowedSize
		GEODE_AS_STATIC_FUNCTION(updateWindowedSize) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlatformToolbox> : ModifyBase<ModifyDerive<Der, PlatformToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlatformToolbox>>;
		using ModifyBase<ModifyDerive<Der, PlatformToolbox>>::ModifyBase;
		using Base = PlatformToolbox;
        using Derived = Der;
		void apply() override {

		}
	};
}
