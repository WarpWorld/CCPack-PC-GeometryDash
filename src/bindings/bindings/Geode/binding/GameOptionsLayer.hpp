#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class GameOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsLayer, GJOptionsLayer)
    
private:
    [[deprecated("GameOptionsLayer::create not implemented")]]
    /**
     */
    static GameOptionsLayer* create(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameOptionsLayer::init not implemented")]]
    /**
     */
    bool init(GJBaseGameLayer* p0);
public:

    /**
     * @note[short] Windows: 0x213930
     */
    void onPracticeMusicSync(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GameOptionsLayer::onUIOptions not implemented")]]
    /**
     */
    void onUIOptions(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x213620
     */
    TodoReturn showPracticeMusicSyncUnlockInfo();
    
private:
    [[deprecated("GameOptionsLayer::setupOptions not implemented")]]
    /**
     */
    virtual TodoReturn setupOptions();
public:
    
private:
    [[deprecated("GameOptionsLayer::didToggle not implemented")]]
    /**
     */
    virtual TodoReturn didToggle(int p0);
public:
};
