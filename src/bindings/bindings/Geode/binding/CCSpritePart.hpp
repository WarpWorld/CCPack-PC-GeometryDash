#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class CCSpritePart : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CCSpritePart";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpritePart, CCSpritePlus)
    
private:
    [[deprecated("CCSpritePart::create not implemented")]]
    /**
     */
    static CCSpritePart* create(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("CCSpritePart::createWithSpriteFrameName not implemented")]]
    /**
     */
    TodoReturn createWithSpriteFrameName(char const* p0);
public:
    
private:
    [[deprecated("CCSpritePart::frameChanged not implemented")]]
    /**
     */
    TodoReturn frameChanged(gd::string p0);
public:
    
private:
    [[deprecated("CCSpritePart::getBeingUsed not implemented")]]
    /**
     */
    TodoReturn getBeingUsed();
public:
    
private:
    [[deprecated("CCSpritePart::hideInactive not implemented")]]
    /**
     */
    TodoReturn hideInactive();
public:
    
private:
    [[deprecated("CCSpritePart::markAsNotBeingUsed not implemented")]]
    /**
     */
    TodoReturn markAsNotBeingUsed();
public:
    
private:
    [[deprecated("CCSpritePart::resetTextureRect not implemented")]]
    /**
     */
    TodoReturn resetTextureRect();
public:
    
private:
    [[deprecated("CCSpritePart::setBeingUsed not implemented")]]
    /**
     */
    void setBeingUsed(bool p0);
public:
    
private:
    [[deprecated("CCSpritePart::updateDisplayFrame not implemented")]]
    /**
     */
    TodoReturn updateDisplayFrame(gd::string p0);
public:
    
private:
    [[deprecated("CCSpritePart::setVisible not implemented")]]
    /**
     */
    virtual void setVisible(bool p0);
public:
};
