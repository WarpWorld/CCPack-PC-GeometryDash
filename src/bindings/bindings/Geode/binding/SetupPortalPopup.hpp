#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class SetupPortalPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupPortalPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPortalPopup, FLAlertLayer)
    
private:
    [[deprecated("SetupPortalPopup::create not implemented")]]
    /**
     */
    static SetupPortalPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupPortalPopup::determineStartValues not implemented")]]
    /**
     */
    TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupPortalPopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupPortalPopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPortalPopup::onEditCameraSettings not implemented")]]
    /**
     */
    void onEditCameraSettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPortalPopup::onUnboundMode not implemented")]]
    /**
     */
    void onUnboundMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPortalPopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupPortalPopup::updateCameraEasing not implemented")]]
    /**
     */
    TodoReturn updateCameraEasing();
public:
    
private:
    [[deprecated("SetupPortalPopup::updateCameraEasingLabel not implemented")]]
    /**
     */
    TodoReturn updateCameraEasingLabel();
public:
    
private:
    [[deprecated("SetupPortalPopup::updateCameraPadding not implemented")]]
    /**
     */
    TodoReturn updateCameraPadding();
public:
    
private:
    [[deprecated("SetupPortalPopup::updateCameraPaddingLabel not implemented")]]
    /**
     */
    TodoReturn updateCameraPaddingLabel();
public:
    
private:
    [[deprecated("SetupPortalPopup::updateItemVisibility not implemented")]]
    /**
     */
    TodoReturn updateItemVisibility();
public:
    
private:
    [[deprecated("SetupPortalPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
