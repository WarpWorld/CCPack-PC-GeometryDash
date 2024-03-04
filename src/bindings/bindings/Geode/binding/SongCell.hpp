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

class SongCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongCell, TableViewCell)

    /**
     * @note[short] Windows: 0x82cb0
     */
    void loadFromObject(SongObject* p0);
    
private:
    [[deprecated("SongCell::onClick not implemented")]]
    /**
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("SongCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SongCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
