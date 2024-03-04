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

class SetupEndPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEndPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEndPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupEndPopup::create not implemented")]]
    /**
     */
    static SetupEndPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupEndPopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupEndPopup::onLockY not implemented")]]
    /**
     */
    void onLockY(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEndPopup::onMultiActivate not implemented")]]
    /**
     */
    void onMultiActivate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEndPopup::onReversed not implemented")]]
    /**
     */
    void onReversed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEndPopup::onTargetIDArrow not implemented")]]
    /**
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEndPopup::updateTargetID not implemented")]]
    /**
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupEndPopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupEndPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupEndPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEndPopup::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupEndPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
