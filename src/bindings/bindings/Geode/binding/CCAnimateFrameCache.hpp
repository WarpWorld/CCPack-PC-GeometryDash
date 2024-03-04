#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAnimateFrameCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCAnimateFrameCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimateFrameCache, cocos2d::CCObject)
    
private:
    [[deprecated("CCAnimateFrameCache::sharedSpriteFrameCache not implemented")]]
    /**
     */
    static CCAnimateFrameCache* sharedSpriteFrameCache();
public:
    
private:
    [[deprecated("CCAnimateFrameCache::addCustomSpriteFramesWithFile not implemented")]]
    /**
     */
    TodoReturn addCustomSpriteFramesWithFile(char const* p0);
public:
    
private:
    [[deprecated("CCAnimateFrameCache::addDict not implemented")]]
    /**
     */
    TodoReturn addDict(cocos2d::CCDictionary* p0, char const* p1);
public:
    
private:
    [[deprecated("CCAnimateFrameCache::addDict not implemented")]]
    /**
     */
    TodoReturn addDict(DS_Dictionary* p0, char const* p1);
public:
    
private:
    [[deprecated("CCAnimateFrameCache::addSpriteFramesWithFile not implemented")]]
    /**
     */
    TodoReturn addSpriteFramesWithFile(char const* p0);
public:
    
private:
    [[deprecated("CCAnimateFrameCache::init not implemented")]]
    /**
     */
    bool init();
public:
    
private:
    [[deprecated("CCAnimateFrameCache::purgeSharedSpriteFrameCache not implemented")]]
    /**
     */
    TodoReturn purgeSharedSpriteFrameCache();
public:
    
private:
    [[deprecated("CCAnimateFrameCache::removeSpriteFrames not implemented")]]
    /**
     */
    TodoReturn removeSpriteFrames();
public:
    
private:
    [[deprecated("CCAnimateFrameCache::spriteFrameByName not implemented")]]
    /**
     */
    TodoReturn spriteFrameByName(char const* p0);
public:
};
