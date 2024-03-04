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

class UISaveLoadLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UISaveLoadLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISaveLoadLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x215e10
     */
    static UISaveLoadLayer* create(UIOptionsLayer* p0);

    /**
     * @note[short] Windows: 0x215eb0
     */
    bool init(UIOptionsLayer* p0);
    
private:
    [[deprecated("UISaveLoadLayer::onLoad not implemented")]]
    /**
     */
    void onLoad(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UISaveLoadLayer::onSave not implemented")]]
    /**
     */
    void onSave(cocos2d::CCObject* sender);
public:
};
