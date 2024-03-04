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

class SetupKeyframePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupKeyframePopup::create not implemented")]]
    /**
     */
    static SetupKeyframePopup* create(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);
public:
    
private:
    [[deprecated("SetupKeyframePopup::init not implemented")]]
    /**
     */
    bool init(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);
public:
    
private:
    [[deprecated("SetupKeyframePopup::onTimeMode not implemented")]]
    /**
     */
    void onTimeMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupKeyframePopup::refreshPreviewArt not implemented")]]
    /**
     */
    TodoReturn refreshPreviewArt();
public:
    
private:
    [[deprecated("SetupKeyframePopup::updateTimeModeButtons not implemented")]]
    /**
     */
    TodoReturn updateTimeModeButtons();
public:
    
private:
    [[deprecated("SetupKeyframePopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupKeyframePopup::onCustomButton not implemented")]]
    /**
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupKeyframePopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupKeyframePopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
