#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FMODLevelVisualizer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODLevelVisualizer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODLevelVisualizer, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x2129f0
     */
    static FMODLevelVisualizer* create();

    /**
     * @note[short] Windows: 0x212e70
     */
    TodoReturn updateVisualizer(float p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x212aa0
     */
    virtual bool init();
};
