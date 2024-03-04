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

class CustomizeObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x7a340
     */
    static CustomizeObjectSettingsPopup* create(GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2);

    /**
     * @note[short] Windows: 0x7a3f0
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2);
    
private:
    [[deprecated("CustomizeObjectSettingsPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectSettingsPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
