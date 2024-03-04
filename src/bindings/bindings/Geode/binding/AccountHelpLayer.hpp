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
#include "GJAccountDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountHelpLayer : public GJDropDownLayer, public GJAccountDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountHelpLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountHelpLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x58a10
     */
    static AccountHelpLayer* create();
    
private:
    [[deprecated("AccountHelpLayer::doUnlink not implemented")]]
    /**
     */
    TodoReturn doUnlink();
public:
    
private:
    [[deprecated("AccountHelpLayer::exitLayer not implemented")]]
    /**
     */
    TodoReturn exitLayer();
public:
    
private:
    [[deprecated("AccountHelpLayer::onAccountManagement not implemented")]]
    /**
     */
    void onAccountManagement(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountHelpLayer::onReLogin not implemented")]]
    /**
     */
    void onReLogin(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountHelpLayer::onUnlink not implemented")]]
    /**
     */
    void onUnlink(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountHelpLayer::updatePage not implemented")]]
    /**
     */
    TodoReturn updatePage();
public:
    
private:
    [[deprecated("AccountHelpLayer::verifyUnlink not implemented")]]
    /**
     */
    TodoReturn verifyUnlink();
public:

    /**
     * @note[short] Windows: 0x58b90
     */
    virtual void customSetup();
    
private:
    [[deprecated("AccountHelpLayer::layerHidden not implemented")]]
    /**
     */
    virtual TodoReturn layerHidden();
public:
    
private:
    [[deprecated("AccountHelpLayer::accountStatusChanged not implemented")]]
    /**
     */
    virtual TodoReturn accountStatusChanged();
public:
    
private:
    [[deprecated("AccountHelpLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
};
