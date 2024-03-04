#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class KeybindingsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "KeybindingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindingsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x22c1c0
     */
    static KeybindingsLayer* create();

    /**
     * @note[short] Windows: 0x22c9d0
     */
    TodoReturn addKeyPair(char const* p0, char const* p1);

    /**
     * @note[short] Windows: 0x22ccd0
     */
    TodoReturn countForPage(int p0);

    /**
     * @note[short] Windows: 0x22d010
     */
    TodoReturn goToPage(int p0);

    /**
     * @note[short] Windows: 0x22cda0
     */
    TodoReturn incrementCountForPage(int p0);
    
private:
    [[deprecated("KeybindingsLayer::infoKey not implemented")]]
    /**
     */
    TodoReturn infoKey(int p0);
public:

    /**
     * @note[short] Windows: 0x22ce80
     */
    TodoReturn layerForPage(int p0);
    
private:
    [[deprecated("KeybindingsLayer::layerKey not implemented")]]
    /**
     */
    TodoReturn layerKey(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::nextPosition not implemented")]]
    /**
     */
    TodoReturn nextPosition(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::objectKey not implemented")]]
    /**
     */
    TodoReturn objectKey(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::objectsForPage not implemented")]]
    /**
     */
    TodoReturn objectsForPage(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("KeybindingsLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("KeybindingsLayer::onNextPage not implemented")]]
    /**
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("KeybindingsLayer::onPrevPage not implemented")]]
    /**
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("KeybindingsLayer::onToggle not implemented")]]
    /**
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("KeybindingsLayer::pageKey not implemented")]]
    /**
     */
    TodoReturn pageKey(int p0);
public:

    /**
     * @note[short] Windows: 0x22c260
     */
    virtual bool init();
    
private:
    [[deprecated("KeybindingsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
