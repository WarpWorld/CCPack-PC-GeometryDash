#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GManager.hpp"

class LocalLevelManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "LocalLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LocalLevelManager, GManager)

    /**
     * @note[short] Windows: 0x277760
     */
    static LocalLevelManager* sharedState();
	inline static LocalLevelManager* get() {
        return LocalLevelManager::sharedState();
    }

    /**
     * @note[short] Windows: 0x277cb0
     */
    cocos2d::CCDictionary* getAllLevelsInDict();

    /**
     * @note[short] Windows: 0x277e00
     */
    TodoReturn getAllLevelsWithName(gd::string p0);
    
private:
    [[deprecated("LocalLevelManager::getCreatedLevels not implemented")]]
    /**
     */
    TodoReturn getCreatedLevels(int p0);
public:

    /**
     * @note[short] Windows: 0x2784f0
     */
    TodoReturn getCreatedLists(int p0);
    
private:
    [[deprecated("LocalLevelManager::getLevelsInNameGroups not implemented")]]
    /**
     */
    TodoReturn getLevelsInNameGroups();
public:

    /**
     * @note[short] Windows: 0x277a90
     */
    TodoReturn getMainLevelString(int p0);
    
private:
    [[deprecated("LocalLevelManager::markLevelsAsUnmodified not implemented")]]
    /**
     */
    TodoReturn markLevelsAsUnmodified();
public:
    
private:
    [[deprecated("LocalLevelManager::moveLevelToTop not implemented")]]
    /**
     */
    TodoReturn moveLevelToTop(GJGameLevel* p0);
public:
    
private:
    [[deprecated("LocalLevelManager::reorderLevels not implemented")]]
    /**
     */
    TodoReturn reorderLevels();
public:

    /**
     * @note[short] Windows: 0x277900
     */
    TodoReturn tryLoadMainLevelString(int p0);
    
private:
    [[deprecated("LocalLevelManager::updateLevelOrder not implemented")]]
    /**
     */
    TodoReturn updateLevelOrder();
public:
    
private:
    [[deprecated("LocalLevelManager::updateLevelRevision not implemented")]]
    /**
     */
    TodoReturn updateLevelRevision();
public:
    
private:
    [[deprecated("LocalLevelManager::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("LocalLevelManager::encodeDataTo not implemented")]]
    /**
     */
    virtual TodoReturn encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("LocalLevelManager::dataLoaded not implemented")]]
    /**
     */
    virtual TodoReturn dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("LocalLevelManager::firstLoad not implemented")]]
    /**
     */
    virtual TodoReturn firstLoad();
public:
    cocos2d::CCArray* m_localLevels;
    cocos2d::CCArray* m_LLM03;
    gd::map<int, gd::string> m_mainLevels;
};
