#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJAccountManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJAccountManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJAccountManager, cocos2d::CCNode)

    /**
     * @note[short] Out of line
     */
    static GJAccountManager* get();

    /**
     * @note[short] Windows: 0x18a510
     */
    static GJAccountManager* sharedState();

    /**
     * @note[short] Windows: 0x18aba0
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* p1);
    
private:
    [[deprecated("GJAccountManager::addDLToActive not implemented")]]
    /**
     */
    void addDLToActive(char const* tag);
public:
    
private:
    [[deprecated("GJAccountManager::backupAccount not implemented")]]
    /**
     */
    TodoReturn backupAccount(gd::string p0);
public:
    
private:
    [[deprecated("GJAccountManager::dataLoaded not implemented")]]
    /**
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJAccountManager::encodeDataTo not implemented")]]
    /**
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJAccountManager::firstSetup not implemented")]]
    /**
     */
    TodoReturn firstSetup();
public:

    /**
     * @note[short] Windows: 0x18b530
     */
    TodoReturn getAccountBackupURL();

    /**
     * @note[short] Windows: 0x18bdc0
     */
    TodoReturn getAccountSyncURL();
    
private:
    [[deprecated("GJAccountManager::getDLObject not implemented")]]
    /**
     */
    TodoReturn getDLObject(char const* p0);
public:
    
private:
    [[deprecated("GJAccountManager::getShaPassword not implemented")]]
    /**
     */
    TodoReturn getShaPassword(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x18a830
     */
    TodoReturn handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("GJAccountManager::handleItDelayed not implemented")]]
    /**
     */
    TodoReturn handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GJAccountManager::handleItND not implemented")]]
    /**
     */
    TodoReturn handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("GJAccountManager::isDLActive not implemented")]]
    /**
     */
    bool isDLActive(char const* tag);
public:
    
private:
    [[deprecated("GJAccountManager::linkToAccount not implemented")]]
    /**
     */
    TodoReturn linkToAccount(gd::string p0, gd::string p1, int p2, int p3);
public:

    /**
     * @note[short] Windows: 0x18afe0
     */
    TodoReturn loginAccount(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18bb20
     */
    TodoReturn onBackupAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18b660
     */
    TodoReturn onGetAccountBackupURLCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18bef0
     */
    TodoReturn onGetAccountSyncURLCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18b260
     */
    TodoReturn onLoginAccountCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GJAccountManager::onProcessHttpRequestCompleted not implemented")]]
    /**
     */
    TodoReturn onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:

    /**
     * @note[short] Windows: 0x18ae80
     */
    TodoReturn onRegisterAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18c230
     */
    TodoReturn onSyncAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18ce40
     */
    TodoReturn onUpdateAccountSettingsCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GJAccountManager::ProcessHttpRequest not implemented")]]
    /**
     */
    TodoReturn ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);
public:

    /**
     * @note[short] Windows: 0x18ad00
     */
    TodoReturn registerAccount(gd::string p0, gd::string p1, gd::string p2);

    /**
     * @note[short] Windows: 0x18ac50
     */
    TodoReturn removeDLFromActive(char const* p0);
    
private:
    [[deprecated("GJAccountManager::syncAccount not implemented")]]
    /**
     */
    TodoReturn syncAccount(gd::string p0);
public:
    
private:
    [[deprecated("GJAccountManager::unlinkFromAccount not implemented")]]
    /**
     */
    TodoReturn unlinkFromAccount();
public:

    /**
     * @note[short] Windows: 0x18cc30
     */
    TodoReturn updateAccountSettings(int p0, int p1, int p2, gd::string p3, gd::string p4, gd::string p5);
    
private:
    [[deprecated("GJAccountManager::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    cocos2d::CCDictionary* m_activeDownloads;
    gd::string m_username;
    int m_accountID;
    int m_unkInt1;
    int m_unkInt2;
    gd::string m_GJP2;
    GJAccountRegisterDelegate* m_accountRegisterDelegate;
    GJAccountLoginDelegate* m_accountLoginDelegate;
    GJAccountDelegate* m_accountDelegate;
    GJAccountBackupDelegate* m_backupDelegate;
    GJAccountSyncDelegate* m_syncDelegate;
    GJAccountSettingsDelegate* m_accountSettingsDelegate;
    int m_gameManagerSize;
    int m_localLevelsSize;
    gd::string m_password;
};
