#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class LevelPage : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelPage, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x268f30
     */
    static LevelPage* create(GJGameLevel* p0);
    
private:
    [[deprecated("LevelPage::addSecretCoin not implemented")]]
    /**
     */
    TodoReturn addSecretCoin();
public:
    
private:
    [[deprecated("LevelPage::addSecretDoor not implemented")]]
    /**
     */
    TodoReturn addSecretDoor();
public:

    /**
     * @note[short] Windows: 0x268ff0
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x26c400
     */
    void onInfo(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelPage::onMoreGames not implemented")]]
    /**
     */
    void onMoreGames(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x26c080
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26bad0
     */
    void onSecretDoor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelPage::onTheTower not implemented")]]
    /**
     */
    void onTheTower(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelPage::playCoinEffect not implemented")]]
    /**
     */
    TodoReturn playCoinEffect();
public:
    
private:
    [[deprecated("LevelPage::playStep2 not implemented")]]
    /**
     */
    TodoReturn playStep2();
public:
    
private:
    [[deprecated("LevelPage::playStep3 not implemented")]]
    /**
     */
    TodoReturn playStep3();
public:

    /**
     * @note[short] Windows: 0x269a80
     */
    void updateDynamicPage(GJGameLevel* p0);
    
private:
    [[deprecated("LevelPage::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LevelPage::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LevelPage::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LevelPage::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LevelPage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("LevelPage::dialogClosed not implemented")]]
    /**
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
public:
    void* m_unk;
    GJGameLevel* m_level;
};
