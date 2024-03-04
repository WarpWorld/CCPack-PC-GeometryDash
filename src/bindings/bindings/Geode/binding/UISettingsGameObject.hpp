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

class UISettingsGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "UISettingsGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISettingsGameObject, EffectGameObject)
    
private:
    [[deprecated("UISettingsGameObject::create not implemented")]]
    /**
     */
    static UISettingsGameObject* create();
public:
    
private:
    [[deprecated("UISettingsGameObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("UISettingsGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("UISettingsGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
