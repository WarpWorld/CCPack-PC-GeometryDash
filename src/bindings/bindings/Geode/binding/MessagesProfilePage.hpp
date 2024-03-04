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
#include "MessageListDelegate.hpp"

class MessagesProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public MessageListDelegate {
public:
    static constexpr auto CLASS_NAME = "MessagesProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MessagesProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x27d110
     */
    static MessagesProfilePage* create(bool p0);
    
private:
    [[deprecated("MessagesProfilePage::deleteSelected not implemented")]]
    /**
     */
    TodoReturn deleteSelected();
public:

    /**
     * @note[short] Windows: 0x27d1c0
     */
    bool init(bool p0);
    
private:
    [[deprecated("MessagesProfilePage::isCorrect not implemented")]]
    /**
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] Windows: 0x27e140
     */
    TodoReturn loadPage(int p0);
    
private:
    [[deprecated("MessagesProfilePage::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onDeleteSelected not implemented")]]
    /**
     */
    void onDeleteSelected(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onNextPage not implemented")]]
    /**
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onPrevPage not implemented")]]
    /**
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onSentMessages not implemented")]]
    /**
     */
    void onSentMessages(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onToggleAllObjects not implemented")]]
    /**
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onUpdate not implemented")]]
    /**
     */
    void onUpdate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27e390
     */
    TodoReturn setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x27e0f0
     */
    TodoReturn untoggleAll();
    
private:
    [[deprecated("MessagesProfilePage::updateLevelsLabel not implemented")]]
    /**
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("MessagesProfilePage::updatePageArrows not implemented")]]
    /**
     */
    TodoReturn updatePageArrows();
public:
    
private:
    [[deprecated("MessagesProfilePage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("MessagesProfilePage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("MessagesProfilePage::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("MessagesProfilePage::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    
private:
    [[deprecated("MessagesProfilePage::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("MessagesProfilePage::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("MessagesProfilePage::loadMessagesFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadMessagesFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("MessagesProfilePage::loadMessagesFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadMessagesFailed(char const* p0, GJErrorCode p1);
public:
    
private:
    [[deprecated("MessagesProfilePage::forceReloadMessages not implemented")]]
    /**
     */
    virtual TodoReturn forceReloadMessages(bool p0);
public:
    
private:
    [[deprecated("MessagesProfilePage::setupPageInfo not implemented")]]
    /**
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);
public:
};
