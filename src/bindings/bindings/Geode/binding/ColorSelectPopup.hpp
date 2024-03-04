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

class ColorSelectPopup : public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "ColorSelectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ColorSelectPopup, SetupTriggerPopup)
    
private:
    [[deprecated("ColorSelectPopup::create not implemented")]]
    /**
     */
    static ColorSelectPopup* create(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("ColorSelectPopup::create not implemented")]]
    /**
     */
    static ColorSelectPopup* create(ColorAction* p0);
public:

    /**
     * @note[short] Windows: 0x63a10
     */
    static ColorSelectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2);
    
private:
    [[deprecated("ColorSelectPopup::create not implemented")]]
    /**
     */
    static ColorSelectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] Windows: 0x66b30
     */
    TodoReturn closeColorSelect(cocos2d::CCObject* p0);
    
private:
    [[deprecated("ColorSelectPopup::colorToHex not implemented")]]
    /**
     */
    TodoReturn colorToHex(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("ColorSelectPopup::getColorValue not implemented")]]
    /**
     */
    TodoReturn getColorValue();
public:
    
private:
    [[deprecated("ColorSelectPopup::hexToColor not implemented")]]
    /**
     */
    TodoReturn hexToColor(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x63ac0
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2);
    
private:
    [[deprecated("ColorSelectPopup::onCopy not implemented")]]
    /**
     */
    void onCopy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onCopyOpacity not implemented")]]
    /**
     */
    void onCopyOpacity(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onDefault not implemented")]]
    /**
     */
    void onDefault(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onHSVLegacyMode not implemented")]]
    /**
     */
    void onHSVLegacyMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onPaste not implemented")]]
    /**
     */
    void onPaste(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onPlayerColor1 not implemented")]]
    /**
     */
    void onPlayerColor1(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onPlayerColor2 not implemented")]]
    /**
     */
    void onPlayerColor2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onSelectSpecialColor not implemented")]]
    /**
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onTintGround not implemented")]]
    /**
     */
    void onTintGround(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onToggleHSVMode not implemented")]]
    /**
     */
    void onToggleHSVMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onToggleTintMode not implemented")]]
    /**
     */
    void onToggleTintMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onUpdateCopyColor not implemented")]]
    /**
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onUpdateCustomColor not implemented")]]
    /**
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::selectColor not implemented")]]
    /**
     */
    TodoReturn selectColor(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("ColorSelectPopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("ColorSelectPopup::updateColorLabels not implemented")]]
    /**
     */
    TodoReturn updateColorLabels();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateColorValue not implemented")]]
    /**
     */
    TodoReturn updateColorValue();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateCopyColor not implemented")]]
    /**
     */
    TodoReturn updateCopyColor();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateCopyColorTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateCopyColorTextInputLabel();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateCustomColorIdx not implemented")]]
    /**
     */
    TodoReturn updateCustomColorIdx();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateDuration not implemented")]]
    /**
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateDurLabel not implemented")]]
    /**
     */
    TodoReturn updateDurLabel();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateHSVMode not implemented")]]
    /**
     */
    TodoReturn updateHSVMode();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateHSVValue not implemented")]]
    /**
     */
    TodoReturn updateHSVValue();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateOpacity not implemented")]]
    /**
     */
    TodoReturn updateOpacity();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateOpacityLabel not implemented")]]
    /**
     */
    TodoReturn updateOpacityLabel();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("ColorSelectPopup::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("ColorSelectPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("ColorSelectPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("ColorSelectPopup::colorValueChanged not implemented")]]
    /**
     */
    virtual TodoReturn colorValueChanged(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("ColorSelectPopup::colorSelectClosed not implemented")]]
    /**
     */
    virtual TodoReturn colorSelectClosed(GJSpecialColorSelect* p0, int p1);
public:
    GEODE_PAD(64);
    ColorAction* m_colorAction;
};
