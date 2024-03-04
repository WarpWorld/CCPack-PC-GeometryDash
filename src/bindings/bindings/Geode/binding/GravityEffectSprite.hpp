#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GravityEffectSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GravityEffectSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GravityEffectSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x2eba40
     */
    static GravityEffectSprite* create();

    /**
     * @note[short] Windows: 0x2ebd60
     */
    TodoReturn updateSpritesColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Windows: 0x2ebb00
     */
    virtual bool init();
    
private:
    [[deprecated("GravityEffectSprite::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
