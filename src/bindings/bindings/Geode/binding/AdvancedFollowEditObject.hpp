#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "AdvancedFollowTriggerObject.hpp"

class AdvancedFollowEditObject : public AdvancedFollowTriggerObject {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowEditObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdvancedFollowEditObject, AdvancedFollowTriggerObject)
    
private:
    [[deprecated("AdvancedFollowEditObject::create not implemented")]]
    /**
     */
    static AdvancedFollowEditObject* create(char const* p0);
public:
    
private:
    [[deprecated("AdvancedFollowEditObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("AdvancedFollowEditObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("AdvancedFollowEditObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
