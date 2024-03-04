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
#include "DownloadMessageDelegate.hpp"

class GJMessagePopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DownloadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessagePopup, FLAlertLayer)
    
private:
    [[deprecated("GJMessagePopup::create not implemented")]]
    /**
     */
    static GJMessagePopup* create(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::blockUser not implemented")]]
    /**
     */
    TodoReturn blockUser();
public:
    
private:
    [[deprecated("GJMessagePopup::init not implemented")]]
    /**
     */
    bool init(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::loadFromGJMessage not implemented")]]
    /**
     */
    TodoReturn loadFromGJMessage(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::onBlock not implemented")]]
    /**
     */
    void onBlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onRemove not implemented")]]
    /**
     */
    void onRemove(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onReply not implemented")]]
    /**
     */
    void onReply(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJMessagePopup::downloadMessageFinished not implemented")]]
    /**
     */
    virtual TodoReturn downloadMessageFinished(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::downloadMessageFailed not implemented")]]
    /**
     */
    virtual TodoReturn downloadMessageFailed(int p0);
public:
    
private:
    [[deprecated("GJMessagePopup::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("GJMessagePopup::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("GJMessagePopup::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
};
