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

class VideoOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "VideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(VideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x2b3e20
     */
    static VideoOptionsLayer* create();
    
private:
    [[deprecated("VideoOptionsLayer::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6, bool p7);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onAdvanced not implemented")]]
    /**
     */
    void onAdvanced(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b50e0
     */
    void onApply(cocos2d::CCObject* sender);
    
private:
    [[deprecated("VideoOptionsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onFullscreen not implemented")]]
    /**
     */
    void onFullscreen(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onResolutionNext not implemented")]]
    /**
     */
    void onResolutionNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onResolutionPrev not implemented")]]
    /**
     */
    void onResolutionPrev(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onTextureQualityNext not implemented")]]
    /**
     */
    void onTextureQualityNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onTextureQualityPrev not implemented")]]
    /**
     */
    void onTextureQualityPrev(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::reloadMenu not implemented")]]
    /**
     */
    TodoReturn reloadMenu();
public:
    
private:
    [[deprecated("VideoOptionsLayer::toggleResolution not implemented")]]
    /**
     */
    TodoReturn toggleResolution();
public:

    /**
     * @note[short] Windows: 0x2b4ea0
     */
    TodoReturn updateResolution(int p0);

    /**
     * @note[short] Windows: 0x2b4de0
     */
    TodoReturn updateTextureQuality(int p0);

    /**
     * @note[short] Windows: 0x2b3ec0
     */
    virtual bool init();
    
private:
    [[deprecated("VideoOptionsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
