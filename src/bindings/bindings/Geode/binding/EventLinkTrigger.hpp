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

class EventLinkTrigger : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EventLinkTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EventLinkTrigger, EffectGameObject)
    
private:
    [[deprecated("EventLinkTrigger::create not implemented")]]
    /**
     */
    static EventLinkTrigger* create();
public:
    
private:
    [[deprecated("EventLinkTrigger::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("EventLinkTrigger::triggerObject not implemented")]]
    /**
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("EventLinkTrigger::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("EventLinkTrigger::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
