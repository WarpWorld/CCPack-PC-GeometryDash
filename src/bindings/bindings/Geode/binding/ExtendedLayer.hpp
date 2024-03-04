#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExtendedLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ExtendedLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExtendedLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("ExtendedLayer::create not implemented")]]
    /**
     */
    static ExtendedLayer* create();
public:
    
private:
    [[deprecated("ExtendedLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("ExtendedLayer::setPosition not implemented")]]
    /**
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
public:
};
