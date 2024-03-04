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

class SetupGameplayOffsetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGameplayOffsetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGameplayOffsetPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupGameplayOffsetPopup::create not implemented")]]
    /**
     */
    static SetupGameplayOffsetPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGameplayOffsetPopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGameplayOffsetPopup::onDefaultValues not implemented")]]
    /**
     */
    void onDefaultValues(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGameplayOffsetPopup::updateInputValue not implemented")]]
    /**
     */
    virtual TodoReturn updateInputValue(int p0, float& p1);
public:
    
private:
    [[deprecated("SetupGameplayOffsetPopup::updateInputNode not implemented")]]
    /**
     */
    virtual TodoReturn updateInputNode(int p0, float p1);
public:
    
private:
    [[deprecated("SetupGameplayOffsetPopup::triggerValueFromSliderValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupGameplayOffsetPopup::triggerSliderValueFromValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupGameplayOffsetPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
