#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelDownloadDelegate.hpp"
#include "LevelUpdateDelegate.hpp"
#include "RateLevelDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "LevelDeleteDelegate.hpp"
#include "NumberInputDelegate.hpp"
#include "SetIDPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"

class LevelInfoLayer : public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelInfoLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x2515f0
     */
    static LevelInfoLayer* create(GJGameLevel* p0, bool p1);

    /**
     * @note[short] Windows: 0x2560f0
     */
    TodoReturn confirmClone(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelInfoLayer::confirmDelete not implemented")]]
    /**
     */
    TodoReturn confirmDelete(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x256cb0
     */
    TodoReturn confirmMoveToBottom(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x256c40
     */
    TodoReturn confirmMoveToTop(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelInfoLayer::confirmOwnerDelete not implemented")]]
    /**
     */
    TodoReturn confirmOwnerDelete(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x2539a0
     */
    void downloadLevel();
    
private:
    [[deprecated("LevelInfoLayer::incrementDislikes not implemented")]]
    /**
     */
    TodoReturn incrementDislikes();
public:
    
private:
    [[deprecated("LevelInfoLayer::incrementLikes not implemented")]]
    /**
     */
    TodoReturn incrementLikes();
public:

    /**
     * @note[short] Windows: 0x2516a0
     */
    bool init(GJGameLevel* p0, bool p1);
    
private:
    [[deprecated("LevelInfoLayer::loadLevelStep not implemented")]]
    /**
     */
    TodoReturn loadLevelStep();
public:

    /**
     * @note[short] Windows: 0x253540
     */
    void onAddToList(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x257c80
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onClone not implemented")]]
    /**
     */
    void onClone(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2562c0
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x253760
     */
    void onFavorite(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onFeatured not implemented")]]
    /**
     */
    void onFeatured(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x253830
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x255ee0
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x256a70
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2537d0
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x256660
     */
    void onLike(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onLowDetailMode not implemented")]]
    /**
     */
    void onLowDetailMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x256370
     */
    void onOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2555b0
     */
    void onPlay(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onPlayReplay not implemented")]]
    /**
     */
    void onPlayReplay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelInfoLayer::onRate not implemented")]]
    /**
     */
    void onRate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x256620
     */
    void onRateDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2564f0
     */
    void onRateStars(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2565d0
     */
    void onRateStarsMod(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x253680
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2568b0
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x256a10
     */
    void onViewProfile(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::playStep2 not implemented")]]
    /**
     */
    TodoReturn playStep2();
public:
    
private:
    [[deprecated("LevelInfoLayer::playStep3 not implemented")]]
    /**
     */
    TodoReturn playStep3();
public:
    
private:
    [[deprecated("LevelInfoLayer::playStep4 not implemented")]]
    /**
     */
    TodoReturn playStep4();
public:
    
private:
    [[deprecated("LevelInfoLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(GJGameLevel* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x2544a0
     */
    TodoReturn setupLevelInfo();

    /**
     * @note[short] Windows: 0x253a90
     */
    TodoReturn setupPlatformerStats();

    /**
     * @note[short] Windows: 0x253e20
     */
    TodoReturn setupProgressBars();

    /**
     * @note[short] Windows: 0x253890
     */
    bool shouldDownloadLevel();

    /**
     * @note[short] Windows: 0x255510
     */
    TodoReturn showSongWarning();

    /**
     * @note[short] Windows: 0x255280
     */
    TodoReturn showUpdateAlert(UpdateResponse p0);

    /**
     * @note[short] Windows: 0x255f10
     */
    TodoReturn tryCloneLevel(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelInfoLayer::tryShowAd not implemented")]]
    /**
     */
    TodoReturn tryShowAd();
public:

    /**
     * @note[short] Windows: 0x256d20
     */
    TodoReturn updateLabelValues();
    
private:
    [[deprecated("LevelInfoLayer::updateSideButtons not implemented")]]
    /**
     */
    TodoReturn updateSideButtons();
public:

    /**
     * @note[short] Windows: 0x257d50
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("LevelInfoLayer::keyDown not implemented")]]
    /**
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("LevelInfoLayer::numberInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn numberInputClosed(NumberInputLayer* p0);
public:
    
private:
    [[deprecated("LevelInfoLayer::cellPerformedAction not implemented")]]
    /**
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:

    /**
     * @note[short] Windows: 0x254f00
     */
    virtual TodoReturn levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x255120
     */
    virtual TodoReturn levelDownloadFailed(int p0);

    /**
     * @note[short] Windows: 0x255230
     */
    virtual TodoReturn levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);

    /**
     * @note[short] Windows: 0x255320
     */
    virtual TodoReturn levelUpdateFailed(int p0);

    /**
     * @note[short] Windows: 0x255430
     */
    virtual TodoReturn levelDeleteFinished(int p0);

    /**
     * @note[short] Windows: 0x2554a0
     */
    virtual TodoReturn levelDeleteFailed(int p0);
    
private:
    [[deprecated("LevelInfoLayer::rateLevelClosed not implemented")]]
    /**
     */
    virtual TodoReturn rateLevelClosed();
public:
    
private:
    [[deprecated("LevelInfoLayer::likedItem not implemented")]]
    /**
     */
    virtual TodoReturn likedItem(LikeItemType p0, int p1, bool p2);
public:
    
private:
    [[deprecated("LevelInfoLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("LevelInfoLayer::setIDPopupClosed not implemented")]]
    /**
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
public:
    void* m_unk0;
    cocos2d::CCMenu* m_playBtnMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_coins;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_starRateBtn;
    CCMenuItemSpriteExtra* m_demonRateBtn;
    void* m_unk2;
    cocos2d::CCLabelBMFont* m_lengthLabel;
    cocos2d::CCLabelBMFont* m_downloadsLabel;
    cocos2d::CCLabelBMFont* m_likesLabel;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_folderLabel;
    CCMenuItemSpriteExtra* m_cloneBtn;
    void* m_unk3;
    cocos2d::CCSprite* m_likesIcon;
    cocos2d::CCSprite* m_orbsIcon;
    int m_unk6;
    int m_unk7;
    LoadingCircle* m_circle;
    GJDifficultySprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsIcon;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCArray* m_icons;
    GEODE_PAD(16);
    bool m_challenge;
    GEODE_PAD(4);
    cocos2d::CCSprite* m_playSprite;
    void* m_unk11;
    CustomSongWidget* m_songWidget;
};
