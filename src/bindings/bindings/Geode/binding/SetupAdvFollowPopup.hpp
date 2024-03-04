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
#include "SelectPremadeDelegate.hpp"

class SetupAdvFollowPopup : public SetupTriggerPopup, public SelectPremadeDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAdvFollowPopup::create not implemented")]]
    /**
     */
    static SetupAdvFollowPopup* create(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::init not implemented")]]
    /**
     */
    bool init(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::onMode not implemented")]]
    /**
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::onPremade not implemented")]]
    /**
     */
    void onPremade(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::updateMode not implemented")]]
    /**
     */
    TodoReturn updateMode(int p0);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::updateDefaultTriggerValues not implemented")]]
    /**
     */
    virtual TodoReturn updateDefaultTriggerValues();
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::selectPremadeClosed not implemented")]]
    /**
     */
    virtual TodoReturn selectPremadeClosed(SelectPremadeLayer* p0, int p1);
public:
};
