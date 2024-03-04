#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SliderTouchLogic : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "SliderTouchLogic";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderTouchLogic, cocos2d::CCMenu)

    /**
     * @note[short] Windows: 0x4ccc0
     */
    static SliderTouchLogic* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, float p4);
    
private:
    [[deprecated("SliderTouchLogic::init not implemented")]]
    /**
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, float p4);
public:
    
private:
    [[deprecated("SliderTouchLogic::setMaxOffset not implemented")]]
    /**
     */
    void setMaxOffset(float p0);
public:
    
private:
    [[deprecated("SliderTouchLogic::setRotated not implemented")]]
    /**
     */
    void setRotated(bool p0);
public:
    
private:
    [[deprecated("SliderTouchLogic::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("SliderTouchLogic::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("SliderTouchLogic::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("SliderTouchLogic::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    float m_unknownUnused;
    float m_length;
    SliderThumb* m_thumb;
    Slider* m_slider;
    bool m_activateThumb;
    cocos2d::CCPoint m_position;
    bool m_rotated;
};
