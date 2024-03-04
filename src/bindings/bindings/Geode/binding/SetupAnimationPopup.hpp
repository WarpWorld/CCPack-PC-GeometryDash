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

class SetupAnimationPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimationPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimationPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAnimationPopup::create not implemented")]]
    /**
     */
    static SetupAnimationPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAnimationPopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAnimationPopup::onAnimationIDArrow not implemented")]]
    /**
     */
    void onAnimationIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAnimationPopup::onTargetIDArrow not implemented")]]
    /**
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateAnimationID not implemented")]]
    /**
     */
    TodoReturn updateAnimationID();
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateAnimationTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateAnimationTextInputLabel();
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateTargetID not implemented")]]
    /**
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupAnimationPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupAnimationPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAnimationPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
