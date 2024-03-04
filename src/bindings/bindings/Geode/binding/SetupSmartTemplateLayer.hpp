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
#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class SetupSmartTemplateLayer : public FLAlertLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SetupSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x35a240
     */
    static SetupSmartTemplateLayer* create(GJSmartTemplate* p0);

    /**
     * @note[short] Windows: 0x35a2e0
     */
    bool init(GJSmartTemplate* p0);
    
private:
    [[deprecated("SetupSmartTemplateLayer::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartTemplateLayer::onClick not implemented")]]
    /**
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartTemplateLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartTemplateLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SetupSmartTemplateLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("SetupSmartTemplateLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupSmartTemplateLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupSmartTemplateLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
