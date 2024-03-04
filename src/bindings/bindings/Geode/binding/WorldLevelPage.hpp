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

class WorldLevelPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "WorldLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(WorldLevelPage, FLAlertLayer)
    
private:
    [[deprecated("WorldLevelPage::create not implemented")]]
    /**
     */
    static WorldLevelPage* create(GJGameLevel* p0, GJWorldNode* p1);
public:
    
private:
    [[deprecated("WorldLevelPage::init not implemented")]]
    /**
     */
    bool init(GJGameLevel* p0, GJWorldNode* p1);
public:
    
private:
    [[deprecated("WorldLevelPage::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("WorldLevelPage::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("WorldLevelPage::onPlay not implemented")]]
    /**
     */
    void onPlay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("WorldLevelPage::onSong not implemented")]]
    /**
     */
    void onSong(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("WorldLevelPage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("WorldLevelPage::show not implemented")]]
    /**
     */
    virtual void show();
public:
};
