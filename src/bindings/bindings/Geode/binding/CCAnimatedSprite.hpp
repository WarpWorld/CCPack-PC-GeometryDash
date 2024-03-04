#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAnimatedSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCAnimatedSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimatedSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x21440
     */
    TodoReturn cleanupSprite();

    /**
     * @note[short] Windows: 0x20c80
     */
    TodoReturn createWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] Windows: 0x20d20
     */
    TodoReturn initWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] Windows: 0x20ec0
     */
    TodoReturn loadType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] Windows: 0x21640
     */
    TodoReturn runAnimation(gd::string p0);

    /**
     * @note[short] Windows: 0x216c0
     */
    TodoReturn runAnimationForced(gd::string p0);
    
private:
    [[deprecated("CCAnimatedSprite::stopTween not implemented")]]
    /**
     */
    TodoReturn stopTween();
public:

    /**
     * @note[short] Windows: 0x214f0
     */
    TodoReturn switchToMode(spriteMode p0);

    /**
     * @note[short] Windows: 0x21750
     */
    TodoReturn tweenToAnimation(gd::string p0, float p1);

    /**
     * @note[short] Windows: 0x219c0
     */
    TodoReturn tweenToAnimationFinished();
    
private:
    [[deprecated("CCAnimatedSprite::willPlayAnimation not implemented")]]
    /**
     */
    TodoReturn willPlayAnimation();
public:
    
private:
    [[deprecated("CCAnimatedSprite::setOpacity not implemented")]]
    /**
     */
    virtual void setOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("CCAnimatedSprite::setColor not implemented")]]
    /**
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("CCAnimatedSprite::animationFinished not implemented")]]
    /**
     */
    virtual TodoReturn animationFinished(char const* p0);
public:
    
private:
    [[deprecated("CCAnimatedSprite::animationFinishedO not implemented")]]
    /**
     */
    virtual TodoReturn animationFinishedO(cocos2d::CCObject* p0);
public:
};
