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

class RingObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RingObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RingObject, EffectGameObject)
    
private:
    [[deprecated("RingObject::create not implemented")]]
    /**
     */
    static RingObject* create(char const* p0);
public:
    
private:
    [[deprecated("RingObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("RingObject::spawnCircle not implemented")]]
    /**
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("RingObject::setScale not implemented")]]
    /**
     */
    virtual void setScale(float p0);
public:
    
private:
    [[deprecated("RingObject::setRotation not implemented")]]
    /**
     */
    virtual void setRotation(float p0);
public:
    
private:
    [[deprecated("RingObject::resetObject not implemented")]]
    /**
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("RingObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("RingObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("RingObject::setRScale not implemented")]]
    /**
     */
    virtual void setRScale(float p0);
public:
    
private:
    [[deprecated("RingObject::triggerActivated not implemented")]]
    /**
     */
    virtual TodoReturn triggerActivated(float p0);
public:
    
private:
    [[deprecated("RingObject::shouldDrawEditorHitbox not implemented")]]
    /**
     */
    virtual TodoReturn shouldDrawEditorHitbox();
public:
    
private:
    [[deprecated("RingObject::powerOnObject not implemented")]]
    /**
     */
    virtual TodoReturn powerOnObject(int p0);
public:
    bool m_claimTouch;
    bool m_isSpawnOnly;
};
