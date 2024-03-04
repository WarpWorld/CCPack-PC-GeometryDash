#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChestSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJChestSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChestSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x2fa380
     */
    static GJChestSprite* create(int p0);
    
private:
    [[deprecated("GJChestSprite::init not implemented")]]
    /**
     */
    bool init(int p0);
public:

    /**
     * @note[short] Windows: 0x2fa590
     */
    TodoReturn switchToState(ChestSpriteState p0, bool p1);
    
private:
    [[deprecated("GJChestSprite::setOpacity not implemented")]]
    /**
     */
    virtual void setOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GJChestSprite::setColor not implemented")]]
    /**
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);
public:
};
