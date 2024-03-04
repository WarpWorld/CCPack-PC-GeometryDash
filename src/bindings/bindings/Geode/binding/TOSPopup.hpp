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

class TOSPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TOSPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TOSPopup, FLAlertLayer)
    
private:
    [[deprecated("TOSPopup::create not implemented")]]
    /**
     */
    static TOSPopup* create();
public:
    
private:
    [[deprecated("TOSPopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TOSPopup::onPrivacy not implemented")]]
    /**
     */
    void onPrivacy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TOSPopup::onTOS not implemented")]]
    /**
     */
    void onTOS(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2122e0
     */
    virtual bool init();
    
private:
    [[deprecated("TOSPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
