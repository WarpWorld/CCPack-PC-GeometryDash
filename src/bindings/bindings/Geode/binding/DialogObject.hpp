#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DialogObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "DialogObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x9a580
     */
    static DialogObject* create(gd::string p0, gd::string p1, int p2, float p3, bool p4, cocos2d::ccColor3B p5);

    /**
     * @note[short] Windows: 0x9a6c0
     */
    bool init(gd::string p0, gd::string p1, int p2, float p3, bool p4, cocos2d::ccColor3B p5);
};
