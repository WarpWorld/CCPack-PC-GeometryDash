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

class GJPFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJPFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPFollowCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x2010e0
     */
    static GJPFollowCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x201190
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("GJPFollowCommandLayer::onUpdateGroupID not implemented")]]
    /**
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::sliderXModChanged not implemented")]]
    /**
     */
    TodoReturn sliderXModChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::sliderYModChanged not implemented")]]
    /**
     */
    TodoReturn sliderYModChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateDuration not implemented")]]
    /**
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateDurLabel not implemented")]]
    /**
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateMaxSpeed not implemented")]]
    /**
     */
    TodoReturn updateMaxSpeed();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateMaxSpeedLabel not implemented")]]
    /**
     */
    TodoReturn updateMaxSpeedLabel();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateOffsetLabel not implemented")]]
    /**
     */
    TodoReturn updateOffsetLabel();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updatePlayerOffset not implemented")]]
    /**
     */
    TodoReturn updatePlayerOffset();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateTargetGroupID not implemented")]]
    /**
     */
    TodoReturn updateTargetGroupID();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateTextInputLabel not implemented")]]
    /**
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateXMod not implemented")]]
    /**
     */
    TodoReturn updateXMod();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateXModLabel not implemented")]]
    /**
     */
    TodoReturn updateXModLabel();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateYMod not implemented")]]
    /**
     */
    TodoReturn updateYMod();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateYModLabel not implemented")]]
    /**
     */
    TodoReturn updateYModLabel();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
