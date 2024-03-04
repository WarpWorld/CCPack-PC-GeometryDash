#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class GradientTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GradientTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GradientTriggerObject, EffectGameObject)
    
private:
    [[deprecated("GradientTriggerObject::create not implemented")]]
    /**
     */
    static GradientTriggerObject* create();
public:
    
private:
    [[deprecated("GradientTriggerObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GradientTriggerObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("GradientTriggerObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
