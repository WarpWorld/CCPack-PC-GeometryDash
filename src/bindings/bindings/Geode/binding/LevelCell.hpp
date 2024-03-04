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

class LevelCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelCell, TableViewCell)

    /**
     * @note[short] Windows: 0x7d7b0
     */
     LevelCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x7d6f0
     */
    static LevelCell* create(float p0, float p1);

    /**
     * @note[short] Windows: 0x7da60
     */
    TodoReturn loadCustomLevelCell();

    /**
     * @note[short] Windows: 0x7d8b0
     */
    TodoReturn loadFromLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x804d0
     */
    TodoReturn loadLocalLevelCell();

    /**
     * @note[short] Windows: 0x80e80
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x7da40
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x80f70
     */
    void onViewProfile(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:

    /**
     * @note[short] Windows: 0x80d80
     */
    TodoReturn updateCellMode(int p0);
    
private:
    [[deprecated("LevelCell::updateToggle not implemented")]]
    /**
     */
    TodoReturn updateToggle();
public:
    
private:
    [[deprecated("LevelCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("LevelCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    CCMenuItemSpriteExtra* m_button;
    GJGameLevel* m_level;
    bool m_cellDrawn;
    CCMenuItemToggler* m_toggler;
    cocos2d::CCPoint m_point;
    cocos2d::CCMenu* m_mainMenu;
    bool m_compactView;
    int m_cellMode;
};
