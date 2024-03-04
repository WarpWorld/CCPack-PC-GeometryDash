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
#include "FLAlertLayerProtocol.hpp"

class NewgroundsInfoLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "NewgroundsInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NewgroundsInfoLayer, FLAlertLayer)
    
private:
    [[deprecated("NewgroundsInfoLayer::create not implemented")]]
    /**
     */
    static NewgroundsInfoLayer* create();
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onArtists not implemented")]]
    /**
     */
    void onArtists(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onChanges not implemented")]]
    /**
     */
    void onChanges(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onGuidelines not implemented")]]
    /**
     */
    void onGuidelines(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onNewgrounds not implemented")]]
    /**
     */
    void onNewgrounds(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onSupporter not implemented")]]
    /**
     */
    void onSupporter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
};
