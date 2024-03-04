#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class SecretLayer3 : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer3";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer3, cocos2d::CCLayer)
    
private:
    [[deprecated("SecretLayer3::create not implemented")]]
    /**
     */
    static SecretLayer3* create();
public:
    
private:
    [[deprecated("SecretLayer3::animateEyes not implemented")]]
    /**
     */
    TodoReturn animateEyes();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep1 not implemented")]]
    /**
     */
    TodoReturn firstInteractionStep1();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep2 not implemented")]]
    /**
     */
    TodoReturn firstInteractionStep2();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep3 not implemented")]]
    /**
     */
    TodoReturn firstInteractionStep3();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep4 not implemented")]]
    /**
     */
    TodoReturn firstInteractionStep4();
public:
    
private:
    [[deprecated("SecretLayer3::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer3::onChest01 not implemented")]]
    /**
     */
    void onChest01(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer3::onChest02 not implemented")]]
    /**
     */
    void onChest02(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer3::onClick not implemented")]]
    /**
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer3::revealStep1 not implemented")]]
    /**
     */
    TodoReturn revealStep1();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep2 not implemented")]]
    /**
     */
    TodoReturn revealStep2();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep3 not implemented")]]
    /**
     */
    TodoReturn revealStep3();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep4 not implemented")]]
    /**
     */
    TodoReturn revealStep4();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep5 not implemented")]]
    /**
     */
    TodoReturn revealStep5();
public:
    
private:
    [[deprecated("SecretLayer3::scene not implemented")]]
    /**
     */
    TodoReturn scene();
public:
    
private:
    [[deprecated("SecretLayer3::showUnlockDialog not implemented")]]
    /**
     */
    TodoReturn showUnlockDialog();
public:
    
private:
    [[deprecated("SecretLayer3::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SecretLayer3::onExit not implemented")]]
    /**
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("SecretLayer3::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SecretLayer3::dialogClosed not implemented")]]
    /**
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
public:
};
