#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "GJDailyLevelDelegate.hpp"
#include "LevelDownloadDelegate.hpp"

class DailyLevelPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJDailyLevelDelegate, public LevelDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "DailyLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DailyLevelPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x97630
     */
    static DailyLevelPage* create(GJTimedLevelType p0);

    /**
     * @note[short] Windows: 0x992a0
     */
    TodoReturn claimLevelReward(DailyLevelNode* p0, GJGameLevel* p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Windows: 0x98a70
     */
    TodoReturn createDailyNode(GJGameLevel* p0, bool p1, float p2, bool p3);

    /**
     * @note[short] Windows: 0x989c0
     */
    TodoReturn createNodeIfLoaded();

    /**
     * @note[short] Windows: 0x98960
     */
    TodoReturn downloadAndCreateNode();

    /**
     * @note[short] Windows: 0x98c40
     */
    TodoReturn exitDailyNode(DailyLevelNode* p0, float p1);

    /**
     * @note[short] Windows: 0x98cf0
     */
    TodoReturn getDailyTime();

    /**
     * @note[short] Windows: 0x98da0
     */
    TodoReturn getDailyTimeString(int p0);

    /**
     * @note[short] Windows: 0x976d0
     */
    bool init(GJTimedLevelType p0);
    
private:
    [[deprecated("DailyLevelPage::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("DailyLevelPage::onTheSafe not implemented")]]
    /**
     */
    void onTheSafe(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("DailyLevelPage::refreshDailyPage not implemented")]]
    /**
     */
    TodoReturn refreshDailyPage();
public:
    
private:
    [[deprecated("DailyLevelPage::skipDailyLevel not implemented")]]
    /**
     */
    TodoReturn skipDailyLevel(DailyLevelNode* p0, GJGameLevel* p1);
public:

    /**
     * @note[short] Windows: 0x98910
     */
    TodoReturn tryGetDailyStatus();

    /**
     * @note[short] Windows: 0x99120
     */
    void updateTimers(float p0);
    
private:
    [[deprecated("DailyLevelPage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("DailyLevelPage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] Windows: 0x5d6d0
     */
    virtual void show();
    
private:
    [[deprecated("DailyLevelPage::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x98550
     */
    virtual TodoReturn dailyStatusFinished(GJTimedLevelType p0);
    
private:
    [[deprecated("DailyLevelPage::dailyStatusFailed not implemented")]]
    /**
     */
    virtual TodoReturn dailyStatusFailed(GJTimedLevelType p0, GJErrorCode p1);
public:
    
private:
    [[deprecated("DailyLevelPage::levelDownloadFinished not implemented")]]
    /**
     */
    virtual TodoReturn levelDownloadFinished(GJGameLevel* p0);
public:
    
private:
    [[deprecated("DailyLevelPage::levelDownloadFailed not implemented")]]
    /**
     */
    virtual TodoReturn levelDownloadFailed(int p0);
public:
    cocos2d::CCLabelBMFont* m_timeLabel;
    LoadingCircle* m_timeCircle;
    LoadingCircle* m_nodeCircle;
    bool m_gettingDailyStatus;
    DailyLevelNode* m_dailyNode;
    bool m_downloadStarted;
    GJTimedLevelType m_type;
    int m_downloadLevelID;
};
