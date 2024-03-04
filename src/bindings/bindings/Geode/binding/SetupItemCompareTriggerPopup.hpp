#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupItemCompareTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemCompareTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemCompareTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x369a60
     */
    static SetupItemCompareTriggerPopup* create(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x369b10
     */
    bool init(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupItemCompareTriggerPopup::onOpButton not implemented")]]
    /**
     */
    void onOpButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupItemCompareTriggerPopup::updateFormulaLabel not implemented")]]
    /**
     */
    TodoReturn updateFormulaLabel();
public:
    
private:
    [[deprecated("SetupItemCompareTriggerPopup::updateOpButton not implemented")]]
    /**
     */
    TodoReturn updateOpButton(CCMenuItemSpriteExtra* p0, int p1, int p2);
public:
    
private:
    [[deprecated("SetupItemCompareTriggerPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupItemCompareTriggerPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
