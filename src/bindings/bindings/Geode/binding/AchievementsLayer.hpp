#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class AchievementsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "AchievementsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x5a9a0
     */
    static AchievementsLayer* create();

    /**
     * @note[short] Windows: 0x5adc0
     */
    TodoReturn loadPage(int p0);

    /**
     * @note[short] Windows: 0x5b040
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5b050
     */
    void onPrevPage(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AchievementsLayer::setupLevelBrowser not implemented")]]
    /**
     */
    TodoReturn setupLevelBrowser(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("AchievementsLayer::setupPageInfo not implemented")]]
    /**
     */
    TodoReturn setupPageInfo(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("AchievementsLayer::keyDown not implemented")]]
    /**
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:

    /**
     * @note[short] Windows: 0x5aab0
     */
    virtual void customSetup();
};
