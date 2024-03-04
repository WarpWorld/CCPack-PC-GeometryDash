#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRotationControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJRotationControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRotationControl, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0xddc40
     */
    static GJRotationControl* create();

    /**
     * @note[short] Windows: 0xddf70
     */
    TodoReturn finishTouch();
    
private:
    [[deprecated("GJRotationControl::setAngle not implemented")]]
    /**
     */
    void setAngle(float p0);
public:
    
private:
    [[deprecated("GJRotationControl::updateSliderPosition not implemented")]]
    /**
     */
    TodoReturn updateSliderPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJRotationControl::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJRotationControl::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("GJRotationControl::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJRotationControl::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJRotationControl::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJRotationControl::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
};
