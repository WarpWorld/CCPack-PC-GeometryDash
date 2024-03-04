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
#include "FriendRequestDelegate.hpp"

class FRequestProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public FriendRequestDelegate {
public:
    static constexpr auto CLASS_NAME = "FRequestProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FRequestProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0xeeee0
     */
    static FRequestProfilePage* create(bool p0);

    /**
     * @note[short] Windows: 0xefb90
     */
    TodoReturn deleteSelected();

    /**
     * @note[short] Windows: 0xeef90
     */
    bool init(bool p0);
    
private:
    [[deprecated("FRequestProfilePage::isCorrect not implemented")]]
    /**
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] Windows: 0xf00d0
     */
    TodoReturn loadPage(int p0);
    
private:
    [[deprecated("FRequestProfilePage::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onDeleteSelected not implemented")]]
    /**
     */
    void onDeleteSelected(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onNextPage not implemented")]]
    /**
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onPrevPage not implemented")]]
    /**
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onSentRequests not implemented")]]
    /**
     */
    void onSentRequests(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onToggleAllObjects not implemented")]]
    /**
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onUpdate not implemented")]]
    /**
     */
    void onUpdate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xf0320
     */
    TodoReturn setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0xefe50
     */
    TodoReturn untoggleAll();
    
private:
    [[deprecated("FRequestProfilePage::updateLevelsLabel not implemented")]]
    /**
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("FRequestProfilePage::updatePageArrows not implemented")]]
    /**
     */
    TodoReturn updatePageArrows();
public:
    
private:
    [[deprecated("FRequestProfilePage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("FRequestProfilePage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("FRequestProfilePage::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    
private:
    [[deprecated("FRequestProfilePage::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::loadFRequestsFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadFRequestsFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::loadFRequestsFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadFRequestsFailed(char const* p0, GJErrorCode p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::setupPageInfo not implemented")]]
    /**
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::forceReloadRequests not implemented")]]
    /**
     */
    virtual TodoReturn forceReloadRequests(bool p0);
public:
};
