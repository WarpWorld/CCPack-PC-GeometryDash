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
#include "TextInputDelegate.hpp"

class GJAccountSettingsLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "GJAccountSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJAccountSettingsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x208440
     */
    static GJAccountSettingsLayer* create(int p0);
    
private:
    [[deprecated("GJAccountSettingsLayer::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6);
public:

    /**
     * @note[short] Windows: 0x2084f0
     */
    bool init(int p0);
    
private:
    [[deprecated("GJAccountSettingsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onCommentSetting not implemented")]]
    /**
     */
    void onCommentSetting(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onFriendRequests not implemented")]]
    /**
     */
    void onFriendRequests(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onMessageSetting not implemented")]]
    /**
     */
    void onMessageSetting(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onUpdate not implemented")]]
    /**
     */
    void onUpdate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::updateScoreValues not implemented")]]
    /**
     */
    TodoReturn updateScoreValues();
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::textInputShouldOffset not implemented")]]
    /**
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::textInputReturn not implemented")]]
    /**
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
};
