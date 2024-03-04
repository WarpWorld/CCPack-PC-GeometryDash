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

class ShareListLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareListLayer, FLAlertLayer)
    
private:
    [[deprecated("ShareListLayer::create not implemented")]]
    /**
     */
    static ShareListLayer* create(GJLevelList* p0);
public:
    
private:
    [[deprecated("ShareListLayer::init not implemented")]]
    /**
     */
    bool init(GJLevelList* p0);
public:
    
private:
    [[deprecated("ShareListLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareListLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareListLayer::onShare not implemented")]]
    /**
     */
    void onShare(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareListLayer::onUnlisted not implemented")]]
    /**
     */
    void onUnlisted(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareListLayer::updateUnlistedF not implemented")]]
    /**
     */
    TodoReturn updateUnlistedF();
public:
    
private:
    [[deprecated("ShareListLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
