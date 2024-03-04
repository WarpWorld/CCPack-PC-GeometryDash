#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CommunityCreditNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CommunityCreditNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CommunityCreditNode, cocos2d::CCNode)
    
private:
    [[deprecated("CommunityCreditNode::create not implemented")]]
    /**
     */
    static CommunityCreditNode* create(int p0, int p1, int p2, gd::string p3);
public:
    
private:
    [[deprecated("CommunityCreditNode::init not implemented")]]
    /**
     */
    bool init(int p0, int p1, int p2, gd::string p3);
public:
};
