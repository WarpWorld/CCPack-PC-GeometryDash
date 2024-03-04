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

class SetupRandAdvTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandAdvTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandAdvTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x346250
     */
    static SetupRandAdvTriggerPopup* create(RandTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::addChance not implemented")]]
    /**
     */
    TodoReturn addChance(int p0, int p1);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::addChanceToObject not implemented")]]
    /**
     */
    TodoReturn addChanceToObject(RandTriggerGameObject* p0, int p1, int p2);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::callRemoveFromGroup not implemented")]]
    /**
     */
    TodoReturn callRemoveFromGroup(float p0);
public:

    /**
     * @note[short] Windows: 0x346300
     */
    bool init(RandTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::onAddChance not implemented")]]
    /**
     */
    void onAddChance(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::onRemoveFromGroup not implemented")]]
    /**
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::removeGroupID not implemented")]]
    /**
     */
    TodoReturn removeGroupID(int p0);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::removeGroupIDFromObject not implemented")]]
    /**
     */
    TodoReturn removeGroupIDFromObject(RandTriggerGameObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::updateGroupIDButtons not implemented")]]
    /**
     */
    TodoReturn updateGroupIDButtons();
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
