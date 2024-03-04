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

class SFXTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SFXTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("SFXTriggerGameObject::create not implemented")]]
    /**
     */
    static SFXTriggerGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("SFXTriggerGameObject::getSFXRefID not implemented")]]
    /**
     */
    TodoReturn getSFXRefID();
public:
    
private:
    [[deprecated("SFXTriggerGameObject::getUniqueSFXID not implemented")]]
    /**
     */
    TodoReturn getUniqueSFXID();
public:
    
private:
    [[deprecated("SFXTriggerGameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("SFXTriggerGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SFXTriggerGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
