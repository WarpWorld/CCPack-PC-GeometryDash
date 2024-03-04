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

class SetupCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x328a90
     */
    static SetupCollisionTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x328b40
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onActivateOnExit not implemented")]]
    /**
     */
    void onActivateOnExit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onEnableGroup not implemented")]]
    /**
     */
    void onEnableGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onItemID2Arrow not implemented")]]
    /**
     */
    void onItemID2Arrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onItemIDArrow not implemented")]]
    /**
     */
    void onItemIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onTargetIDArrow not implemented")]]
    /**
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onTargetP1 not implemented")]]
    /**
     */
    void onTargetP1(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onTargetP2 not implemented")]]
    /**
     */
    void onTargetP2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onTargetPP not implemented")]]
    /**
     */
    void onTargetPP(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateItemID not implemented")]]
    /**
     */
    TodoReturn updateItemID();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateItemID2 not implemented")]]
    /**
     */
    TodoReturn updateItemID2();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateItemID2InputLabel not implemented")]]
    /**
     */
    TodoReturn updateItemID2InputLabel();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateItemIDInputLabel not implemented")]]
    /**
     */
    TodoReturn updateItemIDInputLabel();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateTargetID not implemented")]]
    /**
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateTargetIDInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTargetIDInputLabel();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
