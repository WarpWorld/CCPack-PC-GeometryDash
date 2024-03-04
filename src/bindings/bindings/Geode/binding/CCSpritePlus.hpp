#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpritePlus : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpritePlus";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpritePlus, cocos2d::CCSprite)
    
private:
    [[deprecated("CCSpritePlus::addFollower not implemented")]]
    /**
     */
    TodoReturn addFollower(cocos2d::CCNode* p0);
public:
    
private:
    [[deprecated("CCSpritePlus::createWithSpriteFrame not implemented")]]
    /**
     */
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
public:
    
private:
    [[deprecated("CCSpritePlus::createWithSpriteFrameName not implemented")]]
    /**
     */
    TodoReturn createWithSpriteFrameName(char const* p0);
public:
    
private:
    [[deprecated("CCSpritePlus::followSprite not implemented")]]
    /**
     */
    TodoReturn followSprite(CCSpritePlus* p0);
public:
    
private:
    [[deprecated("CCSpritePlus::getFollower not implemented")]]
    /**
     */
    TodoReturn getFollower();
public:
    
private:
    [[deprecated("CCSpritePlus::removeFollower not implemented")]]
    /**
     */
    TodoReturn removeFollower(cocos2d::CCNode* p0);
public:
    
private:
    [[deprecated("CCSpritePlus::stopFollow not implemented")]]
    /**
     */
    TodoReturn stopFollow();
public:

    /**
     * @note[short] Windows: 0x28c10
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] Windows: 0x28c90
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] Windows: 0x28d10
     */
    virtual void setScale(float p0);

    /**
     * @note[short] Windows: 0x288f0
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Windows: 0x28950
     */
    virtual void setRotation(float p0);
    
private:
    [[deprecated("CCSpritePlus::setRotationX not implemented")]]
    /**
     */
    virtual void setRotationX(float p0);
public:
    
private:
    [[deprecated("CCSpritePlus::setRotationY not implemented")]]
    /**
     */
    virtual void setRotationY(float p0);
public:
    
private:
    [[deprecated("CCSpritePlus::initWithTexture not implemented")]]
    /**
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);
public:

    /**
     * @note[short] Windows: 0x288b0
     */
    virtual bool initWithSpriteFrameName(char const* p0);
    
private:
    [[deprecated("CCSpritePlus::setFlipX not implemented")]]
    /**
     */
    virtual void setFlipX(bool p0);
public:
    
private:
    [[deprecated("CCSpritePlus::setFlipY not implemented")]]
    /**
     */
    virtual void setFlipY(bool p0);
public:
    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
};
