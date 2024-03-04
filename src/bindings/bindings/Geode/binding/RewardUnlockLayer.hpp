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
#include "CurrencyRewardDelegate.hpp"

class RewardUnlockLayer : public FLAlertLayer, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardUnlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardUnlockLayer, FLAlertLayer)
    
private:
    [[deprecated("RewardUnlockLayer::create not implemented")]]
    /**
     */
    static RewardUnlockLayer* create(int p0, RewardsPage* p1);
public:
    
private:
    [[deprecated("RewardUnlockLayer::connectionTimeout not implemented")]]
    /**
     */
    TodoReturn connectionTimeout();
public:
    
private:
    [[deprecated("RewardUnlockLayer::init not implemented")]]
    /**
     */
    bool init(int p0, RewardsPage* p1);
public:
    
private:
    [[deprecated("RewardUnlockLayer::labelEnterFinishedO not implemented")]]
    /**
     */
    TodoReturn labelEnterFinishedO(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("RewardUnlockLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RewardUnlockLayer::playDropSound not implemented")]]
    /**
     */
    TodoReturn playDropSound();
public:
    
private:
    [[deprecated("RewardUnlockLayer::playLabelEffect not implemented")]]
    /**
     */
    TodoReturn playLabelEffect(int p0, int p1, cocos2d::CCSprite* p2, cocos2d::CCPoint p3, float p4);
public:
    
private:
    [[deprecated("RewardUnlockLayer::playRewardEffect not implemented")]]
    /**
     */
    TodoReturn playRewardEffect();
public:
    
private:
    [[deprecated("RewardUnlockLayer::readyToCollect not implemented")]]
    /**
     */
    TodoReturn readyToCollect(GJRewardItem* p0);
public:
    
private:
    [[deprecated("RewardUnlockLayer::showCloseButton not implemented")]]
    /**
     */
    TodoReturn showCloseButton();
public:

    /**
     * @note[short] Windows: 0x2f8860
     */
    TodoReturn showCollectReward(GJRewardItem* p0);
    
private:
    [[deprecated("RewardUnlockLayer::step2 not implemented")]]
    /**
     */
    TodoReturn step2();
public:
    
private:
    [[deprecated("RewardUnlockLayer::step3 not implemented")]]
    /**
     */
    TodoReturn step3();
public:
    
private:
    [[deprecated("RewardUnlockLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("RewardUnlockLayer::currencyWillExit not implemented")]]
    /**
     */
    virtual TodoReturn currencyWillExit(CurrencyRewardLayer* p0);
public:
};
