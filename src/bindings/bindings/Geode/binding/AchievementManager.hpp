#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x9ac0
     */
    static AchievementManager* sharedState();
    
private:
    [[deprecated("AchievementManager::achievementForUnlock not implemented")]]
    /**
     */
    TodoReturn achievementForUnlock(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x9bc0
     */
    TodoReturn addAchievement(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, int p5);

    /**
     * @note[short] Windows: 0xf74a
     */
    TodoReturn addManualAchievements();
    
private:
    [[deprecated("AchievementManager::areAchievementsEarned not implemented")]]
    /**
     */
    TodoReturn areAchievementsEarned(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("AchievementManager::checkAchFromUnlock not implemented")]]
    /**
     */
    TodoReturn checkAchFromUnlock(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::dataLoaded not implemented")]]
    /**
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("AchievementManager::encodeDataTo not implemented")]]
    /**
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("AchievementManager::firstSetup not implemented")]]
    /**
     */
    TodoReturn firstSetup();
public:
    
private:
    [[deprecated("AchievementManager::getAchievementRewardDict not implemented")]]
    /**
     */
    TodoReturn getAchievementRewardDict();
public:
    
private:
    [[deprecated("AchievementManager::getAchievementsWithID not implemented")]]
    /**
     */
    TodoReturn getAchievementsWithID(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::getAllAchievements not implemented")]]
    /**
     */
    TodoReturn getAllAchievements();
public:
    
private:
    [[deprecated("AchievementManager::getAllAchievementsSorted not implemented")]]
    /**
     */
    TodoReturn getAllAchievementsSorted(bool p0);
public:
    
private:
    [[deprecated("AchievementManager::isAchievementAvailable not implemented")]]
    /**
     */
    bool isAchievementAvailable(gd::string p0);
public:
    
private:
    [[deprecated("AchievementManager::isAchievementEarned not implemented")]]
    /**
     */
    bool isAchievementEarned(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::limitForAchievement not implemented")]]
    /**
     */
    TodoReturn limitForAchievement(gd::string p0);
public:
    
private:
    [[deprecated("AchievementManager::notifyAchievement not implemented")]]
    /**
     */
    TodoReturn notifyAchievement(char const* p0, char const* p1, char const* p2);
public:

    /**
     * @note[short] Windows: 0x1b550
     */
    TodoReturn notifyAchievementWithID(char const* p0);
    
private:
    [[deprecated("AchievementManager::percentageForCount not implemented")]]
    /**
     */
    TodoReturn percentageForCount(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x1ab50
     */
    TodoReturn percentForAchievement(char const* p0);

    /**
     * @note[short] Windows: 0x1b7e0
     */
    TodoReturn reportAchievementWithID(char const* p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x1b8f0
     */
    TodoReturn reportPlatformAchievementWithID(char const* p0, int p1);

    /**
     * @note[short] Windows: 0x1b730
     */
    TodoReturn resetAchievement(char const* p0);
    
private:
    [[deprecated("AchievementManager::resetAchievements not implemented")]]
    /**
     */
    TodoReturn resetAchievements();
public:
    
private:
    [[deprecated("AchievementManager::setup not implemented")]]
    /**
     */
    TodoReturn setup();
public:
    
private:
    [[deprecated("AchievementManager::storeAchievementUnlocks not implemented")]]
    /**
     */
    TodoReturn storeAchievementUnlocks();
public:
    
private:
    [[deprecated("AchievementManager::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
