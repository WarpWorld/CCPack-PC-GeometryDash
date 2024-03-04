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

class SetupShaderEffectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShaderEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShaderEffectPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupShaderEffectPopup::create not implemented")]]
    /**
     */
    static SetupShaderEffectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::onResetColors not implemented")]]
    /**
     */
    void onResetColors(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::onZLayer not implemented")]]
    /**
     */
    void onZLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupBulge not implemented")]]
    /**
     */
    TodoReturn setupBulge();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupChromatic not implemented")]]
    /**
     */
    TodoReturn setupChromatic();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupChromaticGlitch not implemented")]]
    /**
     */
    TodoReturn setupChromaticGlitch();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupColorChange not implemented")]]
    /**
     */
    TodoReturn setupColorChange();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupGlitch not implemented")]]
    /**
     */
    TodoReturn setupGlitch();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupGrayscale not implemented")]]
    /**
     */
    TodoReturn setupGrayscale();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupHueShift not implemented")]]
    /**
     */
    TodoReturn setupHueShift();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupInvertColor not implemented")]]
    /**
     */
    TodoReturn setupInvertColor();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupLensCircle not implemented")]]
    /**
     */
    TodoReturn setupLensCircle();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupMotionBlur not implemented")]]
    /**
     */
    TodoReturn setupMotionBlur();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupPinch not implemented")]]
    /**
     */
    TodoReturn setupPinch();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupPixelate not implemented")]]
    /**
     */
    TodoReturn setupPixelate();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupRadialBlur not implemented")]]
    /**
     */
    TodoReturn setupRadialBlur();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupSepia not implemented")]]
    /**
     */
    TodoReturn setupSepia();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupShaderTrigger not implemented")]]
    /**
     */
    TodoReturn setupShaderTrigger();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupShockLine not implemented")]]
    /**
     */
    TodoReturn setupShockLine();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupShockWave not implemented")]]
    /**
     */
    TodoReturn setupShockWave();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupSplitScreen not implemented")]]
    /**
     */
    TodoReturn setupSplitScreen();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::updateZLayerButtons not implemented")]]
    /**
     */
    TodoReturn updateZLayerButtons();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::zLayerToString not implemented")]]
    /**
     */
    TodoReturn zLayerToString(int p0);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::toggleGroup not implemented")]]
    /**
     */
    virtual TodoReturn toggleGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::updateDefaultTriggerValues not implemented")]]
    /**
     */
    virtual TodoReturn updateDefaultTriggerValues();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
};
