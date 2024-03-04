#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelOptionsLayer.hpp"

class LevelOptionsLayer2 : public LevelOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer2, LevelOptionsLayer)
    
private:
    [[deprecated("LevelOptionsLayer2::create not implemented")]]
    /**
     */
    static LevelOptionsLayer2* create(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("LevelOptionsLayer2::init not implemented")]]
    /**
     */
    bool init(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("LevelOptionsLayer2::setupOptions not implemented")]]
    /**
     */
    virtual TodoReturn setupOptions();
public:
};
