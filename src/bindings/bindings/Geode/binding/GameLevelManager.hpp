#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameLevelManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameLevelManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0xf3a00
     */
    static GameLevelManager* sharedState();

    /**
     * @note[short] Out of line
     */
    static GameLevelManager* get();

    /**
     * @note[short] Windows: 0x10be70
     */
    TodoReturn acceptFriendRequest(int p0, int p1);
    
private:
    [[deprecated("GameLevelManager::accountIDForUserID not implemented")]]
    /**
     */
    int accountIDForUserID(int userID);
public:

    /**
     * @note[short] Windows: 0xf8c10
     */
    void addDLToActive(char const* p0);
    
private:
    [[deprecated("GameLevelManager::areGauntletsLoaded not implemented")]]
    /**
     */
    TodoReturn areGauntletsLoaded();
public:
    
private:
    [[deprecated("GameLevelManager::banUser not implemented")]]
    /**
     */
    void banUser(int p0);
public:

    /**
     * @note[short] Windows: 0x10ca10
     */
    TodoReturn blockUser(int p0);

    /**
     * @note[short] Windows: 0xf96a0
     */
    TodoReturn cleanupDailyLevels();
    
private:
    [[deprecated("GameLevelManager::createAndGetAccountComments not implemented")]]
    /**
     */
    TodoReturn createAndGetAccountComments(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetCommentsFull not implemented")]]
    /**
     */
    TodoReturn createAndGetCommentsFull(gd::string p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevelComments not implemented")]]
    /**
     */
    TodoReturn createAndGetLevelComments(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevelLists not implemented")]]
    /**
     */
    TodoReturn createAndGetLevelLists(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevels not implemented")]]
    /**
     */
    TodoReturn createAndGetLevels(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetMapPacks not implemented")]]
    /**
     */
    TodoReturn createAndGetMapPacks(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetScores not implemented")]]
    /**
     */
    TodoReturn createAndGetScores(gd::string p0, GJScoreType p1);
public:

    /**
     * @note[short] Windows: 0xf5130
     */
    GJGameLevel* createNewLevel();

    /**
     * @note[short] Windows: 0xf5ac0
     */
    TodoReturn createNewLevelList();

    /**
     * @note[short] Windows: 0xf8ac0
     */
    TodoReturn createPageInfo(int p0, int p1, int p2);
    
private:
    [[deprecated("GameLevelManager::createSmartTemplate not implemented")]]
    /**
     */
    TodoReturn createSmartTemplate();
public:
    
private:
    [[deprecated("GameLevelManager::dataLoaded not implemented")]]
    /**
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GameLevelManager::deleteAccountComment not implemented")]]
    /**
     */
    TodoReturn deleteAccountComment(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x10a920
     */
    TodoReturn deleteComment(int p0, CommentType p1, int p2);

    /**
     * @note[short] Windows: 0x10b8c0
     */
    TodoReturn deleteFriendRequests(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xf58b0
     */
    TodoReturn deleteLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameLevelManager::deleteLevelComment not implemented")]]
    /**
     */
    TodoReturn deleteLevelComment(int p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::deleteLevelList not implemented")]]
    /**
     */
    TodoReturn deleteLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::deleteSentFriendRequest not implemented")]]
    /**
     */
    TodoReturn deleteSentFriendRequest(int p0);
public:

    /**
     * @note[short] Windows: 0x102990
     */
    TodoReturn deleteServerLevel(int p0);

    /**
     * @note[short] Windows: 0xff440
     */
    TodoReturn deleteServerLevelList(int p0);
    
private:
    [[deprecated("GameLevelManager::deleteSmartTemplate not implemented")]]
    /**
     */
    TodoReturn deleteSmartTemplate(GJSmartTemplate* p0);
public:

    /**
     * @note[short] Windows: 0x107880
     */
    TodoReturn deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender);

    /**
     * @note[short] Windows: 0x100c20
     */
    TodoReturn downloadLevel(int p0, bool p1);

    /**
     * @note[short] Windows: 0x107070
     */
    TodoReturn downloadUserMessage(int p0, bool p1);

    /**
     * @note[short] Windows: 0xfa200
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x39e930
     */
    TodoReturn firstSetup();

    /**
     * @note[short] Windows: 0xf99f0
     */
    TodoReturn followUser(int p0);
    
private:
    [[deprecated("GameLevelManager::friendRequestFromAccountID not implemented")]]
    /**
     */
    TodoReturn friendRequestFromAccountID(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::friendRequestWasRemoved not implemented")]]
    /**
     */
    TodoReturn friendRequestWasRemoved(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getAccountCommentKey not implemented")]]
    /**
     */
    TodoReturn getAccountCommentKey(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x108720
     */
    void getAccountComments(int accountID, int page, int total);
    
private:
    [[deprecated("GameLevelManager::getActiveDailyID not implemented")]]
    /**
     */
    TodoReturn getActiveDailyID(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getActiveSmartTemplate not implemented")]]
    /**
     */
    TodoReturn getActiveSmartTemplate();
public:
    
private:
    [[deprecated("GameLevelManager::getAllSmartTemplates not implemented")]]
    /**
     */
    TodoReturn getAllSmartTemplates();
public:
    
private:
    [[deprecated("GameLevelManager::getAllUsedSongIDs not implemented")]]
    /**
     */
    TodoReturn getAllUsedSongIDs();
public:

    /**
     * @note[short] Windows: 0xfb5b0
     */
    static gd::string getBasePostString();

    /**
     * @note[short] Windows: 0x111d40
     */
    bool getBoolForKey(char const* p0);

    /**
     * @note[short] Windows: 0x1091d0
     */
    gd::string getCommentKey(int ID, int page, int mode, CommentKeyType keytype);

    /**
     * @note[short] Windows: 0xf7790
     */
    cocos2d::CCArray* getCompletedLevels(bool p0);
    
private:
    [[deprecated("GameLevelManager::getDailyID not implemented")]]
    /**
     */
    TodoReturn getDailyID(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDailyTimer not implemented")]]
    /**
     */
    TodoReturn getDailyTimer(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDeleteCommentKey not implemented")]]
    /**
     */
    TodoReturn getDeleteCommentKey(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::getDeleteMessageKey not implemented")]]
    /**
     */
    TodoReturn getDeleteMessageKey(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getDescKey not implemented")]]
    /**
     */
    TodoReturn getDescKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDifficultyStr not implemented")]]
    /**
     */
    TodoReturn getDifficultyStr(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);
public:
    
private:
    [[deprecated("GameLevelManager::getDiffKey not implemented")]]
    /**
     */
    TodoReturn getDiffKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDiffVal not implemented")]]
    /**
     */
    TodoReturn getDiffVal(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getFolderName not implemented")]]
    /**
     */
    TodoReturn getFolderName(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getFriendRequestKey not implemented")]]
    /**
     */
    TodoReturn getFriendRequestKey(bool p0, int p1);
public:

    /**
     * @note[short] Windows: 0x10ae30
     */
    TodoReturn getFriendRequests(bool p0, int p1, int p2);
    
private:
    [[deprecated("GameLevelManager::getGauntletKey not implemented")]]
    /**
     */
    TodoReturn getGauntletKey(int p0);
public:

    /**
     * @note[short] Windows: 0x100860
     */
    TodoReturn getGauntletLevels(int p0);

    /**
     * @note[short] Windows: 0x100100
     */
    TodoReturn getGauntlets();

    /**
     * @note[short] Windows: 0x100080
     */
    TodoReturn getGauntletSearchKey(int p0);

    /**
     * @note[short] Windows: 0x10fd60
     */
    TodoReturn getGJChallenges();

    /**
     * @note[short] Windows: 0x110670
     */
    TodoReturn getGJDailyLevelState(GJTimedLevelType p0);

    /**
     * @note[short] Windows: 0x10f140
     */
    void getGJRewards(int p0);

    /**
     * @note[short] Windows: 0x106790
     */
    TodoReturn getGJUserInfo(int p0);

    /**
     * @note[short] Windows: 0xf7550
     */
    TodoReturn getHighestLevelOrder();
    
private:
    [[deprecated("GameLevelManager::getIntForKey not implemented")]]
    /**
     */
    TodoReturn getIntForKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x104c40
     */
    TodoReturn getLeaderboardScores(char const* p0);
    
private:
    [[deprecated("GameLevelManager::getLengthStr not implemented")]]
    /**
     */
    TodoReturn getLengthStr(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("GameLevelManager::getLenKey not implemented")]]
    /**
     */
    const char * getLenKey(int len);
public:
    
private:
    [[deprecated("GameLevelManager::getLenVal not implemented")]]
    /**
     */
    TodoReturn getLenVal(int p0);
public:

    /**
     * @note[short] Windows: 0x108160
     */
    void getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype);

    /**
     * @note[short] Out of line
     */
    const char* getLevelDownloadKey(int levelID, bool isGauntlet);
    
private:
    [[deprecated("GameLevelManager::getLevelKey not implemented")]]
    /**
     */
    const char* getLevelKey(int levelID);
public:

    /**
     * @note[short] Windows: 0x1053a0
     */
    void getLevelLeaderboard(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    
private:
    [[deprecated("GameLevelManager::getLevelLeaderboardKey not implemented")]]
    /**
     */
    TodoReturn getLevelLeaderboardKey(int p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
public:
    
private:
    [[deprecated("GameLevelManager::getLevelListKey not implemented")]]
    /**
     */
    TodoReturn getLevelListKey(int p0);
public:

    /**
     * @note[short] Windows: 0xff800
     */
    void getLevelLists(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0xfdd10
     */
    TodoReturn getLevelSaveData();
    
private:
    [[deprecated("GameLevelManager::getLikeAccountItemKey not implemented")]]
    /**
     */
    TodoReturn getLikeAccountItemKey(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::getLikeItemKey not implemented")]]
    /**
     */
    TodoReturn getLikeItemKey(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::getLocalLevel not implemented")]]
    /**
     */
    TodoReturn getLocalLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLocalLevelByName not implemented")]]
    /**
     */
    TodoReturn getLocalLevelByName(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLocalLevelList not implemented")]]
    /**
     */
    TodoReturn getLocalLevelList(int p0);
public:

    /**
     * @note[short] Windows: 0xf75a0
     */
    TodoReturn getLowestLevelOrder();

    /**
     * @note[short] Windows: 0xf4d50
     */
    GJGameLevel* getMainLevel(int p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::getMapPackKey not implemented")]]
    /**
     */
    const char* getMapPackKey(int pack);
public:

    /**
     * @note[short] Windows: 0xfe120
     */
    TodoReturn getMapPacks(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::getMessageKey not implemented")]]
    /**
     */
    TodoReturn getMessageKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getMessagesKey not implemented")]]
    /**
     */
    TodoReturn getMessagesKey(bool p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::getNews not implemented")]]
    /**
     */
    TodoReturn getNews();
public:

    /**
     * @note[short] Windows: 0xf9e00
     */
    TodoReturn getNextFreeTemplateID();
    
private:
    [[deprecated("GameLevelManager::getNextLevelName not implemented")]]
    /**
     */
    TodoReturn getNextLevelName(gd::string p0);
public:

    /**
     * @note[short] Windows: 0xfccb0
     */
    TodoReturn getOnlineLevels(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0xf89e0
     */
    TodoReturn getPageInfo(char const* p0);
    
private:
    [[deprecated("GameLevelManager::getPostCommentKey not implemented")]]
    /**
     */
    TodoReturn getPostCommentKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getRateStarsKey not implemented")]]
    /**
     */
    const char * getRateStarsKey(int key);
public:
    
private:
    [[deprecated("GameLevelManager::getReportKey not implemented")]]
    /**
     */
    TodoReturn getReportKey(int p0);
public:

    /**
     * @note[short] Windows: 0xf7f20
     */
    GJGameLevel* getSavedDailyLevel(int p0);
    
private:
    [[deprecated("GameLevelManager::getSavedDailyLevelFromLevelID not implemented")]]
    /**
     */
    GJGameLevel* getSavedDailyLevelFromLevelID(int p0);
public:

    /**
     * @note[short] Windows: 0x100a40
     */
    GJGameLevel* getSavedGauntlet(int p0);

    /**
     * @note[short] Windows: 0xf8060
     */
    GJGameLevel* getSavedGauntletLevel(int p0);

    /**
     * @note[short] Windows: 0xf7df0
     */
    GJGameLevel* getSavedLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0xf7e50
     */
    GJGameLevel* getSavedLevel(int p0);
    
private:
    [[deprecated("GameLevelManager::getSavedLevelList not implemented")]]
    /**
     */
    TodoReturn getSavedLevelList(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSavedLevelLists not implemented")]]
    /**
     */
    TodoReturn getSavedLevelLists(int p0);
public:

    /**
     * @note[short] Windows: 0xf7340
     */
    cocos2d::CCArray* getSavedLevels(bool p0, int p1);
    
private:
    [[deprecated("GameLevelManager::getSavedMapPack not implemented")]]
    /**
     */
    TodoReturn getSavedMapPack(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSearchScene not implemented")]]
    /**
     */
    TodoReturn getSearchScene(char const* p0);
public:

    /**
     * @note[short] Windows: 0x109250
     */
    TodoReturn getSplitIntFromKey(char const* p0, int p1);

    /**
     * @note[short] Windows: 0x1098a0
     */
    TodoReturn getStoredLevelComments(char const* p0);

    /**
     * @note[short] Windows: 0xf8930
     */
    cocos2d::CCArray* getStoredOnlineLevels(char const* p0);

    /**
     * @note[short] Windows: 0x10d820
     */
    TodoReturn getStoredUserList(UserListType p0);
    
private:
    [[deprecated("GameLevelManager::getStoredUserMessage not implemented")]]
    /**
     */
    TodoReturn getStoredUserMessage(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getStoredUserMessageReply not implemented")]]
    /**
     */
    TodoReturn getStoredUserMessageReply(int p0);
public:

    /**
     * @note[short] Windows: 0xf8fc0
     */
    TodoReturn getTimeLeft(char const* p0, float p1);

    /**
     * @note[short] Windows: 0x105d80
     */
    void getTopArtists(int page, int total);

    /**
     * @note[short] Out of line
     */
    const char* getTopArtistsKey(int page);
    
private:
    [[deprecated("GameLevelManager::getUploadMessageKey not implemented")]]
    /**
     */
    TodoReturn getUploadMessageKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getUserInfoKey not implemented")]]
    /**
     */
    TodoReturn getUserInfoKey(int p0);
public:

    /**
     * @note[short] Windows: 0x10d2a0
     */
    TodoReturn getUserList(UserListType p0);

    /**
     * @note[short] Windows: 0x106ad0
     */
    TodoReturn getUserMessages(bool p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x106320
     */
    TodoReturn getUsers(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::gotoLevelPage not implemented")]]
    /**
     */
    TodoReturn gotoLevelPage(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0xf3e90
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("GameLevelManager::handleItDelayed not implemented")]]
    /**
     */
    TodoReturn handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GameLevelManager::handleItND not implemented")]]
    /**
     */
    TodoReturn handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("GameLevelManager::hasDailyStateBeenLoaded not implemented")]]
    /**
     */
    TodoReturn hasDailyStateBeenLoaded(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasDownloadedLevel not implemented")]]
    /**
     */
    TodoReturn hasDownloadedLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasDownloadedList not implemented")]]
    /**
     */
    TodoReturn hasDownloadedList(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasLikedAccountItem not implemented")]]
    /**
     */
    TodoReturn hasLikedAccountItem(LikeItemType p0, int p1, bool p2, int p3);
public:

    /**
     * @note[short] Windows: 0x10ed90
     */
    TodoReturn hasLikedItem(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] Windows: 0x10ed10
     */
    bool hasLikedItemFullCheck(LikeItemType p0, int p1, int p2);
    
private:
    [[deprecated("GameLevelManager::hasRatedDemon not implemented")]]
    /**
     */
    TodoReturn hasRatedDemon(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasRatedLevelStars not implemented")]]
    /**
     */
    TodoReturn hasRatedLevelStars(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasReportedLevel not implemented")]]
    /**
     */
    TodoReturn hasReportedLevel(int p0);
public:

    /**
     * @note[short] Windows: 0x107ff0
     */
    TodoReturn invalidateMessages(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x10db50
     */
    TodoReturn invalidateRequests(bool p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::invalidateUserList not implemented")]]
    /**
     */
    TodoReturn invalidateUserList(UserListType p0, bool p1);
public:

    /**
     * @note[short] Windows: 0xf8b50
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] Windows: 0xf9910
     */
    bool isFollowingUser(int p0);

    /**
     * @note[short] Windows: 0xf8e90
     */
    bool isTimeValid(char const* p0, float p1);
    
private:
    [[deprecated("GameLevelManager::isUpdateValid not implemented")]]
    /**
     */
    bool isUpdateValid(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::itemIDFromLikeKey not implemented")]]
    /**
     */
    TodoReturn itemIDFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::keyHasTimer not implemented")]]
    /**
     */
    TodoReturn keyHasTimer(char const* p0);
public:

    /**
     * @note[short] Windows: 0x109430
     */
    TodoReturn levelIDFromCommentKey(char const* p0);
    
private:
    [[deprecated("GameLevelManager::levelIDFromPostCommentKey not implemented")]]
    /**
     */
    TodoReturn levelIDFromPostCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::likeFromLikeKey not implemented")]]
    /**
     */
    TodoReturn likeFromLikeKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x10e100
     */
    TodoReturn likeItem(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] Windows: 0xf9210
     */
    TodoReturn limitSavedLevels();

    /**
     * @note[short] Windows: 0xf8d70
     */
    TodoReturn makeTimeStamp(char const* p0);

    /**
     * @note[short] Windows: 0x10eba0
     */
    TodoReturn markItemAsLiked(LikeItemType p0, int p1, bool p2, int p3);
    
private:
    [[deprecated("GameLevelManager::markLevelAsDownloaded not implemented")]]
    /**
     */
    TodoReturn markLevelAsDownloaded(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::markLevelAsRatedDemon not implemented")]]
    /**
     */
    TodoReturn markLevelAsRatedDemon(int p0);
public:

    /**
     * @note[short] Windows: 0x102590
     */
    TodoReturn markLevelAsRatedStars(int p0);
    
private:
    [[deprecated("GameLevelManager::markLevelAsReported not implemented")]]
    /**
     */
    TodoReturn markLevelAsReported(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::markListAsDownloaded not implemented")]]
    /**
     */
    TodoReturn markListAsDownloaded(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::messageWasRemoved not implemented")]]
    /**
     */
    TodoReturn messageWasRemoved(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x10c080
     */
    void onAcceptFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x102db0
     */
    void onBanUserCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10cc20
     */
    void onBlockUserCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10ac70
     */
    void onDeleteCommentCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10bc60
     */
    void onDeleteFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x102c10
     */
    void onDeleteServerLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xff690
     */
    void onDeleteServerLevelListCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x107c80
     */
    void onDeleteUserMessagesCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x101090
     */
    void onDownloadLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x1071e0
     */
    void onDownloadUserMessageCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x108890
     */
    void onGetAccountCommentsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10afb0
     */
    void onGetFriendRequestsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x100260
     */
    void onGetGauntletsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10ffc0
     */
    void onGetGJChallengesCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x110870
     */
    void onGetGJDailyLevelStateCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10f6d0
     */
    void onGetGJRewardsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x1068f0
     */
    void onGetGJUserInfoCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x105050
     */
    void onGetLeaderboardScoresCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x108440
     */
    void onGetLevelCommentsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x105bf0
     */
    void onGetLevelLeaderboardCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xff9f0
     */
    void onGetLevelListsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xfde50
     */
    void onGetLevelSaveDataCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xfe280
     */
    void onGetMapPacksCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x108120
     */
    void onGetNewsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xfd470
     */
    void onGetOnlineLevelsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x105f70
     */
    void onGetTopArtistsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10d3f0
     */
    void onGetUserListCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x106c50
     */
    void onGetUserMessagesCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x1064b0
     */
    void onGetUsersCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10e610
     */
    void onLikeItemCompleted(gd::string response, gd::string tag);
    
private:
    [[deprecated("GameLevelManager::onProcessHttpRequestCompleted not implemented")]]
    /**
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:

    /**
     * @note[short] Windows: 0x1035a0
     */
    void onRateDemonCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x102410
     */
    void onRateStarsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10c4a0
     */
    void onReadFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10c7a0
     */
    void onRemoveFriendCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x111410
     */
    void onReportLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10e9c0
     */
    void onRequestUserAccessCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x110d90
     */
    void onRestoreItemsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x103a00
     */
    void onSetLevelFeaturedCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x103860
     */
    void onSetLevelStarsCompleted(gd::string response, gd::string tag);
    
private:
    [[deprecated("GameLevelManager::onSubmitUserInfoCompleted not implemented")]]
    /**
     */
    void onSubmitUserInfoCompleted(gd::string response, gd::string tag);
public:

    /**
     * @note[short] Windows: 0x1030d0
     */
    void onSuggestLevelStarsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10d060
     */
    void onUnblockUserCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10ded0
     */
    void onUpdateDescriptionCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x101eb0
     */
    void onUpdateLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x104a00
     */
    void onUpdateUserScoreCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10a160
     */
    void onUploadCommentCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10b6e0
     */
    void onUploadFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xfc3b0
     */
    void onUploadLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xff320
     */
    void onUploadLevelListCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x1076a0
     */
    void onUploadUserMessageCompleted(gd::string response, gd::string tag);
    
private:
    [[deprecated("GameLevelManager::pageFromCommentKey not implemented")]]
    /**
     */
    TodoReturn pageFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::parseRestoreData not implemented")]]
    /**
     */
    TodoReturn parseRestoreData(gd::string p0);
public:

    /**
     * @note[short] Windows: 0xf3a80
     */
    void performNetworkTest();

    /**
     * @note[short] Windows: 0xf3bf0
     */
    void ProcessHttpRequest(gd::string endpoint, gd::string params, gd::string tag, GJHttpType httpType);

    /**
     * @note[short] Windows: 0x101160
     */
    void processOnDownloadLevelCompleted(gd::string p0, gd::string p1, bool p2);
    
private:
    [[deprecated("GameLevelManager::purgeUnusedLevels not implemented")]]
    /**
     */
    TodoReturn purgeUnusedLevels();
public:

    /**
     * @note[short] Windows: 0x103330
     */
    TodoReturn rateDemon(int p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x101f90
     */
    TodoReturn rateStars(int p0, int p1);

    /**
     * @note[short] Windows: 0x10c2a0
     */
    TodoReturn readFriendRequest(int p0);
    
private:
    [[deprecated("GameLevelManager::removeDelimiterChars not implemented")]]
    /**
     */
    TodoReturn removeDelimiterChars(gd::string p0, bool p1);
public:

    /**
     * @note[short] Windows: 0xf8cc0
     */
    TodoReturn removeDLFromActive(char const* p0);

    /**
     * @note[short] Windows: 0x10c590
     */
    TodoReturn removeFriend(int p0);
    
private:
    [[deprecated("GameLevelManager::removeLevelDownloadedKeysFromDict not implemented")]]
    /**
     */
    TodoReturn removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GameLevelManager::removeUserFromList not implemented")]]
    /**
     */
    TodoReturn removeUserFromList(int p0, UserListType p1);
public:

    /**
     * @note[short] Windows: 0x111310
     */
    TodoReturn reportLevel(int p0);

    /**
     * @note[short] Windows: 0x10e7c0
     */
    TodoReturn requestUserAccess();

    /**
     * @note[short] Windows: 0x109030
     */
    TodoReturn resetAccountComments(int p0);
    
private:
    [[deprecated("GameLevelManager::resetAllTimers not implemented")]]
    /**
     */
    TodoReturn resetAllTimers();
public:

    /**
     * @note[short] Windows: 0x10a6e0
     */
    void resetCommentTimersForLevelID(int p0, CommentKeyType p1);

    /**
     * @note[short] Windows: 0x110d30
     */
    void resetDailyLevelState(GJTimedLevelType p0);
    
private:
    [[deprecated("GameLevelManager::resetGauntlets not implemented")]]
    /**
     */
    void resetGauntlets();
public:
	inline void resetStoredUserInfo(int id) {
        m_storedUserInfo->removeObjectForKey(id);
    }
    
private:
    [[deprecated("GameLevelManager::resetStoredUserList not implemented")]]
    /**
     */
    void resetStoredUserList(UserListType p0);
public:

    /**
     * @note[short] Windows: 0xf9130
     */
    void resetTimerForKey(char const* p0);

    /**
     * @note[short] Windows: 0x111fa0
     */
    cocos2d::CCDictionary* responseToDict(gd::string p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::restoreItems not implemented")]]
    /**
     */
    TodoReturn restoreItems();
public:
    
private:
    [[deprecated("GameLevelManager::saveFetchedLevelLists not implemented")]]
    /**
     */
    TodoReturn saveFetchedLevelLists(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveFetchedLevels not implemented")]]
    /**
     */
    TodoReturn saveFetchedLevels(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveFetchedMapPacks not implemented")]]
    /**
     */
    TodoReturn saveFetchedMapPacks(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x100b20
     */
    TodoReturn saveGauntlet(GJMapPack* p0);

    /**
     * @note[short] Windows: 0xf8130
     */
    TodoReturn saveLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameLevelManager::saveLevelList not implemented")]]
    /**
     */
    TodoReturn saveLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveLocalScore not implemented")]]
    /**
     */
    TodoReturn saveLocalScore(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::saveMapPack not implemented")]]
    /**
     */
    TodoReturn saveMapPack(GJMapPack* p0);
public:
    
private:
    [[deprecated("GameLevelManager::setActiveSmartTemplate not implemented")]]
    /**
     */
    void setActiveSmartTemplate(GJSmartTemplate* p0);
public:
    
private:
    [[deprecated("GameLevelManager::setBoolForKey not implemented")]]
    /**
     */
    void setBoolForKey(bool p0, char const* p1);
public:
    
private:
    [[deprecated("GameLevelManager::setDiffVal not implemented")]]
    /**
     */
    void setDiffVal(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::setFolderName not implemented")]]
    /**
     */
    void setFolderName(int p0, gd::string p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::setIntForKey not implemented")]]
    /**
     */
    void setIntForKey(int p0, char const* p1);
public:
    
private:
    [[deprecated("GameLevelManager::setLenVal not implemented")]]
    /**
     */
    void setLenVal(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::setLevelFeatured not implemented")]]
    /**
     */
    void setLevelFeatured(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::setLevelStars not implemented")]]
    /**
     */
    void setLevelStars(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::specialFromLikeKey not implemented")]]
    /**
     */
    TodoReturn specialFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeCommentsResult not implemented")]]
    /**
     */
    void storeCommentsResult(cocos2d::CCArray* p0, gd::string p1, char const* p2);
public:
    
private:
    [[deprecated("GameLevelManager::storeDailyLevelState not implemented")]]
    /**
     */
    void storeDailyLevelState(int p0, int p1, GJTimedLevelType p2);
public:
    
private:
    [[deprecated("GameLevelManager::storeFriendRequest not implemented")]]
    /**
     */
    void storeFriendRequest(GJFriendRequest* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeSearchResult not implemented")]]
    /**
     */
    void storeSearchResult(cocos2d::CCArray* p0, gd::string p1, char const* p2);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserInfo not implemented")]]
    /**
     */
    void storeUserInfo(GJUserScore* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserMessage not implemented")]]
    /**
     */
    void storeUserMessage(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserMessageReply not implemented")]]
    /**
     */
    void storeUserMessageReply(int p0, GJUserMessage* p1);
public:

    /**
     * @note[short] Windows: 0xf6140
     */
    void storeUserName(int userID, int accountID, gd::string userName);
    
private:
    [[deprecated("GameLevelManager::storeUserNames not implemented")]]
    /**
     */
    void storeUserNames(gd::string usernameString);
public:

    /**
     * @note[short] Windows: 0x110f40
     */
    TodoReturn submitUserInfo();

    /**
     * @note[short] Windows: 0x102ec0
     */
    TodoReturn suggestLevelStars(int p0, int p1, int p2);

    /**
     * @note[short] Windows: 0xf6370
     */
    TodoReturn tryGetUsername(int p0);
    
private:
    [[deprecated("GameLevelManager::typeFromCommentKey not implemented")]]
    /**
     */
    TodoReturn typeFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::typeFromLikeKey not implemented")]]
    /**
     */
    TodoReturn typeFromLikeKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x10ce50
     */
    TodoReturn unblockUser(int p0);

    /**
     * @note[short] Windows: 0xf9b10
     */
    TodoReturn unfollowUser(int p0);

    /**
     * @note[short] Windows: 0x10dc80
     */
    TodoReturn updateDescription(int p0, gd::string p1);

    /**
     * @note[short] Windows: 0x101d40
     */
    TodoReturn updateLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0xf75f0
     */
    TodoReturn updateLevelOrders();
    
private:
    [[deprecated("GameLevelManager::updateLevelRewards not implemented")]]
    /**
     */
    TodoReturn updateLevelRewards(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelManager::updateSavedLevelList not implemented")]]
    /**
     */
    TodoReturn updateSavedLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::updateUsernames not implemented")]]
    /**
     */
    TodoReturn updateUsernames();
public:

    /**
     * @note[short] Windows: 0x103ab0
     */
    TodoReturn updateUserScore();

    /**
     * @note[short] Windows: 0x1099d0
     */
    TodoReturn uploadAccountComment(gd::string p0);

    /**
     * @note[short] Windows: 0x109a70
     */
    TodoReturn uploadComment(gd::string p0, CommentType p1, int p2, int p3);

    /**
     * @note[short] Windows: 0x10b440
     */
    TodoReturn uploadFriendRequest(int p0, gd::string p1);

    /**
     * @note[short] Windows: 0xfb760
     */
    TodoReturn uploadLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x109940
     */
    TodoReturn uploadLevelComment(int p0, gd::string p1, int p2);

    /**
     * @note[short] Windows: 0xfeac0
     */
    TodoReturn uploadLevelList(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x107370
     */
    TodoReturn uploadUserMessage(int p0, gd::string p1, gd::string p2);
    
private:
    [[deprecated("GameLevelManager::userIDForAccountID not implemented")]]
    /**
     */
    TodoReturn userIDForAccountID(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::userInfoForAccountID not implemented")]]
    /**
     */
    TodoReturn userInfoForAccountID(int p0);
public:

    /**
     * @note[short] Windows: 0xf6290
     */
    gd::string userNameForUserID(int p0);
    
private:
    [[deprecated("GameLevelManager::verifyLevelState not implemented")]]
    /**
     */
    TodoReturn verifyLevelState(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelManager::writeSpecialFilters not implemented")]]
    /**
     */
    TodoReturn writeSpecialFilters(GJSearchObject* p0);
public:
    
private:
    [[deprecated("GameLevelManager::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    GEODE_PAD(8);
    cocos2d::CCDictionary* m_mainLevels;
    cocos2d::CCDictionary* m_searchFilters;
    cocos2d::CCDictionary* m_onlineLevels;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_followedCreators;
    cocos2d::CCDictionary* m_GLM21;
    cocos2d::CCDictionary* m_downloadedLevels;
    cocos2d::CCDictionary* m_likedLevels;
    cocos2d::CCDictionary* m_ratedLevels;
    cocos2d::CCDictionary* m_ratedDemons;
    cocos2d::CCDictionary* m_reportedLevels;
    cocos2d::CCDictionary* m_onlineFolders;
    cocos2d::CCDictionary* m_localLevelsFolders;
    cocos2d::CCDictionary* m_dailyLevels;
    int m_dailyTimeLeft;
    int m_dailyID;
    int m_dailyIDUnk;
    int m_weeklyTimeLeft;
    int m_weeklyID;
    int m_weeklyIDUnk;
    int m_eventTimeLeft;
    int m_eventID;
    int m_eventIDUnk;
    cocos2d::CCDictionary* m_gauntletLevels;
    gd::map<gd::string, bool> m_availableFilters;
    cocos2d::CCDictionary* m_timerDict;
    cocos2d::CCDictionary* m_knownUsers;
    cocos2d::CCDictionary* m_accountIDtoUserIDDict;
    cocos2d::CCDictionary* m_userIDtoAccountIDDict;
    cocos2d::CCDictionary* m_storedLevels;
    cocos2d::CCDictionary* m_pageInfo;
    cocos2d::CCDictionary* m_unkDict20;
    cocos2d::CCDictionary* m_savedPacks;
    cocos2d::CCDictionary* m_savedGauntlets;
    cocos2d::CCDictionary* m_downloadObjects;
    cocos2d::CCDictionary* m_unkDict24;
    cocos2d::CCDictionary* m_storedUserInfo;
    cocos2d::CCDictionary* m_friendRequests;
    cocos2d::CCDictionary* m_userMessages;
    cocos2d::CCDictionary* m_userReplies;
    gd::string m_unkStr1;
    gd::string m_unkStr2;
    LeaderboardState m_leaderboardState;
    bool m_unkEditLevelLayerOnBack;
    LevelManagerDelegate* m_levelManagerDelegate;
    LevelDownloadDelegate* m_levelDownloadDelegate;
    LevelCommentDelegate* m_levelCommentDelegate;
    CommentUploadDelegate* m_commentUploadDelegate;
    LevelUploadDelegate* m_levelUploadDelegate;
    ListUploadDelegate* m_listUploadDelegate;
    LevelUpdateDelegate* m_levelUpdateDelegate;
    LeaderboardManagerDelegate* m_leaderboardManagerDelegate;
    LevelDeleteDelegate* m_levelDeleteDelegate;
    LevelListDeleteDelegate* m_levelListDeleteDelegate;
    UserInfoDelegate* m_userInfoDelegate;
    void* m_unkDelegate;
    UserListDelegate* m_userListDelegate;
    FriendRequestDelegate* m_friendRequestDelegate;
    MessageListDelegate* m_messageListDelegate;
    DownloadMessageDelegate* m_downloadMessageDelegate;
    UploadMessageDelegate* m_uploadMessageDelegate;
    GJRewardDelegate* m_GJRewardDelegate;
    GJChallengeDelegate* m_GJChallengeDelegate;
    GJDailyLevelDelegate* m_GJDailyLevelDelegate;
    OnlineListDelegate* m_onlineListDelegate;
    int m_unkDownload;
    GEODE_PAD(4);
    gd::string m_unkStr3;
    cocos2d::CCString* m_unkStr4;
};
