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

class SetupCameraOffsetTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraOffsetTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraOffsetTrigger, SetupTriggerPopup)
    
private:
    [[deprecated("SetupCameraOffsetTrigger::create not implemented")]]
    /**
     */
    static SetupCameraOffsetTrigger* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::init not implemented")]]
    /**
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onEasing not implemented")]]
    /**
     */
    void onEasing(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onEasingRate not implemented")]]
    /**
     */
    void onEasingRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onTargetMode not implemented")]]
    /**
     */
    void onTargetMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::posFromSliderValue not implemented")]]
    /**
     */
    TodoReturn posFromSliderValue(float p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderValueFromPos not implemented")]]
    /**
     */
    TodoReturn sliderValueFromPos(int p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderXChanged not implemented")]]
    /**
     */
    TodoReturn sliderXChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderYChanged not implemented")]]
    /**
     */
    TodoReturn sliderYChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::toggleEasingRateVisibility not implemented")]]
    /**
     */
    TodoReturn toggleEasingRateVisibility();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateDuration not implemented")]]
    /**
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateDurLabel not implemented")]]
    /**
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateEasingLabel not implemented")]]
    /**
     */
    TodoReturn updateEasingLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateEasingRateLabel not implemented")]]
    /**
     */
    TodoReturn updateEasingRateLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandEasing not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandEasing();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandEasingRate not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandEasingRate();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandPosX not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandPosX();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandPosY not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandPosY();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateValueXLabel not implemented")]]
    /**
     */
    TodoReturn updateValueXLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateValueYLabel not implemented")]]
    /**
     */
    TodoReturn updateValueYLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::valuePopupClosed not implemented")]]
    /**
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
public:
};
