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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class FriendRequestPopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "FriendRequestPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendRequestPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x20b440
     */
    static FriendRequestPopup* create(GJFriendRequest* p0);
    
private:
    [[deprecated("FriendRequestPopup::blockUser not implemented")]]
    /**
     */
    TodoReturn blockUser();
public:

    /**
     * @note[short] Windows: 0x20b4e0
     */
    bool init(GJFriendRequest* p0);
    
private:
    [[deprecated("FriendRequestPopup::loadFromGJFriendRequest not implemented")]]
    /**
     */
    TodoReturn loadFromGJFriendRequest(GJFriendRequest* p0);
public:
    
private:
    [[deprecated("FriendRequestPopup::onAccept not implemented")]]
    /**
     */
    void onAccept(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendRequestPopup::onBlock not implemented")]]
    /**
     */
    void onBlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendRequestPopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendRequestPopup::onRemove not implemented")]]
    /**
     */
    void onRemove(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendRequestPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("FriendRequestPopup::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("FriendRequestPopup::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("FriendRequestPopup::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    
private:
    [[deprecated("FriendRequestPopup::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
};
