#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJRobotSprite.hpp"

class GJSpiderSprite : public GJRobotSprite {
public:
    static constexpr auto CLASS_NAME = "GJSpiderSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpiderSprite, GJRobotSprite)

    /**
     * @note[short] Windows: 0x2186e0
     */
    static GJSpiderSprite* create(int p0);
    
private:
    [[deprecated("GJSpiderSprite::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
};
