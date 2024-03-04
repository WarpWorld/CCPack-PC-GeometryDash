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

class CharacterColorPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CharacterColorPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CharacterColorPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5e9b0
     */
    static CharacterColorPage* create();
    
private:
    [[deprecated("CharacterColorPage::activeColorForMode not implemented")]]
    /**
     */
    TodoReturn activeColorForMode(int p0);
public:
    
private:
    [[deprecated("CharacterColorPage::checkColor not implemented")]]
    /**
     */
    TodoReturn checkColor(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("CharacterColorPage::colorForIndex not implemented")]]
    /**
     */
    TodoReturn colorForIndex(int p0);
public:

    /**
     * @note[short] Windows: 0x5f630
     */
    TodoReturn createColorMenu();
    
private:
    [[deprecated("CharacterColorPage::FLAlert_Clicked not implemented")]]
    /**
     */
    TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("CharacterColorPage::offsetForIndex not implemented")]]
    /**
     */
    TodoReturn offsetForIndex(int p0);
public:

    /**
     * @note[short] Windows: 0x608a0
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CharacterColorPage::onMode not implemented")]]
    /**
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CharacterColorPage::onPlayerColor not implemented")]]
    /**
     */
    void onPlayerColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CharacterColorPage::toggleGlow not implemented")]]
    /**
     */
    TodoReturn toggleGlow(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("CharacterColorPage::toggleGlowItems not implemented")]]
    /**
     */
    TodoReturn toggleGlowItems(bool p0);
public:
    
private:
    [[deprecated("CharacterColorPage::toggleShip not implemented")]]
    /**
     */
    TodoReturn toggleShip(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x5fc60
     */
    TodoReturn updateColorMode(int p0);

    /**
     * @note[short] Windows: 0x60700
     */
    TodoReturn updateIconColors();

    /**
     * @note[short] Windows: 0x5ea50
     */
    virtual bool init();
    
private:
    [[deprecated("CharacterColorPage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("CharacterColorPage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CharacterColorPage::show not implemented")]]
    /**
     */
    virtual void show();
public:
};
