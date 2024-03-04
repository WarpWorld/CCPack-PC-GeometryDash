#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "GooglePlayDelegate.hpp"

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol, public GooglePlayDelegate {
public:
    static constexpr auto CLASS_NAME = "MenuLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x27b3d0
     */
    static cocos2d::CCScene* scene(bool p0);
    
private:
    [[deprecated("MenuLayer::endGame not implemented")]]
    /**
     */
    TodoReturn endGame();
public:
    
private:
    [[deprecated("MenuLayer::firstNetworkTest not implemented")]]
    /**
     */
    TodoReturn firstNetworkTest();
public:

    /**
     * @note[short] Windows: 0x27c830
     */
    void onAchievements(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c9d0
     */
    void onCreator(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onDaily not implemented")]]
    /**
     */
    void onDaily(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onDiscord not implemented")]]
    /**
     */
    void onDiscord(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onEveryplay not implemented")]]
    /**
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onFacebook not implemented")]]
    /**
     */
    void onFacebook(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onFreeLevels not implemented")]]
    /**
     */
    void onFreeLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onFullVersion not implemented")]]
    /**
     */
    void onFullVersion(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onGameCenter not implemented")]]
    /**
     */
    void onGameCenter(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27ca40
     */
    void onGarage(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onGooglePlayGames not implemented")]]
    /**
     */
    void onGooglePlayGames(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27c7a0
     */
    void onMoreGames(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onMyProfile not implemented")]]
    /**
     */
    void onMyProfile(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27cae0
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c930
     */
    void onOptions(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onOptionsInstant not implemented")]]
    /**
     */
    TodoReturn onOptionsInstant();
public:

    /**
     * @note[short] Windows: 0x27c890
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27cb70
     */
    void onQuit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onRobTop not implemented")]]
    /**
     */
    void onRobTop(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27c9a0
     */
    void onStats(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onTrailer not implemented")]]
    /**
     */
    void onTrailer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onTwitch not implemented")]]
    /**
     */
    void onTwitch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onTwitter not implemented")]]
    /**
     */
    void onTwitter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onYouTube not implemented")]]
    /**
     */
    void onYouTube(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::openOptions not implemented")]]
    /**
     */
    TodoReturn openOptions(bool p0);
public:
    
private:
    [[deprecated("MenuLayer::showGCQuestion not implemented")]]
    /**
     */
    TodoReturn showGCQuestion();
public:
    
private:
    [[deprecated("MenuLayer::showMeltdownPromo not implemented")]]
    /**
     */
    TodoReturn showMeltdownPromo();
public:

    /**
     * @note[short] Windows: 0x27c660
     */
    TodoReturn showTOS();
    
private:
    [[deprecated("MenuLayer::syncPlatformAchievements not implemented")]]
    /**
     */
    TodoReturn syncPlatformAchievements(float p0);
public:
    
private:
    [[deprecated("MenuLayer::tryShowAd not implemented")]]
    /**
     */
    TodoReturn tryShowAd(float p0);
public:

    /**
     * @note[short] Windows: 0x27c520
     */
    TodoReturn updateUserProfileButton();
    
private:
    [[deprecated("MenuLayer::videoOptionsClosed not implemented")]]
    /**
     */
    TodoReturn videoOptionsClosed();
public:
    
private:
    [[deprecated("MenuLayer::videoOptionsOpened not implemented")]]
    /**
     */
    TodoReturn videoOptionsOpened();
public:
    
private:
    [[deprecated("MenuLayer::willClose not implemented")]]
    /**
     */
    TodoReturn willClose();
public:

    /**
     * @note[short] Windows: 0x27b450
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x27cb60
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x27cd70
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x27c860
     */
    virtual TodoReturn googlePlaySignedIn();

    /**
     * @note[short] Windows: 0x27cbf0
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
