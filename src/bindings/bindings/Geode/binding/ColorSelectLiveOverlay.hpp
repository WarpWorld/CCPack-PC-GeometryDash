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

class ColorSelectLiveOverlay : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ColorSelectLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ColorSelectLiveOverlay, FLAlertLayer)
    
private:
    [[deprecated("ColorSelectLiveOverlay::create not implemented")]]
    /**
     */
    static ColorSelectLiveOverlay* create(ColorAction* p0, ColorAction* p1, EffectGameObject* p2);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::closeColorSelect not implemented")]]
    /**
     */
    TodoReturn closeColorSelect(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::colorValueChanged not implemented")]]
    /**
     */
    TodoReturn colorValueChanged(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::createWithActions not implemented")]]
    /**
     */
    TodoReturn createWithActions(ColorAction* p0, ColorAction* p1);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::createWithObject not implemented")]]
    /**
     */
    TodoReturn createWithObject(EffectGameObject* p0);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::determineStartValues not implemented")]]
    /**
     */
    TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::getColorValue not implemented")]]
    /**
     */
    TodoReturn getColorValue();
public:

    /**
     * @note[short] Windows: 0x61bd0
     */
    bool init(ColorAction* p0, ColorAction* p1, EffectGameObject* p2);
    
private:
    [[deprecated("ColorSelectLiveOverlay::onSelectTab not implemented")]]
    /**
     */
    void onSelectTab(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::selectColor not implemented")]]
    /**
     */
    TodoReturn selectColor(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::textChanged not implemented")]]
    /**
     */
    TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::textInputClosed not implemented")]]
    /**
     */
    TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::toggleControls not implemented")]]
    /**
     */
    TodoReturn toggleControls(bool p0);
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::updateColorLabel not implemented")]]
    /**
     */
    TodoReturn updateColorLabel();
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::updateColorValue not implemented")]]
    /**
     */
    TodoReturn updateColorValue();
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::updateOpacity not implemented")]]
    /**
     */
    TodoReturn updateOpacity();
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("ColorSelectLiveOverlay::show not implemented")]]
    /**
     */
    virtual void show();
public:
    EffectGameObject* m_effectGameObject;
    cocos2d::CCArray* m_barSprites;
    cocos2d::CCArray* m_12buttons;
    ColorAction* m_baseColorAction;
    ColorAction* m_detailColorAction;
};
