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

class ArtistCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "ArtistCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ArtistCell, TableViewCell)

    /**
     * @note[short] Windows: 0x83eb0
     */
    TodoReturn loadFromObject(SongInfoObject* p0);
    
private:
    [[deprecated("ArtistCell::onNewgrounds not implemented")]]
    /**
     */
    void onNewgrounds(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ArtistCell::onYouTube not implemented")]]
    /**
     */
    void onYouTube(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x80e10
     */
    TodoReturn updateBGColor(int p0);
    
private:
    [[deprecated("ArtistCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("ArtistCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
