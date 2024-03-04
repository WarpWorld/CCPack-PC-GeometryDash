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

class SetupCameraRotatePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraRotatePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraRotatePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupCameraRotatePopup::create not implemented")]]
    /**
     */
    static SetupCameraRotatePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::onEasing not implemented")]]
    /**
     */
    void onEasing(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::onEasingRate not implemented")]]
    /**
     */
    void onEasingRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::sliderDegreesChanged not implemented")]]
    /**
     */
    TodoReturn sliderDegreesChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::toggleEasingRateVisibility not implemented")]]
    /**
     */
    TodoReturn toggleEasingRateVisibility();
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::updateCommandDegrees not implemented")]]
    /**
     */
    TodoReturn updateCommandDegrees();
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::updateDegreesLabel not implemented")]]
    /**
     */
    TodoReturn updateDegreesLabel();
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::updateDuration not implemented")]]
    /**
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::updateDurLabel not implemented")]]
    /**
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::updateEasingLabel not implemented")]]
    /**
     */
    TodoReturn updateEasingLabel();
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::updateEasingRateLabel not implemented")]]
    /**
     */
    TodoReturn updateEasingRateLabel();
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::updateMoveCommandEasing not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandEasing();
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::updateMoveCommandEasingRate not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandEasingRate();
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupCameraRotatePopup::valuePopupClosed not implemented")]]
    /**
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
public:
};
