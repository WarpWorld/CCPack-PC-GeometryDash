#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJScaleControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJScaleControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJScaleControl, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0xde1c0
     */
    static GJScaleControl* create();
    
private:
    [[deprecated("GJScaleControl::finishTouch not implemented")]]
    /**
     */
    TodoReturn finishTouch();
public:

    /**
     * @note[short] Windows: 0xde650
     */
    TodoReturn loadValues(GameObject* p0, cocos2d::CCArray* p1, gd::unordered_map<int, GameObjectEditorState>& p2);
    
private:
    [[deprecated("GJScaleControl::scaleFromValue not implemented")]]
    /**
     */
    TodoReturn scaleFromValue(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::skewFromValue not implemented")]]
    /**
     */
    TodoReturn skewFromValue(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJScaleControl::updateLabelX not implemented")]]
    /**
     */
    TodoReturn updateLabelX(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::updateLabelXY not implemented")]]
    /**
     */
    TodoReturn updateLabelXY(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::updateLabelY not implemented")]]
    /**
     */
    TodoReturn updateLabelY(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::valueFromScale not implemented")]]
    /**
     */
    TodoReturn valueFromScale(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::valueFromSkew not implemented")]]
    /**
     */
    TodoReturn valueFromSkew(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJScaleControl::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJScaleControl::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJScaleControl::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJScaleControl::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
};
