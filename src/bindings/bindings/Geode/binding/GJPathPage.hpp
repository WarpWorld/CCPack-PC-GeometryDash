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
#include "FLAlertLayerProtocol.hpp"
#include "GJPurchaseDelegate.hpp"

class GJPathPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJPurchaseDelegate {
public:
    static constexpr auto CLASS_NAME = "GJPathPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x1fd2c0
     */
    static GJPathPage* create(int p0, GJPathsLayer* p1);

    /**
     * @note[short] Windows: 0x1fd370
     */
    bool init(int p0, GJPathsLayer* p1);
    
private:
    [[deprecated("GJPathPage::onActivatePath not implemented")]]
    /**
     */
    void onActivatePath(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPathPage::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPathPage::onIconInfo not implemented")]]
    /**
     */
    void onIconInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPathPage::onUnlock not implemented")]]
    /**
     */
    void onUnlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPathPage::playUnlockAnimation not implemented")]]
    /**
     */
    TodoReturn playUnlockAnimation();
public:
    
private:
    [[deprecated("GJPathPage::showCantAffordMessage not implemented")]]
    /**
     */
    TodoReturn showCantAffordMessage(GJStoreItem* p0);
public:
    
private:
    [[deprecated("GJPathPage::unlockAnimationFinished not implemented")]]
    /**
     */
    TodoReturn unlockAnimationFinished();
public:
    
private:
    [[deprecated("GJPathPage::unlockAnimationStep2 not implemented")]]
    /**
     */
    TodoReturn unlockAnimationStep2();
public:
    
private:
    [[deprecated("GJPathPage::unlockAnimationStep3 not implemented")]]
    /**
     */
    TodoReturn unlockAnimationStep3();
public:
    
private:
    [[deprecated("GJPathPage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("GJPathPage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJPathPage::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("GJPathPage::didPurchaseItem not implemented")]]
    /**
     */
    virtual TodoReturn didPurchaseItem(GJStoreItem* p0);
public:
};
