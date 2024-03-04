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

class UIObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIObjectSettingsPopup, SetupTriggerPopup)
    
private:
    [[deprecated("UIObjectSettingsPopup::create not implemented")]]
    /**
     */
    static UIObjectSettingsPopup* create(UISettingsGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("UIObjectSettingsPopup::init not implemented")]]
    /**
     */
    bool init(UISettingsGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("UIObjectSettingsPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
