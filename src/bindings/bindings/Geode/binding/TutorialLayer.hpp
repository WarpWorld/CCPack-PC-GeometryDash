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

class TutorialLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialLayer, FLAlertLayer)
    
private:
    [[deprecated("TutorialLayer::create not implemented")]]
    /**
     */
    static TutorialLayer* create();
public:
    
private:
    [[deprecated("TutorialLayer::loadPage not implemented")]]
    /**
     */
    TodoReturn loadPage(int p0);
public:
    
private:
    [[deprecated("TutorialLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TutorialLayer::onNext not implemented")]]
    /**
     */
    void onNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TutorialLayer::removeTutorialTexture not implemented")]]
    /**
     */
    TodoReturn removeTutorialTexture();
public:
    
private:
    [[deprecated("TutorialLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("TutorialLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
