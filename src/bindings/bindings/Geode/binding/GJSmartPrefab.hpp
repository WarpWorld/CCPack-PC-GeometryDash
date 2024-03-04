#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartPrefab : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartPrefab";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartPrefab, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x222e20
     */
    static GJSmartPrefab* create();
    
private:
    [[deprecated("GJSmartPrefab::createWithCoder not implemented")]]
    /**
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
public:

    /**
     * @note[short] Windows: 0x222ee0
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("GJSmartPrefab::init not implemented")]]
    /**
     */
    bool init();
public:
    
private:
    [[deprecated("GJSmartPrefab::encodeWithCoder not implemented")]]
    /**
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJSmartPrefab::canEncode not implemented")]]
    /**
     */
    virtual bool canEncode();
public:
};
