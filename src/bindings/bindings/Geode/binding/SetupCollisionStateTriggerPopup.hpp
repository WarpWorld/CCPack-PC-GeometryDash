#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupInstantCollisionTriggerPopup.hpp"

class SetupCollisionStateTriggerPopup : public SetupInstantCollisionTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionStateTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionStateTriggerPopup, SetupInstantCollisionTriggerPopup)

    /**
     * @note[short] Windows: 0x32a940
     */
    static SetupCollisionStateTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x32a9f0
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};
