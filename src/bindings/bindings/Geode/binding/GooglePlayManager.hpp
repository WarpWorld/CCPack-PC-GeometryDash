#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GooglePlayManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GooglePlayManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GooglePlayManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x478b0
     */
    static GooglePlayManager* sharedState();
    
private:
    [[deprecated("GooglePlayManager::googlePlaySignedIn not implemented")]]
    /**
     */
    TodoReturn googlePlaySignedIn();
public:
    
private:
    [[deprecated("GooglePlayManager::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
