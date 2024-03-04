#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "PlatformDownloadDelegate.hpp"

class MusicDownloadManager : public cocos2d::CCNode, public PlatformDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDownloadManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x2821e0
     */
    static MusicDownloadManager* sharedState();
    
private:
    [[deprecated("MusicDownloadManager::addDLToActive not implemented")]]
    /**
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);
public:
    
private:
    [[deprecated("MusicDownloadManager::addDLToActive not implemented")]]
    /**
     */
    void addDLToActive(char const* tag);
public:

    /**
     * @note[short] Windows: 0x2828d0
     */
    TodoReturn addMusicDownloadDelegate(MusicDownloadDelegate* p0);
    
private:
    [[deprecated("MusicDownloadManager::addSongObjectFromString not implemented")]]
    /**
     */
    TodoReturn addSongObjectFromString(gd::string p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::clearSong not implemented")]]
    /**
     */
    TodoReturn clearSong(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::clearUnusedSongs not implemented")]]
    /**
     */
    TodoReturn clearUnusedSongs();
public:
    
private:
    [[deprecated("MusicDownloadManager::createSongsInfo not implemented")]]
    /**
     */
    TodoReturn createSongsInfo(gd::string p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::dataLoaded not implemented")]]
    /**
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::deleteSFX not implemented")]]
    /**
     */
    TodoReturn deleteSFX(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::deleteSong not implemented")]]
    /**
     */
    TodoReturn deleteSong(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadCustomSong not implemented")]]
    /**
     */
    TodoReturn downloadCustomSong(int p0);
public:

    /**
     * @note[short] Windows: 0x284fd0
     */
    TodoReturn downloadMusicLibrary();
    
private:
    [[deprecated("MusicDownloadManager::downloadSFX not implemented")]]
    /**
     */
    TodoReturn downloadSFX(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSFXFailed not implemented")]]
    /**
     */
    TodoReturn downloadSFXFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSFXFinished not implemented")]]
    /**
     */
    TodoReturn downloadSFXFinished(int p0);
public:

    /**
     * @note[short] Windows: 0x286940
     */
    TodoReturn downloadSFXLibrary();
    
private:
    [[deprecated("MusicDownloadManager::downloadSong not implemented")]]
    /**
     */
    TodoReturn downloadSong(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSongFailed not implemented")]]
    /**
     */
    TodoReturn downloadSongFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSongFinished not implemented")]]
    /**
     */
    TodoReturn downloadSongFinished(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::encodeDataTo not implemented")]]
    /**
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::filterMusicByArtistID not implemented")]]
    /**
     */
    TodoReturn filterMusicByArtistID(int p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::filterMusicByTag not implemented")]]
    /**
     */
    TodoReturn filterMusicByTag(int p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::firstSetup not implemented")]]
    /**
     */
    TodoReturn firstSetup();
public:
    
private:
    [[deprecated("MusicDownloadManager::generateCustomContentURL not implemented")]]
    /**
     */
    TodoReturn generateCustomContentURL(gd::string p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::generateResourceAssetList not implemented")]]
    /**
     */
    TodoReturn generateResourceAssetList();
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicArtists not implemented")]]
    /**
     */
    TodoReturn getAllMusicArtists(OptionsObjectDelegate* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicObjects not implemented")]]
    /**
     */
    TodoReturn getAllMusicObjects();
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicTags not implemented")]]
    /**
     */
    TodoReturn getAllMusicTags(OptionsObjectDelegate* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllSFXObjects not implemented")]]
    /**
     */
    TodoReturn getAllSFXObjects(bool p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllSongs not implemented")]]
    /**
     */
    TodoReturn getAllSongs();
public:

    /**
     * @note[short] Windows: 0x2849c0
     */
    TodoReturn getCustomContentURL();
    
private:
    [[deprecated("MusicDownloadManager::getDLObject not implemented")]]
    /**
     */
    TodoReturn getDLObject(char const* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getDownloadedSongs not implemented")]]
    /**
     */
    TodoReturn getDownloadedSongs();
public:
    
private:
    [[deprecated("MusicDownloadManager::getDownloadProgress not implemented")]]
    /**
     */
    TodoReturn getDownloadProgress(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getMusicArtistForID not implemented")]]
    /**
     */
    TodoReturn getMusicArtistForID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getMusicObject not implemented")]]
    /**
     */
    TodoReturn getMusicObject(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXDownloadKey not implemented")]]
    /**
     */
    TodoReturn getSFXDownloadKey(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXDownloadProgress not implemented")]]
    /**
     */
    TodoReturn getSFXDownloadProgress(int p0);
public:

    /**
     * @note[short] Windows: 0x2872b0
     */
    TodoReturn getSFXFolderObjectForID(int p0);
    
private:
    [[deprecated("MusicDownloadManager::getSFXFolderPathForID not implemented")]]
    /**
     */
    TodoReturn getSFXFolderPathForID(int p0, bool p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXObject not implemented")]]
    /**
     */
    TodoReturn getSFXObject(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSongDownloadKey not implemented")]]
    /**
     */
    TodoReturn getSongDownloadKey(int p0);
public:

    /**
     * @note[short] Windows: 0x282ae0
     */
    TodoReturn getSongInfo(int p0, bool p1);
    
private:
    [[deprecated("MusicDownloadManager::getSongInfoKey not implemented")]]
    /**
     */
    TodoReturn getSongInfoKey(int p0);
public:

    /**
     * @note[short] Windows: 0x283cb0
     */
    SongInfoObject* getSongInfoObject(int p0);
    
private:
    [[deprecated("MusicDownloadManager::getSongPriority not implemented")]]
    /**
     */
    TodoReturn getSongPriority();
public:

    /**
     * @note[short] Windows: 0x282600
     */
    TodoReturn handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("MusicDownloadManager::handleItDelayed not implemented")]]
    /**
     */
    TodoReturn handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("MusicDownloadManager::handleItND not implemented")]]
    /**
     */
    TodoReturn handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::incrementPriorityForSong not implemented")]]
    /**
     */
    TodoReturn incrementPriorityForSong(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::isDLActive not implemented")]]
    /**
     */
    bool isDLActive(char const* tag);
public:
    
private:
    [[deprecated("MusicDownloadManager::isMusicLibraryLoaded not implemented")]]
    /**
     */
    bool isMusicLibraryLoaded();
public:
    
private:
    [[deprecated("MusicDownloadManager::isResourceSFX not implemented")]]
    /**
     */
    bool isResourceSFX(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::isResourceSong not implemented")]]
    /**
     */
    bool isResourceSong(int p0);
public:

    /**
     * @note[short] Windows: 0x282a30
     */
    bool isRunningActionForSongID(int p0);

    /**
     * @note[short] Windows: 0x284140
     */
    bool isSFXDownloaded(int p0);
    
private:
    [[deprecated("MusicDownloadManager::isSFXLibraryLoaded not implemented")]]
    /**
     */
    bool isSFXLibraryLoaded();
public:

    /**
     * @note[short] Windows: 0x283dd0
     */
    bool isSongDownloaded(int p0);
    
private:
    [[deprecated("MusicDownloadManager::limitDownloadedSongs not implemented")]]
    /**
     */
    TodoReturn limitDownloadedSongs();
public:

    /**
     * @note[short] Windows: 0x287b30
     */
    TodoReturn loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] Windows: 0x287ae0
     */
    TodoReturn loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] Windows: 0x287d40
     */
    TodoReturn musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x287cf0
     */
    TodoReturn musicActionFinished(GJMusicAction p0);
    
private:
    [[deprecated("MusicDownloadManager::nameForTagID not implemented")]]
    /**
     */
    TodoReturn nameForTagID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadMusicLibraryCompleted not implemented")]]
    /**
     */
    TodoReturn onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadSFXCompleted not implemented")]]
    /**
     */
    TodoReturn onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadSFXLibraryCompleted not implemented")]]
    /**
     */
    TodoReturn onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadSongCompleted not implemented")]]
    /**
     */
    TodoReturn onDownloadSongCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:

    /**
     * @note[short] Windows: 0x284a70
     */
    TodoReturn onGetCustomContentURLCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x282d00
     */
    void onGetSongInfoCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x2824e0
     */
    TodoReturn onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    
private:
    [[deprecated("MusicDownloadManager::onTryUpdateMusicLibraryCompleted not implemented")]]
    /**
     */
    TodoReturn onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onTryUpdateSFXLibraryCompleted not implemented")]]
    /**
     */
    TodoReturn onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:

    /**
     * @note[short] Windows: 0x285270
     */
    TodoReturn parseMusicLibrary();

    /**
     * @note[short] Windows: 0x286bd0
     */
    TodoReturn parseSFXLibrary();

    /**
     * @note[short] Windows: 0x2843e0
     */
    gd::string pathForSFX(int p0);

    /**
     * @note[short] Windows: 0x284240
     */
    TodoReturn pathForSFXFolder(int p0);

    /**
     * @note[short] Windows: 0x284070
     */
    gd::string pathForSong(int p0);

    /**
     * @note[short] Windows: 0x283ed0
     */
    TodoReturn pathForSongFolder(int p0);
    
private:
    [[deprecated("MusicDownloadManager::ProcessHttpGetRequest not implemented")]]
    /**
     */
    TodoReturn ProcessHttpGetRequest(gd::string p0, gd::string p1, cocos2d::extension::SEL_HttpResponse p2, int p3, int p4);
public:

    /**
     * @note[short] Windows: 0x282260
     */
    TodoReturn ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Windows: 0x283c00
     */
    TodoReturn removeDLFromActive(char const* p0);
    
private:
    [[deprecated("MusicDownloadManager::removeMusicDownloadDelegate not implemented")]]
    /**
     */
    TodoReturn removeMusicDownloadDelegate(MusicDownloadDelegate* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::responseToDict not implemented")]]
    /**
     */
    TodoReturn responseToDict(gd::string p0, char const* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::showTOS not implemented")]]
    /**
     */
    TodoReturn showTOS(FLAlertLayerProtocol* p0);
public:

    /**
     * @note[short] Windows: 0x282a90
     */
    TodoReturn songStateChanged();
    
private:
    [[deprecated("MusicDownloadManager::stopDownload not implemented")]]
    /**
     */
    TodoReturn stopDownload(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::storeMusicObject not implemented")]]
    /**
     */
    TodoReturn storeMusicObject(SongInfoObject* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::storeSFXInfoObject not implemented")]]
    /**
     */
    TodoReturn storeSFXInfoObject(SFXInfoObject* p0);
public:

    /**
     * @note[short] Windows: 0x287210
     */
    TodoReturn tryLoadLibraries();
    
private:
    [[deprecated("MusicDownloadManager::tryUpdateMusicLibrary not implemented")]]
    /**
     */
    TodoReturn tryUpdateMusicLibrary();
public:

    /**
     * @note[short] Windows: 0x2866f0
     */
    TodoReturn tryUpdateSFXLibrary();
    
private:
    [[deprecated("MusicDownloadManager::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
