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

class UIOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x213db0
     */
    static UIOptionsLayer* create(bool p0);
    
private:
    [[deprecated("UIOptionsLayer::getNode not implemented")]]
    /**
     */
    TodoReturn getNode(int p0);
public:

    /**
     * @note[short] Windows: 0x213e60
     */
    bool init(bool p0);
    
private:
    [[deprecated("UIOptionsLayer::onReset not implemented")]]
    /**
     */
    void onReset(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UIOptionsLayer::onSaveLoad not implemented")]]
    /**
     */
    void onSaveLoad(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UIOptionsLayer::toggleUIGroup not implemented")]]
    /**
     */
    TodoReturn toggleUIGroup(int p0);
public:
    
private:
    [[deprecated("UIOptionsLayer::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UIOptionsLayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UIOptionsLayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UIOptionsLayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UIOptionsLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("UIOptionsLayer::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UIOptionsLayer::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("UIOptionsLayer::getValue not implemented")]]
    /**
     */
    virtual TodoReturn getValue(int p0);
public:
};
