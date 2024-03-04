#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "MusicSearchResult.hpp"

class SFXSearchResult : public MusicSearchResult {
public:
    static constexpr auto CLASS_NAME = "SFXSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXSearchResult, MusicSearchResult)

    /**
     * @note[short] Windows: 0x289f00
     */
    static SFXSearchResult* create(int p0);
    
private:
    [[deprecated("SFXSearchResult::getActiveFolder not implemented")]]
    /**
     */
    TodoReturn getActiveFolder();
public:

    /**
     * @note[short] Windows: 0x28a500
     */
    TodoReturn getSelectedPage(int p0, int p1);
    
private:
    [[deprecated("SFXSearchResult::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("SFXSearchResult::setActiveFolder not implemented")]]
    /**
     */
    void setActiveFolder(SFXFolderObject* p0);
public:
    
private:
    [[deprecated("SFXSearchResult::updateObjects not implemented")]]
    /**
     */
    virtual TodoReturn updateObjects(AudioSortType p0);
public:
};
