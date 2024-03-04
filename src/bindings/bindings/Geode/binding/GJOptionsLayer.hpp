#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class GJOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJOptionsLayer, SetupTriggerPopup)
    
private:
    [[deprecated("GJOptionsLayer::create not implemented")]]
    /**
     */
    static GJOptionsLayer* create(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::addGVToggle not implemented")]]
    /**
     */
    TodoReturn addGVToggle(char const* p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("GJOptionsLayer::addToggle not implemented")]]
    /**
     */
    TodoReturn addToggle(char const* p0, int p1, bool p2, char const* p3);
public:
    
private:
    [[deprecated("GJOptionsLayer::addToggleInternal not implemented")]]
    /**
     */
    TodoReturn addToggleInternal(char const* p0, int p1, bool p2, char const* p3);
public:
    
private:
    [[deprecated("GJOptionsLayer::countForPage not implemented")]]
    /**
     */
    TodoReturn countForPage(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::incrementCountForPage not implemented")]]
    /**
     */
    TodoReturn incrementCountForPage(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::infoKey not implemented")]]
    /**
     */
    TodoReturn infoKey(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::layerForPage not implemented")]]
    /**
     */
    TodoReturn layerForPage(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::layerKey not implemented")]]
    /**
     */
    TodoReturn layerKey(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::nextPosition not implemented")]]
    /**
     */
    TodoReturn nextPosition(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::objectKey not implemented")]]
    /**
     */
    TodoReturn objectKey(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::objectsForPage not implemented")]]
    /**
     */
    TodoReturn objectsForPage(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::offsetToNextPage not implemented")]]
    /**
     */
    TodoReturn offsetToNextPage();
public:
    
private:
    [[deprecated("GJOptionsLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJOptionsLayer::onNextPage not implemented")]]
    /**
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJOptionsLayer::onPrevPage not implemented")]]
    /**
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJOptionsLayer::onToggle not implemented")]]
    /**
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJOptionsLayer::pageKey not implemented")]]
    /**
     */
    TodoReturn pageKey(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::setupOptions not implemented")]]
    /**
     */
    virtual TodoReturn setupOptions();
public:
    
private:
    [[deprecated("GJOptionsLayer::didToggleGV not implemented")]]
    /**
     */
    virtual TodoReturn didToggleGV(gd::string p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::didToggle not implemented")]]
    /**
     */
    virtual TodoReturn didToggle(int p0);
public:
};
