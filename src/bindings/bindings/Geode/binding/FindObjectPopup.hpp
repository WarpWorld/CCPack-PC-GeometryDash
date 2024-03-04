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

class FindObjectPopup : public SetIDPopup {
public:
    static constexpr auto CLASS_NAME = "FindObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindObjectPopup, SetIDPopup)
    
private:
    [[deprecated("FindObjectPopup::create not implemented")]]
    /**
     */
    static FindObjectPopup* create();
public:
    
private:
    [[deprecated("FindObjectPopup::onFindObjectID not implemented")]]
    /**
     */
    void onFindObjectID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FindObjectPopup::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
