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
#include "GooglePlayDelegate.hpp"
#include "GJDropDownLayerDelegate.hpp"

class MoreOptionsLayer : public FLAlertLayer, public TextInputDelegate, public GooglePlayDelegate, public GJDropDownLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreOptionsLayer, FLAlertLayer)
    
private:
    [[deprecated("MoreOptionsLayer::create not implemented")]]
    /**
     */
    static MoreOptionsLayer* create();
public:

    /**
     * @note[short] Windows: 0x2b25f0
     */
    TodoReturn addToggle(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Windows: 0x2b2b90
     */
    TodoReturn countForPage(int p0);

    /**
     * @note[short] Windows: 0x2b2fd0
     */
    TodoReturn goToPage(int p0);

    /**
     * @note[short] Windows: 0x2b2c60
     */
    TodoReturn incrementCountForPage(int p0);
    
private:
    [[deprecated("MoreOptionsLayer::infoKey not implemented")]]
    /**
     */
    TodoReturn infoKey(int p0);
public:

    /**
     * @note[short] Windows: 0x2b2e70
     */
    TodoReturn layerForPage(int p0);
    
private:
    [[deprecated("MoreOptionsLayer::layerKey not implemented")]]
    /**
     */
    TodoReturn layerKey(int p0);
public:

    /**
     * @note[short] Windows: 0x2b2a50
     */
    TodoReturn nextPosition(int p0);
    
private:
    [[deprecated("MoreOptionsLayer::objectKey not implemented")]]
    /**
     */
    TodoReturn objectKey(int p0);
public:

    /**
     * @note[short] Windows: 0x2b2d40
     */
    TodoReturn objectsForPage(int p0);
    
private:
    [[deprecated("MoreOptionsLayer::offsetToNextPage not implemented")]]
    /**
     */
    TodoReturn offsetToNextPage();
public:
    
private:
    [[deprecated("MoreOptionsLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onFMODDebug not implemented")]]
    /**
     */
    void onFMODDebug(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onGPSignIn not implemented")]]
    /**
     */
    void onGPSignIn(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onGPSignOut not implemented")]]
    /**
     */
    void onGPSignOut(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa21a0
     */
    void onKeybindings(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreOptionsLayer::onNextPage not implemented")]]
    /**
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onParental not implemented")]]
    /**
     */
    void onParental(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onPrevPage not implemented")]]
    /**
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b3890
     */
    void onSongBrowser(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreOptionsLayer::onToggle not implemented")]]
    /**
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::pageKey not implemented")]]
    /**
     */
    TodoReturn pageKey(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::toggleGP not implemented")]]
    /**
     */
    TodoReturn toggleGP();
public:

    /**
     * @note[short] Windows: 0x2b1630
     */
    virtual bool init();
    
private:
    [[deprecated("MoreOptionsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("MoreOptionsLayer::textInputShouldOffset not implemented")]]
    /**
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("MoreOptionsLayer::textInputReturn not implemented")]]
    /**
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::googlePlaySignedIn not implemented")]]
    /**
     */
    virtual TodoReturn googlePlaySignedIn();
public:
    
private:
    [[deprecated("MoreOptionsLayer::dropDownLayerWillClose not implemented")]]
    /**
     */
    virtual TodoReturn dropDownLayerWillClose(GJDropDownLayer* p0);
public:
};
