#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UIButtonConfig {
public:
    static constexpr auto CLASS_NAME = "UIButtonConfig";

    /**
     * @note[short] Windows: 0x120660
     */
    TodoReturn reset();
    
private:
    [[deprecated("UIButtonConfig::resetOneBtn not implemented")]]
    /**
     */
    TodoReturn resetOneBtn();
public:
    GEODE_PAD(40);
};
