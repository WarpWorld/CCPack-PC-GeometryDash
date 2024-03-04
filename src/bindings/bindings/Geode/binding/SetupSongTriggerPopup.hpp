#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAudioTriggerPopup.hpp"
#include "MusicDownloadDelegate.hpp"
#include "SongPlaybackDelegate.hpp"

class SetupSongTriggerPopup : public SetupAudioTriggerPopup, public MusicDownloadDelegate, public SongPlaybackDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSongTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSongTriggerPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] Windows: 0x35d280
     */
    static SetupSongTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x35d330
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupSongTriggerPopup::onResetSongTime not implemented")]]
    /**
     */
    void onResetSongTime(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::onSavePlaybackPos not implemented")]]
    /**
     */
    void onSavePlaybackPos(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::updateApplyPrepare not implemented")]]
    /**
     */
    TodoReturn updateApplyPrepare(bool p0);
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::updateLength not implemented")]]
    /**
     */
    TodoReturn updateLength();
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::updateSongTimeSlider not implemented")]]
    /**
     */
    TodoReturn updateSongTimeSlider();
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::pageChanged not implemented")]]
    /**
     */
    virtual TodoReturn pageChanged();
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::onPlayback not implemented")]]
    /**
     */
    virtual TodoReturn onPlayback(SongInfoObject* p0);
public:
};
