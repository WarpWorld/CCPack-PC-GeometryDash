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

class RateLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "RateLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateLevelLayer, FLAlertLayer)
    
private:
    [[deprecated("RateLevelLayer::create not implemented")]]
    /**
     */
    static RateLevelLayer* create(int p0);
public:
    
private:
    [[deprecated("RateLevelLayer::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("RateLevelLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateLevelLayer::onRate not implemented")]]
    /**
     */
    void onRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateLevelLayer::selectRating not implemented")]]
    /**
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("RateLevelLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
