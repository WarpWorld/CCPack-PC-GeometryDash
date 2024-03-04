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

class SetupCameraModePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraModePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraModePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupCameraModePopup::create not implemented")]]
    /**
     */
    static SetupCameraModePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraModePopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraModePopup::onEditCameraSettings not implemented")]]
    /**
     */
    void onEditCameraSettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraModePopup::onUnboundMode not implemented")]]
    /**
     */
    void onUnboundMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraModePopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraModePopup::updateCameraEasing not implemented")]]
    /**
     */
    TodoReturn updateCameraEasing();
public:
    
private:
    [[deprecated("SetupCameraModePopup::updateCameraEasingLabel not implemented")]]
    /**
     */
    TodoReturn updateCameraEasingLabel();
public:
    
private:
    [[deprecated("SetupCameraModePopup::updateCameraPadding not implemented")]]
    /**
     */
    TodoReturn updateCameraPadding();
public:
    
private:
    [[deprecated("SetupCameraModePopup::updateCameraPaddingLabel not implemented")]]
    /**
     */
    TodoReturn updateCameraPaddingLabel();
public:
    
private:
    [[deprecated("SetupCameraModePopup::updateItemVisibility not implemented")]]
    /**
     */
    TodoReturn updateItemVisibility();
public:
    
private:
    [[deprecated("SetupCameraModePopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupCameraModePopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
