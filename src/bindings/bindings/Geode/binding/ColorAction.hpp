#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorAction : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "ColorAction";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorAction, cocos2d::CCObject)
    
private:
    [[deprecated("ColorAction::create not implemented")]]
    /**
     */
    static ColorAction* create();
public:
    
private:
    [[deprecated("ColorAction::create not implemented")]]
    /**
     */
    static ColorAction* create(cocos2d::ccColor3B p0, bool p1, int p2);
public:
    
private:
    [[deprecated("ColorAction::create not implemented")]]
    /**
     */
    static ColorAction* create(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4, int p5, float p6, float p7);
public:
    
private:
    [[deprecated("ColorAction::create not implemented")]]
    /**
     */
    static ColorAction* create(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4);
public:
    
private:
    [[deprecated("ColorAction::getCopy not implemented")]]
    /**
     */
    TodoReturn getCopy();
public:
    
private:
    [[deprecated("ColorAction::init not implemented")]]
    /**
     */
    bool init(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4, int p5, float p6, float p7);
public:

    /**
     * @note[short] Windows: 0x1d8fa0
     */
    bool isInUse();

    /**
     * @note[short] Windows: 0x1d9090
     */
    void loadFromState(CAState& p0);
    
private:
    [[deprecated("ColorAction::resetAction not implemented")]]
    /**
     */
    TodoReturn resetAction();
public:

    /**
     * @note[short] Windows: 0x1d8ff0
     */
    void saveToState(CAState& p0);

    /**
     * @note[short] Windows: 0x1d9a30
     */
    TodoReturn setupFromMap(gd::map<gd::string, gd::string>& p0);

    /**
     * @note[short] Windows: 0x1d9950
     */
    TodoReturn setupFromString(gd::string p0);
    
private:
    [[deprecated("ColorAction::step not implemented")]]
    /**
     */
    TodoReturn step(float p0);
public:
    
private:
    [[deprecated("ColorAction::updateCustomColor not implemented")]]
    /**
     */
    TodoReturn updateCustomColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);
public:
    bool m_stepFinished;
    bool m_property19;
    cocos2d::ccColor3B m_color;
    float m_currentOpacity;
    float m_deltaTime;
    cocos2d::ccColor3B m_fromColor;
    cocos2d::ccColor3B m_toColor;
    float m_duration;
    bool m_blending;
    int m_playerColor;
    int m_colorID;
    float m_fromOpacity;
    float m_toOpacity;
    cocos2d::ccHSVValue m_copyHSV;
    int m_copyID;
    bool m_unknown;
    bool m_copyOpacity;
    ColorActionSprite* m_colorSprite;
};
