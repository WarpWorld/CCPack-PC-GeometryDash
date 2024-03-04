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
#include "GJAccountRegisterDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountRegisterLayer : public FLAlertLayer, public TextInputDelegate, public GJAccountRegisterDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountRegisterLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountRegisterLayer, FLAlertLayer)
    
private:
    [[deprecated("AccountRegisterLayer::create not implemented")]]
    /**
     */
    static AccountRegisterLayer* create();
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextBackground not implemented")]]
    /**
     */
    TodoReturn createTextBackground(cocos2d::CCPoint p0, cocos2d::CCSize p1);
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextInput not implemented")]]
    /**
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, gd::string p2, int p3);
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextLabel not implemented")]]
    /**
     */
    TodoReturn createTextLabel(cocos2d::CCPoint p0, gd::string p1, cocos2d::CCSize p2);
public:
    
private:
    [[deprecated("AccountRegisterLayer::disableNodes not implemented")]]
    /**
     */
    TodoReturn disableNodes();
public:
    
private:
    [[deprecated("AccountRegisterLayer::hideLoadingUI not implemented")]]
    /**
     */
    TodoReturn hideLoadingUI();
public:
    
private:
    [[deprecated("AccountRegisterLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountRegisterLayer::onSubmit not implemented")]]
    /**
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountRegisterLayer::resetLabel not implemented")]]
    /**
     */
    TodoReturn resetLabel(int p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::resetLabels not implemented")]]
    /**
     */
    TodoReturn resetLabels();
public:
    
private:
    [[deprecated("AccountRegisterLayer::showLoadingUI not implemented")]]
    /**
     */
    TodoReturn showLoadingUI();
public:
    
private:
    [[deprecated("AccountRegisterLayer::toggleUI not implemented")]]
    /**
     */
    TodoReturn toggleUI(bool p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::updateLabel not implemented")]]
    /**
     */
    TodoReturn updateLabel(AccountError p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validEmail not implemented")]]
    /**
     */
    TodoReturn validEmail(gd::string p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validPassword not implemented")]]
    /**
     */
    TodoReturn validPassword(gd::string p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validUser not implemented")]]
    /**
     */
    TodoReturn validUser(gd::string p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("AccountRegisterLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("AccountRegisterLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("AccountRegisterLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("AccountRegisterLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::textInputShouldOffset not implemented")]]
    /**
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("AccountRegisterLayer::textInputReturn not implemented")]]
    /**
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::allowTextInput not implemented")]]
    /**
     */
    virtual bool allowTextInput(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::registerAccountFinished not implemented")]]
    /**
     */
    virtual TodoReturn registerAccountFinished();
public:
    
private:
    [[deprecated("AccountRegisterLayer::registerAccountFailed not implemented")]]
    /**
     */
    virtual TodoReturn registerAccountFailed(AccountError p0);
public:
};
