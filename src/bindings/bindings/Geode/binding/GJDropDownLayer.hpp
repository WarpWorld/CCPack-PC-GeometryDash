#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDropDownLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJDropDownLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDropDownLayer, cocos2d::CCLayerColor)
	inline GJDropDownLayer() {
        m_endPosition = cocos2d::CCPointMake(0.f, 0.f);
        m_startPosition = cocos2d::CCPointMake(0.f, 0.f);
        m_buttonMenu = nullptr;
        m_listLayer = nullptr;
        m_mainLayer = nullptr;
        m_hidden = false;
        m_delegate = nullptr;
    }

    /**
     * @note[short] Windows: 0x1d6700
     */
    bool init(char const* p0, float p1, bool p2);

    /**
     * @note[short] Out of line
     */
    bool init(char const* title);

    /**
     * @note[short] Out of line
     */
    static GJDropDownLayer* create(const char* title, float height, bool p2);

    /**
     * @note[short] Out of line
     */
    static GJDropDownLayer* create(const char* title);

    /**
     * @note[short] Windows: 0x230a0
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x230d0
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("GJDropDownLayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJDropDownLayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJDropDownLayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] Windows: 0x22fc0
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x1d6b20
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("GJDropDownLayer::customSetup not implemented")]]
    /**
     */
    virtual void customSetup();
public:

    /**
     * @note[short] Windows: 0x22fa0
     */
    virtual TodoReturn enterLayer();

    /**
     * @note[short] Windows: 0x1d6b40
     */
    virtual TodoReturn exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x1d6b70
     */
    virtual TodoReturn showLayer(bool p0);

    /**
     * @note[short] Windows: 0x1d6c60
     */
    virtual TodoReturn hideLayer(bool p0);

    /**
     * @note[short] Windows: 0x23060
     */
    virtual TodoReturn layerVisible();

    /**
     * @note[short] Windows: 0x1d6d50
     */
    virtual TodoReturn layerHidden();
    
private:
    [[deprecated("GJDropDownLayer::enterAnimFinished not implemented")]]
    /**
     */
    virtual TodoReturn enterAnimFinished();
public:

    /**
     * @note[short] Windows: 0x1d6ae0
     */
    virtual TodoReturn disableUI();

    /**
     * @note[short] Windows: 0x1d6b00
     */
    virtual TodoReturn enableUI();
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    cocos2d::CCLayer* m_mainLayer;
    bool m_hidden;
    GJDropDownLayerDelegate* m_delegate;
    bool m_unknown;
};
