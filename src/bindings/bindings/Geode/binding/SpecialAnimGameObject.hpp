#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class SpecialAnimGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "SpecialAnimGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpecialAnimGameObject, EnhancedGameObject)
    
private:
    [[deprecated("SpecialAnimGameObject::create not implemented")]]
    /**
     */
    static SpecialAnimGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::resetObject not implemented")]]
    /**
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("SpecialAnimGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::updateMainColor not implemented")]]
    /**
     */
    virtual TodoReturn updateMainColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::updateSecondaryColor not implemented")]]
    /**
     */
    virtual TodoReturn updateSecondaryColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::updateSyncedAnimation not implemented")]]
    /**
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
public:
};
