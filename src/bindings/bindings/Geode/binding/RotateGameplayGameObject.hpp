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

class RotateGameplayGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RotateGameplayGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RotateGameplayGameObject, EffectGameObject)
    
private:
    [[deprecated("RotateGameplayGameObject::create not implemented")]]
    /**
     */
    static RotateGameplayGameObject* create();
public:
    
private:
    [[deprecated("RotateGameplayGameObject::updateGameplayRotation not implemented")]]
    /**
     */
    TodoReturn updateGameplayRotation();
public:
    
private:
    [[deprecated("RotateGameplayGameObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("RotateGameplayGameObject::updateStartValues not implemented")]]
    /**
     */
    virtual TodoReturn updateStartValues();
public:
    
private:
    [[deprecated("RotateGameplayGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("RotateGameplayGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
