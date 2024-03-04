#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJActionManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJActionManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJActionManager, cocos2d::CCNode)
    
private:
    [[deprecated("GJActionManager::create not implemented")]]
    /**
     */
    static GJActionManager* create();
public:
    
private:
    [[deprecated("GJActionManager::getInternalAction not implemented")]]
    /**
     */
    TodoReturn getInternalAction(int p0);
public:
    
private:
    [[deprecated("GJActionManager::runInternalAction not implemented")]]
    /**
     */
    TodoReturn runInternalAction(cocos2d::CCAction* p0, cocos2d::CCNode* p1);
public:
    
private:
    [[deprecated("GJActionManager::stopAllInternalActions not implemented")]]
    /**
     */
    TodoReturn stopAllInternalActions();
public:
    
private:
    [[deprecated("GJActionManager::stopInternalAction not implemented")]]
    /**
     */
    TodoReturn stopInternalAction(int p0);
public:
    
private:
    [[deprecated("GJActionManager::updateInternalActions not implemented")]]
    /**
     */
    TodoReturn updateInternalActions(float p0, bool p1);
public:
    
private:
    [[deprecated("GJActionManager::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
