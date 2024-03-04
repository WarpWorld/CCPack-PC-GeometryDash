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

class SetupStaticCameraPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupStaticCameraPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupStaticCameraPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupStaticCameraPopup::create not implemented")]]
    /**
     */
    static SetupStaticCameraPopup* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupStaticCameraPopup::init not implemented")]]
    /**
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupStaticCameraPopup::updateState not implemented")]]
    /**
     */
    TodoReturn updateState();
public:
    
private:
    [[deprecated("SetupStaticCameraPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupStaticCameraPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
