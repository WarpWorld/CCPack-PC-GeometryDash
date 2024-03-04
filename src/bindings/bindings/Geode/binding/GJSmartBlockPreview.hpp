#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartBlockPreview : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreview";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreview, cocos2d::CCNode)
    
private:
    [[deprecated("GJSmartBlockPreview::create not implemented")]]
    /**
     */
    static GJSmartBlockPreview* create(gd::string p0);
public:
    
private:
    [[deprecated("GJSmartBlockPreview::addChance not implemented")]]
    /**
     */
    TodoReturn addChance(int p0, int p1);
public:
    
private:
    [[deprecated("GJSmartBlockPreview::addCount not implemented")]]
    /**
     */
    TodoReturn addCount(int p0);
public:
    
private:
    [[deprecated("GJSmartBlockPreview::addPreview not implemented")]]
    /**
     */
    TodoReturn addPreview(gd::string p0, gd::string p1, LevelEditorLayer* p2);
public:
    
private:
    [[deprecated("GJSmartBlockPreview::addTemplateGuide not implemented")]]
    /**
     */
    TodoReturn addTemplateGuide(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJSmartBlockPreview::addTemplateGuide not implemented")]]
    /**
     */
    TodoReturn addTemplateGuide(SmartPrefabResult p0, float p1);
public:
    
private:
    [[deprecated("GJSmartBlockPreview::createInfoLabel not implemented")]]
    /**
     */
    TodoReturn createInfoLabel();
public:
    
private:
    [[deprecated("GJSmartBlockPreview::init not implemented")]]
    /**
     */
    bool init(gd::string p0);
public:
    
private:
    [[deprecated("GJSmartBlockPreview::toggleSelectItem not implemented")]]
    /**
     */
    TodoReturn toggleSelectItem(bool p0);
public:
};
