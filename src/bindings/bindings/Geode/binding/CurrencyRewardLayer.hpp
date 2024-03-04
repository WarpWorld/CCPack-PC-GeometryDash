#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CurrencyRewardLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CurrencyRewardLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CurrencyRewardLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x71c40
     */
    static CurrencyRewardLayer* create(int p0, int p1, int p2, int p3, CurrencySpriteType p4, int p5, CurrencySpriteType p6, int p7, cocos2d::CCPoint p8, CurrencyRewardType p9, float p10, float p11);
    
private:
    [[deprecated("CurrencyRewardLayer::createObjects not implemented")]]
    /**
     */
    TodoReturn createObjects(CurrencySpriteType p0, int p1, cocos2d::CCPoint p2, float p3);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::createObjectsFull not implemented")]]
    /**
     */
    TodoReturn createObjectsFull(CurrencySpriteType p0, int p1, cocos2d::CCSprite* p2, cocos2d::CCPoint p3, float p4);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::createUnlockObject not implemented")]]
    /**
     */
    TodoReturn createUnlockObject(cocos2d::CCSprite* p0, cocos2d::CCPoint p1, float p2);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementCount not implemented")]]
    /**
     */
    TodoReturn incrementCount(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementDiamondsCount not implemented")]]
    /**
     */
    TodoReturn incrementDiamondsCount(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementMoonsCount not implemented")]]
    /**
     */
    TodoReturn incrementMoonsCount(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementSpecialCount1 not implemented")]]
    /**
     */
    TodoReturn incrementSpecialCount1(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementSpecialCount2 not implemented")]]
    /**
     */
    TodoReturn incrementSpecialCount2(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementStarsCount not implemented")]]
    /**
     */
    TodoReturn incrementStarsCount(int p0);
public:

    /**
     * @note[short] Windows: 0x71d30
     */
    bool init(int p0, int p1, int p2, int p3, CurrencySpriteType p4, int p5, CurrencySpriteType p6, int p7, cocos2d::CCPoint p8, CurrencyRewardType p9, float p10, float p11);
    
private:
    [[deprecated("CurrencyRewardLayer::pulseSprite not implemented")]]
    /**
     */
    TodoReturn pulseSprite(cocos2d::CCSprite* p0);
public:

    /**
     * @note[short] Windows: 0x744c0
     */
    virtual void update(float p0);
};
