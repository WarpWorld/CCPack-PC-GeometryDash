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
#include "ColorSelectDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJColorSetupLayer : public FLAlertLayer, public ColorSelectDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJColorSetupLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJColorSetupLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x1d5ae0
     */
    static GJColorSetupLayer* create(LevelSettingsObject* p0);

    /**
     * @note[short] Windows: 0x1d5b80
     */
    bool init(LevelSettingsObject* p0);
    
private:
    [[deprecated("GJColorSetupLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJColorSetupLayer::onColor not implemented")]]
    /**
     */
    void onColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJColorSetupLayer::onPage not implemented")]]
    /**
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJColorSetupLayer::showPage not implemented")]]
    /**
     */
    TodoReturn showPage(int p0);
public:
    
private:
    [[deprecated("GJColorSetupLayer::updateSpriteColor not implemented")]]
    /**
     */
    TodoReturn updateSpriteColor(ColorChannelSprite* p0, cocos2d::CCLabelBMFont* p1, int p2);
public:
    
private:
    [[deprecated("GJColorSetupLayer::updateSpriteColors not implemented")]]
    /**
     */
    TodoReturn updateSpriteColors();
public:
    
private:
    [[deprecated("GJColorSetupLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJColorSetupLayer::colorSelectClosed not implemented")]]
    /**
     */
    virtual TodoReturn colorSelectClosed(cocos2d::CCNode* p0);
public:
};
