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

class EnterEffectObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EnterEffectObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnterEffectObject, EffectGameObject)
    
private:
    [[deprecated("EnterEffectObject::create not implemented")]]
    /**
     */
    static EnterEffectObject* create(char const* p0);
public:
    
private:
    [[deprecated("EnterEffectObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("EnterEffectObject::resetEnterAnimValues not implemented")]]
    /**
     */
    TodoReturn resetEnterAnimValues();
public:
    
private:
    [[deprecated("EnterEffectObject::customSetup not implemented")]]
    /**
     */
    virtual void customSetup();
public:
    
private:
    [[deprecated("EnterEffectObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("EnterEffectObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
