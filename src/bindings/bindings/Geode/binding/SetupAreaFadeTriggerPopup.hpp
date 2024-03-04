#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAreaMoveTriggerPopup.hpp"

class SetupAreaFadeTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaFadeTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaFadeTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Windows: 0x321140
     */
    static SetupAreaFadeTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x3211f0
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
};
