#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"

class PauseLayer : public CCBlockLayer {
public:
    static constexpr auto CLASS_NAME = "PauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PauseLayer, CCBlockLayer)

    /**
     * @note[short] Windows: 0x2b8940
     */
    static PauseLayer* create(bool p0);
    
private:
    [[deprecated("PauseLayer::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] Windows: 0x2ba0f0
     */
    TodoReturn goEdit();
    
private:
    [[deprecated("PauseLayer::init not implemented")]]
    /**
     */
    bool init(bool p0);
public:

    /**
     * @note[short] Windows: 0x2b9da0
     */
    TodoReturn musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x2ba020
     */
    void onEdit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onHelp not implemented")]]
    /**
     */
    void onHelp(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b9ed0
     */
    void onNormalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b9e60
     */
    void onPracticeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2ba240
     */
    void onQuit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onRecordReplays not implemented")]]
    /**
     */
    void onRecordReplays(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PauseLayer::onReplay not implemented")]]
    /**
     */
    void onReplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b9f80
     */
    void onRestart(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b9fd0
     */
    void onRestartFull(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b9f30
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b94d0
     */
    void onSettings(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onTime not implemented")]]
    /**
     */
    void onTime(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b94f0
     */
    TodoReturn setupProgressBars();

    /**
     * @note[short] Windows: 0x2b0e70
     */
    TodoReturn sfxSliderChanged(cocos2d::CCObject* p0);
    
private:
    [[deprecated("PauseLayer::tryShowBanner not implemented")]]
    /**
     */
    TodoReturn tryShowBanner(float p0);
public:

    /**
     * @note[short] Windows: 0x2ba3a0
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x2ba310
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x2b89f0
     */
    virtual void customSetup();
    
private:
    [[deprecated("PauseLayer::keyUp not implemented")]]
    /**
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
public:
};
