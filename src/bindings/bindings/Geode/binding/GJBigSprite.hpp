#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJBigSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJBigSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBigSprite, cocos2d::CCNode)
    
private:
    [[deprecated("GJBigSprite::create not implemented")]]
    /**
     */
    static GJBigSprite* create();
public:
    
private:
    [[deprecated("GJBigSprite::finishedLoadingSpriteAsync not implemented")]]
    /**
     */
    TodoReturn finishedLoadingSpriteAsync(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJBigSprite::loadSpriteAsync not implemented")]]
    /**
     */
    TodoReturn loadSpriteAsync(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJBigSprite::unloadAll not implemented")]]
    /**
     */
    TodoReturn unloadAll();
public:
    
private:
    [[deprecated("GJBigSprite::unloadSprite not implemented")]]
    /**
     */
    TodoReturn unloadSprite(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJBigSprite::updateSpriteVisibility not implemented")]]
    /**
     */
    TodoReturn updateSpriteVisibility();
public:
    
private:
    [[deprecated("GJBigSprite::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
