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

class EditTriggersPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditTriggersPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditTriggersPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x205550
     */
    static EditTriggersPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x205600
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("EditTriggersPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("EditTriggersPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
