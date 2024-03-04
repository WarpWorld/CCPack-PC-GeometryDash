#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class KeybindingsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "KeybindingsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(KeybindingsManager, cocos2d::CCNode)
    
private:
    [[deprecated("KeybindingsManager::sharedState not implemented")]]
    /**
     */
    static KeybindingsManager* sharedState();
public:
    
private:
    [[deprecated("KeybindingsManager::commandForKey not implemented")]]
    /**
     */
    TodoReturn commandForKey(cocos2d::enumKeyCodes p0, GJKeyGroup p1, bool p2, bool p3, bool p4);
public:
    
private:
    [[deprecated("KeybindingsManager::commandForKeyMods not implemented")]]
    /**
     */
    TodoReturn commandForKeyMods(cocos2d::enumKeyCodes p0, GJKeyGroup p1);
public:
    
private:
    [[deprecated("KeybindingsManager::commandForKeyNoMods not implemented")]]
    /**
     */
    TodoReturn commandForKeyNoMods(cocos2d::enumKeyCodes p0, GJKeyGroup p1);
public:
    
private:
    [[deprecated("KeybindingsManager::commandToKeyForGroup not implemented")]]
    /**
     */
    TodoReturn commandToKeyForGroup(GJKeyGroup p0);
public:

    /**
     * @note[short] Windows: 0x22d570
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("KeybindingsManager::encodeDataTo not implemented")]]
    /**
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("KeybindingsManager::firstSetup not implemented")]]
    /**
     */
    TodoReturn firstSetup();
public:
    
private:
    [[deprecated("KeybindingsManager::groupForCommand not implemented")]]
    /**
     */
    TodoReturn groupForCommand(GJKeyCommand p0);
public:
    
private:
    [[deprecated("KeybindingsManager::keyForCommand not implemented")]]
    /**
     */
    TodoReturn keyForCommand(GJKeyCommand p0);
public:
    
private:
    [[deprecated("KeybindingsManager::keyToCommandForGroup not implemented")]]
    /**
     */
    TodoReturn keyToCommandForGroup(GJKeyGroup p0);
public:
    
private:
    [[deprecated("KeybindingsManager::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
