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

class SetupOpacityPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOpacityPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOpacityPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupOpacityPopup::create not implemented")]]
    /**
     */
    static SetupOpacityPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupOpacityPopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupOpacityPopup::onTargetIDArrow not implemented")]]
    /**
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupOpacityPopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateDuration not implemented")]]
    /**
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateDurLabel not implemented")]]
    /**
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateOpacity not implemented")]]
    /**
     */
    TodoReturn updateOpacity();
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateOpacityLabel not implemented")]]
    /**
     */
    TodoReturn updateOpacityLabel();
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateTargetID not implemented")]]
    /**
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupOpacityPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupOpacityPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupOpacityPopup::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupOpacityPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
