#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class KeyframeObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeObject";
    
private:
    [[deprecated("KeyframeObject::setupSpline not implemented")]]
    /**
     */
    TodoReturn setupSpline(gd::vector<KeyframeObject*>& p0);
public:
};
