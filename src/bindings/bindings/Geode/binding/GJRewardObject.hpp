#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRewardObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x181ba0
     */
    static GJRewardObject* create();

    /**
     * @note[short] Windows: 0x181c30
     */
    static GJRewardObject* create(SpecialRewardItem p0, int p1, int p2);
    
private:
    [[deprecated("GJRewardObject::createItemUnlock not implemented")]]
    /**
     */
    TodoReturn createItemUnlock(UnlockType p0, int p1);
public:

    /**
     * @note[short] Windows: 0x181d60
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("GJRewardObject::dataLoaded not implemented")]]
    /**
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJRewardObject::init not implemented")]]
    /**
     */
    bool init(SpecialRewardItem p0, int p1, int p2);
public:
    
private:
    [[deprecated("GJRewardObject::isSpecialType not implemented")]]
    /**
     */
    bool isSpecialType();
public:
    
private:
    [[deprecated("GJRewardObject::encodeWithCoder not implemented")]]
    /**
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJRewardObject::canEncode not implemented")]]
    /**
     */
    virtual bool canEncode();
public:
    SpecialRewardItem m_specialRewardItem;
    UnlockType m_unlockType;
    int m_itemID;
    int m_total;
};
