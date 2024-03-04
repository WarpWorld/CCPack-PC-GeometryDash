#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCNodeContainer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCNodeContainer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCNodeContainer, cocos2d::CCNode)
    
private:
    [[deprecated("CCNodeContainer::create not implemented")]]
    /**
     */
    static CCNodeContainer* create();
public:
    
private:
    [[deprecated("CCNodeContainer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("CCNodeContainer::visit not implemented")]]
    /**
     */
    virtual void visit();
public:
};
