#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FLAlertLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "FLAlertLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FLAlertLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Out of line
     */
     ~FLAlertLayer();

    /**
     * @note[short] Out of line
     */
     FLAlertLayer();

    /**
     * @note[short] Windows: 0x30da0
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale);

    /**
     * @note[short] Windows: 0x30cf0
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width);

    /**
     * @note[short] Windows: 0x30c40
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2);

    /**
     * @note[short] Out of line
     */
    static FLAlertLayer* create(char const* title, const gd::string& desc, char const* btn);
    
private:
    [[deprecated("FLAlertLayer::incrementForcePrio not implemented")]]
    /**
     */
    TodoReturn incrementForcePrio();
public:

    /**
     * @note[short] Windows: 0x30f60
     */
    bool init(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7, float p8);

    /**
     * @note[short] Windows: 0x30ea0
     */
    bool init(int p0);

    /**
     * @note[short] Windows: 0x31ab0
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x31af0
     */
    void onBtn2(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x31b30
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x31c80
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x31bc0
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x31c30
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x31e60
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x31a10
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x319a0
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x31cd0
     */
    virtual void show();
    cocos2d::CCMenu* m_buttonMenu;
    FLAlertLayerProtocol* m_alertProtocol;
    cocos2d::CCNode* m_scene;
    bool m_reverseKeyBack;
    cocos2d::ccColor3B m_color;
    cocos2d::CCLayer* m_mainLayer;
    int m_ZOrder;
    bool m_noElasticity;
    cocos2d::ccColor3B m_color2;
    ButtonSprite* m_button1;
    ButtonSprite* m_button2;
    ScrollingLayer* m_scrollingLayer;
    int m_controlConnected;
    bool m_containsBorder;
    bool m_noAction;
    int m_joystickConnected;
    bool m_forcePrioRegistered;
};
