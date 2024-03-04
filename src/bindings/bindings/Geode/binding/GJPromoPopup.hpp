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

class GJPromoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPromoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPromoPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x216860
     */
    static GJPromoPopup* create(gd::string p0);

    /**
     * @note[short] Windows: 0x216920
     */
    bool init(gd::string p0);
    
private:
    [[deprecated("GJPromoPopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPromoPopup::onExit not implemented")]]
    /**
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("GJPromoPopup::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("GJPromoPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJPromoPopup::show not implemented")]]
    /**
     */
    virtual void show();
public:
};
