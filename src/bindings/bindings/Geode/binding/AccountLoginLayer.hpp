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
#include "GJAccountLoginDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountLoginLayer : public FLAlertLayer, public TextInputDelegate, public GJAccountLoginDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLoginLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLoginLayer, FLAlertLayer)
    
private:
    [[deprecated("AccountLoginLayer::create not implemented")]]
    /**
     */
    static AccountLoginLayer* create(gd::string p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::createTextBackground not implemented")]]
    /**
     */
    TodoReturn createTextBackground(cocos2d::CCPoint p0, char const* p1, cocos2d::CCSize p2);
public:
    
private:
    [[deprecated("AccountLoginLayer::createTextInput not implemented")]]
    /**
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, char const* p2, int p3);
public:
    
private:
    [[deprecated("AccountLoginLayer::createTextLabel not implemented")]]
    /**
     */
    TodoReturn createTextLabel(cocos2d::CCPoint p0, char const* p1, cocos2d::CCSize p2);
public:
    
private:
    [[deprecated("AccountLoginLayer::disableNodes not implemented")]]
    /**
     */
    TodoReturn disableNodes();
public:
    
private:
    [[deprecated("AccountLoginLayer::hideLoadingUI not implemented")]]
    /**
     */
    TodoReturn hideLoadingUI();
public:

    /**
     * @note[short] Windows: 0x55cb0
     */
    bool init(gd::string p0);
    
private:
    [[deprecated("AccountLoginLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x56440
     */
    void onForgotPassword(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x56420
     */
    void onForgotUser(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AccountLoginLayer::onSubmit not implemented")]]
    /**
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountLoginLayer::resetLabel not implemented")]]
    /**
     */
    TodoReturn resetLabel(int p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::resetLabels not implemented")]]
    /**
     */
    TodoReturn resetLabels();
public:
    
private:
    [[deprecated("AccountLoginLayer::showLoadingUI not implemented")]]
    /**
     */
    TodoReturn showLoadingUI();
public:
    
private:
    [[deprecated("AccountLoginLayer::toggleUI not implemented")]]
    /**
     */
    TodoReturn toggleUI(bool p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::updateLabel not implemented")]]
    /**
     */
    TodoReturn updateLabel(AccountError p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("AccountLoginLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("AccountLoginLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("AccountLoginLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:

    /**
     * @note[short] Windows: 0x56680
     */
    virtual TodoReturn loginAccountFinished(int p0, int p1);
    
private:
    [[deprecated("AccountLoginLayer::loginAccountFailed not implemented")]]
    /**
     */
    virtual TodoReturn loginAccountFailed(AccountError p0);
public:
};
