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

class ObjectControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ObjectControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ObjectControlGameObject, EffectGameObject)
    
private:
    [[deprecated("ObjectControlGameObject::create not implemented")]]
    /**
     */
    static ObjectControlGameObject* create();
public:
    
private:
    [[deprecated("ObjectControlGameObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("ObjectControlGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("ObjectControlGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
