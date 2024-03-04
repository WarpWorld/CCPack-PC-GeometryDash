#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGameLoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGameLoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLoadingLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GJGameLoadingLayer::create not implemented")]]
    /**
     */
    static GJGameLoadingLayer* create(GJGameLevel* p0, bool p1);
public:
    
private:
    [[deprecated("GJGameLoadingLayer::gameLayerDidUnload not implemented")]]
    /**
     */
    TodoReturn gameLayerDidUnload();
public:
    
private:
    [[deprecated("GJGameLoadingLayer::init not implemented")]]
    /**
     */
    bool init(GJGameLevel* p0, bool p1);
public:
    
private:
    [[deprecated("GJGameLoadingLayer::loadLevel not implemented")]]
    /**
     */
    TodoReturn loadLevel();
public:
    
private:
    [[deprecated("GJGameLoadingLayer::transitionToLoadingLayer not implemented")]]
    /**
     */
    TodoReturn transitionToLoadingLayer(GJGameLevel* p0, bool p1);
public:
    
private:
    [[deprecated("GJGameLoadingLayer::onEnter not implemented")]]
    /**
     */
    virtual void onEnter();
public:
    
private:
    [[deprecated("GJGameLoadingLayer::onEnterTransitionDidFinish not implemented")]]
    /**
     */
    virtual void onEnterTransitionDidFinish();
public:
};
