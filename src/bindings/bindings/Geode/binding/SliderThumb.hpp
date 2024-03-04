#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SliderThumb : public cocos2d::CCMenuItemImage {
public:
    static constexpr auto CLASS_NAME = "SliderThumb";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderThumb, cocos2d::CCMenuItemImage)

    /**
     * @note[short] Windows: 0x4c900
     */
    static SliderThumb* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3);

    /**
     * @note[short] Out of line
     */
    float getValue();
    
private:
    [[deprecated("SliderThumb::init not implemented")]]
    /**
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3);
public:

    /**
     * @note[short] Windows: 0x4ca90
     */
    void setMaxOffset(float p0);
    
private:
    [[deprecated("SliderThumb::setRotated not implemented")]]
    /**
     */
    void setRotated(bool p0);
public:

    /**
     * @note[short] Windows: 0x4cbd0
     */
    void setValue(float p0);
    float m_length;
    bool m_vertical;
};
