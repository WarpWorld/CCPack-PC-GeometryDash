#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetIDPopupDelegate";

    /**
     * @note[short] Out of line
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
};
