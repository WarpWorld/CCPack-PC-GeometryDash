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

class GJRobotSprite : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "GJRobotSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRobotSprite, CCAnimatedSprite)

    /**
     * @note[short] Windows: 0x217510
     */
    static GJRobotSprite* create(int p0);
    
private:
    [[deprecated("GJRobotSprite::hideGlow not implemented")]]
    /**
     */
    TodoReturn hideGlow();
public:

    /**
     * @note[short] Windows: 0x2175e0
     */
    bool init(int p0, gd::string p1);
    
private:
    [[deprecated("GJRobotSprite::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("GJRobotSprite::showGlow not implemented")]]
    /**
     */
    TodoReturn showGlow();
public:
    
private:
    [[deprecated("GJRobotSprite::updateColor01 not implemented")]]
    /**
     */
    TodoReturn updateColor01(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("GJRobotSprite::updateColor02 not implemented")]]
    /**
     */
    TodoReturn updateColor02(cocos2d::ccColor3B p0);
public:

    /**
     * @note[short] Windows: 0x217b70
     */
    TodoReturn updateColors();

    /**
     * @note[short] Windows: 0x2180b0
     */
    TodoReturn updateFrame(int p0);

    /**
     * @note[short] Windows: 0x217b10
     */
    TodoReturn updateGlowColor(cocos2d::ccColor3B p0, bool p1);

    /**
     * @note[short] Windows: 0x217ff0
     */
    virtual void setOpacity(unsigned char p0);
    
private:
    [[deprecated("GJRobotSprite::hideSecondary not implemented")]]
    /**
     */
    virtual TodoReturn hideSecondary();
public:
};
