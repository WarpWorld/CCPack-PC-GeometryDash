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

class FileSaveManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "FileSaveManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FileSaveManager, GManager)
    
private:
    [[deprecated("FileSaveManager::sharedState not implemented")]]
    /**
     */
    static FileSaveManager* sharedState();
public:
    
private:
    [[deprecated("FileSaveManager::getStoreData not implemented")]]
    /**
     */
    TodoReturn getStoreData();
public:
    
private:
    [[deprecated("FileSaveManager::loadDataFromFile not implemented")]]
    /**
     */
    TodoReturn loadDataFromFile(char const* p0);
public:
    
private:
    [[deprecated("FileSaveManager::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("FileSaveManager::firstLoad not implemented")]]
    /**
     */
    virtual TodoReturn firstLoad();
public:
};
