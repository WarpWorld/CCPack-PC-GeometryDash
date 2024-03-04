#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingCircleSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "LoadingCircleSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircleSprite, cocos2d::CCSprite)
    
private:
    [[deprecated("LoadingCircleSprite::create not implemented")]]
    /**
     */
    static LoadingCircleSprite* create();
public:
    
private:
    [[deprecated("LoadingCircleSprite::fadeInCircle not implemented")]]
    /**
     */
    TodoReturn fadeInCircle(bool p0);
public:
    
private:
    [[deprecated("LoadingCircleSprite::hideCircle not implemented")]]
    /**
     */
    TodoReturn hideCircle();
public:
    
private:
    [[deprecated("LoadingCircleSprite::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
