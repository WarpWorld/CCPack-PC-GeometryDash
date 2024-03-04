#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameLevelManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_acceptFriendRequest
		#define GEODE_STATICS_acceptFriendRequest
		GEODE_AS_STATIC_FUNCTION(acceptFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_accountIDForUserID
		#define GEODE_STATICS_accountIDForUserID
		GEODE_AS_STATIC_FUNCTION(accountIDForUserID) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_areGauntletsLoaded
		#define GEODE_STATICS_areGauntletsLoaded
		GEODE_AS_STATIC_FUNCTION(areGauntletsLoaded) 
	#endif

	#ifndef GEODE_STATICS_banUser
		#define GEODE_STATICS_banUser
		GEODE_AS_STATIC_FUNCTION(banUser) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
	#endif

	#ifndef GEODE_STATICS_cleanupDailyLevels
		#define GEODE_STATICS_cleanupDailyLevels
		GEODE_AS_STATIC_FUNCTION(cleanupDailyLevels) 
	#endif

	#ifndef GEODE_STATICS_createAndGetAccountComments
		#define GEODE_STATICS_createAndGetAccountComments
		GEODE_AS_STATIC_FUNCTION(createAndGetAccountComments) 
	#endif

	#ifndef GEODE_STATICS_createAndGetCommentsFull
		#define GEODE_STATICS_createAndGetCommentsFull
		GEODE_AS_STATIC_FUNCTION(createAndGetCommentsFull) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevelComments
		#define GEODE_STATICS_createAndGetLevelComments
		GEODE_AS_STATIC_FUNCTION(createAndGetLevelComments) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevelLists
		#define GEODE_STATICS_createAndGetLevelLists
		GEODE_AS_STATIC_FUNCTION(createAndGetLevelLists) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevels
		#define GEODE_STATICS_createAndGetLevels
		GEODE_AS_STATIC_FUNCTION(createAndGetLevels) 
	#endif

	#ifndef GEODE_STATICS_createAndGetMapPacks
		#define GEODE_STATICS_createAndGetMapPacks
		GEODE_AS_STATIC_FUNCTION(createAndGetMapPacks) 
	#endif

	#ifndef GEODE_STATICS_createAndGetScores
		#define GEODE_STATICS_createAndGetScores
		GEODE_AS_STATIC_FUNCTION(createAndGetScores) 
	#endif

	#ifndef GEODE_STATICS_createNewLevel
		#define GEODE_STATICS_createNewLevel
		GEODE_AS_STATIC_FUNCTION(createNewLevel) 
	#endif

	#ifndef GEODE_STATICS_createNewLevelList
		#define GEODE_STATICS_createNewLevelList
		GEODE_AS_STATIC_FUNCTION(createNewLevelList) 
	#endif

	#ifndef GEODE_STATICS_createPageInfo
		#define GEODE_STATICS_createPageInfo
		GEODE_AS_STATIC_FUNCTION(createPageInfo) 
	#endif

	#ifndef GEODE_STATICS_createSmartTemplate
		#define GEODE_STATICS_createSmartTemplate
		GEODE_AS_STATIC_FUNCTION(createSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_deleteAccountComment
		#define GEODE_STATICS_deleteAccountComment
		GEODE_AS_STATIC_FUNCTION(deleteAccountComment) 
	#endif

	#ifndef GEODE_STATICS_deleteComment
		#define GEODE_STATICS_deleteComment
		GEODE_AS_STATIC_FUNCTION(deleteComment) 
	#endif

	#ifndef GEODE_STATICS_deleteFriendRequests
		#define GEODE_STATICS_deleteFriendRequests
		GEODE_AS_STATIC_FUNCTION(deleteFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_deleteLevel
		#define GEODE_STATICS_deleteLevel
		GEODE_AS_STATIC_FUNCTION(deleteLevel) 
	#endif

	#ifndef GEODE_STATICS_deleteLevelComment
		#define GEODE_STATICS_deleteLevelComment
		GEODE_AS_STATIC_FUNCTION(deleteLevelComment) 
	#endif

	#ifndef GEODE_STATICS_deleteLevelList
		#define GEODE_STATICS_deleteLevelList
		GEODE_AS_STATIC_FUNCTION(deleteLevelList) 
	#endif

	#ifndef GEODE_STATICS_deleteSentFriendRequest
		#define GEODE_STATICS_deleteSentFriendRequest
		GEODE_AS_STATIC_FUNCTION(deleteSentFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevel
		#define GEODE_STATICS_deleteServerLevel
		GEODE_AS_STATIC_FUNCTION(deleteServerLevel) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevelList
		#define GEODE_STATICS_deleteServerLevelList
		GEODE_AS_STATIC_FUNCTION(deleteServerLevelList) 
	#endif

	#ifndef GEODE_STATICS_deleteSmartTemplate
		#define GEODE_STATICS_deleteSmartTemplate
		GEODE_AS_STATIC_FUNCTION(deleteSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_deleteUserMessages
		#define GEODE_STATICS_deleteUserMessages
		GEODE_AS_STATIC_FUNCTION(deleteUserMessages) 
	#endif

	#ifndef GEODE_STATICS_downloadLevel
		#define GEODE_STATICS_downloadLevel
		GEODE_AS_STATIC_FUNCTION(downloadLevel) 
	#endif

	#ifndef GEODE_STATICS_downloadUserMessage
		#define GEODE_STATICS_downloadUserMessage
		GEODE_AS_STATIC_FUNCTION(downloadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_followUser
		#define GEODE_STATICS_followUser
		GEODE_AS_STATIC_FUNCTION(followUser) 
	#endif

	#ifndef GEODE_STATICS_friendRequestFromAccountID
		#define GEODE_STATICS_friendRequestFromAccountID
		GEODE_AS_STATIC_FUNCTION(friendRequestFromAccountID) 
	#endif

	#ifndef GEODE_STATICS_friendRequestWasRemoved
		#define GEODE_STATICS_friendRequestWasRemoved
		GEODE_AS_STATIC_FUNCTION(friendRequestWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_getAccountCommentKey
		#define GEODE_STATICS_getAccountCommentKey
		GEODE_AS_STATIC_FUNCTION(getAccountCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getAccountComments
		#define GEODE_STATICS_getAccountComments
		GEODE_AS_STATIC_FUNCTION(getAccountComments) 
	#endif

	#ifndef GEODE_STATICS_getActiveDailyID
		#define GEODE_STATICS_getActiveDailyID
		GEODE_AS_STATIC_FUNCTION(getActiveDailyID) 
	#endif

	#ifndef GEODE_STATICS_getActiveSmartTemplate
		#define GEODE_STATICS_getActiveSmartTemplate
		GEODE_AS_STATIC_FUNCTION(getActiveSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_getAllSmartTemplates
		#define GEODE_STATICS_getAllSmartTemplates
		GEODE_AS_STATIC_FUNCTION(getAllSmartTemplates) 
	#endif

	#ifndef GEODE_STATICS_getAllUsedSongIDs
		#define GEODE_STATICS_getAllUsedSongIDs
		GEODE_AS_STATIC_FUNCTION(getAllUsedSongIDs) 
	#endif

	#ifndef GEODE_STATICS_getBasePostString
		#define GEODE_STATICS_getBasePostString
		GEODE_AS_STATIC_FUNCTION(getBasePostString) 
	#endif

	#ifndef GEODE_STATICS_getBoolForKey
		#define GEODE_STATICS_getBoolForKey
		GEODE_AS_STATIC_FUNCTION(getBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_getCommentKey
		#define GEODE_STATICS_getCommentKey
		GEODE_AS_STATIC_FUNCTION(getCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getCompletedLevels
		#define GEODE_STATICS_getCompletedLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedLevels) 
	#endif

	#ifndef GEODE_STATICS_getDailyID
		#define GEODE_STATICS_getDailyID
		GEODE_AS_STATIC_FUNCTION(getDailyID) 
	#endif

	#ifndef GEODE_STATICS_getDailyTimer
		#define GEODE_STATICS_getDailyTimer
		GEODE_AS_STATIC_FUNCTION(getDailyTimer) 
	#endif

	#ifndef GEODE_STATICS_getDeleteCommentKey
		#define GEODE_STATICS_getDeleteCommentKey
		GEODE_AS_STATIC_FUNCTION(getDeleteCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getDeleteMessageKey
		#define GEODE_STATICS_getDeleteMessageKey
		GEODE_AS_STATIC_FUNCTION(getDeleteMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getDescKey
		#define GEODE_STATICS_getDescKey
		GEODE_AS_STATIC_FUNCTION(getDescKey) 
	#endif

	#ifndef GEODE_STATICS_getDifficultyStr
		#define GEODE_STATICS_getDifficultyStr
		GEODE_AS_STATIC_FUNCTION(getDifficultyStr) 
	#endif

	#ifndef GEODE_STATICS_getDiffKey
		#define GEODE_STATICS_getDiffKey
		GEODE_AS_STATIC_FUNCTION(getDiffKey) 
	#endif

	#ifndef GEODE_STATICS_getDiffVal
		#define GEODE_STATICS_getDiffVal
		GEODE_AS_STATIC_FUNCTION(getDiffVal) 
	#endif

	#ifndef GEODE_STATICS_getFolderName
		#define GEODE_STATICS_getFolderName
		GEODE_AS_STATIC_FUNCTION(getFolderName) 
	#endif

	#ifndef GEODE_STATICS_getFriendRequestKey
		#define GEODE_STATICS_getFriendRequestKey
		GEODE_AS_STATIC_FUNCTION(getFriendRequestKey) 
	#endif

	#ifndef GEODE_STATICS_getFriendRequests
		#define GEODE_STATICS_getFriendRequests
		GEODE_AS_STATIC_FUNCTION(getFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_getGauntletKey
		#define GEODE_STATICS_getGauntletKey
		GEODE_AS_STATIC_FUNCTION(getGauntletKey) 
	#endif

	#ifndef GEODE_STATICS_getGauntletLevels
		#define GEODE_STATICS_getGauntletLevels
		GEODE_AS_STATIC_FUNCTION(getGauntletLevels) 
	#endif

	#ifndef GEODE_STATICS_getGauntlets
		#define GEODE_STATICS_getGauntlets
		GEODE_AS_STATIC_FUNCTION(getGauntlets) 
	#endif

	#ifndef GEODE_STATICS_getGauntletSearchKey
		#define GEODE_STATICS_getGauntletSearchKey
		GEODE_AS_STATIC_FUNCTION(getGauntletSearchKey) 
	#endif

	#ifndef GEODE_STATICS_getGJChallenges
		#define GEODE_STATICS_getGJChallenges
		GEODE_AS_STATIC_FUNCTION(getGJChallenges) 
	#endif

	#ifndef GEODE_STATICS_getGJDailyLevelState
		#define GEODE_STATICS_getGJDailyLevelState
		GEODE_AS_STATIC_FUNCTION(getGJDailyLevelState) 
	#endif

	#ifndef GEODE_STATICS_getGJRewards
		#define GEODE_STATICS_getGJRewards
		GEODE_AS_STATIC_FUNCTION(getGJRewards) 
	#endif

	#ifndef GEODE_STATICS_getGJUserInfo
		#define GEODE_STATICS_getGJUserInfo
		GEODE_AS_STATIC_FUNCTION(getGJUserInfo) 
	#endif

	#ifndef GEODE_STATICS_getHighestLevelOrder
		#define GEODE_STATICS_getHighestLevelOrder
		GEODE_AS_STATIC_FUNCTION(getHighestLevelOrder) 
	#endif

	#ifndef GEODE_STATICS_getIntForKey
		#define GEODE_STATICS_getIntForKey
		GEODE_AS_STATIC_FUNCTION(getIntForKey) 
	#endif

	#ifndef GEODE_STATICS_getLeaderboardScores
		#define GEODE_STATICS_getLeaderboardScores
		GEODE_AS_STATIC_FUNCTION(getLeaderboardScores) 
	#endif

	#ifndef GEODE_STATICS_getLengthStr
		#define GEODE_STATICS_getLengthStr
		GEODE_AS_STATIC_FUNCTION(getLengthStr) 
	#endif

	#ifndef GEODE_STATICS_getLenKey
		#define GEODE_STATICS_getLenKey
		GEODE_AS_STATIC_FUNCTION(getLenKey) 
	#endif

	#ifndef GEODE_STATICS_getLenVal
		#define GEODE_STATICS_getLenVal
		GEODE_AS_STATIC_FUNCTION(getLenVal) 
	#endif

	#ifndef GEODE_STATICS_getLevelComments
		#define GEODE_STATICS_getLevelComments
		GEODE_AS_STATIC_FUNCTION(getLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getLevelKey
		#define GEODE_STATICS_getLevelKey
		GEODE_AS_STATIC_FUNCTION(getLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelLeaderboard
		#define GEODE_STATICS_getLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(getLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_getLevelLeaderboardKey
		#define GEODE_STATICS_getLevelLeaderboardKey
		GEODE_AS_STATIC_FUNCTION(getLevelLeaderboardKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelListKey
		#define GEODE_STATICS_getLevelListKey
		GEODE_AS_STATIC_FUNCTION(getLevelListKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelLists
		#define GEODE_STATICS_getLevelLists
		GEODE_AS_STATIC_FUNCTION(getLevelLists) 
	#endif

	#ifndef GEODE_STATICS_getLevelSaveData
		#define GEODE_STATICS_getLevelSaveData
		GEODE_AS_STATIC_FUNCTION(getLevelSaveData) 
	#endif

	#ifndef GEODE_STATICS_getLikeAccountItemKey
		#define GEODE_STATICS_getLikeAccountItemKey
		GEODE_AS_STATIC_FUNCTION(getLikeAccountItemKey) 
	#endif

	#ifndef GEODE_STATICS_getLikeItemKey
		#define GEODE_STATICS_getLikeItemKey
		GEODE_AS_STATIC_FUNCTION(getLikeItemKey) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevel
		#define GEODE_STATICS_getLocalLevel
		GEODE_AS_STATIC_FUNCTION(getLocalLevel) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevelByName
		#define GEODE_STATICS_getLocalLevelByName
		GEODE_AS_STATIC_FUNCTION(getLocalLevelByName) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevelList
		#define GEODE_STATICS_getLocalLevelList
		GEODE_AS_STATIC_FUNCTION(getLocalLevelList) 
	#endif

	#ifndef GEODE_STATICS_getLowestLevelOrder
		#define GEODE_STATICS_getLowestLevelOrder
		GEODE_AS_STATIC_FUNCTION(getLowestLevelOrder) 
	#endif

	#ifndef GEODE_STATICS_getMainLevel
		#define GEODE_STATICS_getMainLevel
		GEODE_AS_STATIC_FUNCTION(getMainLevel) 
	#endif

	#ifndef GEODE_STATICS_getMapPackKey
		#define GEODE_STATICS_getMapPackKey
		GEODE_AS_STATIC_FUNCTION(getMapPackKey) 
	#endif

	#ifndef GEODE_STATICS_getMapPacks
		#define GEODE_STATICS_getMapPacks
		GEODE_AS_STATIC_FUNCTION(getMapPacks) 
	#endif

	#ifndef GEODE_STATICS_getMessageKey
		#define GEODE_STATICS_getMessageKey
		GEODE_AS_STATIC_FUNCTION(getMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getMessagesKey
		#define GEODE_STATICS_getMessagesKey
		GEODE_AS_STATIC_FUNCTION(getMessagesKey) 
	#endif

	#ifndef GEODE_STATICS_getNews
		#define GEODE_STATICS_getNews
		GEODE_AS_STATIC_FUNCTION(getNews) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeTemplateID
		#define GEODE_STATICS_getNextFreeTemplateID
		GEODE_AS_STATIC_FUNCTION(getNextFreeTemplateID) 
	#endif

	#ifndef GEODE_STATICS_getNextLevelName
		#define GEODE_STATICS_getNextLevelName
		GEODE_AS_STATIC_FUNCTION(getNextLevelName) 
	#endif

	#ifndef GEODE_STATICS_getOnlineLevels
		#define GEODE_STATICS_getOnlineLevels
		GEODE_AS_STATIC_FUNCTION(getOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_getPageInfo
		#define GEODE_STATICS_getPageInfo
		GEODE_AS_STATIC_FUNCTION(getPageInfo) 
	#endif

	#ifndef GEODE_STATICS_getPostCommentKey
		#define GEODE_STATICS_getPostCommentKey
		GEODE_AS_STATIC_FUNCTION(getPostCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getRateStarsKey
		#define GEODE_STATICS_getRateStarsKey
		GEODE_AS_STATIC_FUNCTION(getRateStarsKey) 
	#endif

	#ifndef GEODE_STATICS_getReportKey
		#define GEODE_STATICS_getReportKey
		GEODE_AS_STATIC_FUNCTION(getReportKey) 
	#endif

	#ifndef GEODE_STATICS_getSavedDailyLevel
		#define GEODE_STATICS_getSavedDailyLevel
		GEODE_AS_STATIC_FUNCTION(getSavedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedDailyLevelFromLevelID
		#define GEODE_STATICS_getSavedDailyLevelFromLevelID
		GEODE_AS_STATIC_FUNCTION(getSavedDailyLevelFromLevelID) 
	#endif

	#ifndef GEODE_STATICS_getSavedGauntlet
		#define GEODE_STATICS_getSavedGauntlet
		GEODE_AS_STATIC_FUNCTION(getSavedGauntlet) 
	#endif

	#ifndef GEODE_STATICS_getSavedGauntletLevel
		#define GEODE_STATICS_getSavedGauntletLevel
		GEODE_AS_STATIC_FUNCTION(getSavedGauntletLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevel
		#define GEODE_STATICS_getSavedLevel
		GEODE_AS_STATIC_FUNCTION(getSavedLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevelList
		#define GEODE_STATICS_getSavedLevelList
		GEODE_AS_STATIC_FUNCTION(getSavedLevelList) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevelLists
		#define GEODE_STATICS_getSavedLevelLists
		GEODE_AS_STATIC_FUNCTION(getSavedLevelLists) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevels
		#define GEODE_STATICS_getSavedLevels
		GEODE_AS_STATIC_FUNCTION(getSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_getSavedMapPack
		#define GEODE_STATICS_getSavedMapPack
		GEODE_AS_STATIC_FUNCTION(getSavedMapPack) 
	#endif

	#ifndef GEODE_STATICS_getSearchScene
		#define GEODE_STATICS_getSearchScene
		GEODE_AS_STATIC_FUNCTION(getSearchScene) 
	#endif

	#ifndef GEODE_STATICS_getSplitIntFromKey
		#define GEODE_STATICS_getSplitIntFromKey
		GEODE_AS_STATIC_FUNCTION(getSplitIntFromKey) 
	#endif

	#ifndef GEODE_STATICS_getStoredLevelComments
		#define GEODE_STATICS_getStoredLevelComments
		GEODE_AS_STATIC_FUNCTION(getStoredLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getStoredOnlineLevels
		#define GEODE_STATICS_getStoredOnlineLevels
		GEODE_AS_STATIC_FUNCTION(getStoredOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserList
		#define GEODE_STATICS_getStoredUserList
		GEODE_AS_STATIC_FUNCTION(getStoredUserList) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserMessage
		#define GEODE_STATICS_getStoredUserMessage
		GEODE_AS_STATIC_FUNCTION(getStoredUserMessage) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserMessageReply
		#define GEODE_STATICS_getStoredUserMessageReply
		GEODE_AS_STATIC_FUNCTION(getStoredUserMessageReply) 
	#endif

	#ifndef GEODE_STATICS_getTimeLeft
		#define GEODE_STATICS_getTimeLeft
		GEODE_AS_STATIC_FUNCTION(getTimeLeft) 
	#endif

	#ifndef GEODE_STATICS_getTopArtists
		#define GEODE_STATICS_getTopArtists
		GEODE_AS_STATIC_FUNCTION(getTopArtists) 
	#endif

	#ifndef GEODE_STATICS_getUploadMessageKey
		#define GEODE_STATICS_getUploadMessageKey
		GEODE_AS_STATIC_FUNCTION(getUploadMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoKey
		#define GEODE_STATICS_getUserInfoKey
		GEODE_AS_STATIC_FUNCTION(getUserInfoKey) 
	#endif

	#ifndef GEODE_STATICS_getUserList
		#define GEODE_STATICS_getUserList
		GEODE_AS_STATIC_FUNCTION(getUserList) 
	#endif

	#ifndef GEODE_STATICS_getUserMessages
		#define GEODE_STATICS_getUserMessages
		GEODE_AS_STATIC_FUNCTION(getUserMessages) 
	#endif

	#ifndef GEODE_STATICS_getUsers
		#define GEODE_STATICS_getUsers
		GEODE_AS_STATIC_FUNCTION(getUsers) 
	#endif

	#ifndef GEODE_STATICS_gotoLevelPage
		#define GEODE_STATICS_gotoLevelPage
		GEODE_AS_STATIC_FUNCTION(gotoLevelPage) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_handleItDelayed
		#define GEODE_STATICS_handleItDelayed
		GEODE_AS_STATIC_FUNCTION(handleItDelayed) 
	#endif

	#ifndef GEODE_STATICS_handleItND
		#define GEODE_STATICS_handleItND
		GEODE_AS_STATIC_FUNCTION(handleItND) 
	#endif

	#ifndef GEODE_STATICS_hasDailyStateBeenLoaded
		#define GEODE_STATICS_hasDailyStateBeenLoaded
		GEODE_AS_STATIC_FUNCTION(hasDailyStateBeenLoaded) 
	#endif

	#ifndef GEODE_STATICS_hasDownloadedLevel
		#define GEODE_STATICS_hasDownloadedLevel
		GEODE_AS_STATIC_FUNCTION(hasDownloadedLevel) 
	#endif

	#ifndef GEODE_STATICS_hasDownloadedList
		#define GEODE_STATICS_hasDownloadedList
		GEODE_AS_STATIC_FUNCTION(hasDownloadedList) 
	#endif

	#ifndef GEODE_STATICS_hasLikedAccountItem
		#define GEODE_STATICS_hasLikedAccountItem
		GEODE_AS_STATIC_FUNCTION(hasLikedAccountItem) 
	#endif

	#ifndef GEODE_STATICS_hasLikedItem
		#define GEODE_STATICS_hasLikedItem
		GEODE_AS_STATIC_FUNCTION(hasLikedItem) 
	#endif

	#ifndef GEODE_STATICS_hasLikedItemFullCheck
		#define GEODE_STATICS_hasLikedItemFullCheck
		GEODE_AS_STATIC_FUNCTION(hasLikedItemFullCheck) 
	#endif

	#ifndef GEODE_STATICS_hasRatedDemon
		#define GEODE_STATICS_hasRatedDemon
		GEODE_AS_STATIC_FUNCTION(hasRatedDemon) 
	#endif

	#ifndef GEODE_STATICS_hasRatedLevelStars
		#define GEODE_STATICS_hasRatedLevelStars
		GEODE_AS_STATIC_FUNCTION(hasRatedLevelStars) 
	#endif

	#ifndef GEODE_STATICS_hasReportedLevel
		#define GEODE_STATICS_hasReportedLevel
		GEODE_AS_STATIC_FUNCTION(hasReportedLevel) 
	#endif

	#ifndef GEODE_STATICS_invalidateMessages
		#define GEODE_STATICS_invalidateMessages
		GEODE_AS_STATIC_FUNCTION(invalidateMessages) 
	#endif

	#ifndef GEODE_STATICS_invalidateRequests
		#define GEODE_STATICS_invalidateRequests
		GEODE_AS_STATIC_FUNCTION(invalidateRequests) 
	#endif

	#ifndef GEODE_STATICS_invalidateUserList
		#define GEODE_STATICS_invalidateUserList
		GEODE_AS_STATIC_FUNCTION(invalidateUserList) 
	#endif

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_isFollowingUser
		#define GEODE_STATICS_isFollowingUser
		GEODE_AS_STATIC_FUNCTION(isFollowingUser) 
	#endif

	#ifndef GEODE_STATICS_isTimeValid
		#define GEODE_STATICS_isTimeValid
		GEODE_AS_STATIC_FUNCTION(isTimeValid) 
	#endif

	#ifndef GEODE_STATICS_isUpdateValid
		#define GEODE_STATICS_isUpdateValid
		GEODE_AS_STATIC_FUNCTION(isUpdateValid) 
	#endif

	#ifndef GEODE_STATICS_itemIDFromLikeKey
		#define GEODE_STATICS_itemIDFromLikeKey
		GEODE_AS_STATIC_FUNCTION(itemIDFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_keyHasTimer
		#define GEODE_STATICS_keyHasTimer
		GEODE_AS_STATIC_FUNCTION(keyHasTimer) 
	#endif

	#ifndef GEODE_STATICS_levelIDFromCommentKey
		#define GEODE_STATICS_levelIDFromCommentKey
		GEODE_AS_STATIC_FUNCTION(levelIDFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_levelIDFromPostCommentKey
		#define GEODE_STATICS_levelIDFromPostCommentKey
		GEODE_AS_STATIC_FUNCTION(levelIDFromPostCommentKey) 
	#endif

	#ifndef GEODE_STATICS_likeFromLikeKey
		#define GEODE_STATICS_likeFromLikeKey
		GEODE_AS_STATIC_FUNCTION(likeFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_likeItem
		#define GEODE_STATICS_likeItem
		GEODE_AS_STATIC_FUNCTION(likeItem) 
	#endif

	#ifndef GEODE_STATICS_limitSavedLevels
		#define GEODE_STATICS_limitSavedLevels
		GEODE_AS_STATIC_FUNCTION(limitSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_makeTimeStamp
		#define GEODE_STATICS_makeTimeStamp
		GEODE_AS_STATIC_FUNCTION(makeTimeStamp) 
	#endif

	#ifndef GEODE_STATICS_markItemAsLiked
		#define GEODE_STATICS_markItemAsLiked
		GEODE_AS_STATIC_FUNCTION(markItemAsLiked) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsDownloaded
		#define GEODE_STATICS_markLevelAsDownloaded
		GEODE_AS_STATIC_FUNCTION(markLevelAsDownloaded) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsRatedDemon
		#define GEODE_STATICS_markLevelAsRatedDemon
		GEODE_AS_STATIC_FUNCTION(markLevelAsRatedDemon) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsRatedStars
		#define GEODE_STATICS_markLevelAsRatedStars
		GEODE_AS_STATIC_FUNCTION(markLevelAsRatedStars) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsReported
		#define GEODE_STATICS_markLevelAsReported
		GEODE_AS_STATIC_FUNCTION(markLevelAsReported) 
	#endif

	#ifndef GEODE_STATICS_markListAsDownloaded
		#define GEODE_STATICS_markListAsDownloaded
		GEODE_AS_STATIC_FUNCTION(markListAsDownloaded) 
	#endif

	#ifndef GEODE_STATICS_messageWasRemoved
		#define GEODE_STATICS_messageWasRemoved
		GEODE_AS_STATIC_FUNCTION(messageWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_onAcceptFriendRequestCompleted
		#define GEODE_STATICS_onAcceptFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onAcceptFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onBanUserCompleted
		#define GEODE_STATICS_onBanUserCompleted
		GEODE_AS_STATIC_FUNCTION(onBanUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onBlockUserCompleted
		#define GEODE_STATICS_onBlockUserCompleted
		GEODE_AS_STATIC_FUNCTION(onBlockUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCommentCompleted
		#define GEODE_STATICS_onDeleteCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteFriendRequestCompleted
		#define GEODE_STATICS_onDeleteFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteServerLevelCompleted
		#define GEODE_STATICS_onDeleteServerLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteServerLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteServerLevelListCompleted
		#define GEODE_STATICS_onDeleteServerLevelListCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteServerLevelListCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteUserMessagesCompleted
		#define GEODE_STATICS_onDeleteUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteUserMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadLevelCompleted
		#define GEODE_STATICS_onDownloadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadUserMessageCompleted
		#define GEODE_STATICS_onDownloadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadUserMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetAccountCommentsCompleted
		#define GEODE_STATICS_onGetAccountCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetAccountCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetFriendRequestsCompleted
		#define GEODE_STATICS_onGetFriendRequestsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetFriendRequestsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGauntletsCompleted
		#define GEODE_STATICS_onGetGauntletsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGauntletsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJChallengesCompleted
		#define GEODE_STATICS_onGetGJChallengesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJChallengesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJDailyLevelStateCompleted
		#define GEODE_STATICS_onGetGJDailyLevelStateCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJDailyLevelStateCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJRewardsCompleted
		#define GEODE_STATICS_onGetGJRewardsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJRewardsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJUserInfoCompleted
		#define GEODE_STATICS_onGetGJUserInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJUserInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLeaderboardScoresCompleted
		#define GEODE_STATICS_onGetLeaderboardScoresCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLeaderboardScoresCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelCommentsCompleted
		#define GEODE_STATICS_onGetLevelCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelLeaderboardCompleted
		#define GEODE_STATICS_onGetLevelLeaderboardCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelLeaderboardCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelListsCompleted
		#define GEODE_STATICS_onGetLevelListsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelListsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelSaveDataCompleted
		#define GEODE_STATICS_onGetLevelSaveDataCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelSaveDataCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetMapPacksCompleted
		#define GEODE_STATICS_onGetMapPacksCompleted
		GEODE_AS_STATIC_FUNCTION(onGetMapPacksCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetNewsCompleted
		#define GEODE_STATICS_onGetNewsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetNewsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetOnlineLevelsCompleted
		#define GEODE_STATICS_onGetOnlineLevelsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetOnlineLevelsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetTopArtistsCompleted
		#define GEODE_STATICS_onGetTopArtistsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetTopArtistsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserListCompleted
		#define GEODE_STATICS_onGetUserListCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserListCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserMessagesCompleted
		#define GEODE_STATICS_onGetUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUsersCompleted
		#define GEODE_STATICS_onGetUsersCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUsersCompleted) 
	#endif

	#ifndef GEODE_STATICS_onLikeItemCompleted
		#define GEODE_STATICS_onLikeItemCompleted
		GEODE_AS_STATIC_FUNCTION(onLikeItemCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateDemonCompleted
		#define GEODE_STATICS_onRateDemonCompleted
		GEODE_AS_STATIC_FUNCTION(onRateDemonCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateStarsCompleted
		#define GEODE_STATICS_onRateStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onRateStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onReadFriendRequestCompleted
		#define GEODE_STATICS_onReadFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onReadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFriendCompleted
		#define GEODE_STATICS_onRemoveFriendCompleted
		GEODE_AS_STATIC_FUNCTION(onRemoveFriendCompleted) 
	#endif

	#ifndef GEODE_STATICS_onReportLevelCompleted
		#define GEODE_STATICS_onReportLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onReportLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRequestUserAccessCompleted
		#define GEODE_STATICS_onRequestUserAccessCompleted
		GEODE_AS_STATIC_FUNCTION(onRequestUserAccessCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRestoreItemsCompleted
		#define GEODE_STATICS_onRestoreItemsCompleted
		GEODE_AS_STATIC_FUNCTION(onRestoreItemsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSetLevelFeaturedCompleted
		#define GEODE_STATICS_onSetLevelFeaturedCompleted
		GEODE_AS_STATIC_FUNCTION(onSetLevelFeaturedCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSetLevelStarsCompleted
		#define GEODE_STATICS_onSetLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSetLevelStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSubmitUserInfoCompleted
		#define GEODE_STATICS_onSubmitUserInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onSubmitUserInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSuggestLevelStarsCompleted
		#define GEODE_STATICS_onSuggestLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSuggestLevelStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUnblockUserCompleted
		#define GEODE_STATICS_onUnblockUserCompleted
		GEODE_AS_STATIC_FUNCTION(onUnblockUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateDescriptionCompleted
		#define GEODE_STATICS_onUpdateDescriptionCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateDescriptionCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLevelCompleted
		#define GEODE_STATICS_onUpdateLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateUserScoreCompleted
		#define GEODE_STATICS_onUpdateUserScoreCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateUserScoreCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadCommentCompleted
		#define GEODE_STATICS_onUploadCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadFriendRequestCompleted
		#define GEODE_STATICS_onUploadFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadLevelCompleted
		#define GEODE_STATICS_onUploadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadLevelListCompleted
		#define GEODE_STATICS_onUploadLevelListCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadLevelListCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadUserMessageCompleted
		#define GEODE_STATICS_onUploadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadUserMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_pageFromCommentKey
		#define GEODE_STATICS_pageFromCommentKey
		GEODE_AS_STATIC_FUNCTION(pageFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_parseRestoreData
		#define GEODE_STATICS_parseRestoreData
		GEODE_AS_STATIC_FUNCTION(parseRestoreData) 
	#endif

	#ifndef GEODE_STATICS_performNetworkTest
		#define GEODE_STATICS_performNetworkTest
		GEODE_AS_STATIC_FUNCTION(performNetworkTest) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_processOnDownloadLevelCompleted
		#define GEODE_STATICS_processOnDownloadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(processOnDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_purgeUnusedLevels
		#define GEODE_STATICS_purgeUnusedLevels
		GEODE_AS_STATIC_FUNCTION(purgeUnusedLevels) 
	#endif

	#ifndef GEODE_STATICS_rateDemon
		#define GEODE_STATICS_rateDemon
		GEODE_AS_STATIC_FUNCTION(rateDemon) 
	#endif

	#ifndef GEODE_STATICS_rateStars
		#define GEODE_STATICS_rateStars
		GEODE_AS_STATIC_FUNCTION(rateStars) 
	#endif

	#ifndef GEODE_STATICS_readFriendRequest
		#define GEODE_STATICS_readFriendRequest
		GEODE_AS_STATIC_FUNCTION(readFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_removeDelimiterChars
		#define GEODE_STATICS_removeDelimiterChars
		GEODE_AS_STATIC_FUNCTION(removeDelimiterChars) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_removeFriend
		#define GEODE_STATICS_removeFriend
		GEODE_AS_STATIC_FUNCTION(removeFriend) 
	#endif

	#ifndef GEODE_STATICS_removeLevelDownloadedKeysFromDict
		#define GEODE_STATICS_removeLevelDownloadedKeysFromDict
		GEODE_AS_STATIC_FUNCTION(removeLevelDownloadedKeysFromDict) 
	#endif

	#ifndef GEODE_STATICS_removeUserFromList
		#define GEODE_STATICS_removeUserFromList
		GEODE_AS_STATIC_FUNCTION(removeUserFromList) 
	#endif

	#ifndef GEODE_STATICS_reportLevel
		#define GEODE_STATICS_reportLevel
		GEODE_AS_STATIC_FUNCTION(reportLevel) 
	#endif

	#ifndef GEODE_STATICS_requestUserAccess
		#define GEODE_STATICS_requestUserAccess
		GEODE_AS_STATIC_FUNCTION(requestUserAccess) 
	#endif

	#ifndef GEODE_STATICS_resetAccountComments
		#define GEODE_STATICS_resetAccountComments
		GEODE_AS_STATIC_FUNCTION(resetAccountComments) 
	#endif

	#ifndef GEODE_STATICS_resetAllTimers
		#define GEODE_STATICS_resetAllTimers
		GEODE_AS_STATIC_FUNCTION(resetAllTimers) 
	#endif

	#ifndef GEODE_STATICS_resetCommentTimersForLevelID
		#define GEODE_STATICS_resetCommentTimersForLevelID
		GEODE_AS_STATIC_FUNCTION(resetCommentTimersForLevelID) 
	#endif

	#ifndef GEODE_STATICS_resetDailyLevelState
		#define GEODE_STATICS_resetDailyLevelState
		GEODE_AS_STATIC_FUNCTION(resetDailyLevelState) 
	#endif

	#ifndef GEODE_STATICS_resetGauntlets
		#define GEODE_STATICS_resetGauntlets
		GEODE_AS_STATIC_FUNCTION(resetGauntlets) 
	#endif

	#ifndef GEODE_STATICS_resetStoredUserList
		#define GEODE_STATICS_resetStoredUserList
		GEODE_AS_STATIC_FUNCTION(resetStoredUserList) 
	#endif

	#ifndef GEODE_STATICS_resetTimerForKey
		#define GEODE_STATICS_resetTimerForKey
		GEODE_AS_STATIC_FUNCTION(resetTimerForKey) 
	#endif

	#ifndef GEODE_STATICS_responseToDict
		#define GEODE_STATICS_responseToDict
		GEODE_AS_STATIC_FUNCTION(responseToDict) 
	#endif

	#ifndef GEODE_STATICS_restoreItems
		#define GEODE_STATICS_restoreItems
		GEODE_AS_STATIC_FUNCTION(restoreItems) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedLevelLists
		#define GEODE_STATICS_saveFetchedLevelLists
		GEODE_AS_STATIC_FUNCTION(saveFetchedLevelLists) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedLevels
		#define GEODE_STATICS_saveFetchedLevels
		GEODE_AS_STATIC_FUNCTION(saveFetchedLevels) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedMapPacks
		#define GEODE_STATICS_saveFetchedMapPacks
		GEODE_AS_STATIC_FUNCTION(saveFetchedMapPacks) 
	#endif

	#ifndef GEODE_STATICS_saveGauntlet
		#define GEODE_STATICS_saveGauntlet
		GEODE_AS_STATIC_FUNCTION(saveGauntlet) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
	#endif

	#ifndef GEODE_STATICS_saveLevelList
		#define GEODE_STATICS_saveLevelList
		GEODE_AS_STATIC_FUNCTION(saveLevelList) 
	#endif

	#ifndef GEODE_STATICS_saveLocalScore
		#define GEODE_STATICS_saveLocalScore
		GEODE_AS_STATIC_FUNCTION(saveLocalScore) 
	#endif

	#ifndef GEODE_STATICS_saveMapPack
		#define GEODE_STATICS_saveMapPack
		GEODE_AS_STATIC_FUNCTION(saveMapPack) 
	#endif

	#ifndef GEODE_STATICS_setActiveSmartTemplate
		#define GEODE_STATICS_setActiveSmartTemplate
		GEODE_AS_STATIC_FUNCTION(setActiveSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_setBoolForKey
		#define GEODE_STATICS_setBoolForKey
		GEODE_AS_STATIC_FUNCTION(setBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_setDiffVal
		#define GEODE_STATICS_setDiffVal
		GEODE_AS_STATIC_FUNCTION(setDiffVal) 
	#endif

	#ifndef GEODE_STATICS_setFolderName
		#define GEODE_STATICS_setFolderName
		GEODE_AS_STATIC_FUNCTION(setFolderName) 
	#endif

	#ifndef GEODE_STATICS_setIntForKey
		#define GEODE_STATICS_setIntForKey
		GEODE_AS_STATIC_FUNCTION(setIntForKey) 
	#endif

	#ifndef GEODE_STATICS_setLenVal
		#define GEODE_STATICS_setLenVal
		GEODE_AS_STATIC_FUNCTION(setLenVal) 
	#endif

	#ifndef GEODE_STATICS_setLevelFeatured
		#define GEODE_STATICS_setLevelFeatured
		GEODE_AS_STATIC_FUNCTION(setLevelFeatured) 
	#endif

	#ifndef GEODE_STATICS_setLevelStars
		#define GEODE_STATICS_setLevelStars
		GEODE_AS_STATIC_FUNCTION(setLevelStars) 
	#endif

	#ifndef GEODE_STATICS_specialFromLikeKey
		#define GEODE_STATICS_specialFromLikeKey
		GEODE_AS_STATIC_FUNCTION(specialFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_storeCommentsResult
		#define GEODE_STATICS_storeCommentsResult
		GEODE_AS_STATIC_FUNCTION(storeCommentsResult) 
	#endif

	#ifndef GEODE_STATICS_storeDailyLevelState
		#define GEODE_STATICS_storeDailyLevelState
		GEODE_AS_STATIC_FUNCTION(storeDailyLevelState) 
	#endif

	#ifndef GEODE_STATICS_storeFriendRequest
		#define GEODE_STATICS_storeFriendRequest
		GEODE_AS_STATIC_FUNCTION(storeFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_storeSearchResult
		#define GEODE_STATICS_storeSearchResult
		GEODE_AS_STATIC_FUNCTION(storeSearchResult) 
	#endif

	#ifndef GEODE_STATICS_storeUserInfo
		#define GEODE_STATICS_storeUserInfo
		GEODE_AS_STATIC_FUNCTION(storeUserInfo) 
	#endif

	#ifndef GEODE_STATICS_storeUserMessage
		#define GEODE_STATICS_storeUserMessage
		GEODE_AS_STATIC_FUNCTION(storeUserMessage) 
	#endif

	#ifndef GEODE_STATICS_storeUserMessageReply
		#define GEODE_STATICS_storeUserMessageReply
		GEODE_AS_STATIC_FUNCTION(storeUserMessageReply) 
	#endif

	#ifndef GEODE_STATICS_storeUserName
		#define GEODE_STATICS_storeUserName
		GEODE_AS_STATIC_FUNCTION(storeUserName) 
	#endif

	#ifndef GEODE_STATICS_storeUserNames
		#define GEODE_STATICS_storeUserNames
		GEODE_AS_STATIC_FUNCTION(storeUserNames) 
	#endif

	#ifndef GEODE_STATICS_submitUserInfo
		#define GEODE_STATICS_submitUserInfo
		GEODE_AS_STATIC_FUNCTION(submitUserInfo) 
	#endif

	#ifndef GEODE_STATICS_suggestLevelStars
		#define GEODE_STATICS_suggestLevelStars
		GEODE_AS_STATIC_FUNCTION(suggestLevelStars) 
	#endif

	#ifndef GEODE_STATICS_tryGetUsername
		#define GEODE_STATICS_tryGetUsername
		GEODE_AS_STATIC_FUNCTION(tryGetUsername) 
	#endif

	#ifndef GEODE_STATICS_typeFromCommentKey
		#define GEODE_STATICS_typeFromCommentKey
		GEODE_AS_STATIC_FUNCTION(typeFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_typeFromLikeKey
		#define GEODE_STATICS_typeFromLikeKey
		GEODE_AS_STATIC_FUNCTION(typeFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_unblockUser
		#define GEODE_STATICS_unblockUser
		GEODE_AS_STATIC_FUNCTION(unblockUser) 
	#endif

	#ifndef GEODE_STATICS_unfollowUser
		#define GEODE_STATICS_unfollowUser
		GEODE_AS_STATIC_FUNCTION(unfollowUser) 
	#endif

	#ifndef GEODE_STATICS_updateDescription
		#define GEODE_STATICS_updateDescription
		GEODE_AS_STATIC_FUNCTION(updateDescription) 
	#endif

	#ifndef GEODE_STATICS_updateLevel
		#define GEODE_STATICS_updateLevel
		GEODE_AS_STATIC_FUNCTION(updateLevel) 
	#endif

	#ifndef GEODE_STATICS_updateLevelOrders
		#define GEODE_STATICS_updateLevelOrders
		GEODE_AS_STATIC_FUNCTION(updateLevelOrders) 
	#endif

	#ifndef GEODE_STATICS_updateLevelRewards
		#define GEODE_STATICS_updateLevelRewards
		GEODE_AS_STATIC_FUNCTION(updateLevelRewards) 
	#endif

	#ifndef GEODE_STATICS_updateSavedLevelList
		#define GEODE_STATICS_updateSavedLevelList
		GEODE_AS_STATIC_FUNCTION(updateSavedLevelList) 
	#endif

	#ifndef GEODE_STATICS_updateUsernames
		#define GEODE_STATICS_updateUsernames
		GEODE_AS_STATIC_FUNCTION(updateUsernames) 
	#endif

	#ifndef GEODE_STATICS_updateUserScore
		#define GEODE_STATICS_updateUserScore
		GEODE_AS_STATIC_FUNCTION(updateUserScore) 
	#endif

	#ifndef GEODE_STATICS_uploadAccountComment
		#define GEODE_STATICS_uploadAccountComment
		GEODE_AS_STATIC_FUNCTION(uploadAccountComment) 
	#endif

	#ifndef GEODE_STATICS_uploadComment
		#define GEODE_STATICS_uploadComment
		GEODE_AS_STATIC_FUNCTION(uploadComment) 
	#endif

	#ifndef GEODE_STATICS_uploadFriendRequest
		#define GEODE_STATICS_uploadFriendRequest
		GEODE_AS_STATIC_FUNCTION(uploadFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_uploadLevel
		#define GEODE_STATICS_uploadLevel
		GEODE_AS_STATIC_FUNCTION(uploadLevel) 
	#endif

	#ifndef GEODE_STATICS_uploadLevelComment
		#define GEODE_STATICS_uploadLevelComment
		GEODE_AS_STATIC_FUNCTION(uploadLevelComment) 
	#endif

	#ifndef GEODE_STATICS_uploadLevelList
		#define GEODE_STATICS_uploadLevelList
		GEODE_AS_STATIC_FUNCTION(uploadLevelList) 
	#endif

	#ifndef GEODE_STATICS_uploadUserMessage
		#define GEODE_STATICS_uploadUserMessage
		GEODE_AS_STATIC_FUNCTION(uploadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_userIDForAccountID
		#define GEODE_STATICS_userIDForAccountID
		GEODE_AS_STATIC_FUNCTION(userIDForAccountID) 
	#endif

	#ifndef GEODE_STATICS_userInfoForAccountID
		#define GEODE_STATICS_userInfoForAccountID
		GEODE_AS_STATIC_FUNCTION(userInfoForAccountID) 
	#endif

	#ifndef GEODE_STATICS_userNameForUserID
		#define GEODE_STATICS_userNameForUserID
		GEODE_AS_STATIC_FUNCTION(userNameForUserID) 
	#endif

	#ifndef GEODE_STATICS_verifyLevelState
		#define GEODE_STATICS_verifyLevelState
		GEODE_AS_STATIC_FUNCTION(verifyLevelState) 
	#endif

	#ifndef GEODE_STATICS_writeSpecialFilters
		#define GEODE_STATICS_writeSpecialFilters
		GEODE_AS_STATIC_FUNCTION(writeSpecialFilters) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameLevelManager> : ModifyBase<ModifyDerive<Der, GameLevelManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameLevelManager>>;
		using ModifyBase<ModifyDerive<Der, GameLevelManager>>::ModifyBase;
		using Base = GameLevelManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf3a00, Optcall, GameLevelManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10be70, Membercall, GameLevelManager, acceptFriendRequest, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8c10, Membercall, GameLevelManager, addDLToActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ca10, Membercall, GameLevelManager, blockUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf96a0, Membercall, GameLevelManager, cleanupDailyLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf5130, Membercall, GameLevelManager, createNewLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf5ac0, Membercall, GameLevelManager, createNewLevelList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8ac0, Membercall, GameLevelManager, createPageInfo, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10a920, Membercall, GameLevelManager, deleteComment, int, CommentType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10b8c0, Membercall, GameLevelManager, deleteFriendRequests, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf58b0, Membercall, GameLevelManager, deleteLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102990, Membercall, GameLevelManager, deleteServerLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff440, Membercall, GameLevelManager, deleteServerLevelList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107880, Membercall, GameLevelManager, deleteUserMessages, GJUserMessage*, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100c20, Membercall, GameLevelManager, downloadLevel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107070, Membercall, GameLevelManager, downloadUserMessage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfa200, Membercall, GameLevelManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e930, Membercall, GameLevelManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf99f0, Membercall, GameLevelManager, followUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108720, Membercall, GameLevelManager, getAccountComments, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb5b0, Optcall, GameLevelManager, getBasePostString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111d40, Membercall, GameLevelManager, getBoolForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1091d0, Membercall, GameLevelManager, getCommentKey, int, int, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf7790, Membercall, GameLevelManager, getCompletedLevels, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ae30, Membercall, GameLevelManager, getFriendRequests, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100860, Membercall, GameLevelManager, getGauntletLevels, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100100, Membercall, GameLevelManager, getGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100080, Membercall, GameLevelManager, getGauntletSearchKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10fd60, Membercall, GameLevelManager, getGJChallenges, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110670, Membercall, GameLevelManager, getGJDailyLevelState, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10f140, Membercall, GameLevelManager, getGJRewards, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x106790, Membercall, GameLevelManager, getGJUserInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf7550, Membercall, GameLevelManager, getHighestLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x104c40, Membercall, GameLevelManager, getLeaderboardScores, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108160, Membercall, GameLevelManager, getLevelComments, int, int, int, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1053a0, Membercall, GameLevelManager, getLevelLeaderboard, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff800, Membercall, GameLevelManager, getLevelLists, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfdd10, Membercall, GameLevelManager, getLevelSaveData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf75a0, Membercall, GameLevelManager, getLowestLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf4d50, Membercall, GameLevelManager, getMainLevel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe120, Membercall, GameLevelManager, getMapPacks, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9e00, Membercall, GameLevelManager, getNextFreeTemplateID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfccb0, Membercall, GameLevelManager, getOnlineLevels, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf89e0, Membercall, GameLevelManager, getPageInfo, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf7f20, Membercall, GameLevelManager, getSavedDailyLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100a40, Membercall, GameLevelManager, getSavedGauntlet, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8060, Membercall, GameLevelManager, getSavedGauntletLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf7df0, Membercall, GameLevelManager, getSavedLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf7e50, Membercall, GameLevelManager, getSavedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf7340, Membercall, GameLevelManager, getSavedLevels, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x109250, Membercall, GameLevelManager, getSplitIntFromKey, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1098a0, Membercall, GameLevelManager, getStoredLevelComments, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8930, Membercall, GameLevelManager, getStoredOnlineLevels, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d820, Membercall, GameLevelManager, getStoredUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8fc0, Membercall, GameLevelManager, getTimeLeft, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x105d80, Membercall, GameLevelManager, getTopArtists, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d2a0, Membercall, GameLevelManager, getUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x106ad0, Membercall, GameLevelManager, getUserMessages, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x106320, Membercall, GameLevelManager, getUsers, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf3e90, Membercall, GameLevelManager, handleIt, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ed90, Membercall, GameLevelManager, hasLikedItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ed10, Membercall, GameLevelManager, hasLikedItemFullCheck, LikeItemType, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107ff0, Membercall, GameLevelManager, invalidateMessages, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10db50, Membercall, GameLevelManager, invalidateRequests, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8b50, Membercall, GameLevelManager, isDLActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9910, Membercall, GameLevelManager, isFollowingUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8e90, Membercall, GameLevelManager, isTimeValid, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x109430, Membercall, GameLevelManager, levelIDFromCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e100, Membercall, GameLevelManager, likeItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9210, Membercall, GameLevelManager, limitSavedLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8d70, Membercall, GameLevelManager, makeTimeStamp, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10eba0, Membercall, GameLevelManager, markItemAsLiked, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102590, Membercall, GameLevelManager, markLevelAsRatedStars, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c080, Membercall, GameLevelManager, onAcceptFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102db0, Membercall, GameLevelManager, onBanUserCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10cc20, Membercall, GameLevelManager, onBlockUserCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ac70, Membercall, GameLevelManager, onDeleteCommentCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10bc60, Membercall, GameLevelManager, onDeleteFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102c10, Membercall, GameLevelManager, onDeleteServerLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff690, Membercall, GameLevelManager, onDeleteServerLevelListCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107c80, Membercall, GameLevelManager, onDeleteUserMessagesCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x101090, Membercall, GameLevelManager, onDownloadLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1071e0, Membercall, GameLevelManager, onDownloadUserMessageCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108890, Membercall, GameLevelManager, onGetAccountCommentsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10afb0, Membercall, GameLevelManager, onGetFriendRequestsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100260, Membercall, GameLevelManager, onGetGauntletsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ffc0, Membercall, GameLevelManager, onGetGJChallengesCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110870, Membercall, GameLevelManager, onGetGJDailyLevelStateCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10f6d0, Membercall, GameLevelManager, onGetGJRewardsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1068f0, Membercall, GameLevelManager, onGetGJUserInfoCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x105050, Membercall, GameLevelManager, onGetLeaderboardScoresCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108440, Membercall, GameLevelManager, onGetLevelCommentsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x105bf0, Membercall, GameLevelManager, onGetLevelLeaderboardCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff9f0, Membercall, GameLevelManager, onGetLevelListsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfde50, Membercall, GameLevelManager, onGetLevelSaveDataCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe280, Membercall, GameLevelManager, onGetMapPacksCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108120, Membercall, GameLevelManager, onGetNewsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfd470, Membercall, GameLevelManager, onGetOnlineLevelsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x105f70, Membercall, GameLevelManager, onGetTopArtistsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d3f0, Membercall, GameLevelManager, onGetUserListCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x106c50, Membercall, GameLevelManager, onGetUserMessagesCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1064b0, Membercall, GameLevelManager, onGetUsersCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e610, Membercall, GameLevelManager, onLikeItemCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1035a0, Membercall, GameLevelManager, onRateDemonCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102410, Membercall, GameLevelManager, onRateStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c4a0, Membercall, GameLevelManager, onReadFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c7a0, Membercall, GameLevelManager, onRemoveFriendCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111410, Membercall, GameLevelManager, onReportLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e9c0, Membercall, GameLevelManager, onRequestUserAccessCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110d90, Membercall, GameLevelManager, onRestoreItemsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x103a00, Membercall, GameLevelManager, onSetLevelFeaturedCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x103860, Membercall, GameLevelManager, onSetLevelStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1030d0, Membercall, GameLevelManager, onSuggestLevelStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d060, Membercall, GameLevelManager, onUnblockUserCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ded0, Membercall, GameLevelManager, onUpdateDescriptionCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x101eb0, Membercall, GameLevelManager, onUpdateLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x104a00, Membercall, GameLevelManager, onUpdateUserScoreCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10a160, Membercall, GameLevelManager, onUploadCommentCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10b6e0, Membercall, GameLevelManager, onUploadFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfc3b0, Membercall, GameLevelManager, onUploadLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff320, Membercall, GameLevelManager, onUploadLevelListCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1076a0, Membercall, GameLevelManager, onUploadUserMessageCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf3a80, Membercall, GameLevelManager, performNetworkTest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf3bf0, Membercall, GameLevelManager, ProcessHttpRequest, gd::string, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x101160, Membercall, GameLevelManager, processOnDownloadLevelCompleted, gd::string, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x103330, Membercall, GameLevelManager, rateDemon, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x101f90, Membercall, GameLevelManager, rateStars, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c2a0, Membercall, GameLevelManager, readFriendRequest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8cc0, Membercall, GameLevelManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c590, Membercall, GameLevelManager, removeFriend, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111310, Membercall, GameLevelManager, reportLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e7c0, Membercall, GameLevelManager, requestUserAccess, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x109030, Membercall, GameLevelManager, resetAccountComments, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10a6e0, Membercall, GameLevelManager, resetCommentTimersForLevelID, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110d30, Membercall, GameLevelManager, resetDailyLevelState, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9130, Membercall, GameLevelManager, resetTimerForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111fa0, Membercall, GameLevelManager, responseToDict, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100b20, Membercall, GameLevelManager, saveGauntlet, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8130, Membercall, GameLevelManager, saveLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6140, Membercall, GameLevelManager, storeUserName, int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110f40, Membercall, GameLevelManager, submitUserInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102ec0, Membercall, GameLevelManager, suggestLevelStars, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6370, Membercall, GameLevelManager, tryGetUsername, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ce50, Membercall, GameLevelManager, unblockUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9b10, Membercall, GameLevelManager, unfollowUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10dc80, Membercall, GameLevelManager, updateDescription, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x101d40, Membercall, GameLevelManager, updateLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf75f0, Membercall, GameLevelManager, updateLevelOrders, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x103ab0, Membercall, GameLevelManager, updateUserScore, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1099d0, Membercall, GameLevelManager, uploadAccountComment, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x109a70, Membercall, GameLevelManager, uploadComment, gd::string, CommentType, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10b440, Membercall, GameLevelManager, uploadFriendRequest, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb760, Membercall, GameLevelManager, uploadLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x109940, Membercall, GameLevelManager, uploadLevelComment, int, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfeac0, Membercall, GameLevelManager, uploadLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107370, Membercall, GameLevelManager, uploadUserMessage, int, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6290, Membercall, GameLevelManager, userNameForUserID, int)
		}
	};
}
