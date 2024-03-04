#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class Slider : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "Slider";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(Slider, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x4d130
     */
    static Slider* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);

    /**
     * @note[short] Out of line
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler);

    /**
     * @note[short] Out of line
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, float idk);
    
private:
    [[deprecated("Slider::disableSlider not implemented")]]
    /**
     */
    TodoReturn disableSlider();
public:
    
private:
    [[deprecated("Slider::disableTouch not implemented")]]
    /**
     */
    TodoReturn disableTouch();
public:
    
private:
    [[deprecated("Slider::enableSlider not implemented")]]
    /**
     */
    TodoReturn enableSlider();
public:
    
private:
    [[deprecated("Slider::getLiveDragging not implemented")]]
    /**
     */
    TodoReturn getLiveDragging();
public:

    /**
     * @note[short] Out of line
     */
    SliderThumb* getThumb();

    /**
     * @note[short] Windows: 0x4d4f0
     */
    TodoReturn getValue();
    
private:
    [[deprecated("Slider::hideGroove not implemented")]]
    /**
     */
    TodoReturn hideGroove(bool p0);
public:

    /**
     * @note[short] Windows: 0x4d1f0
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);
    
private:
    [[deprecated("Slider::setBarVisibility not implemented")]]
    /**
     */
    void setBarVisibility(bool p0);
public:
    
private:
    [[deprecated("Slider::setLiveDragging not implemented")]]
    /**
     */
    void setLiveDragging(bool p0);
public:
    
private:
    [[deprecated("Slider::setMaxOffset not implemented")]]
    /**
     */
    void setMaxOffset(float p0);
public:
    
private:
    [[deprecated("Slider::setRotated not implemented")]]
    /**
     */
    void setRotated(bool p0);
public:

    /**
     * @note[short] Out of line
     */
    void setValue(float val);
    
private:
    [[deprecated("Slider::sliderBegan not implemented")]]
    /**
     */
    TodoReturn sliderBegan();
public:
    
private:
    [[deprecated("Slider::sliderEnded not implemented")]]
    /**
     */
    TodoReturn sliderEnded();
public:

    /**
     * @note[short] Windows: 0x4d590
     */
    TodoReturn updateBar();
    
private:
    [[deprecated("Slider::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("Slider::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("Slider::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    SliderTouchLogic* m_touchLogic;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_groove;
    float m_width;
    float m_height;
    void* m_unknown;
    void* m_unknown2;
};
