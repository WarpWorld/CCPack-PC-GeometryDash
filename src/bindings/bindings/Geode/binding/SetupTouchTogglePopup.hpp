#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupTouchTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTouchTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTouchTogglePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupTouchTogglePopup::create not implemented")]]
    /**
     */
    static SetupTouchTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onControlMode not implemented")]]
    /**
     */
    void onControlMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onDualTouchMode not implemented")]]
    /**
     */
    void onDualTouchMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onHoldMode not implemented")]]
    /**
     */
    void onHoldMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onTargetIDArrow not implemented")]]
    /**
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onTouchMode not implemented")]]
    /**
     */
    void onTouchMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::updateTargetID not implemented")]]
    /**
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
