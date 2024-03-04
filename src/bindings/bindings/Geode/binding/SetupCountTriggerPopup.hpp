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

class SetupCountTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCountTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCountTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x32ad80
     */
    static SetupCountTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x32ae30
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupCountTriggerPopup::onEnableGroup not implemented")]]
    /**
     */
    void onEnableGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::onItemIDArrow not implemented")]]
    /**
     */
    void onItemIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::onMultiActivate not implemented")]]
    /**
     */
    void onMultiActivate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::onTargetCountArrow not implemented")]]
    /**
     */
    void onTargetCountArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::onTargetIDArrow not implemented")]]
    /**
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::updateCountTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateCountTextInputLabel();
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::updateItemID not implemented")]]
    /**
     */
    TodoReturn updateItemID();
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::updateItemIDInputLabel not implemented")]]
    /**
     */
    TodoReturn updateItemIDInputLabel();
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::updateTargetCount not implemented")]]
    /**
     */
    TodoReturn updateTargetCount();
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::updateTargetID not implemented")]]
    /**
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::updateTargetIDInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTargetIDInputLabel();
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCountTriggerPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
