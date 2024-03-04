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
#include "DynamicScrollDelegate.hpp"

class LevelSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public DynamicScrollDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x267bc0
     */
     ~LevelSelectLayer();

    /**
     * @note[short] Windows: 0x267c60
     */
    static LevelSelectLayer* create(int p0);

    /**
     * @note[short] Windows: 0x268ac0
     */
    cocos2d::ccColor3B colorForPage(int page);

    /**
     * @note[short] Windows: 0x268980
     */
    TodoReturn getColorValue(int p0, int p1, float p2);

    /**
     * @note[short] Windows: 0x267d00
     */
    bool init(int p0);

    /**
     * @note[short] Windows: 0x268d00
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x268750
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x268e30
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x268c40
     */
    void onNext(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSelectLayer::onPlay not implemented")]]
    /**
     */
    void onPlay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x268ca0
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x267c20
     */
    TodoReturn scene(int p0);
    
private:
    [[deprecated("LevelSelectLayer::tryShowAd not implemented")]]
    /**
     */
    TodoReturn tryShowAd();
public:

    /**
     * @note[short] Windows: 0x268d60
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x268d70
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x268790
     */
    virtual void updatePageWithObject(cocos2d::CCObject* p0, cocos2d::CCObject* p1);

    /**
     * @note[short] Windows: 0x2687f0
     */
    virtual TodoReturn scrollLayerMoved(cocos2d::CCPoint p0);
};
