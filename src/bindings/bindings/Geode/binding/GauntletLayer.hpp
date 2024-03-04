#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"

class GauntletLayer : public cocos2d::CCLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x1845f0
     */
    static GauntletLayer* create(GauntletType p0);

    /**
     * @note[short] Windows: 0x184970
     */
    bool init(GauntletType p0);
    
private:
    [[deprecated("GauntletLayer::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletLayer::onLevel not implemented")]]
    /**
     */
    void onLevel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(GauntletType p0);
public:

    /**
     * @note[short] Windows: 0x1851d0
     */
    TodoReturn setupGauntlet(cocos2d::CCArray* p0);
    
private:
    [[deprecated("GauntletLayer::unlockActiveItem not implemented")]]
    /**
     */
    TodoReturn unlockActiveItem();
public:
    
private:
    [[deprecated("GauntletLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GauntletLayer::loadLevelsFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);
public:
    
private:
    [[deprecated("GauntletLayer::loadLevelsFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadLevelsFailed(char const* p0, int p1);
public:
};
