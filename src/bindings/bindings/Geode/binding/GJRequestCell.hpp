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

class GJRequestCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJRequestCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRequestCell, TableViewCell)

    /**
     * @note[short] Windows: 0x896e0
     */
    TodoReturn loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJRequestCell::markAsRead not implemented")]]
    /**
     */
    TodoReturn markAsRead();
public:
    
private:
    [[deprecated("GJRequestCell::onDeleteRequest not implemented")]]
    /**
     */
    void onDeleteRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::onToggle not implemented")]]
    /**
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::onViewFriendRequest not implemented")]]
    /**
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::onViewProfile not implemented")]]
    /**
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("GJRequestCell::updateToggle not implemented")]]
    /**
     */
    TodoReturn updateToggle();
public:
    
private:
    [[deprecated("GJRequestCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJRequestCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("GJRequestCell::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("GJRequestCell::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("GJRequestCell::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("GJRequestCell::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
};
