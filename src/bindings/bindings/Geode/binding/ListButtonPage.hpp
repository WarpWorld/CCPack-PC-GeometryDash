#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ListButtonPage : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ListButtonPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ListButtonPage, cocos2d::CCLayer)
    
private:
    [[deprecated("ListButtonPage::create not implemented")]]
    /**
     */
    static ListButtonPage* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6);
public:
    
private:
    [[deprecated("ListButtonPage::init not implemented")]]
    /**
     */
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6);
public:
};
