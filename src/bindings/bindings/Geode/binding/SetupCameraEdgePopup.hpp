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

class SetupCameraEdgePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraEdgePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraEdgePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupCameraEdgePopup::create not implemented")]]
    /**
     */
    static SetupCameraEdgePopup* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::init not implemented")]]
    /**
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::onCameraEdge not implemented")]]
    /**
     */
    void onCameraEdge(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::onTargetIDArrow not implemented")]]
    /**
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::onUnlockEdge not implemented")]]
    /**
     */
    void onUnlockEdge(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::updateTargetID not implemented")]]
    /**
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
