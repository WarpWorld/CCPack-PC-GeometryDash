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
#include "SelectArtDelegate.hpp"

class SetupArtSwitchPopup : public SetupTriggerPopup, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupArtSwitchPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupArtSwitchPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupArtSwitchPopup::create not implemented")]]
    /**
     */
    static SetupArtSwitchPopup* create(ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupArtSwitchPopup::init not implemented")]]
    /**
     */
    bool init(ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupArtSwitchPopup::onArt not implemented")]]
    /**
     */
    void onArt(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupArtSwitchPopup::selectArtClosed not implemented")]]
    /**
     */
    virtual TodoReturn selectArtClosed(SelectArtLayer* p0);
public:
};
