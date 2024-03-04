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

class GameOptionsTrigger : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GameOptionsTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsTrigger, EffectGameObject)
    
private:
    [[deprecated("GameOptionsTrigger::create not implemented")]]
    /**
     */
    static GameOptionsTrigger* create(char const* p0);
public:
    
private:
    [[deprecated("GameOptionsTrigger::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("GameOptionsTrigger::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("GameOptionsTrigger::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
