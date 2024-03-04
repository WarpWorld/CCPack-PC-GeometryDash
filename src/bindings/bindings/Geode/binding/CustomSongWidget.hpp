#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJAssetDownloadAction.hpp"
#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSongWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSongWidget, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x92b60
     */
    static CustomSongWidget* create(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary);
    
private:
    [[deprecated("CustomSongWidget::deleteSong not implemented")]]
    /**
     */
    TodoReturn deleteSong();
public:
    
private:
    [[deprecated("CustomSongWidget::downloadAssetFailed not implemented")]]
    /**
     */
    TodoReturn downloadAssetFailed(int p0, GJAssetType p1, GJSongError p2);
public:
    
private:
    [[deprecated("CustomSongWidget::downloadAssetFinished not implemented")]]
    /**
     */
    TodoReturn downloadAssetFinished(int p0, GJAssetType p1);
public:
    
private:
    [[deprecated("CustomSongWidget::downloadFailed not implemented")]]
    /**
     */
    TodoReturn downloadFailed();
public:
    
private:
    [[deprecated("CustomSongWidget::getSongInfoIfUnloaded not implemented")]]
    /**
     */
    TodoReturn getSongInfoIfUnloaded();
public:

    /**
     * @note[short] Windows: 0x92c20
     */
    bool init(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary);
    
private:
    [[deprecated("CustomSongWidget::onCancelDownload not implemented")]]
    /**
     */
    void onCancelDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongWidget::onDelete not implemented")]]
    /**
     */
    void onDelete(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x94510
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x94450
     */
    void onGetSongInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x93e10
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x94790
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x94740
     */
    void onSelect(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomSongWidget::processNextMultiAsset not implemented")]]
    /**
     */
    TodoReturn processNextMultiAsset();
public:

    /**
     * @note[short] Windows: 0x96a70
     */
    TodoReturn showError(bool p0);

    /**
     * @note[short] Windows: 0x94660
     */
    void startDownload();

    /**
     * @note[short] Windows: 0x94690
     */
    TodoReturn startMonitorDownload();
    
private:
    [[deprecated("CustomSongWidget::startMultiAssetDownload not implemented")]]
    /**
     */
    TodoReturn startMultiAssetDownload();
public:

    /**
     * @note[short] Windows: 0x944c0
     */
    TodoReturn toggleUpdateButton(bool p0);
    
private:
    [[deprecated("CustomSongWidget::updateDownloadProgress not implemented")]]
    /**
     */
    TodoReturn updateDownloadProgress(float p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updateError not implemented")]]
    /**
     */
    TodoReturn updateError(GJSongError p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updateLengthMod not implemented")]]
    /**
     */
    TodoReturn updateLengthMod(float p0);
public:

    /**
     * @note[short] Windows: 0x95a60
     */
    void updateMultiAssetInfo(bool p0);

    /**
     * @note[short] Windows: 0x94970
     */
    TodoReturn updatePlaybackBtn();
    
private:
    [[deprecated("CustomSongWidget::updateProgressBar not implemented")]]
    /**
     */
    TodoReturn updateProgressBar(int p0);
public:

    /**
     * @note[short] Windows: 0x94b80
     */
    void updateSongInfo();

    /**
     * @note[short] Windows: 0x94280
     */
    void updateSongObject(SongInfoObject* p0);

    /**
     * @note[short] Windows: 0x956f0
     */
    void updateWithMultiAssets(gd::string p0, gd::string p1, int p2);
    
private:
    [[deprecated("CustomSongWidget::verifySongID not implemented")]]
    /**
     */
    TodoReturn verifySongID(int p0);
public:
    
private:
    [[deprecated("CustomSongWidget::loadSongInfoFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadSongInfoFinished(SongInfoObject* p0);
public:
    
private:
    [[deprecated("CustomSongWidget::loadSongInfoFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadSongInfoFailed(int p0, GJSongError p1);
public:

    /**
     * @note[short] Windows: 0x96340
     */
    virtual TodoReturn downloadSongFinished(int p0);
    
private:
    [[deprecated("CustomSongWidget::downloadSongFailed not implemented")]]
    /**
     */
    virtual TodoReturn downloadSongFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("CustomSongWidget::downloadSFXFinished not implemented")]]
    /**
     */
    virtual TodoReturn downloadSFXFinished(int p0);
public:
    
private:
    [[deprecated("CustomSongWidget::downloadSFXFailed not implemented")]]
    /**
     */
    virtual TodoReturn downloadSFXFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("CustomSongWidget::musicActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn musicActionFinished(GJMusicAction p0);
public:
    
private:
    [[deprecated("CustomSongWidget::musicActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn musicActionFailed(GJMusicAction p0);
public:
    
private:
    [[deprecated("CustomSongWidget::songStateChanged not implemented")]]
    /**
     */
    virtual TodoReturn songStateChanged();
public:
    
private:
    [[deprecated("CustomSongWidget::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    SongInfoObject* m_songInfoObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_songLabel;
    cocos2d::CCLabelBMFont* m_artistLabel;
    cocos2d::CCLabelBMFont* m_songIDLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadBtn;
    CCMenuItemSpriteExtra* m_cancelDownloadBtn;
    CCMenuItemSpriteExtra* m_selectSongBtn;
    CCMenuItemSpriteExtra* m_getSongInfoBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_moreBtn;
    CCMenuItemSpriteExtra* m_deleteBtn;
    cocos2d::CCSprite* m_sliderGroove;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_bgSpr;
    CustomSongDelegate* m_songDelegate;
    bool m_showSelectSongBtn;
    bool m_showPlayMusicBtn;
    bool m_showDownloadBtn;
    bool m_isNotDownloading;
    bool m_isRobtopSong;
    bool m_isMusicLibrary;
    int m_customSongID;
    float m_unkFloat;
    bool m_unkBool1;
    void* m_unkPtr;
    bool m_hasLibrarySongs;
    bool m_hasSFX;
    bool m_unkBool2;
    gd::map<int, bool> m_songs;
    gd::map<int, bool> m_sfx;
    gd::vector<CCObject*> m_undownloadedAssets;
    int m_unkInt;
    InfoAlertButton* m_assetInfoBtn;
};
