#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"
#include "GJSpecialColorSelectDelegate.hpp"

class SetColorIDPopup : public SetIDPopup, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "SetColorIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetColorIDPopup, SetIDPopup)
    
private:
    [[deprecated("SetColorIDPopup::create not implemented")]]
    /**
     */
    static SetColorIDPopup* create(int p0);
public:
    
private:
    [[deprecated("SetColorIDPopup::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("SetColorIDPopup::onSelectSpecialColor not implemented")]]
    /**
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetColorIDPopup::colorSelectClosed not implemented")]]
    /**
     */
    virtual TodoReturn colorSelectClosed(GJSpecialColorSelect* p0, int p1);
public:
};
