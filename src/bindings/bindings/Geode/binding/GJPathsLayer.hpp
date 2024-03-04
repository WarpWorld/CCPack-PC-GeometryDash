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
#include "FLAlertLayerProtocol.hpp"

class GJPathsLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJPathsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x1fcb20
     */
    static GJPathsLayer* create();
    
private:
    [[deprecated("GJPathsLayer::darkenButtons not implemented")]]
    /**
     */
    TodoReturn darkenButtons(bool p0);
public:

    /**
     * @note[short] Windows: 0x1fc9a0
     */
    static gd::string nameForPath(int p0);
    
private:
    [[deprecated("GJPathsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x1fd0a0
     */
    void onPath(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1fcbc0
     */
    virtual bool init();
    
private:
    [[deprecated("GJPathsLayer::onExit not implemented")]]
    /**
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("GJPathsLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("GJPathsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJPathsLayer::show not implemented")]]
    /**
     */
    virtual void show();
public:
};
