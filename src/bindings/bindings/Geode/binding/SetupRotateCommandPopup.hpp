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

class SetupRotateCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateCommandPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x2188f0
     */
    static SetupRotateCommandPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x2189a0
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupRotateCommandPopup::onInfiniteDuration not implemented")]]
    /**
     */
    void onInfiniteDuration(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::updateControlVisibility not implemented")]]
    /**
     */
    TodoReturn updateControlVisibility();
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::updateInputNode not implemented")]]
    /**
     */
    virtual TodoReturn updateInputNode(int p0, float p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::triggerValueFromSliderValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::triggerSliderValueFromValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
