#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class TutorialPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialPopup, FLAlertLayer)
    
private:
    [[deprecated("TutorialPopup::create not implemented")]]
    /**
     */
    static TutorialPopup* create(gd::string p0);
public:
    
private:
    [[deprecated("TutorialPopup::animateMenu not implemented")]]
    /**
     */
    TodoReturn animateMenu();
public:
    
private:
    [[deprecated("TutorialPopup::closeTutorial not implemented")]]
    /**
     */
    TodoReturn closeTutorial(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("TutorialPopup::init not implemented")]]
    /**
     */
    bool init(gd::string p0);
public:
    
private:
    [[deprecated("TutorialPopup::registerForCallback not implemented")]]
    /**
     */
    TodoReturn registerForCallback(cocos2d::SEL_MenuHandler p0, cocos2d::CCNode* p1);
public:
    
private:
    [[deprecated("TutorialPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("TutorialPopup::show not implemented")]]
    /**
     */
    virtual void show();
public:
};
