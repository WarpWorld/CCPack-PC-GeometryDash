#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAlertCircle : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCAlertCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAlertCircle, cocos2d::CCNode)
    
private:
    [[deprecated("CCAlertCircle::create not implemented")]]
    /**
     */
    static CCAlertCircle* create();
public:
    
private:
    [[deprecated("CCAlertCircle::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("CCAlertCircle::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
