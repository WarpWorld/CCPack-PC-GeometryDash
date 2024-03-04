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

class ItemInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ItemInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemInfoPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x1f5ad0
     */
    static ItemInfoPopup* create(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x1f5b80
     */
    bool init(int p0, UnlockType p1);
    
private:
    [[deprecated("ItemInfoPopup::isUnlockedByDefault not implemented")]]
    /**
     */
    bool isUnlockedByDefault(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x1f6f40
     */
    TodoReturn nameForUnlockType(int p0, UnlockType p1);
    
private:
    [[deprecated("ItemInfoPopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ItemInfoPopup::onCredit not implemented")]]
    /**
     */
    void onCredit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ItemInfoPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    int m_itemID;
    UnlockType m_unlockType;
    int m_accountID;
};
