#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "RingObject.hpp"

class DashRingObject : public RingObject {
public:
    static constexpr auto CLASS_NAME = "DashRingObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DashRingObject, RingObject)
    
private:
    [[deprecated("DashRingObject::create not implemented")]]
    /**
     */
    static DashRingObject* create(char const* p0);
public:
    
private:
    [[deprecated("DashRingObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("DashRingObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("DashRingObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
