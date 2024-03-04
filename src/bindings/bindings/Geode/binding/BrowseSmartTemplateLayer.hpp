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

class BrowseSmartTemplateLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartTemplateLayer, FLAlertLayer)
    
private:
    [[deprecated("BrowseSmartTemplateLayer::create not implemented")]]
    /**
     */
    static BrowseSmartTemplateLayer* create(GJSmartTemplate* p0, SmartBrowseFilter p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::addObjectToPage not implemented")]]
    /**
     */
    TodoReturn addObjectToPage(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::addPrefabMenuItem not implemented")]]
    /**
     */
    TodoReturn addPrefabMenuItem(SmartPrefabResult p0, int p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::baseSetup not implemented")]]
    /**
     */
    TodoReturn baseSetup();
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::createDots not implemented")]]
    /**
     */
    TodoReturn createDots();
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::createPrefab not implemented")]]
    /**
     */
    TodoReturn createPrefab(gd::string p0, int p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::init not implemented")]]
    /**
     */
    bool init(GJSmartTemplate* p0, SmartBrowseFilter p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onClick not implemented")]]
    /**
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onTemplateObject not implemented")]]
    /**
     */
    void onTemplateObject(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::updateDots not implemented")]]
    /**
     */
    TodoReturn updateDots();
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onBack not implemented")]]
    /**
     */
    virtual void onBack(cocos2d::CCObject* sender);
public:
};
