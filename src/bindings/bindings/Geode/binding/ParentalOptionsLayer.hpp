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

class ParentalOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ParentalOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParentalOptionsLayer, FLAlertLayer)
    
private:
    [[deprecated("ParentalOptionsLayer::create not implemented")]]
    /**
     */
    static ParentalOptionsLayer* create();
public:
    
private:
    [[deprecated("ParentalOptionsLayer::addToggle not implemented")]]
    /**
     */
    TodoReturn addToggle(char const* p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::countForPage not implemented")]]
    /**
     */
    TodoReturn countForPage(int p0);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::incrementCountForPage not implemented")]]
    /**
     */
    TodoReturn incrementCountForPage(int p0);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::infoKey not implemented")]]
    /**
     */
    TodoReturn infoKey(int p0);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::layerForPage not implemented")]]
    /**
     */
    TodoReturn layerForPage(int p0);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::layerKey not implemented")]]
    /**
     */
    TodoReturn layerKey(int p0);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::nextPosition not implemented")]]
    /**
     */
    TodoReturn nextPosition(int p0);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::objectKey not implemented")]]
    /**
     */
    TodoReturn objectKey(int p0);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::objectsForPage not implemented")]]
    /**
     */
    TodoReturn objectsForPage(int p0);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::onNextPage not implemented")]]
    /**
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::onPrevPage not implemented")]]
    /**
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::onToggle not implemented")]]
    /**
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::pageKey not implemented")]]
    /**
     */
    TodoReturn pageKey(int p0);
public:
    
private:
    [[deprecated("ParentalOptionsLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("ParentalOptionsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
