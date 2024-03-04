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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UserListDelegate.hpp"

class FriendsProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendsProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0xf0960
     */
    static FriendsProfilePage* create(UserListType p0);

    /**
     * @note[short] Windows: 0xf0a10
     */
    bool init(UserListType p0);

    /**
     * @note[short] Windows: 0xf1630
     */
    void onBlocked(cocos2d::CCObject* sender);
    
private:
    [[deprecated("FriendsProfilePage::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendsProfilePage::onUpdate not implemented")]]
    /**
     */
    void onUpdate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xf1090
     */
    TodoReturn setupUsersBrowser(cocos2d::CCArray* p0, UserListType p1);
    
private:
    [[deprecated("FriendsProfilePage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("FriendsProfilePage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("FriendsProfilePage::getUserListFinished not implemented")]]
    /**
     */
    virtual TodoReturn getUserListFinished(cocos2d::CCArray* p0, UserListType p1);
public:
    
private:
    [[deprecated("FriendsProfilePage::getUserListFailed not implemented")]]
    /**
     */
    virtual TodoReturn getUserListFailed(UserListType p0, GJErrorCode p1);
public:
    
private:
    [[deprecated("FriendsProfilePage::userListChanged not implemented")]]
    /**
     */
    virtual TodoReturn userListChanged(cocos2d::CCArray* p0, UserListType p1);
public:
    
private:
    [[deprecated("FriendsProfilePage::forceReloadList not implemented")]]
    /**
     */
    virtual TodoReturn forceReloadList(UserListType p0);
public:
};
