#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AppDelegate : public cocos2d::CCApplication, public cocos2d::CCSceneDelegate {
public:
    static constexpr auto CLASS_NAME = "AppDelegate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AppDelegate, cocos2d::CCApplication)
	inline static AppDelegate* get() {
        return static_cast<AppDelegate*>(cocos2d::CCApplication::sharedApplication());
    }
    
private:
    [[deprecated("AppDelegate::bgScale not implemented")]]
    /**
     */
    TodoReturn bgScale();
public:
    
private:
    [[deprecated("AppDelegate::checkSound not implemented")]]
    /**
     */
    TodoReturn checkSound();
public:
    
private:
    [[deprecated("AppDelegate::hideLoadingCircle not implemented")]]
    /**
     */
    TodoReturn hideLoadingCircle();
public:
    
private:
    [[deprecated("AppDelegate::loadingIsFinished not implemented")]]
    /**
     */
    TodoReturn loadingIsFinished();
public:

    /**
     * @note[short] Windows: 0x5b710
     */
    TodoReturn musicTest();

    /**
     * @note[short] Windows: 0x5b5e0
     */
    TodoReturn pauseGame();

    /**
     * @note[short] Windows: 0x5b640
     */
    TodoReturn pauseSound();
    
private:
    [[deprecated("AppDelegate::platformShutdown not implemented")]]
    /**
     */
    TodoReturn platformShutdown();
public:

    /**
     * @note[short] Windows: 0x5b6c0
     */
    TodoReturn resumeSound();
    
private:
    [[deprecated("AppDelegate::setIdleTimerDisabled not implemented")]]
    /**
     */
    void setIdleTimerDisabled(bool p0);
public:
    
private:
    [[deprecated("AppDelegate::setupGLView not implemented")]]
    /**
     */
    TodoReturn setupGLView();
public:
    
private:
    [[deprecated("AppDelegate::showLoadingCircle not implemented")]]
    /**
     */
    TodoReturn showLoadingCircle(bool p0, bool p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x5b320
     */
    virtual bool applicationDidFinishLaunching();

    /**
     * @note[short] Windows: 0x5b4f0
     */
    virtual void applicationDidEnterBackground();

    /**
     * @note[short] Windows: 0x5b530
     */
    virtual void applicationWillEnterForeground();

    /**
     * @note[short] Windows: 0x5b4d0
     */
    virtual void applicationWillBecomeActive();
    
private:
    [[deprecated("AppDelegate::applicationWillResignActive not implemented")]]
    /**
     */
    virtual void applicationWillResignActive();
public:

    /**
     * @note[short] Windows: 0x5b790
     */
    virtual void trySaveGame(bool p0);

    /**
     * @note[short] Windows: 0x5b930
     */
    virtual TodoReturn willSwitchToScene(cocos2d::CCScene* p0);
    GEODE_PAD(4);
    cocos2d::CCScene* m_runningScene;
};
