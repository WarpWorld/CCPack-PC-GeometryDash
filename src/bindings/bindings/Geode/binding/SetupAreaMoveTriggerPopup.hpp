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

class SetupAreaMoveTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaMoveTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaMoveTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x31e580
     */
    static SetupAreaMoveTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::addAreaDefaultControls not implemented")]]
    /**
     */
    TodoReturn addAreaDefaultControls(int p0);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::getModeValues not implemented")]]
    /**
     */
    TodoReturn getModeValues(int p0, int& p1, bool& p2, bool& p3);
public:

    /**
     * @note[short] Windows: 0x31e630
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::onMode not implemented")]]
    /**
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::onNextFreeEffectID not implemented")]]
    /**
     */
    void onNextFreeEffectID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::onSpecialTarget not implemented")]]
    /**
     */
    void onSpecialTarget(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::updateEnterTargetIDState not implemented")]]
    /**
     */
    TodoReturn updateEnterTargetIDState();
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::updateInputValue not implemented")]]
    /**
     */
    virtual TodoReturn updateInputValue(int p0, float& p1);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::updateDefaultTriggerValues not implemented")]]
    /**
     */
    virtual TodoReturn updateDefaultTriggerValues();
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::updateInputNode not implemented")]]
    /**
     */
    virtual TodoReturn updateInputNode(int p0, float p1);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::triggerValueFromSliderValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::triggerSliderValueFromValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
public:
};
