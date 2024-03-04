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

class SetupRotateGameplayPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateGameplayPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateGameplayPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupRotateGameplayPopup::create not implemented")]]
    /**
     */
    static SetupRotateGameplayPopup* create(RotateGameplayGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRotateGameplayPopup::init not implemented")]]
    /**
     */
    bool init(RotateGameplayGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRotateGameplayPopup::onPlusButton not implemented")]]
    /**
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRotateGameplayPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
};
