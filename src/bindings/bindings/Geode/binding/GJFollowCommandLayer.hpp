#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class GJFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJFollowCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x1ecb80
     */
    static GJFollowCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x1ecc30
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("GJFollowCommandLayer::onUpdateGroupID not implemented")]]
    /**
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::onUpdateGroupID2 not implemented")]]
    /**
     */
    void onUpdateGroupID2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::sliderXModChanged not implemented")]]
    /**
     */
    TodoReturn sliderXModChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::sliderYModChanged not implemented")]]
    /**
     */
    TodoReturn sliderYModChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateDuration not implemented")]]
    /**
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateDurLabel not implemented")]]
    /**
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateTargetGroupID not implemented")]]
    /**
     */
    TodoReturn updateTargetGroupID();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateTargetGroupID2 not implemented")]]
    /**
     */
    TodoReturn updateTargetGroupID2();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateTextInputLabel2 not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel2();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateXMod not implemented")]]
    /**
     */
    TodoReturn updateXMod();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateXModLabel not implemented")]]
    /**
     */
    TodoReturn updateXModLabel();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateYMod not implemented")]]
    /**
     */
    TodoReturn updateYMod();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateYModLabel not implemented")]]
    /**
     */
    TodoReturn updateYModLabel();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
