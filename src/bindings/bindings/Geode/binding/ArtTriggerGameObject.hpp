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

class ArtTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ArtTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ArtTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("ArtTriggerGameObject::create not implemented")]]
    /**
     */
    static ArtTriggerGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("ArtTriggerGameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("ArtTriggerGameObject::triggerObject not implemented")]]
    /**
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("ArtTriggerGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("ArtTriggerGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
