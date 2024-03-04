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

class SetupForceBlockPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupForceBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupForceBlockPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupForceBlockPopup::create not implemented")]]
    /**
     */
    static SetupForceBlockPopup* create(ForceBlockGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupForceBlockPopup::init not implemented")]]
    /**
     */
    bool init(ForceBlockGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupForceBlockPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
};
