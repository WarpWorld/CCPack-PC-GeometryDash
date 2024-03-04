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

class GameLevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameLevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameLevelOptionsLayer, GJOptionsLayer)
    
private:
    [[deprecated("GameLevelOptionsLayer::create not implemented")]]
    /**
     */
    static GameLevelOptionsLayer* create(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelOptionsLayer::init not implemented")]]
    /**
     */
    bool init(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0x213d20
     */
    virtual TodoReturn setupOptions();
    
private:
    [[deprecated("GameLevelOptionsLayer::didToggle not implemented")]]
    /**
     */
    virtual TodoReturn didToggle(int p0);
public:
};
