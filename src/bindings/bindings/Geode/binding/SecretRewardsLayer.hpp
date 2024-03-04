#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"
#include "BoomScrollLayerDelegate.hpp"

class SecretRewardsLayer : public cocos2d::CCLayer, public DialogDelegate, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretRewardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretRewardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x2fb610
     */
    static SecretRewardsLayer* create(bool p0);

    /**
     * @note[short] Windows: 0x2fd430
     */
    TodoReturn createSecondaryLayer(int p0);

    /**
     * @note[short] Windows: 0x2fd8a0
     */
    TodoReturn generateChestItems(int p0);
    
private:
    [[deprecated("SecretRewardsLayer::getPageColor not implemented")]]
    /**
     */
    TodoReturn getPageColor(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0);
public:

    /**
     * @note[short] Windows: 0x2fb6b0
     */
    bool init(bool p0);
    
private:
    [[deprecated("SecretRewardsLayer::moveToMainLayer not implemented")]]
    /**
     */
    TodoReturn moveToMainLayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::moveToSecondaryLayer not implemented")]]
    /**
     */
    TodoReturn moveToSecondaryLayer(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onChestType not implemented")]]
    /**
     */
    void onChestType(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2fe220
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fe580
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fe830
     */
    void onSpecialItem(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SecretRewardsLayer::onSwitchPage not implemented")]]
    /**
     */
    void onSwitchPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(bool p0);
public:

    /**
     * @note[short] Windows: 0x2fee50
     */
    TodoReturn showDialog01();

    /**
     * @note[short] Windows: 0x2ffb50
     */
    TodoReturn showDialog03();

    /**
     * @note[short] Windows: 0x300f10
     */
    TodoReturn showDialogDiamond();

    /**
     * @note[short] Windows: 0x300560
     */
    TodoReturn showDialogMechanic();
    
private:
    [[deprecated("SecretRewardsLayer::showLockedChest not implemented")]]
    /**
     */
    TodoReturn showLockedChest();
public:
    
private:
    [[deprecated("SecretRewardsLayer::showShop not implemented")]]
    /**
     */
    TodoReturn showShop(int p0);
public:

    /**
     * @note[short] Windows: 0x2feb00
     */
    TodoReturn switchToOpenedState(CCMenuItemSpriteExtra* p0);
    
private:
    [[deprecated("SecretRewardsLayer::updateBackButton not implemented")]]
    /**
     */
    TodoReturn updateBackButton();
public:

    /**
     * @note[short] Windows: 0x2febb0
     */
    TodoReturn updateUnlockedLabel();
    
private:
    [[deprecated("SecretRewardsLayer::onExit not implemented")]]
    /**
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("SecretRewardsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SecretRewardsLayer::dialogClosed not implemented")]]
    /**
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::scrollLayerMoved not implemented")]]
    /**
     */
    virtual TodoReturn scrollLayerMoved(cocos2d::CCPoint p0);
public:
};
