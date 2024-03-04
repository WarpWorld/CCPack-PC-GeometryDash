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
#include "NumberInputDelegate.hpp"

class ShareLevelSettingsLayer : public FLAlertLayer, public NumberInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareLevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelSettingsLayer, FLAlertLayer)
    
private:
    [[deprecated("ShareLevelSettingsLayer::create not implemented")]]
    /**
     */
    static ShareLevelSettingsLayer* create(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0x389b10
     */
    bool init(GJGameLevel* p0);
    
private:
    [[deprecated("ShareLevelSettingsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::onCopyable not implemented")]]
    /**
     */
    void onCopyable(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::onEditPassword not implemented")]]
    /**
     */
    void onEditPassword(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::onPassword not implemented")]]
    /**
     */
    void onPassword(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::onUnlisted not implemented")]]
    /**
     */
    void onUnlisted(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::onUnlistedFriendsOnly not implemented")]]
    /**
     */
    void onUnlistedFriendsOnly(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::updateSettingsState not implemented")]]
    /**
     */
    TodoReturn updateSettingsState();
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::numberInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn numberInputClosed(NumberInputLayer* p0);
public:
};
