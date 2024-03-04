#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MultiplayerLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MultiplayerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultiplayerLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("MultiplayerLayer::create not implemented")]]
    /**
     */
    static MultiplayerLayer* create();
public:
    
private:
    [[deprecated("MultiplayerLayer::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MultiplayerLayer::onBtn1 not implemented")]]
    /**
     */
    void onBtn1(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MultiplayerLayer::onBtn2 not implemented")]]
    /**
     */
    void onBtn2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MultiplayerLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene();
public:
    
private:
    [[deprecated("MultiplayerLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("MultiplayerLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
