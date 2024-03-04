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

class SetTargetIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetTargetIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTargetIDLayer, SetupTriggerPopup)
    
private:
    [[deprecated("SetTargetIDLayer::create not implemented")]]
    /**
     */
    static SetTargetIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1, gd::string p2, gd::string p3, int p4, int p5, int p6);
public:
    
private:
    [[deprecated("SetTargetIDLayer::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, gd::string p2, gd::string p3, int p4, int p5, int p6);
public:
    
private:
    [[deprecated("SetTargetIDLayer::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetTargetIDLayer::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
};
