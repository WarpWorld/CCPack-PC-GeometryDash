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

class SetupInstantCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x32a2a0
     */
    static SetupInstantCollisionTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x32a350
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupInstantCollisionTriggerPopup::updateSpecialNodes not implemented")]]
    /**
     */
    TodoReturn updateSpecialNodes();
public:
    
private:
    [[deprecated("SetupInstantCollisionTriggerPopup::updateDefaultTriggerValues not implemented")]]
    /**
     */
    virtual TodoReturn updateDefaultTriggerValues();
public:
    
private:
    [[deprecated("SetupInstantCollisionTriggerPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
};
