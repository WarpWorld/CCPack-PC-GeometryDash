#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementNotifier : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementNotifier";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementNotifier, cocos2d::CCNode)
    
private:
    [[deprecated("AchievementNotifier::sharedState not implemented")]]
    /**
     */
    static AchievementNotifier* sharedState();
public:
    
private:
    [[deprecated("AchievementNotifier::achievementDisplayFinished not implemented")]]
    /**
     */
    TodoReturn achievementDisplayFinished();
public:
    
private:
    [[deprecated("AchievementNotifier::notifyAchievement not implemented")]]
    /**
     */
    TodoReturn notifyAchievement(char const* title, char const* desc, char const* icon, bool quest);
public:

    /**
     * @note[short] Windows: 0x1c0a0
     */
    TodoReturn showNextAchievement();

    /**
     * @note[short] Windows: 0x1c200
     */
    TodoReturn willSwitchToScene(cocos2d::CCScene* p0);
    
private:
    [[deprecated("AchievementNotifier::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
