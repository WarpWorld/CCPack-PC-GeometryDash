#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class HardStreak : public cocos2d::CCDrawNode {
public:
    static constexpr auto CLASS_NAME = "HardStreak";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(HardStreak, cocos2d::CCDrawNode)
    
private:
    [[deprecated("HardStreak::create not implemented")]]
    /**
     */
    static HardStreak* create();
public:

    /**
     * @note[short] Windows: 0x227250
     */
    TodoReturn addPoint(cocos2d::CCPoint p0);
    
private:
    [[deprecated("HardStreak::clearAboveXPos not implemented")]]
    /**
     */
    TodoReturn clearAboveXPos(float p0);
public:
    
private:
    [[deprecated("HardStreak::clearBehindXPos not implemented")]]
    /**
     */
    TodoReturn clearBehindXPos(float p0);
public:
    
private:
    [[deprecated("HardStreak::createDuplicate not implemented")]]
    /**
     */
    TodoReturn createDuplicate();
public:
    
private:
    [[deprecated("HardStreak::firstSetup not implemented")]]
    /**
     */
    TodoReturn firstSetup();
public:
    
private:
    [[deprecated("HardStreak::normalizeAngle not implemented")]]
    /**
     */
    TodoReturn normalizeAngle(double p0);
public:
    
private:
    [[deprecated("HardStreak::quadCornerOffset not implemented")]]
    /**
     */
    TodoReturn quadCornerOffset(cocos2d::CCPoint p0, cocos2d::CCPoint p1, float p2);
public:
    
private:
    [[deprecated("HardStreak::reset not implemented")]]
    /**
     */
    TodoReturn reset();
public:
    
private:
    [[deprecated("HardStreak::resumeStroke not implemented")]]
    /**
     */
    TodoReturn resumeStroke();
public:
    
private:
    [[deprecated("HardStreak::scheduleAutoUpdate not implemented")]]
    /**
     */
    TodoReturn scheduleAutoUpdate();
public:
    
private:
    [[deprecated("HardStreak::stopStroke not implemented")]]
    /**
     */
    TodoReturn stopStroke();
public:

    /**
     * @note[short] Windows: 0x226960
     */
    void updateStroke(float p0);

    /**
     * @note[short] Windows: 0x226860
     */
    virtual bool init();
};
