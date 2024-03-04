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

class SetupInteractObjectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInteractObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInteractObjectPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupInteractObjectPopup::create not implemented")]]
    /**
     */
    static SetupInteractObjectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::updateItems not implemented")]]
    /**
     */
    TodoReturn updateItems();
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::onPlusButton not implemented")]]
    /**
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
};
