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

class SecretLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SecretLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("SecretLayer::create not implemented")]]
    /**
     */
    static SecretLayer* create();
public:
    
private:
    [[deprecated("SecretLayer::getBasicMessage not implemented")]]
    /**
     */
    TodoReturn getBasicMessage();
public:
    
private:
    [[deprecated("SecretLayer::getMessage not implemented")]]
    /**
     */
    TodoReturn getMessage();
public:
    
private:
    [[deprecated("SecretLayer::getThreadMessage not implemented")]]
    /**
     */
    TodoReturn getThreadMessage();
public:
    
private:
    [[deprecated("SecretLayer::nodeWithTag not implemented")]]
    /**
     */
    TodoReturn nodeWithTag(int p0);
public:
    
private:
    [[deprecated("SecretLayer::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer::onSubmit not implemented")]]
    /**
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer::playCoinEffect not implemented")]]
    /**
     */
    TodoReturn playCoinEffect();
public:
    
private:
    [[deprecated("SecretLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene();
public:
    
private:
    [[deprecated("SecretLayer::selectAThread not implemented")]]
    /**
     */
    TodoReturn selectAThread();
public:
    
private:
    [[deprecated("SecretLayer::updateMessageLabel not implemented")]]
    /**
     */
    TodoReturn updateMessageLabel(gd::string p0);
public:
    
private:
    [[deprecated("SecretLayer::updateSearchLabel not implemented")]]
    /**
     */
    void updateSearchLabel(char const* p0);
public:
    
private:
    [[deprecated("SecretLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SecretLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SecretLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
};
