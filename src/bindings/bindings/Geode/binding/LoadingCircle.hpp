#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingCircle : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "LoadingCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircle, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x483d0
     */
    static LoadingCircle* create();

    /**
     * @note[short] Windows: 0x48670
     */
    TodoReturn fadeAndRemove();

    /**
     * @note[short] Windows: 0x48590
     */
    TodoReturn show();

    /**
     * @note[short] Out of line
     */
    void setFade(bool fade);

    /**
     * @note[short] Windows: 0x484d0
     */
    virtual bool init();
    
private:
    [[deprecated("LoadingCircle::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("LoadingCircle::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LoadingCircle::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LoadingCircle::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LoadingCircle::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LoadingCircle::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
	inline void setParentLayer(cocos2d::CCLayer* layer) {
        m_parentLayer = layer;
    }
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCLayer* m_parentLayer;
    bool m_fade;
};
