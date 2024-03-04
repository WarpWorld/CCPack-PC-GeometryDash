#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ListButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ListButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ListButtonBar, cocos2d::CCNode)
    
private:
    [[deprecated("ListButtonBar::create not implemented")]]
    /**
     */
    static ListButtonBar* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6, float p7, int p8);
public:
    
private:
    [[deprecated("ListButtonBar::getPage not implemented")]]
    /**
     */
    TodoReturn getPage();
public:
    
private:
    [[deprecated("ListButtonBar::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0);
public:
    
private:
    [[deprecated("ListButtonBar::init not implemented")]]
    /**
     */
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6, float p7, int p8);
public:
    
private:
    [[deprecated("ListButtonBar::onLeft not implemented")]]
    /**
     */
    void onLeft(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ListButtonBar::onRight not implemented")]]
    /**
     */
    void onRight(cocos2d::CCObject* sender);
public:
};
