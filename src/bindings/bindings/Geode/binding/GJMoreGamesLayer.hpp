#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class GJMoreGamesLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "GJMoreGamesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMoreGamesLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x1f9090
     */
    static GJMoreGamesLayer* create();

    /**
     * @note[short] Windows: 0x1f9330
     */
    TodoReturn getMoreGamesList();

    /**
     * @note[short] Windows: 0x1f95e0
     */
    virtual void customSetup();
};
