#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class GJSpecialColorSelect : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJSpecialColorSelect";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpecialColorSelect, FLAlertLayer)
    
private:
    [[deprecated("GJSpecialColorSelect::create not implemented")]]
    /**
     */
    static GJSpecialColorSelect* create(int p0, GJSpecialColorSelectDelegate* p1, ColorSelectType p2);
public:
    
private:
    [[deprecated("GJSpecialColorSelect::getButtonByTag not implemented")]]
    /**
     */
    TodoReturn getButtonByTag(int p0);
public:
    
private:
    [[deprecated("GJSpecialColorSelect::highlightSelected not implemented")]]
    /**
     */
    TodoReturn highlightSelected(ButtonSprite* p0);
public:

    /**
     * @note[short] Windows: 0x225bf0
     */
    bool init(int p0, GJSpecialColorSelectDelegate* p1, ColorSelectType p2);
    
private:
    [[deprecated("GJSpecialColorSelect::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJSpecialColorSelect::onSelectColor not implemented")]]
    /**
     */
    void onSelectColor(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2265d0
     */
    static const char* textForColorIdx(int p0);
    
private:
    [[deprecated("GJSpecialColorSelect::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
