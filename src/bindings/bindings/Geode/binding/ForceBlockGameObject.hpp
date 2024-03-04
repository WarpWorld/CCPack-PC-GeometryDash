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

class ForceBlockGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ForceBlockGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ForceBlockGameObject, EffectGameObject)
    
private:
    [[deprecated("ForceBlockGameObject::create not implemented")]]
    /**
     */
    static ForceBlockGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("ForceBlockGameObject::calculateForceToTarget not implemented")]]
    /**
     */
    TodoReturn calculateForceToTarget(GameObject* p0);
public:
    
private:
    [[deprecated("ForceBlockGameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("ForceBlockGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("ForceBlockGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
