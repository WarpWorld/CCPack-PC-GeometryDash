#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorSetupDelegate {
public:
    static constexpr auto CLASS_NAME = "ColorSetupDelegate";
    
private:
    [[deprecated("ColorSetupDelegate::colorSetupClosed not implemented")]]
    /**
     */
    virtual TodoReturn colorSetupClosed(int p0);
public:
};
