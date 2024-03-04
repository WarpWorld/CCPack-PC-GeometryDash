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
#include "SelectSettingDelegate.hpp"

class SetupAudioLineGuidePopup : public SetupTriggerPopup, public SelectSettingDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAudioLineGuidePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioLineGuidePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAudioLineGuidePopup::create not implemented")]]
    /**
     */
    static SetupAudioLineGuidePopup* create(AudioLineGuideGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAudioLineGuidePopup::init not implemented")]]
    /**
     */
    bool init(AudioLineGuideGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAudioLineGuidePopup::onSpeed not implemented")]]
    /**
     */
    void onSpeed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAudioLineGuidePopup::selectSettingClosed not implemented")]]
    /**
     */
    virtual TodoReturn selectSettingClosed(SelectSettingLayer* p0);
public:
};
