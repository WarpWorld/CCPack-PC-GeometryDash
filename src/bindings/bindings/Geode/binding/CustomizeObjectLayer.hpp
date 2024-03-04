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
#include "HSVWidgetDelegate.hpp"
#include "ColorSelectDelegate.hpp"
#include "ColorSetupDelegate.hpp"

class CustomizeObjectLayer : public FLAlertLayer, public TextInputDelegate, public HSVWidgetDelegate, public ColorSelectDelegate, public ColorSetupDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x763f0
     */
    static CustomizeObjectLayer* create(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("CustomizeObjectLayer::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::determineStartValues not implemented")]]
    /**
     */
    TodoReturn determineStartValues();
public:

    /**
     * @note[short] Windows: 0x79a00
     */
    int getActiveMode(bool p0);
    
private:
    [[deprecated("CustomizeObjectLayer::getButtonByTag not implemented")]]
    /**
     */
    TodoReturn getButtonByTag(int p0);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::getHSV not implemented")]]
    /**
     */
    TodoReturn getHSV();
public:

    /**
     * @note[short] Windows: 0x7a1b0
     */
    void highlightSelected(ButtonSprite* p0);

    /**
     * @note[short] Windows: 0x764a0
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("CustomizeObjectLayer::onBreakApart not implemented")]]
    /**
     */
    void onBreakApart(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onBrowse not implemented")]]
    /**
     */
    void onBrowse(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onClear not implemented")]]
    /**
     */
    void onClear(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x7a2a0
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomizeObjectLayer::onCopy not implemented")]]
    /**
     */
    void onCopy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onEditColor not implemented")]]
    /**
     */
    void onEditColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onHSV not implemented")]]
    /**
     */
    void onHSV(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onLiveEdit not implemented")]]
    /**
     */
    void onLiveEdit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onNextColorChannel not implemented")]]
    /**
     */
    void onNextColorChannel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onPaste not implemented")]]
    /**
     */
    void onPaste(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x79fa0
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x79550
     */
    void onSelectMode(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomizeObjectLayer::onSettings not implemented")]]
    /**
     */
    void onSettings(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x79af0
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomizeObjectLayer::recreateLayer not implemented")]]
    /**
     */
    TodoReturn recreateLayer();
public:

    /**
     * @note[short] Windows: 0x78930
     */
    void sliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x79780
     */
    void toggleVisible();

    /**
     * @note[short] Windows: 0x79720
     */
    void updateChannelLabel(int p0);

    /**
     * @note[short] Windows: 0x78d40
     */
    void updateColorSprite();
    
private:
    [[deprecated("CustomizeObjectLayer::updateCurrentSelection not implemented")]]
    /**
     */
    void updateCurrentSelection();
public:

    /**
     * @note[short] Windows: 0x79ec0
     */
    void updateCustomColorLabels();

    /**
     * @note[short] Windows: 0x79050
     */
    void updateHSVButtons();

    /**
     * @note[short] Windows: 0x787e0
     */
    void updateKerningLabel();

    /**
     * @note[short] Windows: 0x7a040
     */
    void updateSelected(int p0);
    
private:
    [[deprecated("CustomizeObjectLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CustomizeObjectLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:

    /**
     * @note[short] Windows: 0x79cf0
     */
    virtual void textChanged(CCTextInputNode* p0);
    
private:
    [[deprecated("CustomizeObjectLayer::hsvPopupClosed not implemented")]]
    /**
     */
    virtual TodoReturn hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
public:

    /**
     * @note[short] Windows: 0x78e60
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] Windows: 0x78c30
     */
    virtual void colorSetupClosed(int p0);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_colorButtons;
    cocos2d::CCArray* m_colorTabNodes;
    cocos2d::CCArray* m_textTabNodes;
    cocos2d::CCArray* m_unkArray;
    cocos2d::CCArray* m_detailTabNodes;
    int m_selectedMode;
    int m_customColorChannel;
    bool m_unk0x200;
    bool m_unk0x201;
    bool m_glowDisabled;
    CCMenuItemSpriteExtra* m_baseButton;
    CCMenuItemSpriteExtra* m_detailButton;
    CCMenuItemSpriteExtra* m_textButton;
    CCMenuItemSpriteExtra* m_baseColorHSV;
    CCMenuItemSpriteExtra* m_detailColorHSV;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_selectedColorLabel;
    CCTextInputNode* m_customColorInput;
    CCTextInputNode* m_textInput;
    int m_kerningAmount;
    cocos2d::CCLabelBMFont* m_kerningLabel;
    Slider* m_kerningSlider;
    ButtonSprite* m_customColorButtonSprite;
    CCMenuItemSpriteExtra* m_customColorButton;
    CCMenuItemSpriteExtra* m_arrowDown;
    CCMenuItemSpriteExtra* m_arrowUp;
    cocos2d::extension::CCScale9Sprite* m_customColorInputBG;
    ColorChannelSprite* m_colorSprite;
    CCMenuItemSpriteExtra* m_colorSpriteButton;
    CCMenuItemSpriteExtra* m_liveSelectButton;
    bool m_showTextInput;
    bool m_customColorSelected;
};
