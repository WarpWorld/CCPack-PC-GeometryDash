#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextAlertPopup : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "TextAlertPopup";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextAlertPopup, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x211c90
     */
    static TextAlertPopup* create(gd::string p0, float p1, float p2, int p3, gd::string p4);

    /**
     * @note[short] Windows: 0x211de0
     */
    bool init(gd::string p0, float p1, float p2, int p3, gd::string p4);
    
private:
    [[deprecated("TextAlertPopup::setAlertPosition not implemented")]]
    /**
     */
    void setAlertPosition(cocos2d::CCPoint p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("TextAlertPopup::setLabelColor not implemented")]]
    /**
     */
    void setLabelColor(cocos2d::ccColor3B p0);
public:
};
