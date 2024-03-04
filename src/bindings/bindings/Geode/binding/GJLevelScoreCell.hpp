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

class GJLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLevelScoreCell, TableViewCell)

    /**
     * @note[short] Windows: 0x87cc0
     */
    TodoReturn loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJLevelScoreCell::onViewProfile not implemented")]]
    /**
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJLevelScoreCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("GJLevelScoreCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJLevelScoreCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
