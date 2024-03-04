#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class OptionsLayer : public GJDropDownLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "OptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x2b01c0
     */
    static OptionsLayer* create();
    
private:
    [[deprecated("OptionsLayer::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("OptionsLayer::exitLayer not implemented")]]
    /**
     */
    TodoReturn exitLayer();
public:

    /**
     * @note[short] Windows: 0x2b0d80
     */
    TodoReturn musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x2b1380
     */
    void onAccount(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b1400
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b0ce0
     */
    void onMenuMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b0f70
     */
    void onOptions(cocos2d::CCObject* sender);
    
private:
    [[deprecated("OptionsLayer::onProgressBar not implemented")]]
    /**
     */
    void onProgressBar(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b13c0
     */
    void onRate(cocos2d::CCObject* sender);
    
private:
    [[deprecated("OptionsLayer::onRecordReplays not implemented")]]
    /**
     */
    void onRecordReplays(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b0f90
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b0f30
     */
    void onSoundtracks(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b1340
     */
    void onSupport(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b1320
     */
    void onVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b0e70
     */
    TodoReturn sfxSliderChanged(cocos2d::CCObject* p0);
    
private:
    [[deprecated("OptionsLayer::tryEnableRecord not implemented")]]
    /**
     */
    TodoReturn tryEnableRecord();
public:

    /**
     * @note[short] Windows: 0x2b02d0
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0x2b1420
     */
    virtual TodoReturn layerHidden();
    
private:
    [[deprecated("OptionsLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
};
