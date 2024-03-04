#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"

class WorldSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "WorldSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(WorldSelectLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("WorldSelectLayer::create not implemented")]]
    /**
     */
    static WorldSelectLayer* create(int p0);
public:
    
private:
    [[deprecated("WorldSelectLayer::animateInActiveIsland not implemented")]]
    /**
     */
    TodoReturn animateInActiveIsland();
public:
    
private:
    [[deprecated("WorldSelectLayer::colorForPage not implemented")]]
    /**
     */
    TodoReturn colorForPage(int p0);
public:
    
private:
    [[deprecated("WorldSelectLayer::getColorValue not implemented")]]
    /**
     */
    TodoReturn getColorValue(int p0, int p1, float p2);
public:
    
private:
    [[deprecated("WorldSelectLayer::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0, bool p1);
public:
    
private:
    [[deprecated("WorldSelectLayer::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("WorldSelectLayer::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("WorldSelectLayer::onFreeLevels not implemented")]]
    /**
     */
    void onFreeLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("WorldSelectLayer::onGarage not implemented")]]
    /**
     */
    void onGarage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("WorldSelectLayer::onNext not implemented")]]
    /**
     */
    void onNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("WorldSelectLayer::onPrev not implemented")]]
    /**
     */
    void onPrev(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("WorldSelectLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(int p0);
public:
    
private:
    [[deprecated("WorldSelectLayer::setupWorlds not implemented")]]
    /**
     */
    TodoReturn setupWorlds();
public:
    
private:
    [[deprecated("WorldSelectLayer::showCompleteDialog not implemented")]]
    /**
     */
    TodoReturn showCompleteDialog();
public:
    
private:
    [[deprecated("WorldSelectLayer::tryShowAd not implemented")]]
    /**
     */
    TodoReturn tryShowAd();
public:
    
private:
    [[deprecated("WorldSelectLayer::unblockButtons not implemented")]]
    /**
     */
    TodoReturn unblockButtons();
public:
    
private:
    [[deprecated("WorldSelectLayer::updateArrows not implemented")]]
    /**
     */
    TodoReturn updateArrows();
public:
    
private:
    [[deprecated("WorldSelectLayer::onExit not implemented")]]
    /**
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("WorldSelectLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("WorldSelectLayer::scrollLayerWillScrollToPage not implemented")]]
    /**
     */
    virtual TodoReturn scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);
public:
    
private:
    [[deprecated("WorldSelectLayer::scrollLayerScrolledToPage not implemented")]]
    /**
     */
    virtual TodoReturn scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);
public:
    
private:
    [[deprecated("WorldSelectLayer::scrollLayerMoved not implemented")]]
    /**
     */
    virtual TodoReturn scrollLayerMoved(cocos2d::CCPoint p0);
public:
};
