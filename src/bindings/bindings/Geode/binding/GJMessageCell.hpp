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

class GJMessageCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessageCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessageCell, TableViewCell)

    /**
     * @note[short] Windows: 0x8a3a0
     */
    TodoReturn loadFromMessage(GJUserMessage* p0);
    
private:
    [[deprecated("GJMessageCell::markAsRead not implemented")]]
    /**
     */
    TodoReturn markAsRead();
public:
    
private:
    [[deprecated("GJMessageCell::onDeleteMessage not implemented")]]
    /**
     */
    void onDeleteMessage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::onToggle not implemented")]]
    /**
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::onViewMessage not implemented")]]
    /**
     */
    void onViewMessage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::onViewProfile not implemented")]]
    /**
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("GJMessageCell::updateToggle not implemented")]]
    /**
     */
    TodoReturn updateToggle();
public:
    
private:
    [[deprecated("GJMessageCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJMessageCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("GJMessageCell::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("GJMessageCell::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("GJMessageCell::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("GJMessageCell::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
};
