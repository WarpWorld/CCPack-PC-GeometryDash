#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJMPDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "TextInputDelegate.hpp"

class MPLobbyLayer : public cocos2d::CCLayer, public GJMPDelegate, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MPLobbyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MPLobbyLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("MPLobbyLayer::create not implemented")]]
    /**
     */
    static MPLobbyLayer* create(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBtn1 not implemented")]]
    /**
     */
    void onBtn1(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBtn2 not implemented")]]
    /**
     */
    void onBtn2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBtn3 not implemented")]]
    /**
     */
    void onBtn3(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onComment not implemented")]]
    /**
     */
    void onComment(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onUpdateLobby not implemented")]]
    /**
     */
    TodoReturn onUpdateLobby();
public:
    
private:
    [[deprecated("MPLobbyLayer::postComment not implemented")]]
    /**
     */
    TodoReturn postComment();
public:
    
private:
    [[deprecated("MPLobbyLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::tryExitLobby not implemented")]]
    /**
     */
    TodoReturn tryExitLobby();
public:
    
private:
    [[deprecated("MPLobbyLayer::updateLobby not implemented")]]
    /**
     */
    TodoReturn updateLobby(float p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("MPLobbyLayer::keyDown not implemented")]]
    /**
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::joinLobbyFinished not implemented")]]
    /**
     */
    virtual TodoReturn joinLobbyFinished(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::joinLobbyFailed not implemented")]]
    /**
     */
    virtual TodoReturn joinLobbyFailed(int p0, GJMPErrorCode p1);
public:
    
private:
    [[deprecated("MPLobbyLayer::updateComments not implemented")]]
    /**
     */
    virtual TodoReturn updateComments();
public:
    
private:
    [[deprecated("MPLobbyLayer::didUploadMPComment not implemented")]]
    /**
     */
    virtual TodoReturn didUploadMPComment(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::keyUp not implemented")]]
    /**
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("MPLobbyLayer::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("MPLobbyLayer::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("MPLobbyLayer::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
};
