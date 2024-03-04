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
#include "GJAccountBackupDelegate.hpp"
#include "GJAccountSyncDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountLayer : public GJDropDownLayer, public GJAccountDelegate, public GJAccountBackupDelegate, public GJAccountSyncDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x573e0
     */
    static AccountLayer* create();
    
private:
    [[deprecated("AccountLayer::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] Windows: 0x57dc0
     */
    TodoReturn doBackup();

    /**
     * @note[short] Windows: 0x57f20
     */
    TodoReturn doSync();
    
private:
    [[deprecated("AccountLayer::exitLayer not implemented")]]
    /**
     */
    TodoReturn exitLayer();
public:
    
private:
    [[deprecated("AccountLayer::hideLoadingUI not implemented")]]
    /**
     */
    TodoReturn hideLoadingUI();
public:

    /**
     * @note[short] Windows: 0x57c70
     */
    void onBackup(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AccountLayer::onHelp not implemented")]]
    /**
     */
    void onHelp(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x57c20
     */
    void onLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x58010
     */
    void onMore(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AccountLayer::onRegister not implemented")]]
    /**
     */
    void onRegister(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x57e30
     */
    void onSync(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AccountLayer::showLoadingUI not implemented")]]
    /**
     */
    TodoReturn showLoadingUI();
public:
    
private:
    [[deprecated("AccountLayer::toggleUI not implemented")]]
    /**
     */
    TodoReturn toggleUI(bool p0);
public:

    /**
     * @note[short] Windows: 0x58060
     */
    TodoReturn updatePage(bool p0);

    /**
     * @note[short] Windows: 0x575c0
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0x589b0
     */
    virtual TodoReturn layerHidden();
    
private:
    [[deprecated("AccountLayer::backupAccountFinished not implemented")]]
    /**
     */
    virtual TodoReturn backupAccountFinished();
public:
    
private:
    [[deprecated("AccountLayer::backupAccountFailed not implemented")]]
    /**
     */
    virtual TodoReturn backupAccountFailed(BackupAccountError p0, int p1);
public:
    
private:
    [[deprecated("AccountLayer::syncAccountFinished not implemented")]]
    /**
     */
    virtual TodoReturn syncAccountFinished();
public:
    
private:
    [[deprecated("AccountLayer::syncAccountFailed not implemented")]]
    /**
     */
    virtual TodoReturn syncAccountFailed(BackupAccountError p0, int p1);
public:
    
private:
    [[deprecated("AccountLayer::accountStatusChanged not implemented")]]
    /**
     */
    virtual TodoReturn accountStatusChanged();
public:
    
private:
    [[deprecated("AccountLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
};
