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

class SetupInstantCountPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCountPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCountPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupInstantCountPopup::create not implemented")]]
    /**
     */
    static SetupInstantCountPopup* create(CountTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::init not implemented")]]
    /**
     */
    bool init(CountTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onCountType not implemented")]]
    /**
     */
    void onCountType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onEnableGroup not implemented")]]
    /**
     */
    void onEnableGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onTargetCountArrow not implemented")]]
    /**
     */
    void onTargetCountArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onTargetID2Arrow not implemented")]]
    /**
     */
    void onTargetID2Arrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onTargetIDArrow not implemented")]]
    /**
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateCountTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateCountTextInputLabel();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateItemID not implemented")]]
    /**
     */
    TodoReturn updateItemID();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateItemIDInputLabel not implemented")]]
    /**
     */
    TodoReturn updateItemIDInputLabel();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateTargetCount not implemented")]]
    /**
     */
    TodoReturn updateTargetCount();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateTargetID not implemented")]]
    /**
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateTargetIDInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTargetIDInputLabel();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
