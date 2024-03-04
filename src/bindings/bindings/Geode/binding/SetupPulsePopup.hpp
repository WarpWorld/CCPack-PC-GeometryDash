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
#include "GJSpecialColorSelectDelegate.hpp"

class SetupPulsePopup : public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupPulsePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPulsePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupPulsePopup::create not implemented")]]
    /**
     */
    static SetupPulsePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupPulsePopup::getColorValue not implemented")]]
    /**
     */
    TodoReturn getColorValue();
public:
    
private:
    [[deprecated("SetupPulsePopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupPulsePopup::onCopy not implemented")]]
    /**
     */
    void onCopy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onExclusive not implemented")]]
    /**
     */
    void onExclusive(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onGroupMainOnly not implemented")]]
    /**
     */
    void onGroupMainOnly(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onGroupSecondaryOnly not implemented")]]
    /**
     */
    void onGroupSecondaryOnly(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onHSVLegacyMode not implemented")]]
    /**
     */
    void onHSVLegacyMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onPaste not implemented")]]
    /**
     */
    void onPaste(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onSelectPulseMode not implemented")]]
    /**
     */
    void onSelectPulseMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onSelectSpecialColor not implemented")]]
    /**
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onSelectSpecialTargetID not implemented")]]
    /**
     */
    void onSelectSpecialTargetID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onSelectTargetMode not implemented")]]
    /**
     */
    void onSelectTargetMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onUpdateCopyColor not implemented")]]
    /**
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::onUpdateCustomColor not implemented")]]
    /**
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::selectColor not implemented")]]
    /**
     */
    TodoReturn selectColor(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("SetupPulsePopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupPulsePopup::updateColorLabels not implemented")]]
    /**
     */
    TodoReturn updateColorLabels();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateColorValue not implemented")]]
    /**
     */
    TodoReturn updateColorValue();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateCopyColor not implemented")]]
    /**
     */
    TodoReturn updateCopyColor();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateCopyColorTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateCopyColorTextInputLabel();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateFadeInLabel not implemented")]]
    /**
     */
    TodoReturn updateFadeInLabel(bool p0);
public:
    
private:
    [[deprecated("SetupPulsePopup::updateFadeInTime not implemented")]]
    /**
     */
    TodoReturn updateFadeInTime();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateFadeOutLabel not implemented")]]
    /**
     */
    TodoReturn updateFadeOutLabel(bool p0);
public:
    
private:
    [[deprecated("SetupPulsePopup::updateFadeOutTime not implemented")]]
    /**
     */
    TodoReturn updateFadeOutTime();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateGroupMainOnly not implemented")]]
    /**
     */
    TodoReturn updateGroupMainOnly();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateGroupSecondaryOnly not implemented")]]
    /**
     */
    TodoReturn updateGroupSecondaryOnly();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateHoldLabel not implemented")]]
    /**
     */
    TodoReturn updateHoldLabel(bool p0);
public:
    
private:
    [[deprecated("SetupPulsePopup::updateHoldTime not implemented")]]
    /**
     */
    TodoReturn updateHoldTime();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateHSVValue not implemented")]]
    /**
     */
    TodoReturn updateHSVValue();
public:
    
private:
    [[deprecated("SetupPulsePopup::updatePulseMode not implemented")]]
    /**
     */
    TodoReturn updatePulseMode();
public:
    
private:
    [[deprecated("SetupPulsePopup::updatePulseTargetType not implemented")]]
    /**
     */
    TodoReturn updatePulseTargetType();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateTargetID not implemented")]]
    /**
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupPulsePopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupPulsePopup::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("SetupPulsePopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupPulsePopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPulsePopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupPulsePopup::colorValueChanged not implemented")]]
    /**
     */
    virtual TodoReturn colorValueChanged(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("SetupPulsePopup::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupPulsePopup::colorSelectClosed not implemented")]]
    /**
     */
    virtual TodoReturn colorSelectClosed(GJSpecialColorSelect* p0, int p1);
public:
};
