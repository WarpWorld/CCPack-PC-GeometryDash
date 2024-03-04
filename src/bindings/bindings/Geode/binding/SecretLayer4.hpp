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
#include "DialogDelegate.hpp"

class SecretLayer4 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer4";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer4, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x30e500
     */
    static SecretLayer4* create();

    /**
     * @note[short] Windows: 0x310480
     */
    TodoReturn getBasicMessage();
    
private:
    [[deprecated("SecretLayer4::getErrorMessage not implemented")]]
    /**
     */
    TodoReturn getErrorMessage();
public:

    /**
     * @note[short] Windows: 0x30fd10
     */
    TodoReturn getMessage();

    /**
     * @note[short] Windows: 0x30fdb0
     */
    TodoReturn getThreadMessage();
    
private:
    [[deprecated("SecretLayer4::nodeWithTag not implemented")]]
    /**
     */
    TodoReturn nodeWithTag(int p0);
public:
    
private:
    [[deprecated("SecretLayer4::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer4::onChest01 not implemented")]]
    /**
     */
    void onChest01(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer4::onSubmit not implemented")]]
    /**
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer4::playCoinEffect not implemented")]]
    /**
     */
    TodoReturn playCoinEffect();
public:
    
private:
    [[deprecated("SecretLayer4::scene not implemented")]]
    /**
     */
    TodoReturn scene();
public:

    /**
     * @note[short] Windows: 0x3088b0
     */
    TodoReturn selectAThread();
    
private:
    [[deprecated("SecretLayer4::showDialog not implemented")]]
    /**
     */
    TodoReturn showDialog(int p0);
public:
    
private:
    [[deprecated("SecretLayer4::showFirstDialog not implemented")]]
    /**
     */
    TodoReturn showFirstDialog();
public:

    /**
     * @note[short] Windows: 0x308770
     */
    TodoReturn updateMessageLabel(gd::string p0);

    /**
     * @note[short] Windows: 0x3084b0
     */
    void updateSearchLabel(char const* p0);

    /**
     * @note[short] Windows: 0x30e5a0
     */
    virtual bool init();
    
private:
    [[deprecated("SecretLayer4::onExit not implemented")]]
    /**
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("SecretLayer4::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SecretLayer4::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer4::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer4::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer4::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("SecretLayer4::dialogClosed not implemented")]]
    /**
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
public:
};
