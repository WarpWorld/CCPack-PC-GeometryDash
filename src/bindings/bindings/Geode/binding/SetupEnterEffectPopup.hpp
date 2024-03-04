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
#include "HSVWidgetDelegate.hpp"

class SetupEnterEffectPopup : public SetupTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupEnterEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEnterEffectPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupEnterEffectPopup::create not implemented")]]
    /**
     */
    static SetupEnterEffectPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::init not implemented")]]
    /**
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onEnterType not implemented")]]
    /**
     */
    void onEnterType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onHSV not implemented")]]
    /**
     */
    void onHSV(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onNextFreeEnterChannel not implemented")]]
    /**
     */
    void onNextFreeEnterChannel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onNextFreeEnterEffectID not implemented")]]
    /**
     */
    void onNextFreeEnterEffectID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::updateHSVButton not implemented")]]
    /**
     */
    TodoReturn updateHSVButton();
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::updateInputValue not implemented")]]
    /**
     */
    virtual TodoReturn updateInputValue(int p0, float& p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::updateInputNode not implemented")]]
    /**
     */
    virtual TodoReturn updateInputNode(int p0, float p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::triggerValueFromSliderValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::triggerSliderValueFromValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::hsvPopupClosed not implemented")]]
    /**
     */
    virtual TodoReturn hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
public:
};
