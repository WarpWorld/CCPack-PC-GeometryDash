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
#include "GameRateDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class FollowRewardPage : public FLAlertLayer, public FLAlertLayerProtocol, public GameRateDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "FollowRewardPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FollowRewardPage, FLAlertLayer)
    
private:
    [[deprecated("FollowRewardPage::create not implemented")]]
    /**
     */
    static FollowRewardPage* create();
public:
    
private:
    [[deprecated("FollowRewardPage::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FollowRewardPage::onRewardedVideo not implemented")]]
    /**
     */
    void onRewardedVideo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FollowRewardPage::onSpecialItem not implemented")]]
    /**
     */
    void onSpecialItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FollowRewardPage::switchToOpenedState not implemented")]]
    /**
     */
    TodoReturn switchToOpenedState(CCMenuItemSpriteExtra* p0);
public:
    
private:
    [[deprecated("FollowRewardPage::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("FollowRewardPage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("FollowRewardPage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("FollowRewardPage::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("FollowRewardPage::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("FollowRewardPage::rewardedVideoFinished not implemented")]]
    /**
     */
    virtual TodoReturn rewardedVideoFinished();
public:
    
private:
    [[deprecated("FollowRewardPage::updateRate not implemented")]]
    /**
     */
    virtual TodoReturn updateRate();
public:
};
