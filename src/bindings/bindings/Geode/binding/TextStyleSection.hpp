#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextStyleSection : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "TextStyleSection";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextStyleSection, cocos2d::CCObject)
    
private:
    [[deprecated("TextStyleSection::create not implemented")]]
    /**
     */
    static TextStyleSection* create(int p0, int p1, TextStyleType p2);
public:
    
private:
    [[deprecated("TextStyleSection::createColoredSection not implemented")]]
    /**
     */
    TodoReturn createColoredSection(cocos2d::ccColor3B p0, int p1, int p2);
public:
    
private:
    [[deprecated("TextStyleSection::createDelaySection not implemented")]]
    /**
     */
    TodoReturn createDelaySection(int p0, float p1);
public:
    
private:
    [[deprecated("TextStyleSection::createInstantSection not implemented")]]
    /**
     */
    TodoReturn createInstantSection(int p0, int p1, float p2);
public:
    
private:
    [[deprecated("TextStyleSection::createShakeSection not implemented")]]
    /**
     */
    TodoReturn createShakeSection(int p0, int p1, int p2, int p3);
public:
    
private:
    [[deprecated("TextStyleSection::init not implemented")]]
    /**
     */
    bool init(int p0, int p1, TextStyleType p2);
public:
};
