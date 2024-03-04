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

class ConfigureValuePopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ConfigureValuePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ConfigureValuePopup, FLAlertLayer)
    
private:
    [[deprecated("ConfigureValuePopup::create not implemented")]]
    /**
     */
    static ConfigureValuePopup* create(ConfigureValuePopupDelegate* p0, float p1, float p2, float p3, gd::string p4, gd::string p5);
public:
    
private:
    [[deprecated("ConfigureValuePopup::init not implemented")]]
    /**
     */
    bool init(ConfigureValuePopupDelegate* p0, float p1, float p2, float p3, gd::string p4, gd::string p5);
public:
    
private:
    [[deprecated("ConfigureValuePopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ConfigureValuePopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("ConfigureValuePopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("ConfigureValuePopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("ConfigureValuePopup::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("ConfigureValuePopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
