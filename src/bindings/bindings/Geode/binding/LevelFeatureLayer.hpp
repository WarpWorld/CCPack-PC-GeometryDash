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

class LevelFeatureLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LevelFeatureLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelFeatureLayer, FLAlertLayer)
    
private:
    [[deprecated("LevelFeatureLayer::create not implemented")]]
    /**
     */
    static LevelFeatureLayer* create(int p0);
public:
    
private:
    [[deprecated("LevelFeatureLayer::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("LevelFeatureLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelFeatureLayer::onDown not implemented")]]
    /**
     */
    void onDown(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelFeatureLayer::onDown2 not implemented")]]
    /**
     */
    void onDown2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelFeatureLayer::onRemoveValues not implemented")]]
    /**
     */
    void onRemoveValues(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelFeatureLayer::onSetEpicOnly not implemented")]]
    /**
     */
    void onSetEpicOnly(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelFeatureLayer::onSetFeatured not implemented")]]
    /**
     */
    void onSetFeatured(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelFeatureLayer::onToggleEpic not implemented")]]
    /**
     */
    void onToggleEpic(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelFeatureLayer::onUp not implemented")]]
    /**
     */
    void onUp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelFeatureLayer::onUp2 not implemented")]]
    /**
     */
    void onUp2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelFeatureLayer::updateStars not implemented")]]
    /**
     */
    TodoReturn updateStars();
public:
    
private:
    [[deprecated("LevelFeatureLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
