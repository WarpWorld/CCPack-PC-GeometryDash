#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExplodeItemSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ExplodeItemSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExplodeItemSprite, cocos2d::CCSprite)
    
private:
    [[deprecated("ExplodeItemSprite::create not implemented")]]
    /**
     */
    static ExplodeItemSprite* create();
public:
    
private:
    [[deprecated("ExplodeItemSprite::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
