#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class SetupObjectOptionsPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptionsPopup, FLAlertLayer)
    
private:
    [[deprecated("SetupObjectOptionsPopup::create not implemented")]]
    /**
     */
    static SetupObjectOptionsPopup* create(GameObject* p0, cocos2d::CCArray* p1, SetGroupIDLayer* p2);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::init not implemented")]]
    /**
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1, SetGroupIDLayer* p2);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onAlwaysHide not implemented")]]
    /**
     */
    void onAlwaysHide(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onApplyScaleStick not implemented")]]
    /**
     */
    void onApplyScaleStick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onCenterEffect not implemented")]]
    /**
     */
    void onCenterEffect(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onDisableGlow not implemented")]]
    /**
     */
    void onDisableGlow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onDisableObject not implemented")]]
    /**
     */
    void onDisableObject(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onDontBoost not implemented")]]
    /**
     */
    void onDontBoost(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onDontBoostX not implemented")]]
    /**
     */
    void onDontBoostX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onDontEnter not implemented")]]
    /**
     */
    void onDontEnter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onDontFade not implemented")]]
    /**
     */
    void onDontFade(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onExtendedCollision not implemented")]]
    /**
     */
    void onExtendedCollision(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onExtraSticky not implemented")]]
    /**
     */
    void onExtraSticky(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onGripSlope not implemented")]]
    /**
     */
    void onGripSlope(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onHideEffects not implemented")]]
    /**
     */
    void onHideEffects(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onHighDetail not implemented")]]
    /**
     */
    void onHighDetail(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onIceBlock not implemented")]]
    /**
     */
    void onIceBlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onNoAudioScale not implemented")]]
    /**
     */
    void onNoAudioScale(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onNonStickX not implemented")]]
    /**
     */
    void onNonStickX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onNonStickY not implemented")]]
    /**
     */
    void onNonStickY(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onNoParticle not implemented")]]
    /**
     */
    void onNoParticle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onPassable not implemented")]]
    /**
     */
    void onPassable(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onReverse not implemented")]]
    /**
     */
    void onReverse(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onSinglePlayerTouch not implemented")]]
    /**
     */
    void onSinglePlayerTouch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onToggleAreaParent not implemented")]]
    /**
     */
    void onToggleAreaParent(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onToggleGroupParent not implemented")]]
    /**
     */
    void onToggleGroupParent(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupObjectOptionsPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
