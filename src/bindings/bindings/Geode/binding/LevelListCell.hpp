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

class LevelListCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelListCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListCell, TableViewCell)
    
private:
    [[deprecated("LevelListCell::create not implemented")]]
    /**
     */
    static LevelListCell* create(float p0, float p1);
public:

    /**
     * @note[short] Windows: 0x8b570
     */
    void loadFromList(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x8c8b0
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x8c9a0
     */
    void onListInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x8c9c0
     */
    void onViewProfile(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelListCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("LevelListCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("LevelListCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    GJLevelList* m_levelList;
    bool m_addingLevel;
};
