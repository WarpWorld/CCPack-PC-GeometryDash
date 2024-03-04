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

class NumberInputLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "NumberInputLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NumberInputLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x28ab70
     */
    static NumberInputLayer* create();
    
private:
    [[deprecated("NumberInputLayer::deleteLast not implemented")]]
    /**
     */
    TodoReturn deleteLast();
public:
    
private:
    [[deprecated("NumberInputLayer::inputNumber not implemented")]]
    /**
     */
    TodoReturn inputNumber(int p0);
public:
    
private:
    [[deprecated("NumberInputLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NumberInputLayer::onDone not implemented")]]
    /**
     */
    void onDone(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NumberInputLayer::onNumber not implemented")]]
    /**
     */
    void onNumber(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NumberInputLayer::updateNumberState not implemented")]]
    /**
     */
    TodoReturn updateNumberState();
public:

    /**
     * @note[short] Windows: 0x28ac10
     */
    virtual bool init();
    
private:
    [[deprecated("NumberInputLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("NumberInputLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
