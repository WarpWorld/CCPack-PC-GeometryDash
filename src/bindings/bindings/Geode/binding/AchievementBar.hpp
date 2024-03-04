#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementBar : public cocos2d::CCNodeRGBA {
public:
    static constexpr auto CLASS_NAME = "AchievementBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementBar, cocos2d::CCNodeRGBA)

    /**
     * @note[short] Windows: 0x59720
     */
    static AchievementBar* create(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] Windows: 0x59800
     */
    bool init(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] Windows: 0x5a610
     */
    TodoReturn show();
    
private:
    [[deprecated("AchievementBar::setOpacity not implemented")]]
    /**
     */
    virtual void setOpacity(unsigned char p0);
public:
};
