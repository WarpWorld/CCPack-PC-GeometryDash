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

class SelectArtLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectArtLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectArtLayer, FLAlertLayer)
    
private:
    [[deprecated("SelectArtLayer::create not implemented")]]
    /**
     */
    static SelectArtLayer* create(SelectArtType p0, int p1);
public:
    
private:
    [[deprecated("SelectArtLayer::init not implemented")]]
    /**
     */
    bool init(SelectArtType p0, int p1);
public:
    
private:
    [[deprecated("SelectArtLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectArtLayer::onSelectCustom not implemented")]]
    /**
     */
    void onSelectCustom(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectArtLayer::selectArt not implemented")]]
    /**
     */
    TodoReturn selectArt(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SelectArtLayer::updateSelectedCustom not implemented")]]
    /**
     */
    TodoReturn updateSelectedCustom(int p0);
public:
    
private:
    [[deprecated("SelectArtLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
