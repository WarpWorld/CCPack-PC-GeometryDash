#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "RewardedVideoDelegate.hpp"

class RetryLevelLayer : public GJDropDownLayer, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "RetryLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RetryLevelLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x2f54d0
     */
    static RetryLevelLayer* create();
    
private:
    [[deprecated("RetryLevelLayer::getEndText not implemented")]]
    /**
     */
    TodoReturn getEndText();
public:
    
private:
    [[deprecated("RetryLevelLayer::onEveryplay not implemented")]]
    /**
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2f6230
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f6140
     */
    void onReplay(cocos2d::CCObject* sender);
    
private:
    [[deprecated("RetryLevelLayer::onRewardedVideo not implemented")]]
    /**
     */
    void onRewardedVideo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RetryLevelLayer::setupLastProgress not implemented")]]
    /**
     */
    TodoReturn setupLastProgress();
public:
    
private:
    [[deprecated("RetryLevelLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("RetryLevelLayer::keyDown not implemented")]]
    /**
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:

    /**
     * @note[short] Windows: 0x2f5650
     */
    virtual void customSetup();
    
private:
    [[deprecated("RetryLevelLayer::showLayer not implemented")]]
    /**
     */
    virtual TodoReturn showLayer(bool p0);
public:
    
private:
    [[deprecated("RetryLevelLayer::enterAnimFinished not implemented")]]
    /**
     */
    virtual TodoReturn enterAnimFinished();
public:
    
private:
    [[deprecated("RetryLevelLayer::rewardedVideoFinished not implemented")]]
    /**
     */
    virtual TodoReturn rewardedVideoFinished();
public:
    
private:
    [[deprecated("RetryLevelLayer::shouldOffsetRewardCurrency not implemented")]]
    /**
     */
    virtual TodoReturn shouldOffsetRewardCurrency();
public:
    
private:
    [[deprecated("RetryLevelLayer::keyUp not implemented")]]
    /**
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
public:
};
