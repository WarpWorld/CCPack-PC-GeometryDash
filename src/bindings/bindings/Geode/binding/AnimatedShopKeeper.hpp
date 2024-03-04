#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCAnimatedSprite.hpp"

class AnimatedShopKeeper : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "AnimatedShopKeeper";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedShopKeeper, CCAnimatedSprite)

    /**
     * @note[short] Windows: 0x21d880
     */
    static AnimatedShopKeeper* create(ShopType p0);

    /**
     * @note[short] Windows: 0x21d920
     */
    bool init(ShopType p0);

    /**
     * @note[short] Windows: 0x21da20
     */
    TodoReturn playReactAnimation();

    /**
     * @note[short] Windows: 0x21db40
     */
    TodoReturn startAnimating();

    /**
     * @note[short] Windows: 0x21db80
     */
    virtual TodoReturn animationFinished(char const* p0);
};
