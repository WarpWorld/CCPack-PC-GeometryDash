#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJTransformControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJTransformControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJTransformControl, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0xdf700
     */
    static GJTransformControl* create();

    /**
     * @note[short] Windows: 0xe14d0
     */
    TodoReturn applyRotation(float p0);
    
private:
    [[deprecated("GJTransformControl::calculateRotationOffset not implemented")]]
    /**
     */
    TodoReturn calculateRotationOffset();
public:
    
private:
    [[deprecated("GJTransformControl::finishTouch not implemented")]]
    /**
     */
    TodoReturn finishTouch();
public:
    
private:
    [[deprecated("GJTransformControl::loadFromState not implemented")]]
    /**
     */
    TodoReturn loadFromState(GJTransformState& p0);
public:

    /**
     * @note[short] Windows: 0xdfda0
     */
    TodoReturn loadValues(GameObject* p0, cocos2d::CCArray* p1, gd::unordered_map<int, GameObjectEditorState>& p2);
    
private:
    [[deprecated("GJTransformControl::logCurrentZeroPos not implemented")]]
    /**
     */
    TodoReturn logCurrentZeroPos();
public:
    
private:
    [[deprecated("GJTransformControl::onToggleLockScale not implemented")]]
    /**
     */
    void onToggleLockScale(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJTransformControl::refreshControl not implemented")]]
    /**
     */
    TodoReturn refreshControl();
public:
    
private:
    [[deprecated("GJTransformControl::saveToState not implemented")]]
    /**
     */
    TodoReturn saveToState(GJTransformState& p0);
public:

    /**
     * @note[short] Windows: 0xdfd10
     */
    TodoReturn scaleButtons(float p0);
    
private:
    [[deprecated("GJTransformControl::spriteByTag not implemented")]]
    /**
     */
    TodoReturn spriteByTag(int p0);
public:
    
private:
    [[deprecated("GJTransformControl::updateAnchorSprite not implemented")]]
    /**
     */
    TodoReturn updateAnchorSprite(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] Windows: 0xdffc0
     */
    TodoReturn updateButtons(bool p0, bool p1);
    
private:
    [[deprecated("GJTransformControl::updateMinMaxPositions not implemented")]]
    /**
     */
    TodoReturn updateMinMaxPositions();
public:
    
private:
    [[deprecated("GJTransformControl::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJTransformControl::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJTransformControl::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJTransformControl::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJTransformControl::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
};
