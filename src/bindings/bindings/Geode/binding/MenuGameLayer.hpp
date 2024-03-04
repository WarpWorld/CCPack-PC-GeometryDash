#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MenuGameLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MenuGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuGameLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("MenuGameLayer::create not implemented")]]
    /**
     */
    static MenuGameLayer* create();
public:

    /**
     * @note[short] Windows: 0x27ae40
     */
    void destroyPlayer();
    
private:
    [[deprecated("MenuGameLayer::getBGColor not implemented")]]
    /**
     */
    TodoReturn getBGColor(int p0);
public:

    /**
     * @note[short] Windows: 0x279fd0
     */
    TodoReturn resetPlayer();
    
private:
    [[deprecated("MenuGameLayer::tryJump not implemented")]]
    /**
     */
    TodoReturn tryJump(float p0);
public:

    /**
     * @note[short] Windows: 0x2796d0
     */
    TodoReturn updateColor(float p0);
    
private:
    [[deprecated("MenuGameLayer::updateColors not implemented")]]
    /**
     */
    TodoReturn updateColors();
public:

    /**
     * @note[short] Windows: 0x279c60
     */
    virtual void update(float p0);

    /**
     * @note[short] Windows: 0x279240
     */
    virtual bool init();
    
private:
    [[deprecated("MenuGameLayer::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("MenuGameLayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("MenuGameLayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("MenuGameLayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("MenuGameLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    bool m_unkBool1;
    float m_deltaCount;
    bool m_isDestroyingPlayer;
    int m_initCount;
    cocos2d::CCPoint* m_unused1;
    int m_unused2;
    PlayerObject* m_playerObject;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    float m_backgroundSpeed;
};
