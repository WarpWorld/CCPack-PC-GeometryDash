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
#include "CustomSFXDelegate.hpp"

class CustomSFXCell : public TableViewCell, public CustomSFXDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSFXCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSFXCell, TableViewCell)

    /**
     * @note[short] Windows: 0x83670
     */
    TodoReturn loadFromObject(SFXInfoObject* p0);
    
private:
    [[deprecated("CustomSFXCell::shouldReload not implemented")]]
    /**
     */
    TodoReturn shouldReload();
public:

    /**
     * @note[short] Windows: 0x83760
     */
    TodoReturn updateBGColor(int p0);
    
private:
    [[deprecated("CustomSFXCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("CustomSFXCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("CustomSFXCell::sfxObjectSelected not implemented")]]
    /**
     */
    virtual TodoReturn sfxObjectSelected(SFXInfoObject* p0);
public:
    
private:
    [[deprecated("CustomSFXCell::getActiveSFXID not implemented")]]
    /**
     */
    virtual TodoReturn getActiveSFXID();
public:
};
