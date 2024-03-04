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

class SelectListIconLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectListIconLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectListIconLayer, FLAlertLayer)
    
private:
    [[deprecated("SelectListIconLayer::create not implemented")]]
    /**
     */
    static SelectListIconLayer* create(int p0);
public:
    
private:
    [[deprecated("SelectListIconLayer::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("SelectListIconLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectListIconLayer::onSelect not implemented")]]
    /**
     */
    void onSelect(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectListIconLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
