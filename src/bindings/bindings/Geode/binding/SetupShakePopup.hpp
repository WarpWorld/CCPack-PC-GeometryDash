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

class SetupShakePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShakePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShakePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupShakePopup::create not implemented")]]
    /**
     */
    static SetupShakePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupShakePopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupShakePopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupShakePopup::updateDuration not implemented")]]
    /**
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupShakePopup::updateDurLabel not implemented")]]
    /**
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupShakePopup::updateInterval not implemented")]]
    /**
     */
    TodoReturn updateInterval();
public:
    
private:
    [[deprecated("SetupShakePopup::updateIntervalLabel not implemented")]]
    /**
     */
    TodoReturn updateIntervalLabel(bool p0);
public:
    
private:
    [[deprecated("SetupShakePopup::updateShake not implemented")]]
    /**
     */
    TodoReturn updateShake();
public:
    
private:
    [[deprecated("SetupShakePopup::updateShakeLabel not implemented")]]
    /**
     */
    TodoReturn updateShakeLabel(bool p0);
public:
    
private:
    [[deprecated("SetupShakePopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupShakePopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupShakePopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
