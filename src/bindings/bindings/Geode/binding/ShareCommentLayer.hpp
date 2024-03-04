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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"

class ShareCommentLayer : public FLAlertLayer, public TextInputDelegate, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareCommentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareCommentLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x386370
     */
    static ShareCommentLayer* create(gd::string p0, int p1, CommentType p2, int p3, gd::string p4);

    /**
     * @note[short] Windows: 0x386490
     */
    bool init(gd::string p0, int p1, CommentType p2, int p3, gd::string p4);
    
private:
    [[deprecated("ShareCommentLayer::onClear not implemented")]]
    /**
     */
    void onClear(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareCommentLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareCommentLayer::onPercent not implemented")]]
    /**
     */
    void onPercent(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x3874c0
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3879e0
     */
    TodoReturn updateCharCountLabel();
    
private:
    [[deprecated("ShareCommentLayer::updateDescText not implemented")]]
    /**
     */
    TodoReturn updateDescText(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x387410
     */
    TodoReturn updatePercentLabel();
    
private:
    [[deprecated("ShareCommentLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("ShareCommentLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("ShareCommentLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("ShareCommentLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("ShareCommentLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("ShareCommentLayer::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("ShareCommentLayer::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("ShareCommentLayer::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
};
