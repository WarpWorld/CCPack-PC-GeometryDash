#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SpriteAnimationManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SpriteAnimationManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SpriteAnimationManager, cocos2d::CCNode)
    
private:
    [[deprecated("SpriteAnimationManager::animationFinished not implemented")]]
    /**
     */
    TodoReturn animationFinished();
public:
    
private:
    [[deprecated("SpriteAnimationManager::callAnimationFinished not implemented")]]
    /**
     */
    TodoReturn callAnimationFinished();
public:
    
private:
    [[deprecated("SpriteAnimationManager::createAnimations not implemented")]]
    /**
     */
    TodoReturn createAnimations(gd::string p0);
public:
    
private:
    [[deprecated("SpriteAnimationManager::createWithOwner not implemented")]]
    /**
     */
    TodoReturn createWithOwner(CCAnimatedSprite* p0, gd::string p1);
public:
    
private:
    [[deprecated("SpriteAnimationManager::doCleanup not implemented")]]
    /**
     */
    TodoReturn doCleanup();
public:

    /**
     * @note[short] Windows: 0x4f480
     */
    TodoReturn executeAnimation(gd::string p0);
    
private:
    [[deprecated("SpriteAnimationManager::finishAnimation not implemented")]]
    /**
     */
    TodoReturn finishAnimation(gd::string p0);
public:
    
private:
    [[deprecated("SpriteAnimationManager::getAnimType not implemented")]]
    /**
     */
    TodoReturn getAnimType(gd::string p0);
public:
    
private:
    [[deprecated("SpriteAnimationManager::getPrio not implemented")]]
    /**
     */
    TodoReturn getPrio(gd::string p0);
public:
    
private:
    [[deprecated("SpriteAnimationManager::initWithOwner not implemented")]]
    /**
     */
    TodoReturn initWithOwner(CCAnimatedSprite* p0, gd::string p1);
public:
    
private:
    [[deprecated("SpriteAnimationManager::loadAnimations not implemented")]]
    /**
     */
    TodoReturn loadAnimations(gd::string p0);
public:
    
private:
    [[deprecated("SpriteAnimationManager::offsetCurrentAnimation not implemented")]]
    /**
     */
    TodoReturn offsetCurrentAnimation(float p0);
public:

    /**
     * @note[short] Windows: 0x4f7e0
     */
    TodoReturn overridePrio();
    
private:
    [[deprecated("SpriteAnimationManager::playSound not implemented")]]
    /**
     */
    TodoReturn playSound(gd::string p0);
public:
    
private:
    [[deprecated("SpriteAnimationManager::playSoundForAnimation not implemented")]]
    /**
     */
    TodoReturn playSoundForAnimation(gd::string p0);
public:
    
private:
    [[deprecated("SpriteAnimationManager::queueAnimation not implemented")]]
    /**
     */
    TodoReturn queueAnimation(gd::string p0);
public:
    
private:
    [[deprecated("SpriteAnimationManager::resetAnimState not implemented")]]
    /**
     */
    TodoReturn resetAnimState();
public:

    /**
     * @note[short] Windows: 0x4f280
     */
    TodoReturn runAnimation(gd::string p0);
    
private:
    [[deprecated("SpriteAnimationManager::runQueuedAnimation not implemented")]]
    /**
     */
    TodoReturn runQueuedAnimation();
public:

    /**
     * @note[short] Windows: 0x4fa60
     */
    TodoReturn stopAnimations();
    
private:
    [[deprecated("SpriteAnimationManager::storeAnimation not implemented")]]
    /**
     */
    TodoReturn storeAnimation(cocos2d::CCAnimate* p0, cocos2d::CCAnimate* p1, gd::string p2, int p3, spriteMode p4, cocos2d::CCSpriteFrame* p5);
public:
    
private:
    [[deprecated("SpriteAnimationManager::storeSoundForAnimation not implemented")]]
    /**
     */
    TodoReturn storeSoundForAnimation(cocos2d::CCString* p0, gd::string p1, float p2);
public:
    
private:
    [[deprecated("SpriteAnimationManager::switchToFirstFrameOfAnimation not implemented")]]
    /**
     */
    TodoReturn switchToFirstFrameOfAnimation(gd::string p0);
public:
    
private:
    [[deprecated("SpriteAnimationManager::updateAnimationSpeed not implemented")]]
    /**
     */
    TodoReturn updateAnimationSpeed(float p0);
public:
};
