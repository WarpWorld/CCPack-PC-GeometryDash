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

class SetupGravityModPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupGravityModPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGravityModPopup, FLAlertLayer)
    
private:
    [[deprecated("SetupGravityModPopup::create not implemented")]]
    /**
     */
    static SetupGravityModPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
public:
    
private:
    [[deprecated("SetupGravityModPopup::determineStartValues not implemented")]]
    /**
     */
    TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupGravityModPopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
public:
    
private:
    [[deprecated("SetupGravityModPopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGravityModPopup::onItemIDArrow not implemented")]]
    /**
     */
    void onItemIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGravityModPopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupGravityModPopup::updateItemID not implemented")]]
    /**
     */
    TodoReturn updateItemID();
public:
    
private:
    [[deprecated("SetupGravityModPopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupGravityModPopup::updateValue not implemented")]]
    /**
     */
    TodoReturn updateValue();
public:
    
private:
    [[deprecated("SetupGravityModPopup::updateValueLabel not implemented")]]
    /**
     */
    TodoReturn updateValueLabel();
public:
    
private:
    [[deprecated("SetupGravityModPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SetupGravityModPopup::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("SetupGravityModPopup::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupGravityModPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
