#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCounterLabel : public cocos2d::CCLabelBMFont {
public:
    static constexpr auto CLASS_NAME = "CCCounterLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCounterLabel, cocos2d::CCLabelBMFont)
    
private:
    [[deprecated("CCCounterLabel::create not implemented")]]
    /**
     */
    static CCCounterLabel* create(int p0, char const* p1, FormatterType p2);
public:
    
private:
    [[deprecated("CCCounterLabel::calculateStepSize not implemented")]]
    /**
     */
    TodoReturn calculateStepSize(int p0);
public:
    
private:
    [[deprecated("CCCounterLabel::disableCounter not implemented")]]
    /**
     */
    TodoReturn disableCounter();
public:
    
private:
    [[deprecated("CCCounterLabel::enableCounter not implemented")]]
    /**
     */
    TodoReturn enableCounter();
public:
    
private:
    [[deprecated("CCCounterLabel::fastUpdateCounter not implemented")]]
    /**
     */
    TodoReturn fastUpdateCounter();
public:
    
private:
    [[deprecated("CCCounterLabel::getTargetCount not implemented")]]
    /**
     */
    TodoReturn getTargetCount();
public:
    
private:
    [[deprecated("CCCounterLabel::init not implemented")]]
    /**
     */
    bool init(int p0, char const* p1, FormatterType p2);
public:

    /**
     * @note[short] Windows: 0x23e20
     */
    void setTargetCount(int p0);
    
private:
    [[deprecated("CCCounterLabel::updateCounter not implemented")]]
    /**
     */
    TodoReturn updateCounter(float p0);
public:
    
private:
    [[deprecated("CCCounterLabel::updateString not implemented")]]
    /**
     */
    TodoReturn updateString();
public:
};
