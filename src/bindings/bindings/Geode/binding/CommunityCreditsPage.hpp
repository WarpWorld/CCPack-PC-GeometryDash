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

class CommunityCreditsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CommunityCreditsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommunityCreditsPage, FLAlertLayer)
    
private:
    [[deprecated("CommunityCreditsPage::create not implemented")]]
    /**
     */
    static CommunityCreditsPage* create();
public:
    
private:
    [[deprecated("CommunityCreditsPage::FLAlert_Clicked not implemented")]]
    /**
     */
    TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("CommunityCreditsPage::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0);
public:
    
private:
    [[deprecated("CommunityCreditsPage::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CommunityCreditsPage::onSwitchPage not implemented")]]
    /**
     */
    void onSwitchPage(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x68b10
     */
    virtual bool init();
    
private:
    [[deprecated("CommunityCreditsPage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("CommunityCreditsPage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CommunityCreditsPage::show not implemented")]]
    /**
     */
    virtual void show();
public:
};
