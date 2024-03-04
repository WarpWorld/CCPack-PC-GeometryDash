#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceTriggerGameObject.hpp"

class RandTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "RandTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RandTriggerGameObject, ChanceTriggerGameObject)
    
private:
    [[deprecated("RandTriggerGameObject::create not implemented")]]
    /**
     */
    static RandTriggerGameObject* create();
public:
    
private:
    [[deprecated("RandTriggerGameObject::getRandomGroupID not implemented")]]
    /**
     */
    TodoReturn getRandomGroupID();
public:
    
private:
    [[deprecated("RandTriggerGameObject::getTotalChance not implemented")]]
    /**
     */
    TodoReturn getTotalChance();
public:
    
private:
    [[deprecated("RandTriggerGameObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("RandTriggerGameObject::triggerObject not implemented")]]
    /**
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("RandTriggerGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("RandTriggerGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
