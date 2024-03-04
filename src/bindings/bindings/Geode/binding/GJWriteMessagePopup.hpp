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
#include "UploadMessageDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJWriteMessagePopup : public FLAlertLayer, public TextInputDelegate, public UploadMessageDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJWriteMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJWriteMessagePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x20df90
     */
    static GJWriteMessagePopup* create(int p0, int p1);
    
private:
    [[deprecated("GJWriteMessagePopup::closeMessagePopup not implemented")]]
    /**
     */
    TodoReturn closeMessagePopup(bool p0);
public:

    /**
     * @note[short] Windows: 0x20e040
     */
    bool init(int p0, int p1);
    
private:
    [[deprecated("GJWriteMessagePopup::onClearBody not implemented")]]
    /**
     */
    void onClearBody(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::onSend not implemented")]]
    /**
     */
    void onSend(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x20f0e0
     */
    TodoReturn updateBody(gd::string p0);

    /**
     * @note[short] Windows: 0x20f340
     */
    TodoReturn updateCharCountLabel(int p0);

    /**
     * @note[short] Windows: 0x20f060
     */
    TodoReturn updateSubject(gd::string p0);

    /**
     * @note[short] Windows: 0x20f160
     */
    TodoReturn updateText(gd::string p0, int p1);
    
private:
    [[deprecated("GJWriteMessagePopup::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("GJWriteMessagePopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJWriteMessagePopup::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::uploadMessageFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadMessageFinished(int p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::uploadMessageFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadMessageFailed(int p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::textInputShouldOffset not implemented")]]
    /**
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::textInputReturn not implemented")]]
    /**
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
};
