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

class SetupItemEditTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemEditTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemEditTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x367c80
     */
    static SetupItemEditTriggerPopup* create(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x367d30
     */
    bool init(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupItemEditTriggerPopup::onOpButton not implemented")]]
    /**
     */
    void onOpButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupItemEditTriggerPopup::updateFormulaLabel not implemented")]]
    /**
     */
    TodoReturn updateFormulaLabel();
public:
    
private:
    [[deprecated("SetupItemEditTriggerPopup::updateOpButton not implemented")]]
    /**
     */
    TodoReturn updateOpButton(CCMenuItemSpriteExtra* p0, int p1, int p2);
public:
    
private:
    [[deprecated("SetupItemEditTriggerPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupItemEditTriggerPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
