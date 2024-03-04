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

class SetupReverbPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupReverbPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupReverbPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupReverbPopup::create not implemented")]]
    /**
     */
    static SetupReverbPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupReverbPopup::init not implemented")]]
    /**
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupReverbPopup::onPlay not implemented")]]
    /**
     */
    void onPlay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupReverbPopup::onReverb not implemented")]]
    /**
     */
    void onReverb(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupReverbPopup::updateReverbLabel not implemented")]]
    /**
     */
    TodoReturn updateReverbLabel();
public:
    
private:
    [[deprecated("SetupReverbPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
