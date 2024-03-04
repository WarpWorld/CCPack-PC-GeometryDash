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

class SetupPickupTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPickupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPickupTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x340b80
     */
    static SetupPickupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x340c30
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupPickupTriggerPopup::updateState not implemented")]]
    /**
     */
    TodoReturn updateState();
public:
    
private:
    [[deprecated("SetupPickupTriggerPopup::onPlusButton not implemented")]]
    /**
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPickupTriggerPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
