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

class URLCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "URLCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLCell, TableViewCell)

    /**
     * @note[short] Windows: 0x8ca50
     */
    TodoReturn loadFromObject(CCURLObject* p0);
    
private:
    [[deprecated("URLCell::onURL not implemented")]]
    /**
     */
    void onURL(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("URLCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("URLCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("URLCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
