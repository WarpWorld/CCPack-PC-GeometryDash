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
#include "HSVWidgetDelegate.hpp"

class HSVLiveOverlay : public FLAlertLayer, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "HSVLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVLiveOverlay, FLAlertLayer)
    
private:
    [[deprecated("HSVLiveOverlay::create not implemented")]]
    /**
     */
    static HSVLiveOverlay* create(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("HSVLiveOverlay::closeColorSelect not implemented")]]
    /**
     */
    TodoReturn closeColorSelect(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("HSVLiveOverlay::createHSVWidget not implemented")]]
    /**
     */
    TodoReturn createHSVWidget(int p0);
public:
    
private:
    [[deprecated("HSVLiveOverlay::determineStartValues not implemented")]]
    /**
     */
    TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("HSVLiveOverlay::init not implemented")]]
    /**
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("HSVLiveOverlay::onSelectTab not implemented")]]
    /**
     */
    void onSelectTab(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("HSVLiveOverlay::toggleControls not implemented")]]
    /**
     */
    TodoReturn toggleControls(bool p0);
public:
    
private:
    [[deprecated("HSVLiveOverlay::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("HSVLiveOverlay::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("HSVLiveOverlay::hsvChanged not implemented")]]
    /**
     */
    virtual TodoReturn hsvChanged(ConfigureHSVWidget* p0);
public:
};
