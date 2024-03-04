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

class SetupMGTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMGTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMGTrigger, SetupTriggerPopup)
    
private:
    [[deprecated("SetupMGTrigger::create not implemented")]]
    /**
     */
    static SetupMGTrigger* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupMGTrigger::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupMGTrigger::onEasing not implemented")]]
    /**
     */
    void onEasing(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupMGTrigger::onEasingRate not implemented")]]
    /**
     */
    void onEasingRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupMGTrigger::posFromSliderValue not implemented")]]
    /**
     */
    TodoReturn posFromSliderValue(float p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::sliderValueFromPos not implemented")]]
    /**
     */
    TodoReturn sliderValueFromPos(int p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::sliderYChanged not implemented")]]
    /**
     */
    TodoReturn sliderYChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::toggleEasingRateVisibility not implemented")]]
    /**
     */
    TodoReturn toggleEasingRateVisibility();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateDuration not implemented")]]
    /**
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateDurLabel not implemented")]]
    /**
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::updateEasingLabel not implemented")]]
    /**
     */
    TodoReturn updateEasingLabel();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateEasingRateLabel not implemented")]]
    /**
     */
    TodoReturn updateEasingRateLabel();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateMoveCommandEasing not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandEasing();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateMoveCommandEasingRate not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandEasingRate();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateMoveCommandPosY not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandPosY();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateValueYLabel not implemented")]]
    /**
     */
    TodoReturn updateValueYLabel();
public:
    
private:
    [[deprecated("SetupMGTrigger::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupMGTrigger::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupMGTrigger::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::valuePopupClosed not implemented")]]
    /**
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
public:
};
