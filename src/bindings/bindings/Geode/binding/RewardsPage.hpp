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
#include "GJRewardDelegate.hpp"

class RewardsPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardsPage, FLAlertLayer)
    
private:
    [[deprecated("RewardsPage::create not implemented")]]
    /**
     */
    static RewardsPage* create();
public:
    
private:
    [[deprecated("RewardsPage::getRewardFrame not implemented")]]
    /**
     */
    static char const* getRewardFrame(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x6a750
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f7a00
     */
    void onFreeStuff(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f74a0
     */
    void onReward(cocos2d::CCObject* sender);
    
private:
    [[deprecated("RewardsPage::tryGetRewards not implemented")]]
    /**
     */
    TodoReturn tryGetRewards();
public:
    
private:
    [[deprecated("RewardsPage::unlockLayerClosed not implemented")]]
    /**
     */
    TodoReturn unlockLayerClosed(RewardUnlockLayer* p0);
public:
    
private:
    [[deprecated("RewardsPage::updateTimers not implemented")]]
    /**
     */
    TodoReturn updateTimers(float p0);
public:

    /**
     * @note[short] Windows: 0x2f67f0
     */
    virtual bool init();
    
private:
    [[deprecated("RewardsPage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("RewardsPage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("RewardsPage::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("RewardsPage::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("RewardsPage::rewardsStatusFinished not implemented")]]
    /**
     */
    virtual TodoReturn rewardsStatusFinished(int p0);
public:
    
private:
    [[deprecated("RewardsPage::rewardsStatusFailed not implemented")]]
    /**
     */
    virtual TodoReturn rewardsStatusFailed();
public:
    cocos2d::CCLabelBMFont* m_leftLabel;
    cocos2d::CCLabelBMFont* m_rightLabel;
    CCMenuItemSpriteExtra* m_leftChest;
    CCMenuItemSpriteExtra* m_rightChest;
    bool m_leftOpen;
    bool m_rightOpen;
    cocos2d::CCNode* m_openLayer;
};
