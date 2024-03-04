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

class SetupOptionsTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOptionsTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOptionsTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x340390
     */
    static SetupOptionsTriggerPopup* create(GameOptionsTrigger* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupOptionsTriggerPopup::addOption not implemented")]]
    /**
     */
    TodoReturn addOption(int p0, gd::string p1);
public:

    /**
     * @note[short] Windows: 0x340440
     */
    bool init(GameOptionsTrigger* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupOptionsTriggerPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
