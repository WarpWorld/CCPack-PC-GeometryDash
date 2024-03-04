#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class EditorOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "EditorOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorOptionsLayer, GJOptionsLayer)
    
private:
    [[deprecated("EditorOptionsLayer::create not implemented")]]
    /**
     */
    static EditorOptionsLayer* create();
public:
    
private:
    [[deprecated("EditorOptionsLayer::onButtonRows not implemented")]]
    /**
     */
    void onButtonRows(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorOptionsLayer::onButtonsPerRow not implemented")]]
    /**
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorOptionsLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("EditorOptionsLayer::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorOptionsLayer::setupOptions not implemented")]]
    /**
     */
    virtual TodoReturn setupOptions();
public:
};
