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

class DemonFilterSelectLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonFilterSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonFilterSelectLayer, FLAlertLayer)
    
private:
    [[deprecated("DemonFilterSelectLayer::create not implemented")]]
    /**
     */
    static DemonFilterSelectLayer* create();
public:
    
private:
    [[deprecated("DemonFilterSelectLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("DemonFilterSelectLayer::selectRating not implemented")]]
    /**
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x2673e0
     */
    virtual bool init();
    
private:
    [[deprecated("DemonFilterSelectLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
