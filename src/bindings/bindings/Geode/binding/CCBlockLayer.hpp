#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCBlockLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCBlockLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("CCBlockLayer::create not implemented")]]
    /**
     */
    static CCBlockLayer* create();
public:
    
private:
    [[deprecated("CCBlockLayer::decrementForcePrio not implemented")]]
    /**
     */
    TodoReturn decrementForcePrio();
public:
    
private:
    [[deprecated("CCBlockLayer::incrementForcePrio not implemented")]]
    /**
     */
    TodoReturn incrementForcePrio();
public:

    /**
     * @note[short] Windows: 0x22f00
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x230a0
     */
    virtual void draw();
    
private:
    [[deprecated("CCBlockLayer::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CCBlockLayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CCBlockLayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CCBlockLayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CCBlockLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("CCBlockLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CCBlockLayer::customSetup not implemented")]]
    /**
     */
    virtual void customSetup();
public:
    
private:
    [[deprecated("CCBlockLayer::enterLayer not implemented")]]
    /**
     */
    virtual TodoReturn enterLayer();
public:
    
private:
    [[deprecated("CCBlockLayer::exitLayer not implemented")]]
    /**
     */
    virtual TodoReturn exitLayer();
public:
    
private:
    [[deprecated("CCBlockLayer::showLayer not implemented")]]
    /**
     */
    virtual TodoReturn showLayer(bool p0);
public:
    
private:
    [[deprecated("CCBlockLayer::hideLayer not implemented")]]
    /**
     */
    virtual TodoReturn hideLayer(bool p0);
public:
    
private:
    [[deprecated("CCBlockLayer::layerVisible not implemented")]]
    /**
     */
    virtual TodoReturn layerVisible();
public:
    
private:
    [[deprecated("CCBlockLayer::layerHidden not implemented")]]
    /**
     */
    virtual TodoReturn layerHidden();
public:
    
private:
    [[deprecated("CCBlockLayer::enterAnimFinished not implemented")]]
    /**
     */
    virtual TodoReturn enterAnimFinished();
public:
    
private:
    [[deprecated("CCBlockLayer::disableUI not implemented")]]
    /**
     */
    virtual TodoReturn disableUI();
public:
    
private:
    [[deprecated("CCBlockLayer::enableUI not implemented")]]
    /**
     */
    virtual TodoReturn enableUI();
public:
    void* m_unknown;
};
