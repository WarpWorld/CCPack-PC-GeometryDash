#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAreaTintTriggerPopup.hpp"

class SetupAreaAnimTriggerPopup : public SetupAreaTintTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaAnimTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaAnimTriggerPopup, SetupAreaTintTriggerPopup)

    /**
     * @note[short] Windows: 0x322760
     */
    static SetupAreaAnimTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] Windows: 0x370030
     */
    TodoReturn createValueControlAdvancedAnim(int p0, gd::string p1, cocos2d::CCPoint p2, float p3, bool p4, InputValueType p5, int p6, bool p7, float min, float max, int p10, int p11, GJInputStyle p12);

    /**
     * @note[short] Windows: 0x322810
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
    
private:
    [[deprecated("SetupAreaAnimTriggerPopup::onDeactivateAnimValue not implemented")]]
    /**
     */
    void onDeactivateAnimValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaAnimTriggerPopup::updateTargetIDLabel not implemented")]]
    /**
     */
    TodoReturn updateTargetIDLabel();
public:
    
private:
    [[deprecated("SetupAreaAnimTriggerPopup::updateDefaultTriggerValues not implemented")]]
    /**
     */
    virtual TodoReturn updateDefaultTriggerValues();
public:
    
private:
    [[deprecated("SetupAreaAnimTriggerPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
};
