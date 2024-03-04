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
#include "LevelManagerDelegate.hpp"

class GauntletSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSelectLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GauntletSelectLayer::create not implemented")]]
    /**
     */
    static GauntletSelectLayer* create(int p0);
public:
    
private:
    [[deprecated("GauntletSelectLayer::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x186cf0
     */
    bool init(int p0);

    /**
     * @note[short] Windows: 0x188270
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GauntletSelectLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletSelectLayer::onNext not implemented")]]
    /**
     */
    void onNext(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x1882e0
     */
    void onPlay(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GauntletSelectLayer::onPrev not implemented")]]
    /**
     */
    void onPrev(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x187770
     */
    void onRefresh(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GauntletSelectLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(int p0);
public:

    /**
     * @note[short] Windows: 0x187b90
     */
    TodoReturn setupGauntlets();
    
private:
    [[deprecated("GauntletSelectLayer::unblockPlay not implemented")]]
    /**
     */
    TodoReturn unblockPlay();
public:
    
private:
    [[deprecated("GauntletSelectLayer::updateArrows not implemented")]]
    /**
     */
    TodoReturn updateArrows();
public:
    
private:
    [[deprecated("GauntletSelectLayer::onExit not implemented")]]
    /**
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("GauntletSelectLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GauntletSelectLayer::scrollLayerWillScrollToPage not implemented")]]
    /**
     */
    virtual TodoReturn scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);
public:
    
private:
    [[deprecated("GauntletSelectLayer::scrollLayerScrolledToPage not implemented")]]
    /**
     */
    virtual TodoReturn scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);
public:
    
private:
    [[deprecated("GauntletSelectLayer::loadLevelsFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);
public:
    
private:
    [[deprecated("GauntletSelectLayer::loadLevelsFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadLevelsFailed(char const* p0, int p1);
public:
};
