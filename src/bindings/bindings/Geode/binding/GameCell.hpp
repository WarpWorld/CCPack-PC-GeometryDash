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

class GameCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GameCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameCell, TableViewCell)
    
private:
    [[deprecated("GameCell::loadFromString not implemented")]]
    /**
     */
    TodoReturn loadFromString(gd::string p0);
public:
    
private:
    [[deprecated("GameCell::onTouch not implemented")]]
    /**
     */
    void onTouch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GameCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("GameCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GameCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
