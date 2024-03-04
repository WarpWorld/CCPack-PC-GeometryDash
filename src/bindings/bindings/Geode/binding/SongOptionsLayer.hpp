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

class SongOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongOptionsLayer, FLAlertLayer)
    
private:
    [[deprecated("SongOptionsLayer::create not implemented")]]
    /**
     */
    static SongOptionsLayer* create(CustomSongDelegate* p0);
public:
    
private:
    [[deprecated("SongOptionsLayer::init not implemented")]]
    /**
     */
    bool init(CustomSongDelegate* p0);
public:
    
private:
    [[deprecated("SongOptionsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongOptionsLayer::onFadeIn not implemented")]]
    /**
     */
    void onFadeIn(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongOptionsLayer::onFadeOut not implemented")]]
    /**
     */
    void onFadeOut(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongOptionsLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongOptionsLayer::onPlayback not implemented")]]
    /**
     */
    void onPlayback(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongOptionsLayer::updatePlaybackBtn not implemented")]]
    /**
     */
    TodoReturn updatePlaybackBtn();
public:
    
private:
    [[deprecated("SongOptionsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
