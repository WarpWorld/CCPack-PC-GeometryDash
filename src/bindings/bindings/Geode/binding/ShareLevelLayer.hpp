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

class ShareLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x387e70
     */
    static ShareLevelLayer* create(GJGameLevel* p0);
    
private:
    [[deprecated("ShareLevelLayer::getStarsButton not implemented")]]
    /**
     */
    TodoReturn getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
public:

    /**
     * @note[short] Windows: 0x387f10
     */
    bool init(GJGameLevel* p0);
    
private:
    [[deprecated("ShareLevelLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelLayer::onSettings not implemented")]]
    /**
     */
    void onSettings(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x388f20
     */
    void onShare(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ShareLevelLayer::selectRating not implemented")]]
    /**
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("ShareLevelLayer::setupStars not implemented")]]
    /**
     */
    TodoReturn setupStars();
public:
    
private:
    [[deprecated("ShareLevelLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
