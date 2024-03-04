#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteCOpacity.hpp"

class GJPathSprite : public CCSpriteCOpacity {
public:
    static constexpr auto CLASS_NAME = "GJPathSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathSprite, CCSpriteCOpacity)

    /**
     * @note[short] Windows: 0x200120
     */
    static GJPathSprite* create(int p0);
    
private:
    [[deprecated("GJPathSprite::addRankLabel not implemented")]]
    /**
     */
    TodoReturn addRankLabel(int p0);
public:
    
private:
    [[deprecated("GJPathSprite::addShardSprite not implemented")]]
    /**
     */
    TodoReturn addShardSprite();
public:
    
private:
    [[deprecated("GJPathSprite::changeToLockedArt not implemented")]]
    /**
     */
    TodoReturn changeToLockedArt();
public:
    
private:
    [[deprecated("GJPathSprite::init not implemented")]]
    /**
     */
    bool init(int p0);
public:

    /**
     * @note[short] Windows: 0x2002c0
     */
    TodoReturn updateState();
};
