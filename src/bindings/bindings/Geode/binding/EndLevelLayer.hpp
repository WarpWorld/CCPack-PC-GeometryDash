#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class EndLevelLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "EndLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndLevelLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0xe7380
     */
    static EndLevelLayer* create();

    /**
     * @note[short] Windows: 0xe9720
     */
    TodoReturn coinEnterFinished(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0xe96f0
     */
    TodoReturn coinEnterFinishedO(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xe9cd0
     */
    TodoReturn currencyEnterFinished();

    /**
     * @note[short] Windows: 0xea0c0
     */
    TodoReturn diamondEnterFinished();

    /**
     * @note[short] Windows: 0xe8a60
     */
    TodoReturn getCoinString();

    /**
     * @note[short] Windows: 0xea370
     */
    TodoReturn getEndText();

    /**
     * @note[short] Windows: 0xe9060
     */
    TodoReturn goEdit();

    /**
     * @note[short] Windows: 0xe8fb0
     */
    void onEdit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EndLevelLayer::onEveryplay not implemented")]]
    /**
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xe89f0
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe8ec0
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe8dc0
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe9570
     */
    void playCoinEffect(float p0);

    /**
     * @note[short] Windows: 0xe99c0
     */
    void playCurrencyEffect(float p0);

    /**
     * @note[short] Windows: 0xe9db0
     */
    void playDiamondEffect(float p0);

    /**
     * @note[short] Windows: 0xea1a0
     */
    void playEndEffect();

    /**
     * @note[short] Windows: 0xe9120
     */
    void playStarEffect(float p0);

    /**
     * @note[short] Windows: 0xe9440
     */
    TodoReturn starEnterFinished();
    
private:
    [[deprecated("EndLevelLayer::tryShowBanner not implemented")]]
    /**
     */
    TodoReturn tryShowBanner(float p0);
public:
    
private:
    [[deprecated("EndLevelLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("EndLevelLayer::keyDown not implemented")]]
    /**
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:

    /**
     * @note[short] Windows: 0xe74f0
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0xe8c20
     */
    virtual void showLayer(bool p0);
    
private:
    [[deprecated("EndLevelLayer::enterAnimFinished not implemented")]]
    /**
     */
    virtual TodoReturn enterAnimFinished();
public:
    
private:
    [[deprecated("EndLevelLayer::keyUp not implemented")]]
    /**
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
public:
    PlayLayer* m_playLayer;
    bool m_unknown1;
    bool m_unknown2;
    bool m_unknown3;
    bool m_unknown4;
    bool m_unknown5;
    int m_unknown6;
    cocos2d::CCArray* m_coinsToAnimate;
};
