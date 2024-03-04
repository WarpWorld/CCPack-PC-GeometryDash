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
#include "TextInputDelegate.hpp"
#include "SelectArtDelegate.hpp"

class SetupSmartBlockLayer : public FLAlertLayer, public TextInputDelegate, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSmartBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartBlockLayer, FLAlertLayer)
    
private:
    [[deprecated("SetupSmartBlockLayer::create not implemented")]]
    /**
     */
    static SetupSmartBlockLayer* create(SmartGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::determineStartValues not implemented")]]
    /**
     */
    TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::init not implemented")]]
    /**
     */
    bool init(SmartGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onAllowFlipping not implemented")]]
    /**
     */
    void onAllowFlipping(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onAllowRotation not implemented")]]
    /**
     */
    void onAllowRotation(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onCreate not implemented")]]
    /**
     */
    void onCreate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onCreateAll not implemented")]]
    /**
     */
    void onCreateAll(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onCreateTemplate not implemented")]]
    /**
     */
    void onCreateTemplate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onDontDelete not implemented")]]
    /**
     */
    void onDontDelete(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onIgnoreCorners not implemented")]]
    /**
     */
    void onIgnoreCorners(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onNearbyReference not implemented")]]
    /**
     */
    void onNearbyReference(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onPasteTemplate not implemented")]]
    /**
     */
    void onPasteTemplate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onReferenceOnly not implemented")]]
    /**
     */
    void onReferenceOnly(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onSelectPremade not implemented")]]
    /**
     */
    void onSelectPremade(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::onSelectTemplate not implemented")]]
    /**
     */
    void onSelectTemplate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("SetupSmartBlockLayer::selectArtClosed not implemented")]]
    /**
     */
    virtual TodoReturn selectArtClosed(SelectArtLayer* p0);
public:
};
