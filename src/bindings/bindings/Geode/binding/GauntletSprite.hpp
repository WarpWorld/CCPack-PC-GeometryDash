#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GauntletSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSprite, cocos2d::CCNode)
    
private:
    [[deprecated("GauntletSprite::create not implemented")]]
    /**
     */
    static GauntletSprite* create(GauntletType p0, bool p1);
public:
    
private:
    [[deprecated("GauntletSprite::addLockedSprite not implemented")]]
    /**
     */
    TodoReturn addLockedSprite();
public:
    
private:
    [[deprecated("GauntletSprite::addNormalSprite not implemented")]]
    /**
     */
    TodoReturn addNormalSprite();
public:
    
private:
    [[deprecated("GauntletSprite::colorForType not implemented")]]
    /**
     */
    TodoReturn colorForType(GauntletType p0);
public:
    
private:
    [[deprecated("GauntletSprite::init not implemented")]]
    /**
     */
    bool init(GauntletType p0, bool p1);
public:
    
private:
    [[deprecated("GauntletSprite::luminanceForType not implemented")]]
    /**
     */
    TodoReturn luminanceForType(GauntletType p0);
public:
    
private:
    [[deprecated("GauntletSprite::toggleLockedSprite not implemented")]]
    /**
     */
    TodoReturn toggleLockedSprite(bool p0);
public:
};
