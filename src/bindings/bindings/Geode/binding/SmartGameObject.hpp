#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class SmartGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "SmartGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartGameObject, GameObject)
    
private:
    [[deprecated("SmartGameObject::create not implemented")]]
    /**
     */
    static SmartGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("SmartGameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("SmartGameObject::updateSmartFrame not implemented")]]
    /**
     */
    TodoReturn updateSmartFrame();
public:
    
private:
    [[deprecated("SmartGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SmartGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    bool m_property157;
};
