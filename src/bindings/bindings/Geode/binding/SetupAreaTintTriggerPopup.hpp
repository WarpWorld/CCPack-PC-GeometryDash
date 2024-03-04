#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAreaMoveTriggerPopup.hpp"
#include "HSVWidgetDelegate.hpp"

class SetupAreaTintTriggerPopup : public SetupAreaMoveTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTintTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTintTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Windows: 0x321690
     */
    static SetupAreaTintTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x321740
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupAreaTintTriggerPopup::onHSV not implemented")]]
    /**
     */
    void onHSV(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaTintTriggerPopup::updateHSVButton not implemented")]]
    /**
     */
    TodoReturn updateHSVButton();
public:
    
private:
    [[deprecated("SetupAreaTintTriggerPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupAreaTintTriggerPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaTintTriggerPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupAreaTintTriggerPopup::hsvPopupClosed not implemented")]]
    /**
     */
    virtual TodoReturn hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
public:
};
