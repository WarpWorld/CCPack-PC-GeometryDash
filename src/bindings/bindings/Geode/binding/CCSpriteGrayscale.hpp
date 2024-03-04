#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteWithHue.hpp"

class CCSpriteGrayscale : public CCSpriteWithHue {
public:
    static constexpr auto CLASS_NAME = "CCSpriteGrayscale";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpriteGrayscale, CCSpriteWithHue)
    
private:
    [[deprecated("CCSpriteGrayscale::create not implemented")]]
    /**
     */
    static CCSpriteGrayscale* create(gd::string const& p0, cocos2d::CCRect const& p1);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::create not implemented")]]
    /**
     */
    static CCSpriteGrayscale* create(gd::string const& p0);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::createWithSpriteFrame not implemented")]]
    /**
     */
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::createWithSpriteFrameName not implemented")]]
    /**
     */
    TodoReturn createWithSpriteFrameName(gd::string const& p0);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::createWithTexture not implemented")]]
    /**
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::createWithTexture not implemented")]]
    /**
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::getShaderName not implemented")]]
    /**
     */
    virtual TodoReturn getShaderName();
public:
    
private:
    [[deprecated("CCSpriteGrayscale::shaderBody not implemented")]]
    /**
     */
    virtual TodoReturn shaderBody();
public:
};
