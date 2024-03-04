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

class GJRotateCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJRotateCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRotateCommandLayer, SetupTriggerPopup)
    
private:
    [[deprecated("GJRotateCommandLayer::create not implemented")]]
    /**
     */
    static GJRotateCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::onEasing not implemented")]]
    /**
     */
    void onEasing(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::onEasingRate not implemented")]]
    /**
     */
    void onEasingRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::onFollowRotation not implemented")]]
    /**
     */
    void onFollowRotation(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::onLockRotation not implemented")]]
    /**
     */
    void onLockRotation(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::onUpdateGroupID not implemented")]]
    /**
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::onUpdateGroupID2 not implemented")]]
    /**
     */
    void onUpdateGroupID2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::sliderDegreesChanged not implemented")]]
    /**
     */
    TodoReturn sliderDegreesChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::sliderTimesChanged not implemented")]]
    /**
     */
    TodoReturn sliderTimesChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::toggleEasingRateVisibility not implemented")]]
    /**
     */
    TodoReturn toggleEasingRateVisibility();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateCommandDegrees not implemented")]]
    /**
     */
    TodoReturn updateCommandDegrees();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateCommandTimes not implemented")]]
    /**
     */
    TodoReturn updateCommandTimes();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateDegreesLabel not implemented")]]
    /**
     */
    TodoReturn updateDegreesLabel();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateDuration not implemented")]]
    /**
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateDurLabel not implemented")]]
    /**
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateEasingLabel not implemented")]]
    /**
     */
    TodoReturn updateEasingLabel();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateEasingRateLabel not implemented")]]
    /**
     */
    TodoReturn updateEasingRateLabel();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateMoveCommandEasing not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandEasing();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateMoveCommandEasingRate not implemented")]]
    /**
     */
    TodoReturn updateMoveCommandEasingRate();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateTargetGroupID not implemented")]]
    /**
     */
    TodoReturn updateTargetGroupID();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateTargetGroupID2 not implemented")]]
    /**
     */
    TodoReturn updateTargetGroupID2();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateTextInputLabel2 not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel2();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::updateTimesLabel not implemented")]]
    /**
     */
    TodoReturn updateTimesLabel();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("GJRotateCommandLayer::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("GJRotateCommandLayer::valuePopupClosed not implemented")]]
    /**
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
public:
};
