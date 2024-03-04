#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MapSelectLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MapSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MapSelectLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("MapSelectLayer::create not implemented")]]
    /**
     */
    static MapSelectLayer* create();
public:
    
private:
    [[deprecated("MapSelectLayer::checkTouchMonster not implemented")]]
    /**
     */
    TodoReturn checkTouchMonster(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("MapSelectLayer::createObjectAtPoint not implemented")]]
    /**
     */
    TodoReturn createObjectAtPoint(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("MapSelectLayer::getConstrainedMapPos not implemented")]]
    /**
     */
    TodoReturn getConstrainedMapPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("MapSelectLayer::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MapSelectLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene();
public:
    
private:
    [[deprecated("MapSelectLayer::update not implemented")]]
    /**
     */
    virtual void update(float p0);
public:
    
private:
    [[deprecated("MapSelectLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("MapSelectLayer::onExit not implemented")]]
    /**
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("MapSelectLayer::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("MapSelectLayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("MapSelectLayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("MapSelectLayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("MapSelectLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("MapSelectLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("MapSelectLayer::scrollWheel not implemented")]]
    /**
     */
    virtual void scrollWheel(float p0, float p1);
public:
};
