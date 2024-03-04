#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EnterEffectInstance {
public:
    static constexpr auto CLASS_NAME = "EnterEffectInstance";
    
private:
    [[deprecated("EnterEffectInstance::animateValue not implemented")]]
    /**
     */
    TodoReturn animateValue(int p0, float p1, float p2, float p3, int p4, float p5, int p6);
public:
    
private:
    [[deprecated("EnterEffectInstance::getValue not implemented")]]
    /**
     */
    TodoReturn getValue(int p0);
public:
    
private:
    [[deprecated("EnterEffectInstance::loadTransitions not implemented")]]
    /**
     */
    TodoReturn loadTransitions(EnterEffectObject* p0, float p1);
public:
    
private:
    [[deprecated("EnterEffectInstance::loadValuesFromObject not implemented")]]
    /**
     */
    TodoReturn loadValuesFromObject(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("EnterEffectInstance::setValue not implemented")]]
    /**
     */
    void setValue(int p0, float p1);
public:
    
private:
    [[deprecated("EnterEffectInstance::updateTransitions not implemented")]]
    /**
     */
    TodoReturn updateTransitions(float p0, GJBaseGameLayer* p1);
public:
};
