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

class SetupTeleportPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTeleportPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTeleportPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupTeleportPopup::create not implemented")]]
    /**
     */
    static SetupTeleportPopup* create(TeleportPortalObject* p0, cocos2d::CCArray* p1, int p2, bool p3);
public:
    
private:
    [[deprecated("SetupTeleportPopup::init not implemented")]]
    /**
     */
    bool init(TeleportPortalObject* p0, cocos2d::CCArray* p1, int p2, bool p3);
public:
    
private:
    [[deprecated("SetupTeleportPopup::onTeleportGravity not implemented")]]
    /**
     */
    void onTeleportGravity(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTeleportPopup::updateTeleportGravityState not implemented")]]
    /**
     */
    TodoReturn updateTeleportGravityState(int p0);
public:
    
private:
    [[deprecated("SetupTeleportPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupTeleportPopup::updateDefaultTriggerValues not implemented")]]
    /**
     */
    virtual TodoReturn updateDefaultTriggerValues();
public:
    
private:
    [[deprecated("SetupTeleportPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
};
