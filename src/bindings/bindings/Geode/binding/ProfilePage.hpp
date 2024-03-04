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
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "UserInfoDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "LeaderboardManagerDelegate.hpp"

class ProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "ProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x2ecfd0
     */
    static ProfilePage* create(int accountID, bool ownProfile);
    
private:
    [[deprecated("ProfilePage::blockUser not implemented")]]
    /**
     */
    TodoReturn blockUser();
public:

    /**
     * @note[short] Windows: 0x2ed080
     */
    bool init(int accountID, bool ownProfile);

    /**
     * @note[short] Windows: 0x2f1ef0
     */
    bool isCorrect(char const* key);
    
private:
    [[deprecated("ProfilePage::isOnWatchlist not implemented")]]
    /**
     */
    bool isOnWatchlist(int p0);
public:

    /**
     * @note[short] Windows: 0x2f1fc0
     */
    TodoReturn loadPage(int p0);

    /**
     * @note[short] Windows: 0x2edda0
     */
    void loadPageFromUserInfo(GJUserScore* p0);

    /**
     * @note[short] Windows: 0x2f0c90
     */
    void onBlockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f15e0
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f09a0
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0930
     */
    void onCommentHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0e70
     */
    void onFollow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0ab0
     */
    void onFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1d70
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1d50
     */
    void onMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0680
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f07e0
     */
    void onMyLists(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f24c0
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f24d0
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1d90
     */
    void onRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0960
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1d30
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1bd0
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1a70
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2edb10
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1910
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1170
     */
    TodoReturn setupComments();

    /**
     * @note[short] Windows: 0x2f2160
     */
    TodoReturn setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x2f1650
     */
    TodoReturn showNoAccountError();
    
private:
    [[deprecated("ProfilePage::toggleMainPageVisibility not implemented")]]
    /**
     */
    TodoReturn toggleMainPageVisibility(bool p0);
public:
    
private:
    [[deprecated("ProfilePage::updateLevelsLabel not implemented")]]
    /**
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("ProfilePage::updatePageArrows not implemented")]]
    /**
     */
    TodoReturn updatePageArrows();
public:

    /**
     * @note[short] Windows: 0x22fc0
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x2f1640
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x2f17f0
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x2f1340
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x2f1740
     */
    virtual TodoReturn updateUserScoreFinished();

    /**
     * @note[short] Windows: 0x2f17b0
     */
    virtual TodoReturn updateUserScoreFailed();

    /**
     * @note[short] Windows: 0x2f1db0
     */
    virtual TodoReturn getUserInfoFinished(GJUserScore* p0);

    /**
     * @note[short] Windows: 0x2f1e40
     */
    virtual TodoReturn getUserInfoFailed(int p0);

    /**
     * @note[short] Windows: 0x2f1e90
     */
    virtual TodoReturn userInfoChanged(GJUserScore* p0);

    /**
     * @note[short] Windows: 0x2f2290
     */
    virtual TodoReturn loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Windows: 0x2f22f0
     */
    virtual TodoReturn loadCommentsFailed(char const* p0);

    /**
     * @note[short] Windows: 0x2f2350
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);
    
private:
    [[deprecated("ProfilePage::commentUploadFinished not implemented")]]
    /**
     */
    virtual TodoReturn commentUploadFinished(int p0);
public:
    
private:
    [[deprecated("ProfilePage::commentUploadFailed not implemented")]]
    /**
     */
    virtual TodoReturn commentUploadFailed(int p0, CommentError p1);
public:
    
private:
    [[deprecated("ProfilePage::commentDeleteFailed not implemented")]]
    /**
     */
    virtual TodoReturn commentDeleteFailed(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x2f1480
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
    
private:
    [[deprecated("ProfilePage::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("ProfilePage::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    GJUserScore* m_score;
    int m_accountID;
    bool m_ownProfile;
    gd::string m_profileKey;
    cocos2d::CCLabelBMFont* m_somethingWentWrong;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_followBtn;
    void* m_unk;
    cocos2d::CCArray* m_buttons;
    cocos2d::CCArray* m_arrayWithUsernameLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    LoadingCircle* m_circle;
    void* m_popupDelegate;
    CCMenuItemSpriteExtra* m_refreshBtn;
};
