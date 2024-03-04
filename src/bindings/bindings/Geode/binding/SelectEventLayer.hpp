#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SelectEventLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SelectEventLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectEventLayer, SetupTriggerPopup)
    
private:
    [[deprecated("SelectEventLayer::create not implemented")]]
    /**
     */
    static SelectEventLayer* create(SetupEventLinkPopup* p0, gd::set<int>& p1);
public:
    
private:
    [[deprecated("SelectEventLayer::addToggle not implemented")]]
    /**
     */
    TodoReturn addToggle(int p0, gd::string p1);
public:
    
private:
    [[deprecated("SelectEventLayer::init not implemented")]]
    /**
     */
    bool init(SetupEventLinkPopup* p0, gd::set<int>& p1);
public:
    
private:
    [[deprecated("SelectEventLayer::nextPosition not implemented")]]
    /**
     */
    TodoReturn nextPosition();
public:
    
private:
    [[deprecated("SelectEventLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectEventLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SelectEventLayer::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectEventLayer::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
