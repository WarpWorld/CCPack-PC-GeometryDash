#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class LevelAreaInnerLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaInnerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaInnerLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x231140
     */
    static LevelAreaInnerLayer* create(bool p0);

    /**
     * @note[short] Windows: 0x2311e0
     */
    bool init(bool p0);

    /**
     * @note[short] Windows: 0x232940
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x232720
     */
    void onDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x232c30
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x231ef0
     */
    void onNextFloor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x232850
     */
    bool playStep1();
    
private:
    [[deprecated("LevelAreaInnerLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(bool p0);
public:

    /**
     * @note[short] Windows: 0x231f40
     */
    cocos2d::CCAction* showFloor1CompleteDialog();

    /**
     * @note[short] Windows: 0x2326a0
     */
    TodoReturn tryResumeTowerMusic();

    /**
     * @note[short] Windows: 0x2329a0
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("LevelAreaInnerLayer::dialogClosed not implemented")]]
    /**
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
public:
};
