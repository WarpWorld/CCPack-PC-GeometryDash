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

class AdvancedFollowTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdvancedFollowTriggerObject, EffectGameObject)
    
private:
    [[deprecated("AdvancedFollowTriggerObject::create not implemented")]]
    /**
     */
    static AdvancedFollowTriggerObject* create(char const* p0);
public:
    
private:
    [[deprecated("AdvancedFollowTriggerObject::getAdvancedFollowID not implemented")]]
    /**
     */
    TodoReturn getAdvancedFollowID();
public:
    
private:
    [[deprecated("AdvancedFollowTriggerObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("AdvancedFollowTriggerObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("AdvancedFollowTriggerObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
