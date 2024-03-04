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

class SequenceTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SequenceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SequenceTriggerGameObject, ChanceTriggerGameObject)
    
private:
    [[deprecated("SequenceTriggerGameObject::create not implemented")]]
    /**
     */
    static SequenceTriggerGameObject* create();
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::addCount not implemented")]]
    /**
     */
    TodoReturn addCount(int p0, int p1);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::addTarget not implemented")]]
    /**
     */
    TodoReturn addTarget(int p0, int p1);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::deleteTarget not implemented")]]
    /**
     */
    TodoReturn deleteTarget(int p0);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::reorderTarget not implemented")]]
    /**
     */
    TodoReturn reorderTarget(int p0, bool p1);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::updateSequenceTotalCount not implemented")]]
    /**
     */
    TodoReturn updateSequenceTotalCount();
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::resetObject not implemented")]]
    /**
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::triggerObject not implemented")]]
    /**
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
