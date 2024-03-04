#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJStoreItem : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJStoreItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJStoreItem, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x182d20
     */
    static GJStoreItem* create(int p0, int p1, int p2, int p3, ShopType p4);

    /**
     * @note[short] Windows: 0x182ed0
     */
    TodoReturn getCurrencyKey();

    /**
     * @note[short] Windows: 0x182dd0
     */
    bool init(int p0, int p1, int p2, int p3, ShopType p4);
};
