#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class ItemTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ItemTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x3b5040
     */
    static ItemTriggerGameObject* create(char const* p0);
    
private:
    [[deprecated("ItemTriggerGameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:

    /**
     * @note[short] Windows: 0x3b50e0
     */
    virtual void customSetup();
    
private:
    [[deprecated("ItemTriggerGameObject::triggerObject not implemented")]]
    /**
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("ItemTriggerGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("ItemTriggerGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
