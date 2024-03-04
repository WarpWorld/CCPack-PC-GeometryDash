#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SlideInLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "SlideInLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SlideInLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("SlideInLayer::create not implemented")]]
    /**
     */
    static SlideInLayer* create();
public:
    
private:
    [[deprecated("SlideInLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SlideInLayer::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("SlideInLayer::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("SlideInLayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("SlideInLayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("SlideInLayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("SlideInLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("SlideInLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SlideInLayer::customSetup not implemented")]]
    /**
     */
    virtual void customSetup();
public:
    
private:
    [[deprecated("SlideInLayer::enterLayer not implemented")]]
    /**
     */
    virtual TodoReturn enterLayer();
public:
    
private:
    [[deprecated("SlideInLayer::exitLayer not implemented")]]
    /**
     */
    virtual TodoReturn exitLayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SlideInLayer::showLayer not implemented")]]
    /**
     */
    virtual TodoReturn showLayer(bool p0);
public:
    
private:
    [[deprecated("SlideInLayer::hideLayer not implemented")]]
    /**
     */
    virtual TodoReturn hideLayer(bool p0);
public:
    
private:
    [[deprecated("SlideInLayer::layerVisible not implemented")]]
    /**
     */
    virtual TodoReturn layerVisible();
public:
    
private:
    [[deprecated("SlideInLayer::layerHidden not implemented")]]
    /**
     */
    virtual TodoReturn layerHidden();
public:
    
private:
    [[deprecated("SlideInLayer::enterAnimFinished not implemented")]]
    /**
     */
    virtual TodoReturn enterAnimFinished();
public:
    
private:
    [[deprecated("SlideInLayer::disableUI not implemented")]]
    /**
     */
    virtual TodoReturn disableUI();
public:
    
private:
    [[deprecated("SlideInLayer::enableUI not implemented")]]
    /**
     */
    virtual TodoReturn enableUI();
public:
};
