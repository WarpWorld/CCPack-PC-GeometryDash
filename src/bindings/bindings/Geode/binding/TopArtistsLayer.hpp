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
#include "OnlineListDelegate.hpp"

class TopArtistsLayer : public FLAlertLayer, public OnlineListDelegate {
public:
    static constexpr auto CLASS_NAME = "TopArtistsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TopArtistsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3bd270
     */
    static TopArtistsLayer* create();
    
private:
    [[deprecated("TopArtistsLayer::isCorrect not implemented")]]
    /**
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] Windows: 0x3bdcb0
     */
    TodoReturn loadPage(int p0);
    
private:
    [[deprecated("TopArtistsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TopArtistsLayer::onNextPage not implemented")]]
    /**
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TopArtistsLayer::onPrevPage not implemented")]]
    /**
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TopArtistsLayer::setupLeaderboard not implemented")]]
    /**
     */
    TodoReturn setupLeaderboard(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("TopArtistsLayer::updateLevelsLabel not implemented")]]
    /**
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("TopArtistsLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("TopArtistsLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("TopArtistsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("TopArtistsLayer::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("TopArtistsLayer::loadListFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadListFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("TopArtistsLayer::loadListFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadListFailed(char const* p0);
public:
    
private:
    [[deprecated("TopArtistsLayer::setupPageInfo not implemented")]]
    /**
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);
public:
};
