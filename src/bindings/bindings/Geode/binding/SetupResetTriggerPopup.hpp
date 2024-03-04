#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupResetTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupResetTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupResetTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x367a20
     */
    static SetupResetTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x367ad0
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};
