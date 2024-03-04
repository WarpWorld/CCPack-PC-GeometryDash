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
#include "TextInputDelegate.hpp"

class MoreVideoOptionsLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreVideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreVideoOptionsLayer, FLAlertLayer)
    
private:
    [[deprecated("MoreVideoOptionsLayer::create not implemented")]]
    /**
     */
    static MoreVideoOptionsLayer* create();
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::addToggle not implemented")]]
    /**
     */
    TodoReturn addToggle(char const* p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::countForPage not implemented")]]
    /**
     */
    TodoReturn countForPage(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::incrementCountForPage not implemented")]]
    /**
     */
    TodoReturn incrementCountForPage(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::infoKey not implemented")]]
    /**
     */
    TodoReturn infoKey(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::layerForPage not implemented")]]
    /**
     */
    TodoReturn layerForPage(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::layerKey not implemented")]]
    /**
     */
    TodoReturn layerKey(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::nextPosition not implemented")]]
    /**
     */
    TodoReturn nextPosition(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::objectKey not implemented")]]
    /**
     */
    TodoReturn objectKey(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::objectsForPage not implemented")]]
    /**
     */
    TodoReturn objectsForPage(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onApplyFPS not implemented")]]
    /**
     */
    void onApplyFPS(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onNextPage not implemented")]]
    /**
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onPrevPage not implemented")]]
    /**
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onToggle not implemented")]]
    /**
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::pageKey not implemented")]]
    /**
     */
    TodoReturn pageKey(int p0);
public:

    /**
     * @note[short] Windows: 0x2b72e0
     */
    TodoReturn updateFPSButtons();
    
private:
    [[deprecated("MoreVideoOptionsLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
