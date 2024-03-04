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

class KeyframeGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeGameObject, EffectGameObject)
    
private:
    [[deprecated("KeyframeGameObject::create not implemented")]]
    /**
     */
    static KeyframeGameObject* create();
public:
    
private:
    [[deprecated("KeyframeGameObject::updateShadowObjects not implemented")]]
    /**
     */
    TodoReturn updateShadowObjects(GJBaseGameLayer* p0, EditorUI* p1);
public:
    
private:
    [[deprecated("KeyframeGameObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("KeyframeGameObject::setOpacity not implemented")]]
    /**
     */
    virtual void setOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("KeyframeGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("KeyframeGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
