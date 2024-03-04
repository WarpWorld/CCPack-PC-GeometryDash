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

class SetupRandTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x348530
     */
    static SetupRandTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x3485e0
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupRandTriggerPopup::onTargetID2Arrow not implemented")]]
    /**
     */
    void onTargetID2Arrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::onTargetIDArrow not implemented")]]
    /**
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateChance not implemented")]]
    /**
     */
    TodoReturn updateChance();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateChanceLabel not implemented")]]
    /**
     */
    TodoReturn updateChanceLabel(bool p0);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateTargetID not implemented")]]
    /**
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateTargetID2 not implemented")]]
    /**
     */
    TodoReturn updateTargetID2();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateTextInputLabel2 not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel2();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
