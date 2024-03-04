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

class SmartTemplateCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SmartTemplateCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartTemplateCell, TableViewCell)

    /**
     * @note[short] Windows: 0x8b020
     */
    TodoReturn loadFromObject(GJSmartTemplate* p0);
    
private:
    [[deprecated("SmartTemplateCell::onClick not implemented")]]
    /**
     */
    void onClick(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x8b320
     */
    TodoReturn updateBGColor(int p0);
    
private:
    [[deprecated("SmartTemplateCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SmartTemplateCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
