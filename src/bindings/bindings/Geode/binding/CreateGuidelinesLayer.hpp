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
#include "FLAlertLayerProtocol.hpp"

class CreateGuidelinesLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CreateGuidelinesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateGuidelinesLayer, FLAlertLayer)
    
private:
    [[deprecated("CreateGuidelinesLayer::create not implemented")]]
    /**
     */
    static CreateGuidelinesLayer* create(CustomSongDelegate* p0, AudioGuidelinesType p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::doClearGuidelines not implemented")]]
    /**
     */
    TodoReturn doClearGuidelines();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::getMergedRecordString not implemented")]]
    /**
     */
    TodoReturn getMergedRecordString(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::init not implemented")]]
    /**
     */
    bool init(CustomSongDelegate* p0, AudioGuidelinesType p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onClearGuidelines not implemented")]]
    /**
     */
    void onClearGuidelines(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onStop not implemented")]]
    /**
     */
    void onStop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::toggleItems not implemented")]]
    /**
     */
    TodoReturn toggleItems(bool p0);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::update not implemented")]]
    /**
     */
    virtual void update(float p0);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::keyDown not implemented")]]
    /**
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::keyUp not implemented")]]
    /**
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::playMusic not implemented")]]
    /**
     */
    virtual TodoReturn playMusic();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::registerTouch not implemented")]]
    /**
     */
    virtual TodoReturn registerTouch();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onInfo not implemented")]]
    /**
     */
    virtual void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onRecord not implemented")]]
    /**
     */
    virtual void onRecord(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::recordingDidStop not implemented")]]
    /**
     */
    virtual TodoReturn recordingDidStop();
public:
};
