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

class MapPackCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "MapPackCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MapPackCell, TableViewCell)

    /**
     * @note[short] Windows: 0x812a0
     */
    TodoReturn loadFromMapPack(GJMapPack* p0);
    
private:
    [[deprecated("MapPackCell::onClaimReward not implemented")]]
    /**
     */
    void onClaimReward(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x81cf0
     */
    void onClick(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MapPackCell::playCompleteEffect not implemented")]]
    /**
     */
    TodoReturn playCompleteEffect();
public:
    
private:
    [[deprecated("MapPackCell::reloadCell not implemented")]]
    /**
     */
    TodoReturn reloadCell();
public:
    
private:
    [[deprecated("MapPackCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("MapPackCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("MapPackCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
