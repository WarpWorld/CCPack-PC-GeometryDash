#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SongObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongObject, cocos2d::CCObject)
    
private:
    [[deprecated("SongObject::create not implemented")]]
    /**
     */
    static SongObject* create(int p0);
public:
    
private:
    [[deprecated("SongObject::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
};
