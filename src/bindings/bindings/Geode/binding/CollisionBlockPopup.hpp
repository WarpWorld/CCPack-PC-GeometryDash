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

class CollisionBlockPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "CollisionBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CollisionBlockPopup, FLAlertLayer)
    
private:
    [[deprecated("CollisionBlockPopup::create not implemented")]]
    /**
     */
    static CollisionBlockPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("CollisionBlockPopup::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("CollisionBlockPopup::determineStartValues not implemented")]]
    /**
     */
    TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("CollisionBlockPopup::init not implemented")]]
    /**
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("CollisionBlockPopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CollisionBlockPopup::onDynamicBlock not implemented")]]
    /**
     */
    void onDynamicBlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CollisionBlockPopup::onItemIDArrow not implemented")]]
    /**
     */
    void onItemIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CollisionBlockPopup::onNextItemID not implemented")]]
    /**
     */
    void onNextItemID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CollisionBlockPopup::updateEditorLabel not implemented")]]
    /**
     */
    TodoReturn updateEditorLabel();
public:
    
private:
    [[deprecated("CollisionBlockPopup::updateItemID not implemented")]]
    /**
     */
    TodoReturn updateItemID();
public:
    
private:
    [[deprecated("CollisionBlockPopup::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("CollisionBlockPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CollisionBlockPopup::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("CollisionBlockPopup::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CollisionBlockPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CollisionBlockPopup::textInputShouldOffset not implemented")]]
    /**
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("CollisionBlockPopup::textInputReturn not implemented")]]
    /**
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
};
