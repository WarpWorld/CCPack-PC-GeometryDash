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

class CheckpointGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CheckpointGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CheckpointGameObject, EffectGameObject)
    
private:
    [[deprecated("CheckpointGameObject::create not implemented")]]
    /**
     */
    static CheckpointGameObject* create();
public:
    
private:
    [[deprecated("CheckpointGameObject::resetCheckpoint not implemented")]]
    /**
     */
    TodoReturn resetCheckpoint();
public:
    
private:
    [[deprecated("CheckpointGameObject::updateCheckpointSpriteVisibility not implemented")]]
    /**
     */
    TodoReturn updateCheckpointSpriteVisibility();
public:
    
private:
    [[deprecated("CheckpointGameObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("CheckpointGameObject::setupCustomSprites not implemented")]]
    /**
     */
    virtual TodoReturn setupCustomSprites(gd::string p0);
public:
    
private:
    [[deprecated("CheckpointGameObject::resetObject not implemented")]]
    /**
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("CheckpointGameObject::triggerObject not implemented")]]
    /**
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("CheckpointGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("CheckpointGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("CheckpointGameObject::triggerActivated not implemented")]]
    /**
     */
    virtual TodoReturn triggerActivated(float p0);
public:
    
private:
    [[deprecated("CheckpointGameObject::restoreObject not implemented")]]
    /**
     */
    virtual TodoReturn restoreObject();
public:
    
private:
    [[deprecated("CheckpointGameObject::updateSyncedAnimation not implemented")]]
    /**
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
public:
};
