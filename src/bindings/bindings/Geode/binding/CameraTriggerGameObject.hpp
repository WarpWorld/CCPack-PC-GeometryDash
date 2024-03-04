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

class CameraTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CameraTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CameraTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("CameraTriggerGameObject::create not implemented")]]
    /**
     */
    static CameraTriggerGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("CameraTriggerGameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("CameraTriggerGameObject::triggerObject not implemented")]]
    /**
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("CameraTriggerGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("CameraTriggerGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
