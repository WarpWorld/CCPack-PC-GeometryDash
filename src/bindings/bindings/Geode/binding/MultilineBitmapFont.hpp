#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MultilineBitmapFont : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "MultilineBitmapFont";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultilineBitmapFont, cocos2d::CCSprite)
    
private:
    [[deprecated("MultilineBitmapFont::createWithFont not implemented")]]
    /**
     */
    TodoReturn createWithFont(char const* p0, gd::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);
public:
    
private:
    [[deprecated("MultilineBitmapFont::initWithFont not implemented")]]
    /**
     */
    TodoReturn initWithFont(char const* p0, gd::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);
public:
    
private:
    [[deprecated("MultilineBitmapFont::moveSpecialDescriptors not implemented")]]
    /**
     */
    TodoReturn moveSpecialDescriptors(int p0, int p1);
public:
    
private:
    [[deprecated("MultilineBitmapFont::readColorInfo not implemented")]]
    /**
     */
    TodoReturn readColorInfo(gd::string p0);
public:
    
private:
    [[deprecated("MultilineBitmapFont::stringWithMaxWidth not implemented")]]
    /**
     */
    TodoReturn stringWithMaxWidth(gd::string p0, float p1, float p2);
public:
    
private:
    [[deprecated("MultilineBitmapFont::setOpacity not implemented")]]
    /**
     */
    virtual void setOpacity(unsigned char p0);
public:
};
