#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class CurrencySprite : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CurrencySprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CurrencySprite, CCSpritePlus)
    
private:
    [[deprecated("CurrencySprite::create not implemented")]]
    /**
     */
    static CurrencySprite* create(CurrencySpriteType p0, bool p1);
public:
    
private:
    [[deprecated("CurrencySprite::createWithSprite not implemented")]]
    /**
     */
    TodoReturn createWithSprite(cocos2d::CCSprite* p0);
public:
    
private:
    [[deprecated("CurrencySprite::init not implemented")]]
    /**
     */
    bool init(CurrencySpriteType p0, bool p1);
public:
    
private:
    [[deprecated("CurrencySprite::initWithSprite not implemented")]]
    /**
     */
    TodoReturn initWithSprite(cocos2d::CCSprite* p0);
public:
    
private:
    [[deprecated("CurrencySprite::rewardToSpriteType not implemented")]]
    /**
     */
    TodoReturn rewardToSpriteType(int p0);
public:
    
private:
    [[deprecated("CurrencySprite::spriteTypeToStat not implemented")]]
    /**
     */
    TodoReturn spriteTypeToStat(CurrencySpriteType p0);
public:
};
