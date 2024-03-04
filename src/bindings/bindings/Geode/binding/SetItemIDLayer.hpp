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

class SetItemIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetItemIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetItemIDLayer, SetupTriggerPopup)
    
private:
    [[deprecated("SetItemIDLayer::create not implemented")]]
    /**
     */
    static SetItemIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetItemIDLayer::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetItemIDLayer::updateEditorLabel not implemented")]]
    /**
     */
    TodoReturn updateEditorLabel();
public:
    
private:
    [[deprecated("SetItemIDLayer::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetItemIDLayer::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetItemIDLayer::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
