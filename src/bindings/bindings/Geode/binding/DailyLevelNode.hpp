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

class DailyLevelNode : public cocos2d::CCNode, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DailyLevelNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DailyLevelNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x99610
     */
    static DailyLevelNode* create(GJGameLevel* p0, DailyLevelPage* p1, bool p2);

    /**
     * @note[short] Windows: 0x996c0
     */
    bool init(GJGameLevel* p0, DailyLevelPage* p1, bool p2);

    /**
     * @note[short] Windows: 0x9a040
     */
    void onClaimReward(cocos2d::CCObject* sender);
    
private:
    [[deprecated("DailyLevelNode::onSkipLevel not implemented")]]
    /**
     */
    void onSkipLevel(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x99ff0
     */
    TodoReturn showSkipButton();

    /**
     * @note[short] Windows: 0x9a290
     */
    TodoReturn updateTimeLabel(gd::string p0);
    
private:
    [[deprecated("DailyLevelNode::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    GJGameLevel* m_level;
    DailyLevelPage* m_page;
    cocos2d::CCLabelBMFont* m_timeLabel;
    GEODE_PAD(8);
    CCMenuItemSpriteExtra* m_skipButton;
    bool m_unkBool;
    bool m_needsDownloading;
};
