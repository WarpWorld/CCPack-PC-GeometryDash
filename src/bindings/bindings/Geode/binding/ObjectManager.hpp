#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectManager, cocos2d::CCNode)
    
private:
    [[deprecated("ObjectManager::animLoaded not implemented")]]
    /**
     */
    TodoReturn animLoaded(char const* p0);
public:

    /**
     * @note[short] Windows: 0x4bae0
     */
    TodoReturn getDefinition(char const* p0);
    
private:
    [[deprecated("ObjectManager::getGlobalAnimCopy not implemented")]]
    /**
     */
    TodoReturn getGlobalAnimCopy(char const* p0);
public:

    /**
     * @note[short] Windows: 0x4a7f0
     */
    TodoReturn instance();
    
private:
    [[deprecated("ObjectManager::loadCopiedAnimations not implemented")]]
    /**
     */
    TodoReturn loadCopiedAnimations();
public:
    
private:
    [[deprecated("ObjectManager::loadCopiedSets not implemented")]]
    /**
     */
    TodoReturn loadCopiedSets();
public:
    
private:
    [[deprecated("ObjectManager::purgeObjectManager not implemented")]]
    /**
     */
    TodoReturn purgeObjectManager();
public:
    
private:
    [[deprecated("ObjectManager::replaceAllOccurencesOfString not implemented")]]
    /**
     */
    TodoReturn replaceAllOccurencesOfString(cocos2d::CCString* p0, cocos2d::CCString* p1, cocos2d::CCDictionary* p2);
public:
    
private:
    [[deprecated("ObjectManager::setLoaded not implemented")]]
    /**
     */
    void setLoaded(char const* p0);
public:
    
private:
    [[deprecated("ObjectManager::setup not implemented")]]
    /**
     */
    TodoReturn setup();
public:
    
private:
    [[deprecated("ObjectManager::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
