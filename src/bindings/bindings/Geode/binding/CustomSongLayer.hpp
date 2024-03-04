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
#include "GJDropDownLayerDelegate.hpp"
#include "MusicBrowserDelegate.hpp"

class CustomSongLayer : public FLAlertLayer, public TextInputDelegate, public GJDropDownLayerDelegate, public MusicBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongLayer, FLAlertLayer)
    
private:
    [[deprecated("CustomSongLayer::create not implemented")]]
    /**
     */
    static CustomSongLayer* create(CustomSongDelegate* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::init not implemented")]]
    /**
     */
    bool init(CustomSongDelegate* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onCreateLines not implemented")]]
    /**
     */
    void onCreateLines(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onMusicBrowser not implemented")]]
    /**
     */
    void onMusicBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onNewgroundsBrowser not implemented")]]
    /**
     */
    void onNewgroundsBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onOptions not implemented")]]
    /**
     */
    void onOptions(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onSearch not implemented")]]
    /**
     */
    void onSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onSongBrowser not implemented")]]
    /**
     */
    void onSongBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::showNewgroundsMessage not implemented")]]
    /**
     */
    TodoReturn showNewgroundsMessage();
public:
    
private:
    [[deprecated("CustomSongLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CustomSongLayer::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("CustomSongLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputShouldOffset not implemented")]]
    /**
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputReturn not implemented")]]
    /**
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::dropDownLayerWillClose not implemented")]]
    /**
     */
    virtual TodoReturn dropDownLayerWillClose(GJDropDownLayer* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::musicBrowserClosed not implemented")]]
    /**
     */
    virtual TodoReturn musicBrowserClosed(MusicBrowser* p0);
public:
};
