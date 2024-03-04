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

class AchievementCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "AchievementCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementCell, TableViewCell)

    /**
     * @note[short] Windows: 0x7c730
     */
    TodoReturn loadFromDict(cocos2d::CCDictionary* p0);
    
private:
    [[deprecated("AchievementCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("AchievementCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("AchievementCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
