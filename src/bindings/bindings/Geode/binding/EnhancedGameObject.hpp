#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class EnhancedGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EnhancedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnhancedGameObject, GameObject)
    
private:
    [[deprecated("EnhancedGameObject::create not implemented")]]
    /**
     */
    static EnhancedGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::createRotateAction not implemented")]]
    /**
     */
    TodoReturn createRotateAction(float p0, int p1);
public:
    
private:
    [[deprecated("EnhancedGameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::previewAnimateOnTrigger not implemented")]]
    /**
     */
    TodoReturn previewAnimateOnTrigger();
public:
    
private:
    [[deprecated("EnhancedGameObject::refreshRotateAction not implemented")]]
    /**
     */
    TodoReturn refreshRotateAction();
public:
    
private:
    [[deprecated("EnhancedGameObject::resetSyncedAnimation not implemented")]]
    /**
     */
    TodoReturn resetSyncedAnimation();
public:
    
private:
    [[deprecated("EnhancedGameObject::setupAnimationVariables not implemented")]]
    /**
     */
    TodoReturn setupAnimationVariables();
public:
    
private:
    [[deprecated("EnhancedGameObject::triggerAnimation not implemented")]]
    /**
     */
    TodoReturn triggerAnimation();
public:
    
private:
    [[deprecated("EnhancedGameObject::updateRotateAction not implemented")]]
    /**
     */
    TodoReturn updateRotateAction(float p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::updateState not implemented")]]
    /**
     */
    TodoReturn updateState(int p0);
public:

    /**
     * @note[short] Windows: 0x1473b0
     */
    TodoReturn updateUserCoin();
    
private:
    [[deprecated("EnhancedGameObject::waitForAnimationTrigger not implemented")]]
    /**
     */
    TodoReturn waitForAnimationTrigger();
public:

    /**
     * @note[short] Windows: 0x145af0
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0x145510
     */
    virtual TodoReturn resetObject();

    /**
     * @note[short] Windows: 0x1474c0
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] Windows: 0x1457b0
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] Windows: 0x147520
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    
private:
    [[deprecated("EnhancedGameObject::triggerActivated not implemented")]]
    /**
     */
    virtual TodoReturn triggerActivated(float p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::restoreObject not implemented")]]
    /**
     */
    virtual TodoReturn restoreObject();
public:
    
private:
    [[deprecated("EnhancedGameObject::animationTriggered not implemented")]]
    /**
     */
    virtual TodoReturn animationTriggered();
public:
    
private:
    [[deprecated("EnhancedGameObject::activatedByPlayer not implemented")]]
    /**
     */
    virtual TodoReturn activatedByPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::hasBeenActivatedByPlayer not implemented")]]
    /**
     */
    virtual TodoReturn hasBeenActivatedByPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::hasBeenActivated not implemented")]]
    /**
     */
    virtual TodoReturn hasBeenActivated();
public:
    
private:
    [[deprecated("EnhancedGameObject::saveActiveColors not implemented")]]
    /**
     */
    virtual TodoReturn saveActiveColors();
public:
    
private:
    [[deprecated("EnhancedGameObject::canAllowMultiActivate not implemented")]]
    /**
     */
    virtual TodoReturn canAllowMultiActivate();
public:
    
private:
    [[deprecated("EnhancedGameObject::getHasSyncedAnimation not implemented")]]
    /**
     */
    virtual TodoReturn getHasSyncedAnimation();
public:
    
private:
    [[deprecated("EnhancedGameObject::getHasRotateAction not implemented")]]
    /**
     */
    virtual TodoReturn getHasRotateAction();
public:
    
private:
    [[deprecated("EnhancedGameObject::canMultiActivate not implemented")]]
    /**
     */
    virtual TodoReturn canMultiActivate(bool p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::powerOnObject not implemented")]]
    /**
     */
    virtual TodoReturn powerOnObject(int p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::powerOffObject not implemented")]]
    /**
     */
    virtual TodoReturn powerOffObject();
public:
    
private:
    [[deprecated("EnhancedGameObject::stateSensitiveOff not implemented")]]
    /**
     */
    virtual TodoReturn stateSensitiveOff(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::updateSyncedAnimation not implemented")]]
    /**
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
public:
    
private:
    [[deprecated("EnhancedGameObject::updateAnimateOnTrigger not implemented")]]
    /**
     */
    virtual TodoReturn updateAnimateOnTrigger(bool p0);
public:
    GEODE_PAD(42);
    bool m_hasCustomAnimation;
    bool m_hasCustomRotation;
    bool m_disableRotation;
    GEODE_PAD(3);
    float m_rotationSpeed;
    GEODE_PAD(12);
    bool m_animationRandomizedStart;
    float m_animationSpeed;
    bool m_animationShouldUseSpeed;
    bool m_animateOnTrigger;
    bool m_disableDelayedLoop;
    bool m_disableAnimShine;
    int m_singleFrame;
    bool m_animationOffset;
    GEODE_PAD(15);
    bool m_animateOnlyWhenActive;
    bool m_isNoMultiActivate;
    bool m_isMultiActivate;
    GEODE_PAD(4);
};
