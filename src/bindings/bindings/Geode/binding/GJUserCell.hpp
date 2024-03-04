#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class GJUserCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJUserCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJUserCell, TableViewCell)

    /**
     * @note[short] Windows: 0x88750
     */
    TodoReturn loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJUserCell::onCancelFriendRequest not implemented")]]
    /**
     */
    void onCancelFriendRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onRemoveFriend not implemented")]]
    /**
     */
    void onRemoveFriend(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onSendMessage not implemented")]]
    /**
     */
    void onSendMessage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onUnblockUser not implemented")]]
    /**
     */
    void onUnblockUser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onViewFriendRequest not implemented")]]
    /**
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onViewProfile not implemented")]]
    /**
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("GJUserCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJUserCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("GJUserCell::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("GJUserCell::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("GJUserCell::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("GJUserCell::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
};
