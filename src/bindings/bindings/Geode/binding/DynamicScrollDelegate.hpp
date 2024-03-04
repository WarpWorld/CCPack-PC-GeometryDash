#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DynamicScrollDelegate {
public:
    static constexpr auto CLASS_NAME = "DynamicScrollDelegate";

    /**
     * @note[short] Out of line
     */
    virtual void updatePageWithObject(cocos2d::CCObject* p0, cocos2d::CCObject* p1);
};
