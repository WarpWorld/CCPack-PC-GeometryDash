#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "UIButtonConfig.hpp"
#include "GManager.hpp"

class GameManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "GameManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameManager, GManager)

    /**
     * @note[short] Out of line
     */
    static GameManager* get();

    /**
     * @note[short] Windows: 0x121540
     */
    static GameManager* sharedState();

    /**
     * @note[short] Out of line
     */
    PlayLayer* getPlayLayer();

    /**
     * @note[short] Out of line
     */
    LevelEditorLayer* getEditorLayer();

    /**
     * @note[short] Out of line
     */
    GJBaseGameLayer* getGameLayer();

    /**
     * @note[short] Out of line
     */
    int getPlayerFrame();

    /**
     * @note[short] Out of line
     */
    int getPlayerShip();

    /**
     * @note[short] Out of line
     */
    int getPlayerBall();

    /**
     * @note[short] Out of line
     */
    int getPlayerBird();

    /**
     * @note[short] Out of line
     */
    int getPlayerDart();

    /**
     * @note[short] Out of line
     */
    int getPlayerRobot();

    /**
     * @note[short] Out of line
     */
    int getPlayerSpider();

    /**
     * @note[short] Out of line
     */
    int getPlayerSwing();

    /**
     * @note[short] Out of line
     */
    int getPlayerGlowColor();

    /**
     * @note[short] Out of line
     */
    int getPlayerStreak();

    /**
     * @note[short] Out of line
     */
    int getPlayerShipFire();

    /**
     * @note[short] Out of line
     */
    int getPlayerDeathEffect();

    /**
     * @note[short] Out of line
     */
    int getPlayerJetpack();

    /**
     * @note[short] Out of line
     */
    int getPlayerColor();

    /**
     * @note[short] Out of line
     */
    int getPlayerColor2();

    /**
     * @note[short] Out of line
     */
    bool getPlayerGlow();

    /**
     * @note[short] Out of line
     */
    void setPlayerFrame(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerShip(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerBall(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerBird(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerDart(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerRobot(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerSpider(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerSwing(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerColor3(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerStreak(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerShipStreak(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerDeathEffect(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerJetpack(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerColor(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerColor2(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerGlow(bool v);

    /**
     * @note[short] Out of line
     */
    bool getGameVariableDefault(const char* key, bool defaultValue);

    /**
     * @note[short] Out of line
     */
    int getIntGameVariableDefault(const char* key, int defaultValue);
    
private:
    [[deprecated("GameManager::accountStatusChanged not implemented")]]
    /**
     */
    TodoReturn accountStatusChanged();
public:

    /**
     * @note[short] Windows: 0x1270f0
     */
    TodoReturn activeIconForType(IconType p0);

    /**
     * @note[short] Windows: 0x14da60
     */
    TodoReturn addCustomAnimationFrame(int p0, int p1, gd::string p2, gd::string p3);
    
private:
    [[deprecated("GameManager::addDuplicateLastFrame not implemented")]]
    /**
     */
    TodoReturn addDuplicateLastFrame(int p0);
public:

    /**
     * @note[short] Windows: 0x14d8c0
     */
    TodoReturn addGameAnimation(int p0, int p1, float p2, gd::string p3, gd::string p4, int p5);
    
private:
    [[deprecated("GameManager::addIconDelegate not implemented")]]
    /**
     */
    TodoReturn addIconDelegate(cocos2d::CCObject* p0, int p1);
public:

    /**
     * @note[short] Windows: 0x128ea0
     */
    TodoReturn addNewCustomObject(gd::string p0);
    
private:
    [[deprecated("GameManager::addToGJLog not implemented")]]
    /**
     */
    TodoReturn addToGJLog(cocos2d::CCString* p0);
public:
    
private:
    [[deprecated("GameManager::applicationDidEnterBackground not implemented")]]
    /**
     */
    TodoReturn applicationDidEnterBackground();
public:

    /**
     * @note[short] Windows: 0x12ded0
     */
    TodoReturn applicationWillEnterForeground();

    /**
     * @note[short] Windows: 0x1278d0
     */
    TodoReturn calculateBaseKeyForIcons();
    
private:
    [[deprecated("GameManager::canShowRewardedVideo not implemented")]]
    /**
     */
    TodoReturn canShowRewardedVideo();
public:

    /**
     * @note[short] Windows: 0x1234f0
     */
    TodoReturn checkSteamAchievementUnlock();

    /**
     * @note[short] Windows: 0x1297d0
     */
    TodoReturn checkUsedIcons();
    
private:
    [[deprecated("GameManager::claimItemsResponse not implemented")]]
    /**
     */
    TodoReturn claimItemsResponse(gd::string p0);
public:
    
private:
    [[deprecated("GameManager::clearGJLog not implemented")]]
    /**
     */
    TodoReturn clearGJLog();
public:

    /**
     * @note[short] Windows: 0x126090
     */
    cocos2d::ccColor3B colorForIdx(int p0);
    
private:
    [[deprecated("GameManager::colorForPos not implemented")]]
    /**
     */
    TodoReturn colorForPos(int p0);
public:

    /**
     * @note[short] Windows: 0x122350
     */
    TodoReturn colorKey(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x122b50
     */
    TodoReturn completedAchievement(gd::string p0);

    /**
     * @note[short] Windows: 0x127270
     */
    TodoReturn countForType(IconType p0);
    
private:
    [[deprecated("GameManager::defaultFrameForAnimation not implemented")]]
    /**
     */
    TodoReturn defaultFrameForAnimation(int p0);
public:
    
private:
    [[deprecated("GameManager::defaultYOffsetForBG2 not implemented")]]
    /**
     */
    TodoReturn defaultYOffsetForBG2(int p0);
public:
    
private:
    [[deprecated("GameManager::didExitPlayscene not implemented")]]
    /**
     */
    TodoReturn didExitPlayscene();
public:

    /**
     * @note[short] Windows: 0x12de10
     */
    TodoReturn doQuickSave();
    
private:
    [[deprecated("GameManager::dpadConfigToString not implemented")]]
    /**
     */
    TodoReturn dpadConfigToString(UIButtonConfig& p0);
public:
    
private:
    [[deprecated("GameManager::eventUnlockFeature not implemented")]]
    /**
     */
    TodoReturn eventUnlockFeature(char const* p0);
public:

    /**
     * @note[short] Windows: 0x1219f0
     */
    TodoReturn fadeInMenuMusic();

    /**
     * @note[short] Windows: 0x121a60
     */
    TodoReturn fadeInMusic(gd::string p0);

    /**
     * @note[short] Windows: 0x127ed0
     */
    TodoReturn finishedLoadingBGAsync(cocos2d::CCObject* p0);
    
private:
    [[deprecated("GameManager::finishedLoadingGAsync not implemented")]]
    /**
     */
    TodoReturn finishedLoadingGAsync(int p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingGAsync1 not implemented")]]
    /**
     */
    TodoReturn finishedLoadingGAsync1(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingGAsync2 not implemented")]]
    /**
     */
    TodoReturn finishedLoadingGAsync2(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingIconAsync not implemented")]]
    /**
     */
    TodoReturn finishedLoadingIconAsync(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingMGAsync not implemented")]]
    /**
     */
    TodoReturn finishedLoadingMGAsync(int p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingMGAsync1 not implemented")]]
    /**
     */
    TodoReturn finishedLoadingMGAsync1(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingMGAsync2 not implemented")]]
    /**
     */
    TodoReturn finishedLoadingMGAsync2(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::followTwitch not implemented")]]
    /**
     */
    TodoReturn followTwitch();
public:
    
private:
    [[deprecated("GameManager::followTwitter not implemented")]]
    /**
     */
    TodoReturn followTwitter();
public:
    
private:
    [[deprecated("GameManager::framesForAnimation not implemented")]]
    /**
     */
    TodoReturn framesForAnimation(int p0);
public:
    
private:
    [[deprecated("GameManager::frameTimeForAnimation not implemented")]]
    /**
     */
    TodoReturn frameTimeForAnimation(int p0);
public:
    
private:
    [[deprecated("GameManager::generateSecretNumber not implemented")]]
    /**
     */
    TodoReturn generateSecretNumber();
public:
    
private:
    [[deprecated("GameManager::getBGTexture not implemented")]]
    /**
     */
    TodoReturn getBGTexture(int p0);
public:
    
private:
    [[deprecated("GameManager::getFontFile not implemented")]]
    /**
     */
    TodoReturn getFontFile(int p0);
public:

    /**
     * @note[short] Windows: 0x127c30
     */
    TodoReturn getFontTexture(int p0);

    /**
     * @note[short] Windows: 0x128730
     */
    bool getGameVariable(char const* p0);
    
private:
    [[deprecated("GameManager::getGTexture not implemented")]]
    /**
     */
    TodoReturn getGTexture(int p0);
public:
    
private:
    [[deprecated("GameManager::getIconRequestID not implemented")]]
    /**
     */
    TodoReturn getIconRequestID();
public:

    /**
     * @note[short] Windows: 0x128c80
     */
    int getIntGameVariable(char const* p0);

    /**
     * @note[short] Windows: 0x1216e0
     */
    TodoReturn getMenuMusicFile();
    
private:
    [[deprecated("GameManager::getMGTexture not implemented")]]
    /**
     */
    TodoReturn getMGTexture(int p0);
public:

    /**
     * @note[short] Windows: 0x128d70
     */
    TodoReturn getNextUniqueObjectKey();

    /**
     * @note[short] Windows: 0x128de0
     */
    TodoReturn getNextUsedKey(int p0, bool p1);
    
private:
    [[deprecated("GameManager::getOrderedCustomObjectKeys not implemented")]]
    /**
     */
    TodoReturn getOrderedCustomObjectKeys();
public:

    /**
     * @note[short] Windows: 0x1217b0
     */
    TodoReturn getPracticeMusicFile();

    /**
     * @note[short] Windows: 0x128a20
     */
    TodoReturn getUGV(char const* p0);

    /**
     * @note[short] Windows: 0x122690
     */
    TodoReturn getUnlockForAchievement(gd::string p0, int& p1, UnlockType& p2);
    
private:
    [[deprecated("GameManager::groundHasSecondaryColor not implemented")]]
    /**
     */
    TodoReturn groundHasSecondaryColor(int p0);
public:
    
private:
    [[deprecated("GameManager::iconAndTypeForKey not implemented")]]
    /**
     */
    TodoReturn iconAndTypeForKey(int p0, int& p1, int& p2);
public:

    /**
     * @note[short] Windows: 0x121d30
     */
    TodoReturn iconKey(int p0, IconType p1);

    /**
     * @note[short] Windows: 0x122090
     */
    UnlockType iconTypeToUnlockType(IconType p0);

    /**
     * @note[short] Windows: 0x122490
     */
    bool isColorUnlocked(int p0, UnlockType p1);
    
private:
    [[deprecated("GameManager::isIconLoaded not implemented")]]
    /**
     */
    bool isIconLoaded(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x121f90
     */
    bool isIconUnlocked(int p0, IconType p1);
    
private:
    [[deprecated("GameManager::itemPurchased not implemented")]]
    /**
     */
    TodoReturn itemPurchased(char const* p0);
public:
    
private:
    [[deprecated("GameManager::joinDiscord not implemented")]]
    /**
     */
    TodoReturn joinDiscord();
public:
    
private:
    [[deprecated("GameManager::joinReddit not implemented")]]
    /**
     */
    TodoReturn joinReddit();
public:

    /**
     * @note[short] Out of line
     */
    int keyForIcon(int iconIdx, int iconEnum);
    
private:
    [[deprecated("GameManager::levelIsPremium not implemented")]]
    /**
     */
    TodoReturn levelIsPremium(int p0, int p1);
public:
    
private:
    [[deprecated("GameManager::likeFacebook not implemented")]]
    /**
     */
    TodoReturn likeFacebook();
public:

    /**
     * @note[short] Windows: 0x127dc0
     */
    void loadBackground(int p0);

    /**
     * @note[short] Windows: 0x127e60
     */
    TodoReturn loadBackgroundAsync(int p0);

    /**
     * @note[short] Windows: 0x127c80
     */
    TodoReturn loadDeathEffect(int p0);
    
private:
    [[deprecated("GameManager::loadDpadFromString not implemented")]]
    /**
     */
    TodoReturn loadDpadFromString(UIButtonConfig& p0, gd::string p1);
public:

    /**
     * @note[short] Windows: 0x12af80
     */
    TodoReturn loadDPadLayout(int p0, bool p1);

    /**
     * @note[short] Windows: 0x127ba0
     */
    TodoReturn loadFont(int p0);

    /**
     * @note[short] Windows: 0x1281f0
     */
    void loadGround(int p0);
    
private:
    [[deprecated("GameManager::loadGroundAsync not implemented")]]
    /**
     */
    TodoReturn loadGroundAsync(int p0);
public:

    /**
     * @note[short] Windows: 0x127440
     */
    cocos2d::CCTexture2D* loadIcon(int p0, int p1, int p2);
    
private:
    [[deprecated("GameManager::loadIconAsync not implemented")]]
    /**
     */
    TodoReturn loadIconAsync(int p0, int p1, int p2, cocos2d::CCObject* p3);
public:

    /**
     * @note[short] Windows: 0x127f50
     */
    void loadMiddleground(int p0);
    
private:
    [[deprecated("GameManager::loadMiddlegroundAsync not implemented")]]
    /**
     */
    TodoReturn loadMiddlegroundAsync(int p0);
public:
    
private:
    [[deprecated("GameManager::loadVideoSettings not implemented")]]
    /**
     */
    TodoReturn loadVideoSettings();
public:

    /**
     * @note[short] Windows: 0x122610
     */
    TodoReturn lockColor(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x1222d0
     */
    TodoReturn lockIcon(int p0, IconType p1);
    
private:
    [[deprecated("GameManager::logLoadedIconInfo not implemented")]]
    /**
     */
    TodoReturn logLoadedIconInfo();
public:

    /**
     * @note[short] Windows: 0x1270d0
     */
    TodoReturn openEditorGuide();

    /**
     * @note[short] Windows: 0x121890
     */
    TodoReturn playMenuMusic();

    /**
     * @note[short] Windows: 0x121b40
     */
    TodoReturn playSFXTrigger(SFXTriggerGameObject* p0);

    /**
     * @note[short] Windows: 0x12b720
     */
    TodoReturn prepareDPadSettings();
    
private:
    [[deprecated("GameManager::printGJLog not implemented")]]
    /**
     */
    TodoReturn printGJLog();
public:

    /**
     * @note[short] Windows: 0x12e3e0
     */
    TodoReturn queueReloadMenu();
    
private:
    [[deprecated("GameManager::rateGame not implemented")]]
    /**
     */
    TodoReturn rateGame();
public:

    /**
     * @note[short] Windows: 0x129ce0
     */
    void recountUserStats(gd::string p0);

    /**
     * @note[short] Windows: 0x12e4b0
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool borderless, bool unused);

    /**
     * @note[short] Out of line
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool unused);

    /**
     * @note[short] Windows: 0x12e540
     */
    TodoReturn reloadAllStep2();

    /**
     * @note[short] Windows: 0x12e6a0
     */
    TodoReturn reloadAllStep3();

    /**
     * @note[short] Windows: 0x12e740
     */
    TodoReturn reloadAllStep4();

    /**
     * @note[short] Windows: 0x12e7b0
     */
    TodoReturn reloadAllStep5();
    
private:
    [[deprecated("GameManager::reloadMenu not implemented")]]
    /**
     */
    TodoReturn reloadMenu();
public:
    
private:
    [[deprecated("GameManager::removeCustomObject not implemented")]]
    /**
     */
    TodoReturn removeCustomObject(int p0);
public:

    /**
     * @note[short] Windows: 0x127370
     */
    TodoReturn removeIconDelegate(int p0);
    
private:
    [[deprecated("GameManager::reorderKey not implemented")]]
    /**
     */
    TodoReturn reorderKey(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x1234a0
     */
    TodoReturn reportAchievementWithID(char const* p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x122d50
     */
    TodoReturn reportPercentageForLevel(int p0, int p1, bool p2);
    
private:
    [[deprecated("GameManager::resetAchievement not implemented")]]
    /**
     */
    TodoReturn resetAchievement(gd::string p0);
public:
    
private:
    [[deprecated("GameManager::resetAdTimer not implemented")]]
    /**
     */
    TodoReturn resetAdTimer();
public:
    
private:
    [[deprecated("GameManager::resetAllIcons not implemented")]]
    /**
     */
    TodoReturn resetAllIcons();
public:
    
private:
    [[deprecated("GameManager::resetCoinUnlocks not implemented")]]
    /**
     */
    TodoReturn resetCoinUnlocks();
public:
    
private:
    [[deprecated("GameManager::resetDPadSettings not implemented")]]
    /**
     */
    TodoReturn resetDPadSettings(bool p0);
public:

    /**
     * @note[short] Windows: 0x12e800
     */
    TodoReturn resolutionForKey(int p0);

    /**
     * @note[short] Windows: 0x12e110
     */
    TodoReturn returnToLastScene(GJGameLevel* p0);
    
private:
    [[deprecated("GameManager::rewardedVideoAdFinished not implemented")]]
    /**
     */
    TodoReturn rewardedVideoAdFinished(int p0);
public:
    
private:
    [[deprecated("GameManager::rewardedVideoHidden not implemented")]]
    /**
     */
    TodoReturn rewardedVideoHidden();
public:
    
private:
    [[deprecated("GameManager::rewardedVideoHiddenDelayed not implemented")]]
    /**
     */
    TodoReturn rewardedVideoHiddenDelayed();
public:
    
private:
    [[deprecated("GameManager::safePopScene not implemented")]]
    /**
     */
    TodoReturn safePopScene();
public:
    
private:
    [[deprecated("GameManager::saveAdTimer not implemented")]]
    /**
     */
    TodoReturn saveAdTimer();
public:

    /**
     * @note[short] Windows: 0x12ac70
     */
    TodoReturn saveDPadLayout(int p0, bool p1);

    /**
     * @note[short] Windows: 0x1284e0
     */
    void setGameVariable(char const* p0, bool p1);
    
private:
    [[deprecated("GameManager::setHasRatingPower not implemented")]]
    /**
     */
    void setHasRatingPower(int p0);
public:

    /**
     * @note[short] Windows: 0x128b80
     */
    void setIntGameVariable(char const* p0, int p1);

    /**
     * @note[short] Windows: 0xf3760
     */
    void setPlayerUserID(int p0);

    /**
     * @note[short] Windows: 0x1288d0
     */
    void setUGV(char const* p0, bool p1);

    /**
     * @note[short] Windows: 0x14b280
     */
    TodoReturn setupGameAnimations();

    /**
     * @note[short] Windows: 0x1279a0
     */
    gd::string sheetNameForIcon(int p0, int p1);
    
private:
    [[deprecated("GameManager::shortenAdTimer not implemented")]]
    /**
     */
    TodoReturn shortenAdTimer(float p0);
public:
    
private:
    [[deprecated("GameManager::shouldShowInterstitial not implemented")]]
    /**
     */
    TodoReturn shouldShowInterstitial(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameManager::showInterstitial not implemented")]]
    /**
     */
    TodoReturn showInterstitial();
public:
    
private:
    [[deprecated("GameManager::showInterstitialForced not implemented")]]
    /**
     */
    TodoReturn showInterstitialForced();
public:
    
private:
    [[deprecated("GameManager::showMainMenuAd not implemented")]]
    /**
     */
    TodoReturn showMainMenuAd();
public:
    
private:
    [[deprecated("GameManager::startUpdate not implemented")]]
    /**
     */
    TodoReturn startUpdate();
public:

    /**
     * @note[short] Windows: 0x128f90
     */
    TodoReturn stringForCustomObject(int p0);
    
private:
    [[deprecated("GameManager::subYouTube not implemented")]]
    /**
     */
    TodoReturn subYouTube();
public:
    
private:
    [[deprecated("GameManager::switchCustomObjects not implemented")]]
    /**
     */
    TodoReturn switchCustomObjects(int p0, int p1);
public:
    
private:
    [[deprecated("GameManager::switchScreenMode not implemented")]]
    /**
     */
    TodoReturn switchScreenMode(bool p0, bool p1);
public:
    
private:
    [[deprecated("GameManager::syncPlatformAchievements not implemented")]]
    /**
     */
    TodoReturn syncPlatformAchievements();
public:
    
private:
    [[deprecated("GameManager::toggleGameVariable not implemented")]]
    /**
     */
    TodoReturn toggleGameVariable(char const* p0);
public:
    
private:
    [[deprecated("GameManager::tryCacheAd not implemented")]]
    /**
     */
    TodoReturn tryCacheAd();
public:
    
private:
    [[deprecated("GameManager::tryShowInterstitial not implemented")]]
    /**
     */
    TodoReturn tryShowInterstitial(int p0, int p1, int p2);
public:

    /**
     * @note[short] Windows: 0x127d40
     */
    TodoReturn unloadBackground();

    /**
     * @note[short] Windows: 0x1276b0
     */
    TodoReturn unloadIcon(int p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x127870
     */
    TodoReturn unloadIcons(int p0);

    /**
     * @note[short] Windows: 0x122560
     */
    TodoReturn unlockColor(int p0, UnlockType p1);
    
private:
    [[deprecated("GameManager::unlockedPremium not implemented")]]
    /**
     */
    TodoReturn unlockedPremium();
public:

    /**
     * @note[short] Windows: 0x122220
     */
    TodoReturn unlockIcon(int p0, IconType p1);

    /**
     * @note[short] Windows: 0x122190
     */
    TodoReturn unlockTypeToIconType(int p0);

    /**
     * @note[short] Windows: 0x12ec60
     */
    TodoReturn updateCustomFPS();
    
private:
    [[deprecated("GameManager::updateMusic not implemented")]]
    /**
     */
    TodoReturn updateMusic();
public:
    
private:
    [[deprecated("GameManager::verifyAchievementUnlocks not implemented")]]
    /**
     */
    TodoReturn verifyAchievementUnlocks();
public:
    
private:
    [[deprecated("GameManager::verifyCoinUnlocks not implemented")]]
    /**
     */
    TodoReturn verifyCoinUnlocks();
public:
    
private:
    [[deprecated("GameManager::verifyStarUnlocks not implemented")]]
    /**
     */
    TodoReturn verifyStarUnlocks();
public:
    
private:
    [[deprecated("GameManager::verifySyncedCoins not implemented")]]
    /**
     */
    TodoReturn verifySyncedCoins();
public:
    
private:
    [[deprecated("GameManager::videoAdHidden not implemented")]]
    /**
     */
    TodoReturn videoAdHidden();
public:
    
private:
    [[deprecated("GameManager::videoAdShowed not implemented")]]
    /**
     */
    TodoReturn videoAdShowed();
public:
    
private:
    [[deprecated("GameManager::update not implemented")]]
    /**
     */
    virtual void update(float p0);
public:

    /**
     * @note[short] Windows: 0x1215c0
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x12d480
     */
    virtual TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x12b830
     */
    virtual TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x12cb20
     */
    virtual TodoReturn firstLoad();
    cocos2d::CCDictionary* m_unkAnimationDict;
    cocos2d::CCDictionary* m_unkAnimationDict2;
    cocos2d::CCDictionary* m_frameTimeForAnimation;
    cocos2d::CCDictionary* m_framesForAnimation;
    cocos2d::CCDictionary* m_defaultFrames;
    bool m_switchModes;
    bool m_toFullscreen;
    bool m_reloading;
    bool m_unkBool1;
    bool m_unkBool2;
    bool m_vsyncEnabled;
    cocos2d::CCDictionary* m_valueKeeper;
    cocos2d::CCDictionary* m_unlockValueKeeper;
    cocos2d::CCDictionary* m_customObjectDict;
    double m_adTimer;
    double m_adCache;
    bool m_unkBool3;
    int m_unkSize4_1;
    double m_unkDouble2;
    int m_unkSize4_2;
    int m_unkSize4_3;
    bool m_loaded;
    bool m_googlePlaySignedIn;
    gd::string m_unknownString;
    int m_unkSize4_4;
    PlayLayer* m_playLayer;
    LevelEditorLayer* m_levelEditorLayer;
    GJBaseGameLayer* m_gameLayer;
    void* m_unkPtr;
    MenuLayer* m_menuLayer;
    bool m_inMenuLayer;
    void* m_unknownVariable;
    bool m_unknownBool3;
    bool m_unknownPlayLayerBool;
    bool m_unknownBool4;
    bool m_unknownBool5;
    gd::string m_playerUDID;
    gd::string m_playerName;
    bool m_commentsEnabled;
    geode::SeedValueRSV m_playerUserID;
    float m_bgVolume;
    float m_sfxVolume;
    float m_timeOffset;
    bool m_ratedGame;
    bool m_clickedFacebook;
    bool m_clickedTwitter;
    bool m_clickedYouTube;
    bool m_clickedTwitch;
    bool m_clickedDiscord_;
    bool m_clickedReddit;
    double m_socialsDuration;
    bool m_showedAd;
    bool m_unknownBool;
    bool m_editorEnabled;
    int m_sceneEnum;
    bool m_searchObjectBool;
    geode::SeedValueRSV m_playerFrame;
    geode::SeedValueRSV m_playerShip;
    geode::SeedValueRSV m_playerBall;
    geode::SeedValueRSV m_playerBird;
    geode::SeedValueRSV m_playerDart;
    geode::SeedValueRSV m_playerRobot;
    geode::SeedValueRSV m_playerSpider;
    geode::SeedValueRSV m_playerSwing;
    geode::SeedValueRSV m_playerColor;
    geode::SeedValueRSV m_playerColor2;
    geode::SeedValueRSV m_playerGlowColor;
    geode::SeedValueRSV m_playerStreak;
    geode::SeedValueRSV m_playerShipFire;
    geode::SeedValueRSV m_playerDeathEffect;
    geode::SeedValueRSV m_playerJetpack;
    geode::SeedValueSR m_chk;
    geode::SeedValueSR m_secretNumber;
    bool m_playerGlow;
    IconType m_playerIconType;
    bool m_everyPlaySetup;
    bool m_showSongMarkers;
    bool m_showBPMMarkers;
    bool m_recordGameplay;
    bool m_showProgressBar;
    bool m_performanceMode;
    bool m_unkBool4;
    bool m_clickedGarage;
    bool m_clickedEditor;
    bool m_clickedName;
    bool m_clickedPractice;
    bool m_showedEditorGuide;
    bool m_showedRateDiffDialog;
    bool m_showedRateStarDialog;
    bool m_showedLowDetailDialog;
    void* m_unkPtr2;
    void* m_unkPtr3;
    int m_unkSize4_5;
    int m_unkSize4_6;
    int m_unkSize4_7;
    int m_unkSize4_8;
    int m_loadedBgID;
    int m_loadedGroundID;
    int m_loadedMG;
    int m_loadedFont;
    int m_loadedDeathEffect;
    bool m_loadingBG;
    bool m_loadingG;
    bool m_loadingG1;
    bool m_finishedLoadingG1;
    bool m_shouldLoadG1;
    bool m_finishedLoadingMG1;
    bool m_finishedLoadingMG2;
    bool m_unkBool5;
    int m_unkSize4_9;
    int m_unkSize4_10;
    int m_unkSize4_11;
    int m_bootups;
    bool m_hasRatedGame;
    bool m_unkBool6;
    bool m_shouldLoadUnlockValueKeeper;
    bool m_unkBool7;
    bool m_unkBool8;
    geode::SeedValueRSV m_hasRP;
    bool m_canGetLevelSaveData;
    int m_resolution;
    int m_texQuality;
    bool m_somethingInMenuLayer;
    void* m_unkPtr4;
    bool m_unkBool9;
    int m_unkSize4_12;
    int m_unkSize4_13;
    bool m_unkBool10;
    int m_unkSize4_14;
    bool m_disableThumbstick;
    float m_customFPSTarget;
    bool m_unkBool11;
    int m_customMenuSongID;
    int m_customPracticeSongID;
    gd::map<int, int> m_loadIcon;
    gd::map<int, gd::map<int, int>> m_loadIcon2;
    gd::map<int, bool> m_isIconBeingLoaded;
    std::array<int, 9>* m_keyStartForIcon;
    void* m_somethingKeyForIcon;
    void* m_idk;
    gd::map<int, gd::vector<cocos2d::CCObject*>> m_iconDelegates;
    int m_iconRequestID;
    cocos2d::CCArray* m_unkArray;
    void* m_someAdPointer;
    int m_unkSize4_15;
    int m_unkSize4_16;
    int m_unkSize4_17;
    UIButtonConfig m_dpad1;
    UIButtonConfig m_dpad2;
    UIButtonConfig m_dpad3;
    UIButtonConfig m_dpad4;
    UIButtonConfig m_dpad5;
    gd::string m_dpadLayout1;
    gd::string m_dpadLayout2;
    gd::string m_dpadLayout3;
    gd::string m_dpadLayoutDual1;
    gd::string m_dpadLayoutDual2;
    gd::string m_dpadLayoutDual3;
    int m_unkSize4_18;
    int m_unkSize4_19;
    int m_unkSize4_20;
    bool m_unkBool12;
};
