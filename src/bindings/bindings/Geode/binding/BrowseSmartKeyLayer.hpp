#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BrowseSmartTemplateLayer.hpp"

class BrowseSmartKeyLayer : public BrowseSmartTemplateLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartKeyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartKeyLayer, BrowseSmartTemplateLayer)
    
private:
    [[deprecated("BrowseSmartKeyLayer::create not implemented")]]
    /**
     */
    static BrowseSmartKeyLayer* create(GJSmartTemplate* p0, gd::string p1);
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::addChanceToSelected not implemented")]]
    /**
     */
    TodoReturn addChanceToSelected(int p0, bool p1);
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::createTemplateObjects not implemented")]]
    /**
     */
    TodoReturn createTemplateObjects();
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::deletedSelectedItems not implemented")]]
    /**
     */
    TodoReturn deletedSelectedItems();
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::getAllSelectedBlocks not implemented")]]
    /**
     */
    TodoReturn getAllSelectedBlocks();
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::init not implemented")]]
    /**
     */
    bool init(GJSmartTemplate* p0, gd::string p1);
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::onButton not implemented")]]
    /**
     */
    void onButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::onPrefabObject not implemented")]]
    /**
     */
    void onPrefabObject(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::updateChanceValues not implemented")]]
    /**
     */
    TodoReturn updateChanceValues();
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::onBack not implemented")]]
    /**
     */
    virtual void onBack(cocos2d::CCObject* sender);
public:
};
