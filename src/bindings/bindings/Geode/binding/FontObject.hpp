#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FontObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "FontObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FontObject, cocos2d::CCObject)
    
private:
    [[deprecated("FontObject::createWithConfigFile not implemented")]]
    /**
     */
    TodoReturn createWithConfigFile(char const* p0, float p1);
public:
    
private:
    [[deprecated("FontObject::getFontWidth not implemented")]]
    /**
     */
    TodoReturn getFontWidth(int p0);
public:
    
private:
    [[deprecated("FontObject::initWithConfigFile not implemented")]]
    /**
     */
    TodoReturn initWithConfigFile(char const* p0, float p1);
public:
    
private:
    [[deprecated("FontObject::parseConfigFile not implemented")]]
    /**
     */
    TodoReturn parseConfigFile(char const* p0, float p1);
public:
};
