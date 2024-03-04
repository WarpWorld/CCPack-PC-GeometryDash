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

class ShaderGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ShaderGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShaderGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x391eb0
     */
    static ShaderGameObject* create(char const* p0);
    
private:
    [[deprecated("ShaderGameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:

    /**
     * @note[short] Windows: 0x391f50
     */
    virtual void customSetup();
    
private:
    [[deprecated("ShaderGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("ShaderGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
