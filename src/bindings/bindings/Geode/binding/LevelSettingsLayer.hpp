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
#include "ColorSelectDelegate.hpp"
#include "SelectArtDelegate.hpp"
#include "SelectSettingDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "TextInputDelegate.hpp"

class LevelSettingsLayer : public FLAlertLayer, public ColorSelectDelegate, public SelectArtDelegate, public SelectSettingDelegate, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x26cd70
     */
    static LevelSettingsLayer* create(LevelSettingsObject* p0, LevelEditorLayer* p1);
    
private:
    [[deprecated("LevelSettingsLayer::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] Windows: 0x26ce20
     */
    bool init(LevelSettingsObject* p0, LevelEditorLayer* p1);
    
private:
    [[deprecated("LevelSettingsLayer::onBGArt not implemented")]]
    /**
     */
    void onBGArt(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onCol not implemented")]]
    /**
     */
    void onCol(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onDisable not implemented")]]
    /**
     */
    void onDisable(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onFGArt not implemented")]]
    /**
     */
    void onFGArt(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onGameplayMode not implemented")]]
    /**
     */
    void onGameplayMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onGArt not implemented")]]
    /**
     */
    void onGArt(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onLiveEdit not implemented")]]
    /**
     */
    void onLiveEdit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onMode not implemented")]]
    /**
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onOptionToggle not implemented")]]
    /**
     */
    void onOptionToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSelectFont not implemented")]]
    /**
     */
    void onSelectFont(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSelectMode not implemented")]]
    /**
     */
    void onSelectMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSelectSpeed not implemented")]]
    /**
     */
    void onSelectSpeed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSettings not implemented")]]
    /**
     */
    void onSettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onShowPicker not implemented")]]
    /**
     */
    void onShowPicker(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSpeed not implemented")]]
    /**
     */
    void onSpeed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::showPicker not implemented")]]
    /**
     */
    TodoReturn showPicker(ColorAction* p0);
public:

    /**
     * @note[short] Windows: 0x26f870
     */
    TodoReturn updateColorSprite(ColorChannelSprite* p0);

    /**
     * @note[short] Windows: 0x26f810
     */
    TodoReturn updateColorSprites();
    
private:
    [[deprecated("LevelSettingsLayer::updateGameplayModeButtons not implemented")]]
    /**
     */
    TodoReturn updateGameplayModeButtons();
public:
    
private:
    [[deprecated("LevelSettingsLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("LevelSettingsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("LevelSettingsLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("LevelSettingsLayer::colorSelectClosed not implemented")]]
    /**
     */
    virtual TodoReturn colorSelectClosed(cocos2d::CCNode* p0);
public:

    /**
     * @note[short] Windows: 0x26f9f0
     */
    virtual void selectArtClosed(SelectArtLayer* p0);
    
private:
    [[deprecated("LevelSettingsLayer::selectSettingClosed not implemented")]]
    /**
     */
    virtual TodoReturn selectSettingClosed(SelectSettingLayer* p0);
public:
    
private:
    [[deprecated("LevelSettingsLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("LevelSettingsLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
