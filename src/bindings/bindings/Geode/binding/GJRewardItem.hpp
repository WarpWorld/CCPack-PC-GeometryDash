#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRewardItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardItem, cocos2d::CCObject)
    
private:
    [[deprecated("GJRewardItem::create not implemented")]]
    /**
     */
    static GJRewardItem* create();
public:
    
private:
    [[deprecated("GJRewardItem::create not implemented")]]
    /**
     */
    static GJRewardItem* create(int p0, int p1, gd::string p2);
public:

    /**
     * @note[short] Windows: 0x181cd0
     */
    TodoReturn createSpecial(GJRewardType p0, int p1, int p2, SpecialRewardItem p3, int p4, SpecialRewardItem p5, int p6, int p7, int p8);

    /**
     * @note[short] Windows: 0x1826b0
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("GJRewardItem::createWithObject not implemented")]]
    /**
     */
    TodoReturn createWithObject(GJRewardType p0, GJRewardObject* p1);
public:

    /**
     * @note[short] Windows: 0x181e10
     */
    TodoReturn createWithObjects(GJRewardType p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("GJRewardItem::dataLoaded not implemented")]]
    /**
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJRewardItem::getNextShardType not implemented")]]
    /**
     */
    TodoReturn getNextShardType(SpecialRewardItem p0);
public:
    
private:
    [[deprecated("GJRewardItem::getRandomNonMaxShardType not implemented")]]
    /**
     */
    TodoReturn getRandomNonMaxShardType();
public:
    
private:
    [[deprecated("GJRewardItem::getRandomShardType not implemented")]]
    /**
     */
    TodoReturn getRandomShardType();
public:
    
private:
    [[deprecated("GJRewardItem::getRewardCount not implemented")]]
    /**
     */
    TodoReturn getRewardCount(SpecialRewardItem p0);
public:

    /**
     * @note[short] Windows: 0x1825b0
     */
    TodoReturn getRewardObjectForType(SpecialRewardItem p0);
    
private:
    [[deprecated("GJRewardItem::init not implemented")]]
    /**
     */
    bool init(int p0, int p1, gd::string p2);
public:
    
private:
    [[deprecated("GJRewardItem::isShardType not implemented")]]
    /**
     */
    bool isShardType(SpecialRewardItem p0);
public:
    
private:
    [[deprecated("GJRewardItem::rewardItemToStat not implemented")]]
    /**
     */
    TodoReturn rewardItemToStat(SpecialRewardItem p0);
public:
    
private:
    [[deprecated("GJRewardItem::encodeWithCoder not implemented")]]
    /**
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJRewardItem::canEncode not implemented")]]
    /**
     */
    virtual bool canEncode();
public:
    int m_chestID;
    int m_timeRemaining;
    GJRewardType m_rewardType;
    cocos2d::CCArray* m_rewardObjects;
    bool m_unk;
};
