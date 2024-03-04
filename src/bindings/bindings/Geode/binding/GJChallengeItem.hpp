#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChallengeItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJChallengeItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChallengeItem, cocos2d::CCObject)
    
private:
    [[deprecated("GJChallengeItem::create not implemented")]]
    /**
     */
    static GJChallengeItem* create();
public:

    /**
     * @note[short] Windows: 0x182900
     */
    static GJChallengeItem* create(GJChallengeType p0, int p1, int p2, int p3, gd::string p4);

    /**
     * @note[short] Windows: 0x1827c0
     */
    TodoReturn createFromString(gd::string p0);

    /**
     * @note[short] Windows: 0x182ab0
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("GJChallengeItem::dataLoaded not implemented")]]
    /**
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJChallengeItem::incrementCount not implemented")]]
    /**
     */
    TodoReturn incrementCount(int p0);
public:

    /**
     * @note[short] Windows: 0x1829d0
     */
    bool init(GJChallengeType p0, int p1, int p2, int p3, gd::string p4);
    
private:
    [[deprecated("GJChallengeItem::setCount not implemented")]]
    /**
     */
    void setCount(int p0);
public:
    
private:
    [[deprecated("GJChallengeItem::encodeWithCoder not implemented")]]
    /**
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJChallengeItem::canEncode not implemented")]]
    /**
     */
    virtual bool canEncode();
public:
    GJChallengeType m_challengeType;
    geode::SeedValueSRV m_count;
    geode::SeedValueSRV m_reward;
    geode::SeedValueSRV m_goal;
    int m_timeLeft;
    bool m_canClaim;
    int m_position;
    gd::string m_name;
};
