#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"
#include "SpritePartDelegate.hpp"

class AnimatedGameObject : public EnhancedGameObject, public AnimatedSpriteDelegate, public SpritePartDelegate {
public:
    static constexpr auto CLASS_NAME = "AnimatedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedGameObject, EnhancedGameObject)
    
private:
    [[deprecated("AnimatedGameObject::create not implemented")]]
    /**
     */
    static AnimatedGameObject* create(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::animationForID not implemented")]]
    /**
     */
    TodoReturn animationForID(int p0, int p1);
public:
    
private:
    [[deprecated("AnimatedGameObject::getTweenTime not implemented")]]
    /**
     */
    TodoReturn getTweenTime(int p0, int p1);
public:
    
private:
    [[deprecated("AnimatedGameObject::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::playAnimation not implemented")]]
    /**
     */
    TodoReturn playAnimation(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setupAnimatedSize not implemented")]]
    /**
     */
    TodoReturn setupAnimatedSize(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setupChildSprites not implemented")]]
    /**
     */
    TodoReturn setupChildSprites();
public:
    
private:
    [[deprecated("AnimatedGameObject::updateChildSpriteColor not implemented")]]
    /**
     */
    TodoReturn updateChildSpriteColor(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::updateObjectAnimation not implemented")]]
    /**
     */
    TodoReturn updateObjectAnimation();
public:
    
private:
    [[deprecated("AnimatedGameObject::setOpacity not implemented")]]
    /**
     */
    virtual void setOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setChildColor not implemented")]]
    /**
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::resetObject not implemented")]]
    /**
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("AnimatedGameObject::activateObject not implemented")]]
    /**
     */
    virtual TodoReturn activateObject();
public:
    
private:
    [[deprecated("AnimatedGameObject::deactivateObject not implemented")]]
    /**
     */
    virtual void deactivateObject(bool p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setObjectColor not implemented")]]
    /**
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::animationFinished not implemented")]]
    /**
     */
    virtual TodoReturn animationFinished(char const* p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::displayFrameChanged not implemented")]]
    /**
     */
    virtual TodoReturn displayFrameChanged(cocos2d::CCObject* p0, gd::string p1);
public:
};
