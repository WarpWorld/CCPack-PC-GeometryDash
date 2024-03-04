#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJWorldNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJWorldNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJWorldNode, cocos2d::CCNode)
    
private:
    [[deprecated("GJWorldNode::create not implemented")]]
    /**
     */
    static GJWorldNode* create(int p0, WorldSelectLayer* p1);
public:
    
private:
    [[deprecated("GJWorldNode::addDotsToLevel not implemented")]]
    /**
     */
    TodoReturn addDotsToLevel(int p0, bool p1);
public:
    
private:
    [[deprecated("GJWorldNode::dotPositionForLevel not implemented")]]
    /**
     */
    TodoReturn dotPositionForLevel(int p0, int p1);
public:
    
private:
    [[deprecated("GJWorldNode::init not implemented")]]
    /**
     */
    bool init(int p0, WorldSelectLayer* p1);
public:
    
private:
    [[deprecated("GJWorldNode::onLevel not implemented")]]
    /**
     */
    void onLevel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJWorldNode::playStep1 not implemented")]]
    /**
     */
    TodoReturn playStep1();
public:
    
private:
    [[deprecated("GJWorldNode::playStep2 not implemented")]]
    /**
     */
    TodoReturn playStep2();
public:
    
private:
    [[deprecated("GJWorldNode::playStep3 not implemented")]]
    /**
     */
    TodoReturn playStep3();
public:
    
private:
    [[deprecated("GJWorldNode::positionForLevelButton not implemented")]]
    /**
     */
    TodoReturn positionForLevelButton(int p0);
public:
    
private:
    [[deprecated("GJWorldNode::unlockActiveItem not implemented")]]
    /**
     */
    TodoReturn unlockActiveItem();
public:
};
