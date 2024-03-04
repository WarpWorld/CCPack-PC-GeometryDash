#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAudioTriggerPopup.hpp"
#include "CustomSFXDelegate.hpp"
#include "SFXBrowserDelegate.hpp"

class SetupSFXPopup : public SetupAudioTriggerPopup, public CustomSFXDelegate, public SFXBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXPopup, SetupAudioTriggerPopup)
    
private:
    [[deprecated("SetupSFXPopup::create not implemented")]]
    /**
     */
    static SetupSFXPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupSFXPopup::createSFXWidget not implemented")]]
    /**
     */
    TodoReturn createSFXWidget();
public:
    
private:
    [[deprecated("SetupSFXPopup::init not implemented")]]
    /**
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupSFXPopup::onBrowseSFX not implemented")]]
    /**
     */
    void onBrowseSFX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSFXPopup::updateLength not implemented")]]
    /**
     */
    TodoReturn updateLength();
public:
    
private:
    [[deprecated("SetupSFXPopup::pageChanged not implemented")]]
    /**
     */
    virtual TodoReturn pageChanged();
public:
    
private:
    [[deprecated("SetupSFXPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSFXPopup::onPlusButton not implemented")]]
    /**
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSFXPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupSFXPopup::sfxObjectSelected not implemented")]]
    /**
     */
    virtual TodoReturn sfxObjectSelected(SFXInfoObject* p0);
public:
    
private:
    [[deprecated("SetupSFXPopup::getActiveSFXID not implemented")]]
    /**
     */
    virtual TodoReturn getActiveSFXID();
public:
    
private:
    [[deprecated("SetupSFXPopup::overridePlaySFX not implemented")]]
    /**
     */
    virtual TodoReturn overridePlaySFX(SFXInfoObject* p0);
public:
    
private:
    [[deprecated("SetupSFXPopup::sfxBrowserClosed not implemented")]]
    /**
     */
    virtual TodoReturn sfxBrowserClosed(SFXBrowser* p0);
public:
};
