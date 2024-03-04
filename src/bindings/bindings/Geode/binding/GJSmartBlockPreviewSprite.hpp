#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartBlockPreviewSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreviewSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreviewSprite, cocos2d::CCNode)
    
private:
    [[deprecated("GJSmartBlockPreviewSprite::create not implemented")]]
    /**
     */
    static GJSmartBlockPreviewSprite* create();
public:
    
private:
    [[deprecated("GJSmartBlockPreviewSprite::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJSmartBlockPreviewSprite::visit not implemented")]]
    /**
     */
    virtual void visit();
public:
};
