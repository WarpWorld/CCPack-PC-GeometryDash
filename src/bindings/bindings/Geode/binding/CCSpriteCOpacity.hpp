#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpriteCOpacity : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteCOpacity";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteCOpacity, cocos2d::CCSprite)
    
private:
    [[deprecated("CCSpriteCOpacity::createWithSpriteFrame not implemented")]]
    /**
     */
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
public:
    
private:
    [[deprecated("CCSpriteCOpacity::createWithSpriteFrameName not implemented")]]
    /**
     */
    TodoReturn createWithSpriteFrameName(char const* p0);
public:
    
private:
    [[deprecated("CCSpriteCOpacity::setOpacity not implemented")]]
    /**
     */
    virtual void setOpacity(unsigned char p0);
public:
};
