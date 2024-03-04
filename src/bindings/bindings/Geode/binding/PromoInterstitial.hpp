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

class PromoInterstitial : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PromoInterstitial";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PromoInterstitial, FLAlertLayer)
    
private:
    [[deprecated("PromoInterstitial::create not implemented")]]
    /**
     */
    static PromoInterstitial* create(bool p0);
public:
    
private:
    [[deprecated("PromoInterstitial::init not implemented")]]
    /**
     */
    bool init(bool p0);
public:
    
private:
    [[deprecated("PromoInterstitial::onClick not implemented")]]
    /**
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PromoInterstitial::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PromoInterstitial::setup not implemented")]]
    /**
     */
    TodoReturn setup();
public:
    
private:
    [[deprecated("PromoInterstitial::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("PromoInterstitial::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("PromoInterstitial::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("PromoInterstitial::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("PromoInterstitial::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("PromoInterstitial::show not implemented")]]
    /**
     */
    virtual void show();
public:
};
