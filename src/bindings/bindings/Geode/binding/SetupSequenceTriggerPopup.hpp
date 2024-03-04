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

class SetupSequenceTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSequenceTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSequenceTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x34b450
     */
    static SetupSequenceTriggerPopup* create(SequenceTriggerGameObject* p0);

    /**
     * @note[short] Windows: 0x34b4f0
     */
    bool init(SequenceTriggerGameObject* p0);
    
private:
    [[deprecated("SetupSequenceTriggerPopup::onAddChance not implemented")]]
    /**
     */
    void onAddChance(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::onChangeOrder not implemented")]]
    /**
     */
    void onChangeOrder(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::onDeleteSelected not implemented")]]
    /**
     */
    void onDeleteSelected(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::onSelect not implemented")]]
    /**
     */
    void onSelect(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::updateGroupIDButtons not implemented")]]
    /**
     */
    TodoReturn updateGroupIDButtons();
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
