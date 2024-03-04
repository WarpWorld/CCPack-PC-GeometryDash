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

class SetupGradientPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGradientPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGradientPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupGradientPopup::create not implemented")]]
    /**
     */
    static SetupGradientPopup* create(GradientTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGradientPopup::init not implemented")]]
    /**
     */
    bool init(GradientTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGradientPopup::onBlending not implemented")]]
    /**
     */
    void onBlending(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGradientPopup::onZLayer not implemented")]]
    /**
     */
    void onZLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGradientPopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupGradientPopup::updateBlending not implemented")]]
    /**
     */
    TodoReturn updateBlending();
public:
    
private:
    [[deprecated("SetupGradientPopup::updateBlendingLabel not implemented")]]
    /**
     */
    TodoReturn updateBlendingLabel();
public:
    
private:
    [[deprecated("SetupGradientPopup::updateGradientLabels not implemented")]]
    /**
     */
    TodoReturn updateGradientLabels(bool p0);
public:
    
private:
    [[deprecated("SetupGradientPopup::updateZLayerButtons not implemented")]]
    /**
     */
    TodoReturn updateZLayerButtons();
public:
    
private:
    [[deprecated("SetupGradientPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupGradientPopup::onPlusButton not implemented")]]
    /**
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGradientPopup::updateToggleItem not implemented")]]
    /**
     */
    virtual TodoReturn updateToggleItem(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupGradientPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
};
