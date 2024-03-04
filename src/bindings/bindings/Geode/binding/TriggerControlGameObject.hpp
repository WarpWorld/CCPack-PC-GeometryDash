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

class TriggerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TriggerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TriggerControlGameObject, EffectGameObject)
    
private:
    [[deprecated("TriggerControlGameObject::create not implemented")]]
    /**
     */
    static TriggerControlGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("TriggerControlGameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("TriggerControlGameObject::updateTriggerControlFrame not implemented")]]
    /**
     */
    TodoReturn updateTriggerControlFrame();
public:
    
private:
    [[deprecated("TriggerControlGameObject::triggerObject not implemented")]]
    /**
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("TriggerControlGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("TriggerControlGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
