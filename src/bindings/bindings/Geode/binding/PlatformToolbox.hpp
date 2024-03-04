#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlatformToolbox {
public:
    static constexpr auto CLASS_NAME = "PlatformToolbox";
    
private:
    [[deprecated("PlatformToolbox::activateGameCenter not implemented")]]
    /**
     */
    static TodoReturn activateGameCenter();
public:
    
private:
    [[deprecated("PlatformToolbox::copyToClipboard not implemented")]]
    /**
     */
    static TodoReturn copyToClipboard(gd::string p0);
public:
    
private:
    [[deprecated("PlatformToolbox::doesFileExist not implemented")]]
    /**
     */
    static TodoReturn doesFileExist(gd::string p0);
public:
    
private:
    [[deprecated("PlatformToolbox::downloadAndSavePromoImage not implemented")]]
    /**
     */
    static TodoReturn downloadAndSavePromoImage(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("PlatformToolbox::gameDidSave not implemented")]]
    /**
     */
    static TodoReturn gameDidSave();
public:
    
private:
    [[deprecated("PlatformToolbox::getDeviceRefreshRate not implemented")]]
    /**
     */
    static TodoReturn getDeviceRefreshRate();
public:
    
private:
    [[deprecated("PlatformToolbox::getDisplaySize not implemented")]]
    /**
     */
    static TodoReturn getDisplaySize();
public:
    
private:
    [[deprecated("PlatformToolbox::getRawPath not implemented")]]
    /**
     */
    static TodoReturn getRawPath(char const* p0);
public:
    
private:
    [[deprecated("PlatformToolbox::getUniqueUserID not implemented")]]
    /**
     */
    static TodoReturn getUniqueUserID();
public:
    
private:
    [[deprecated("PlatformToolbox::getUserID not implemented")]]
    /**
     */
    static TodoReturn getUserID();
public:
    
private:
    [[deprecated("PlatformToolbox::hideCursor not implemented")]]
    /**
     */
    static TodoReturn hideCursor();
public:

    /**
     * @note[short] Out of line
     */
    static bool isControllerConnected();
    
private:
    [[deprecated("PlatformToolbox::isHD not implemented")]]
    /**
     */
    static bool isHD();
public:
    
private:
    [[deprecated("PlatformToolbox::isLocalPlayerAuthenticated not implemented")]]
    /**
     */
    static bool isLocalPlayerAuthenticated();
public:
    
private:
    [[deprecated("PlatformToolbox::isLowMemoryDevice not implemented")]]
    /**
     */
    static bool isLowMemoryDevice();
public:
    
private:
    [[deprecated("PlatformToolbox::isNetworkAvailable not implemented")]]
    /**
     */
    static bool isNetworkAvailable();
public:
    
private:
    [[deprecated("PlatformToolbox::isSignedInGooglePlay not implemented")]]
    /**
     */
    static bool isSignedInGooglePlay();
public:
    
private:
    [[deprecated("PlatformToolbox::loadAndDecryptFileToString not implemented")]]
    /**
     */
    static TodoReturn loadAndDecryptFileToString(char const* p0, char const* p1);
public:
    
private:
    [[deprecated("PlatformToolbox::logEvent not implemented")]]
    /**
     */
    static TodoReturn logEvent(char const* p0);
public:
    
private:
    [[deprecated("PlatformToolbox::onGameLaunch not implemented")]]
    /**
     */
    static TodoReturn onGameLaunch();
public:
    
private:
    [[deprecated("PlatformToolbox::onNativePause not implemented")]]
    /**
     */
    static TodoReturn onNativePause();
public:
    
private:
    [[deprecated("PlatformToolbox::onNativeResume not implemented")]]
    /**
     */
    static TodoReturn onNativeResume();
public:
    
private:
    [[deprecated("PlatformToolbox::onToggleKeyboard not implemented")]]
    /**
     */
    static TodoReturn onToggleKeyboard();
public:
    
private:
    [[deprecated("PlatformToolbox::openAppPage not implemented")]]
    /**
     */
    static TodoReturn openAppPage();
public:
    
private:
    [[deprecated("PlatformToolbox::platformShutdown not implemented")]]
    /**
     */
    static TodoReturn platformShutdown();
public:
    
private:
    [[deprecated("PlatformToolbox::refreshWindow not implemented")]]
    /**
     */
    static TodoReturn refreshWindow();
public:
    
private:
    [[deprecated("PlatformToolbox::reportAchievementWithID not implemented")]]
    /**
     */
    static TodoReturn reportAchievementWithID(char const* p0, int p1);
public:
    
private:
    [[deprecated("PlatformToolbox::reportLoadingFinished not implemented")]]
    /**
     */
    static TodoReturn reportLoadingFinished();
public:
    
private:
    [[deprecated("PlatformToolbox::resizeWindow not implemented")]]
    /**
     */
    static TodoReturn resizeWindow(float p0, float p1);
public:
    
private:
    [[deprecated("PlatformToolbox::saveAndEncryptStringToFile not implemented")]]
    /**
     */
    static TodoReturn saveAndEncryptStringToFile(gd::string p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("PlatformToolbox::sendMail not implemented")]]
    /**
     */
    static TodoReturn sendMail(char const* p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("PlatformToolbox::setBlockBackButton not implemented")]]
    /**
     */
    static void setBlockBackButton(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::setKeyboardState not implemented")]]
    /**
     */
    static void setKeyboardState(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::shouldResumeSound not implemented")]]
    /**
     */
    static TodoReturn shouldResumeSound();
public:
    
private:
    [[deprecated("PlatformToolbox::showAchievements not implemented")]]
    /**
     */
    static TodoReturn showAchievements();
public:
    
private:
    [[deprecated("PlatformToolbox::showCursor not implemented")]]
    /**
     */
    static TodoReturn showCursor();
public:
    
private:
    [[deprecated("PlatformToolbox::signInGooglePlay not implemented")]]
    /**
     */
    static TodoReturn signInGooglePlay();
public:
    
private:
    [[deprecated("PlatformToolbox::signOutGooglePlay not implemented")]]
    /**
     */
    static TodoReturn signOutGooglePlay();
public:
    
private:
    [[deprecated("PlatformToolbox::spriteFromSavedFile not implemented")]]
    /**
     */
    static TodoReturn spriteFromSavedFile(gd::string p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleCallGLFinish not implemented")]]
    /**
     */
    static TodoReturn toggleCallGLFinish(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleCPUSleepMode not implemented")]]
    /**
     */
    static TodoReturn toggleCPUSleepMode(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleForceTimer not implemented")]]
    /**
     */
    static TodoReturn toggleForceTimer(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleFullScreen not implemented")]]
    /**
     */
    static TodoReturn toggleFullScreen(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleLockCursor not implemented")]]
    /**
     */
    static TodoReturn toggleLockCursor(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleMouseControl not implemented")]]
    /**
     */
    static TodoReturn toggleMouseControl(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleSmoothFix not implemented")]]
    /**
     */
    static TodoReturn toggleSmoothFix(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleVerticalSync not implemented")]]
    /**
     */
    static TodoReturn toggleVerticalSync(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::tryShowRateDialog not implemented")]]
    /**
     */
    static TodoReturn tryShowRateDialog(gd::string p0);
public:
    
private:
    [[deprecated("PlatformToolbox::updateMouseControl not implemented")]]
    /**
     */
    static TodoReturn updateMouseControl();
public:
    
private:
    [[deprecated("PlatformToolbox::updateWindowedSize not implemented")]]
    /**
     */
    static TodoReturn updateWindowedSize(float p0, float p1);
public:
};
