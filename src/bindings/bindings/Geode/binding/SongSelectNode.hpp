#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "CustomSongDelegate.hpp"

class SongSelectNode : public cocos2d::CCNode, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "SongSelectNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongSelectNode, cocos2d::CCNode)
    
private:
    [[deprecated("SongSelectNode::create not implemented")]]
    /**
     */
    static SongSelectNode* create(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);
public:

    /**
     * @note[short] Windows: 0x92270
     */
    void audioNext(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x922b0
     */
    void audioPrevious(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x91a70
     */
    bool init(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);

    /**
     * @note[short] Windows: 0x92500
     */
    void onOpenCustomSong(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x922f0
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x92310
     */
    void onSongMode(int p0);
    
private:
    [[deprecated("SongSelectNode::selectSong not implemented")]]
    /**
     */
    TodoReturn selectSong(int p0);
public:
    
private:
    [[deprecated("SongSelectNode::showCustomSongSelect not implemented")]]
    /**
     */
    TodoReturn showCustomSongSelect();
public:

    /**
     * @note[short] Windows: 0x92160
     */
    void updateAudioLabel();
    
private:
    [[deprecated("SongSelectNode::updateWidgetVisibility not implemented")]]
    /**
     */
    TodoReturn updateWidgetVisibility();
public:
    
private:
    [[deprecated("SongSelectNode::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("SongSelectNode::customSongLayerClosed not implemented")]]
    /**
     */
    virtual TodoReturn customSongLayerClosed();
public:
    
private:
    [[deprecated("SongSelectNode::songIDChanged not implemented")]]
    /**
     */
    virtual TodoReturn songIDChanged(int p0);
public:
    
private:
    [[deprecated("SongSelectNode::getActiveSongID not implemented")]]
    /**
     */
    virtual TodoReturn getActiveSongID();
public:

    /**
     * @note[short] Windows: 0x92660
     */
    virtual TodoReturn getSongFileName();
    
private:
    [[deprecated("SongSelectNode::getLevelSettings not implemented")]]
    /**
     */
    virtual TodoReturn getLevelSettings();
public:
};
