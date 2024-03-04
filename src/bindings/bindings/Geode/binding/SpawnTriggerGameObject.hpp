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

class SpawnTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("SpawnTriggerGameObject::create not implemented")]]
    /**
     */
    static SpawnTriggerGameObject* create();
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::addRemap not implemented")]]
    /**
     */
    TodoReturn addRemap(int p0, int p1);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::changeRemap not implemented")]]
    /**
     */
    TodoReturn changeRemap(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::removeRemap not implemented")]]
    /**
     */
    TodoReturn removeRemap(int p0, int p1);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::updateRemapKeys not implemented")]]
    /**
     */
    TodoReturn updateRemapKeys(gd::vector<int> const& p0);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::triggerObject not implemented")]]
    /**
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
