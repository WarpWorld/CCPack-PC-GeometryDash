#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "CustomSongDelegate.hpp"

class CustomSongCell : public TableViewCell, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongCell, TableViewCell)

    /**
     * @note[short] Windows: 0x831a0
     */
    TodoReturn loadFromObject(SongInfoObject* p0);
    
private:
    [[deprecated("CustomSongCell::onDelete not implemented")]]
    /**
     */
    void onDelete(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongCell::shouldReload not implemented")]]
    /**
     */
    TodoReturn shouldReload();
public:

    /**
     * @note[short] Windows: 0x833a0
     */
    TodoReturn updateBGColor(int p0);
    
private:
    [[deprecated("CustomSongCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("CustomSongCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("CustomSongCell::songIDChanged not implemented")]]
    /**
     */
    virtual TodoReturn songIDChanged(int p0);
public:
    
private:
    [[deprecated("CustomSongCell::getActiveSongID not implemented")]]
    /**
     */
    virtual TodoReturn getActiveSongID();
public:
    
private:
    [[deprecated("CustomSongCell::getSongFileName not implemented")]]
    /**
     */
    virtual TodoReturn getSongFileName();
public:
    
private:
    [[deprecated("CustomSongCell::getLevelSettings not implemented")]]
    /**
     */
    virtual TodoReturn getLevelSettings();
public:
};
