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

class SetupMoveCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMoveCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMoveCommandPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x1f9810
     */
    static SetupMoveCommandPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x1f98c0
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupMoveCommandPopup::updateControlVisibility not implemented")]]
    /**
     */
    TodoReturn updateControlVisibility();
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::updateInputValue not implemented")]]
    /**
     */
    virtual TodoReturn updateInputValue(int p0, float& p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::updateInputNode not implemented")]]
    /**
     */
    virtual TodoReturn updateInputNode(int p0, float p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::triggerValueFromSliderValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::triggerSliderValueFromValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
