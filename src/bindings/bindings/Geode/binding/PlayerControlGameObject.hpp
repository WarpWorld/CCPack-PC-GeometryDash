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

class PlayerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "PlayerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerControlGameObject, EffectGameObject)
    
private:
    [[deprecated("PlayerControlGameObject::create not implemented")]]
    /**
     */
    static PlayerControlGameObject* create();
public:
    
private:
    [[deprecated("PlayerControlGameObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("PlayerControlGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("PlayerControlGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
