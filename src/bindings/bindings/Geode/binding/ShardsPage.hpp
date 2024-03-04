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

class ShardsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShardsPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x384280
     */
    static ShardsPage* create();
    
private:
    [[deprecated("ShardsPage::FLAlert_Clicked not implemented")]]
    /**
     */
    TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("ShardsPage::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0);
public:
    
private:
    [[deprecated("ShardsPage::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShardsPage::onIconInfo not implemented")]]
    /**
     */
    void onIconInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShardsPage::onSwitchPage not implemented")]]
    /**
     */
    void onSwitchPage(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x384320
     */
    virtual bool init();
    
private:
    [[deprecated("ShardsPage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("ShardsPage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("ShardsPage::show not implemented")]]
    /**
     */
    virtual void show();
public:
};
