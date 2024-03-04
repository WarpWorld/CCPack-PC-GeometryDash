#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class CreatorLayer : public cocos2d::CCLayer, public cocos2d::CCSceneTransitionDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CreatorLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x6f4b0
     */
    static CreatorLayer* create();
    
private:
    [[deprecated("CreatorLayer::canPlayOnlineLevels not implemented")]]
    /**
     */
    TodoReturn canPlayOnlineLevels();
public:

    /**
     * @note[short] Windows: 0x71550
     */
    TodoReturn checkQuestsStatus();

    /**
     * @note[short] Windows: 0x70b80
     */
    void onAdventureMap(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x71720
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70dd0
     */
    void onChallenge(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70bc0
     */
    void onDailyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70c00
     */
    void onEventLevel(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreatorLayer::onFameLevels not implemented")]]
    /**
     */
    void onFameLevels(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x70580
     */
    void onFeaturedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70790
     */
    void onGauntlets(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70520
     */
    void onLeaderboards(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70710
     */
    void onMapPacks(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x707f0
     */
    void onMultiplayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70350
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x706a0
     */
    void onOnlineLevels(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreatorLayer::onOnlyFullVersion not implemented")]]
    /**
     */
    void onOnlyFullVersion(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x70600
     */
    void onPaths(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70440
     */
    void onSavedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70e00
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70620
     */
    void onTopLists(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x71110
     */
    void onTreasureRoom(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70be0
     */
    void onWeeklyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x6f460
     */
    TodoReturn scene();

    /**
     * @note[short] Windows: 0x6f550
     */
    virtual bool init();
    
private:
    [[deprecated("CreatorLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CreatorLayer::sceneWillResume not implemented")]]
    /**
     */
    virtual void sceneWillResume();
public:

    /**
     * @note[short] Windows: 0x71690
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
};
