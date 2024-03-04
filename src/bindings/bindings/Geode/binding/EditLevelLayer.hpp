#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditLevelLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditLevelLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x9c840
     */
    static EditLevelLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x9e520
     */
    TodoReturn closeTextInputs();

    /**
     * @note[short] Windows: 0x9f560
     */
    void confirmClone(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x9f0e0
     */
    void confirmDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x9f5e0
     */
    void confirmMoveToTop(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x9c8e0
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x9f7a0
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9f440
     */
    void onClone();
    
private:
    [[deprecated("EditLevelLayer::onDelete not implemented")]]
    /**
     */
    void onDelete();
public:

    /**
     * @note[short] Windows: 0x9ed00
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9da70
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9f3c0
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9db40
     */
    void onLevelInfo(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onLevelLeaderboard not implemented")]]
    /**
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onLowDetailMode not implemented")]]
    /**
     */
    void onLowDetailMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x9f740
     */
    void onMoveToTop();

    /**
     * @note[short] Windows: 0x9ea10
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9f660
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9ee00
     */
    void onShare(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onTest not implemented")]]
    /**
     */
    void onTest(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x9ec80
     */
    void onUpdateDescription(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::playStep2 not implemented")]]
    /**
     */
    TodoReturn playStep2();
public:
    
private:
    [[deprecated("EditLevelLayer::playStep3 not implemented")]]
    /**
     */
    TodoReturn playStep3();
public:
    
private:
    [[deprecated("EditLevelLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(GJGameLevel* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::setupLevelInfo not implemented")]]
    /**
     */
    TodoReturn setupLevelInfo();
public:
    
private:
    [[deprecated("EditLevelLayer::updateDescText not implemented")]]
    /**
     */
    TodoReturn updateDescText(char const* p0);
public:

    /**
     * @note[short] Windows: 0x9f8f0
     */
    TodoReturn verifyLevelName();
    
private:
    [[deprecated("EditLevelLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("EditLevelLayer::keyDown not implemented")]]
    /**
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("EditLevelLayer::setIDPopupClosed not implemented")]]
    /**
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
public:

    /**
     * @note[short] Windows: 0x9f160
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    
private:
    [[deprecated("EditLevelLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("EditLevelLayer::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("EditLevelLayer::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    cocos2d::CCMenu* m_buttonMenu;
    GJGameLevel* m_level;
    TextArea* m_descriptionInput;
    cocos2d::CCArray* m_someArray;
    cocos2d::CCLabelBMFont* m_folderLabel;
    bool m_unk;
    bool m_lowDetailModeTriggered;
    GJLevelType m_levelType;
};
