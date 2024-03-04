#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelDeleteDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelDeleteDelegate";

    /**
     * @note[short] Out of line
     */
    virtual void levelDeleteFinished(int p0);

    /**
     * @note[short] Out of line
     */
    virtual void levelDeleteFailed(int p0);
};
