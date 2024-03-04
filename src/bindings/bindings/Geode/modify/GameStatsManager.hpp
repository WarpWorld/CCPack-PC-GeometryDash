#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameStatsManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_accountIDForIcon
		#define GEODE_STATICS_accountIDForIcon
		GEODE_AS_STATIC_FUNCTION(accountIDForIcon) 
	#endif

	#ifndef GEODE_STATICS_addSimpleSpecialChestReward
		#define GEODE_STATICS_addSimpleSpecialChestReward
		GEODE_AS_STATIC_FUNCTION(addSimpleSpecialChestReward) 
	#endif

	#ifndef GEODE_STATICS_addSpecialRewardDescription
		#define GEODE_STATICS_addSpecialRewardDescription
		GEODE_AS_STATIC_FUNCTION(addSpecialRewardDescription) 
	#endif

	#ifndef GEODE_STATICS_addStoreItem
		#define GEODE_STATICS_addStoreItem
		GEODE_AS_STATIC_FUNCTION(addStoreItem) 
	#endif

	#ifndef GEODE_STATICS_areChallengesLoaded
		#define GEODE_STATICS_areChallengesLoaded
		GEODE_AS_STATIC_FUNCTION(areChallengesLoaded) 
	#endif

	#ifndef GEODE_STATICS_areRewardsLoaded
		#define GEODE_STATICS_areRewardsLoaded
		GEODE_AS_STATIC_FUNCTION(areRewardsLoaded) 
	#endif

	#ifndef GEODE_STATICS_awardCurrencyForLevel
		#define GEODE_STATICS_awardCurrencyForLevel
		GEODE_AS_STATIC_FUNCTION(awardCurrencyForLevel) 
	#endif

	#ifndef GEODE_STATICS_awardDiamondsForLevel
		#define GEODE_STATICS_awardDiamondsForLevel
		GEODE_AS_STATIC_FUNCTION(awardDiamondsForLevel) 
	#endif

	#ifndef GEODE_STATICS_awardSecretKey
		#define GEODE_STATICS_awardSecretKey
		GEODE_AS_STATIC_FUNCTION(awardSecretKey) 
	#endif

	#ifndef GEODE_STATICS_checkAchievement
		#define GEODE_STATICS_checkAchievement
		GEODE_AS_STATIC_FUNCTION(checkAchievement) 
	#endif

	#ifndef GEODE_STATICS_checkCoinAchievement
		#define GEODE_STATICS_checkCoinAchievement
		GEODE_AS_STATIC_FUNCTION(checkCoinAchievement) 
	#endif

	#ifndef GEODE_STATICS_checkCoinsForLevel
		#define GEODE_STATICS_checkCoinsForLevel
		GEODE_AS_STATIC_FUNCTION(checkCoinsForLevel) 
	#endif

	#ifndef GEODE_STATICS_claimListReward
		#define GEODE_STATICS_claimListReward
		GEODE_AS_STATIC_FUNCTION(claimListReward) 
	#endif

	#ifndef GEODE_STATICS_collectReward
		#define GEODE_STATICS_collectReward
		GEODE_AS_STATIC_FUNCTION(collectReward) 
	#endif

	#ifndef GEODE_STATICS_collectVideoReward
		#define GEODE_STATICS_collectVideoReward
		GEODE_AS_STATIC_FUNCTION(collectVideoReward) 
	#endif

	#ifndef GEODE_STATICS_completedChallenge
		#define GEODE_STATICS_completedChallenge
		GEODE_AS_STATIC_FUNCTION(completedChallenge) 
	#endif

	#ifndef GEODE_STATICS_completedDailyLevel
		#define GEODE_STATICS_completedDailyLevel
		GEODE_AS_STATIC_FUNCTION(completedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_completedDemonLevel
		#define GEODE_STATICS_completedDemonLevel
		GEODE_AS_STATIC_FUNCTION(completedDemonLevel) 
	#endif

	#ifndef GEODE_STATICS_completedLevel
		#define GEODE_STATICS_completedLevel
		GEODE_AS_STATIC_FUNCTION(completedLevel) 
	#endif

	#ifndef GEODE_STATICS_completedMapPack
		#define GEODE_STATICS_completedMapPack
		GEODE_AS_STATIC_FUNCTION(completedMapPack) 
	#endif

	#ifndef GEODE_STATICS_completedStarLevel
		#define GEODE_STATICS_completedStarLevel
		GEODE_AS_STATIC_FUNCTION(completedStarLevel) 
	#endif

	#ifndef GEODE_STATICS_countSecretChests
		#define GEODE_STATICS_countSecretChests
		GEODE_AS_STATIC_FUNCTION(countSecretChests) 
	#endif

	#ifndef GEODE_STATICS_countUnlockedSecretChests
		#define GEODE_STATICS_countUnlockedSecretChests
		GEODE_AS_STATIC_FUNCTION(countUnlockedSecretChests) 
	#endif

	#ifndef GEODE_STATICS_createSecretChestItems
		#define GEODE_STATICS_createSecretChestItems
		GEODE_AS_STATIC_FUNCTION(createSecretChestItems) 
	#endif

	#ifndef GEODE_STATICS_createSecretChestRewards
		#define GEODE_STATICS_createSecretChestRewards
		GEODE_AS_STATIC_FUNCTION(createSecretChestRewards) 
	#endif

	#ifndef GEODE_STATICS_createSpecialChestItems
		#define GEODE_STATICS_createSpecialChestItems
		GEODE_AS_STATIC_FUNCTION(createSpecialChestItems) 
	#endif

	#ifndef GEODE_STATICS_createStoreItems
		#define GEODE_STATICS_createStoreItems
		GEODE_AS_STATIC_FUNCTION(createStoreItems) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_generateItemUnlockableData
		#define GEODE_STATICS_generateItemUnlockableData
		GEODE_AS_STATIC_FUNCTION(generateItemUnlockableData) 
	#endif

	#ifndef GEODE_STATICS_getAwardedCurrencyForLevel
		#define GEODE_STATICS_getAwardedCurrencyForLevel
		GEODE_AS_STATIC_FUNCTION(getAwardedCurrencyForLevel) 
	#endif

	#ifndef GEODE_STATICS_getAwardedDiamondsForLevel
		#define GEODE_STATICS_getAwardedDiamondsForLevel
		GEODE_AS_STATIC_FUNCTION(getAwardedDiamondsForLevel) 
	#endif

	#ifndef GEODE_STATICS_getBaseCurrency
		#define GEODE_STATICS_getBaseCurrency
		GEODE_AS_STATIC_FUNCTION(getBaseCurrency) 
	#endif

	#ifndef GEODE_STATICS_getBaseCurrencyForLevel
		#define GEODE_STATICS_getBaseCurrencyForLevel
		GEODE_AS_STATIC_FUNCTION(getBaseCurrencyForLevel) 
	#endif

	#ifndef GEODE_STATICS_getBaseDiamonds
		#define GEODE_STATICS_getBaseDiamonds
		GEODE_AS_STATIC_FUNCTION(getBaseDiamonds) 
	#endif

	#ifndef GEODE_STATICS_getBonusDiamonds
		#define GEODE_STATICS_getBonusDiamonds
		GEODE_AS_STATIC_FUNCTION(getBonusDiamonds) 
	#endif

	#ifndef GEODE_STATICS_getChallenge
		#define GEODE_STATICS_getChallenge
		GEODE_AS_STATIC_FUNCTION(getChallenge) 
	#endif

	#ifndef GEODE_STATICS_getChallengeKey
		#define GEODE_STATICS_getChallengeKey
		GEODE_AS_STATIC_FUNCTION(getChallengeKey) 
	#endif

	#ifndef GEODE_STATICS_getCollectedCoinsForLevel
		#define GEODE_STATICS_getCollectedCoinsForLevel
		GEODE_AS_STATIC_FUNCTION(getCollectedCoinsForLevel) 
	#endif

	#ifndef GEODE_STATICS_getCompletedMapPacks
		#define GEODE_STATICS_getCompletedMapPacks
		GEODE_AS_STATIC_FUNCTION(getCompletedMapPacks) 
	#endif

	#ifndef GEODE_STATICS_getCurrencyKey
		#define GEODE_STATICS_getCurrencyKey
		GEODE_AS_STATIC_FUNCTION(getCurrencyKey) 
	#endif

	#ifndef GEODE_STATICS_getDailyLevelKey
		#define GEODE_STATICS_getDailyLevelKey
		GEODE_AS_STATIC_FUNCTION(getDailyLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getDemonLevelKey
		#define GEODE_STATICS_getDemonLevelKey
		GEODE_AS_STATIC_FUNCTION(getDemonLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getGauntletRewardKey
		#define GEODE_STATICS_getGauntletRewardKey
		GEODE_AS_STATIC_FUNCTION(getGauntletRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getItemKey
		#define GEODE_STATICS_getItemKey
		GEODE_AS_STATIC_FUNCTION(getItemKey) 
	#endif

	#ifndef GEODE_STATICS_getItemUnlockState
		#define GEODE_STATICS_getItemUnlockState
		GEODE_AS_STATIC_FUNCTION(getItemUnlockState) 
	#endif

	#ifndef GEODE_STATICS_getItemUnlockStateLite
		#define GEODE_STATICS_getItemUnlockStateLite
		GEODE_AS_STATIC_FUNCTION(getItemUnlockStateLite) 
	#endif

	#ifndef GEODE_STATICS_getLevelKey
		#define GEODE_STATICS_getLevelKey
		GEODE_AS_STATIC_FUNCTION(getLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getListRewardKey
		#define GEODE_STATICS_getListRewardKey
		GEODE_AS_STATIC_FUNCTION(getListRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getMapPackKey
		#define GEODE_STATICS_getMapPackKey
		GEODE_AS_STATIC_FUNCTION(getMapPackKey) 
	#endif

	#ifndef GEODE_STATICS_getNextVideoAdReward
		#define GEODE_STATICS_getNextVideoAdReward
		GEODE_AS_STATIC_FUNCTION(getNextVideoAdReward) 
	#endif

	#ifndef GEODE_STATICS_getPathRewardKey
		#define GEODE_STATICS_getPathRewardKey
		GEODE_AS_STATIC_FUNCTION(getPathRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getQueuedChallenge
		#define GEODE_STATICS_getQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(getQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_getRewardForSecretChest
		#define GEODE_STATICS_getRewardForSecretChest
		GEODE_AS_STATIC_FUNCTION(getRewardForSecretChest) 
	#endif

	#ifndef GEODE_STATICS_getRewardForSpecialChest
		#define GEODE_STATICS_getRewardForSpecialChest
		GEODE_AS_STATIC_FUNCTION(getRewardForSpecialChest) 
	#endif

	#ifndef GEODE_STATICS_getRewardItem
		#define GEODE_STATICS_getRewardItem
		GEODE_AS_STATIC_FUNCTION(getRewardItem) 
	#endif

	#ifndef GEODE_STATICS_getRewardKey
		#define GEODE_STATICS_getRewardKey
		GEODE_AS_STATIC_FUNCTION(getRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryQueuedChallenge
		#define GEODE_STATICS_getSecondaryQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(getSecondaryQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_getSecretChestForItem
		#define GEODE_STATICS_getSecretChestForItem
		GEODE_AS_STATIC_FUNCTION(getSecretChestForItem) 
	#endif

	#ifndef GEODE_STATICS_getSecretCoinKey
		#define GEODE_STATICS_getSecretCoinKey
		GEODE_AS_STATIC_FUNCTION(getSecretCoinKey) 
	#endif

	#ifndef GEODE_STATICS_getSpecialChestKeyForItem
		#define GEODE_STATICS_getSpecialChestKeyForItem
		GEODE_AS_STATIC_FUNCTION(getSpecialChestKeyForItem) 
	#endif

	#ifndef GEODE_STATICS_getSpecialRewardDescription
		#define GEODE_STATICS_getSpecialRewardDescription
		GEODE_AS_STATIC_FUNCTION(getSpecialRewardDescription) 
	#endif

	#ifndef GEODE_STATICS_getSpecialUnlockDescription
		#define GEODE_STATICS_getSpecialUnlockDescription
		GEODE_AS_STATIC_FUNCTION(getSpecialUnlockDescription) 
	#endif

	#ifndef GEODE_STATICS_getStarLevelKey
		#define GEODE_STATICS_getStarLevelKey
		GEODE_AS_STATIC_FUNCTION(getStarLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getStat
		#define GEODE_STATICS_getStat
		GEODE_AS_STATIC_FUNCTION(getStat) 
	#endif

	#ifndef GEODE_STATICS_getStatFromKey
		#define GEODE_STATICS_getStatFromKey
		GEODE_AS_STATIC_FUNCTION(getStatFromKey) 
	#endif

	#ifndef GEODE_STATICS_getStoreItem
		#define GEODE_STATICS_getStoreItem
		GEODE_AS_STATIC_FUNCTION(getStoreItem) 
	#endif

	#ifndef GEODE_STATICS_getTotalCollectedCurrency
		#define GEODE_STATICS_getTotalCollectedCurrency
		GEODE_AS_STATIC_FUNCTION(getTotalCollectedCurrency) 
	#endif

	#ifndef GEODE_STATICS_getTotalCollectedDiamonds
		#define GEODE_STATICS_getTotalCollectedDiamonds
		GEODE_AS_STATIC_FUNCTION(getTotalCollectedDiamonds) 
	#endif

	#ifndef GEODE_STATICS_hasClaimedListReward
		#define GEODE_STATICS_hasClaimedListReward
		GEODE_AS_STATIC_FUNCTION(hasClaimedListReward) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedChallenge
		#define GEODE_STATICS_hasCompletedChallenge
		GEODE_AS_STATIC_FUNCTION(hasCompletedChallenge) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedDailyLevel
		#define GEODE_STATICS_hasCompletedDailyLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedDemonLevel
		#define GEODE_STATICS_hasCompletedDemonLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedDemonLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedGauntletLevel
		#define GEODE_STATICS_hasCompletedGauntletLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedGauntletLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedMapPack
		#define GEODE_STATICS_hasCompletedMapPack
		GEODE_AS_STATIC_FUNCTION(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedOnlineLevel
		#define GEODE_STATICS_hasCompletedOnlineLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedOnlineLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedStarLevel
		#define GEODE_STATICS_hasCompletedStarLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedStarLevel) 
	#endif

	#ifndef GEODE_STATICS_hasPendingUserCoin
		#define GEODE_STATICS_hasPendingUserCoin
		GEODE_AS_STATIC_FUNCTION(hasPendingUserCoin) 
	#endif

	#ifndef GEODE_STATICS_hasRewardBeenCollected
		#define GEODE_STATICS_hasRewardBeenCollected
		GEODE_AS_STATIC_FUNCTION(hasRewardBeenCollected) 
	#endif

	#ifndef GEODE_STATICS_hasSecretCoin
		#define GEODE_STATICS_hasSecretCoin
		GEODE_AS_STATIC_FUNCTION(hasSecretCoin) 
	#endif

	#ifndef GEODE_STATICS_hasUserCoin
		#define GEODE_STATICS_hasUserCoin
		GEODE_AS_STATIC_FUNCTION(hasUserCoin) 
	#endif

	#ifndef GEODE_STATICS_incrementActivePath
		#define GEODE_STATICS_incrementActivePath
		GEODE_AS_STATIC_FUNCTION(incrementActivePath) 
	#endif

	#ifndef GEODE_STATICS_incrementChallenge
		#define GEODE_STATICS_incrementChallenge
		GEODE_AS_STATIC_FUNCTION(incrementChallenge) 
	#endif

	#ifndef GEODE_STATICS_incrementStat
		#define GEODE_STATICS_incrementStat
		GEODE_AS_STATIC_FUNCTION(incrementStat) 
	#endif

	#ifndef GEODE_STATICS_isGauntletChestUnlocked
		#define GEODE_STATICS_isGauntletChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isGauntletChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isItemEnabled
		#define GEODE_STATICS_isItemEnabled
		GEODE_AS_STATIC_FUNCTION(isItemEnabled) 
	#endif

	#ifndef GEODE_STATICS_isItemUnlocked
		#define GEODE_STATICS_isItemUnlocked
		GEODE_AS_STATIC_FUNCTION(isItemUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isPathChestUnlocked
		#define GEODE_STATICS_isPathChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isPathChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isPathUnlocked
		#define GEODE_STATICS_isPathUnlocked
		GEODE_AS_STATIC_FUNCTION(isPathUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isSecretChestUnlocked
		#define GEODE_STATICS_isSecretChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isSecretChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isSecretCoin
		#define GEODE_STATICS_isSecretCoin
		GEODE_AS_STATIC_FUNCTION(isSecretCoin) 
	#endif

	#ifndef GEODE_STATICS_isSecretCoinValid
		#define GEODE_STATICS_isSecretCoinValid
		GEODE_AS_STATIC_FUNCTION(isSecretCoinValid) 
	#endif

	#ifndef GEODE_STATICS_isSpecialChestLiteUnlockable
		#define GEODE_STATICS_isSpecialChestLiteUnlockable
		GEODE_AS_STATIC_FUNCTION(isSpecialChestLiteUnlockable) 
	#endif

	#ifndef GEODE_STATICS_isSpecialChestUnlocked
		#define GEODE_STATICS_isSpecialChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isSpecialChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isStoreItemUnlocked
		#define GEODE_STATICS_isStoreItemUnlocked
		GEODE_AS_STATIC_FUNCTION(isStoreItemUnlocked) 
	#endif

	#ifndef GEODE_STATICS_keyCostForSecretChest
		#define GEODE_STATICS_keyCostForSecretChest
		GEODE_AS_STATIC_FUNCTION(keyCostForSecretChest) 
	#endif

	#ifndef GEODE_STATICS_logCoins
		#define GEODE_STATICS_logCoins
		GEODE_AS_STATIC_FUNCTION(logCoins) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsCompletedAndClaimed
		#define GEODE_STATICS_markLevelAsCompletedAndClaimed
		GEODE_AS_STATIC_FUNCTION(markLevelAsCompletedAndClaimed) 
	#endif

	#ifndef GEODE_STATICS_postLoadGameStats
		#define GEODE_STATICS_postLoadGameStats
		GEODE_AS_STATIC_FUNCTION(postLoadGameStats) 
	#endif

	#ifndef GEODE_STATICS_preProcessReward
		#define GEODE_STATICS_preProcessReward
		GEODE_AS_STATIC_FUNCTION(preProcessReward) 
	#endif

	#ifndef GEODE_STATICS_preSaveGameStats
		#define GEODE_STATICS_preSaveGameStats
		GEODE_AS_STATIC_FUNCTION(preSaveGameStats) 
	#endif

	#ifndef GEODE_STATICS_processChallengeQueue
		#define GEODE_STATICS_processChallengeQueue
		GEODE_AS_STATIC_FUNCTION(processChallengeQueue) 
	#endif

	#ifndef GEODE_STATICS_purchaseItem
		#define GEODE_STATICS_purchaseItem
		GEODE_AS_STATIC_FUNCTION(purchaseItem) 
	#endif

	#ifndef GEODE_STATICS_recountSpecialStats
		#define GEODE_STATICS_recountSpecialStats
		GEODE_AS_STATIC_FUNCTION(recountSpecialStats) 
	#endif

	#ifndef GEODE_STATICS_recountUserCoins
		#define GEODE_STATICS_recountUserCoins
		GEODE_AS_STATIC_FUNCTION(recountUserCoins) 
	#endif

	#ifndef GEODE_STATICS_registerRewardsFromItem
		#define GEODE_STATICS_registerRewardsFromItem
		GEODE_AS_STATIC_FUNCTION(registerRewardsFromItem) 
	#endif

	#ifndef GEODE_STATICS_removeChallenge
		#define GEODE_STATICS_removeChallenge
		GEODE_AS_STATIC_FUNCTION(removeChallenge) 
	#endif

	#ifndef GEODE_STATICS_removeErrorFromSpecialChests
		#define GEODE_STATICS_removeErrorFromSpecialChests
		GEODE_AS_STATIC_FUNCTION(removeErrorFromSpecialChests) 
	#endif

	#ifndef GEODE_STATICS_removeQueuedChallenge
		#define GEODE_STATICS_removeQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(removeQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_removeQueuedSecondaryChallenge
		#define GEODE_STATICS_removeQueuedSecondaryChallenge
		GEODE_AS_STATIC_FUNCTION(removeQueuedSecondaryChallenge) 
	#endif

	#ifndef GEODE_STATICS_resetChallengeTimer
		#define GEODE_STATICS_resetChallengeTimer
		GEODE_AS_STATIC_FUNCTION(resetChallengeTimer) 
	#endif

	#ifndef GEODE_STATICS_resetPreSync
		#define GEODE_STATICS_resetPreSync
		GEODE_AS_STATIC_FUNCTION(resetPreSync) 
	#endif

	#ifndef GEODE_STATICS_resetSpecialStatAchievements
		#define GEODE_STATICS_resetSpecialStatAchievements
		GEODE_AS_STATIC_FUNCTION(resetSpecialStatAchievements) 
	#endif

	#ifndef GEODE_STATICS_resetUserCoins
		#define GEODE_STATICS_resetUserCoins
		GEODE_AS_STATIC_FUNCTION(resetUserCoins) 
	#endif

	#ifndef GEODE_STATICS_restorePostSync
		#define GEODE_STATICS_restorePostSync
		GEODE_AS_STATIC_FUNCTION(restorePostSync) 
	#endif

	#ifndef GEODE_STATICS_setAwardedBonusKeys
		#define GEODE_STATICS_setAwardedBonusKeys
		GEODE_AS_STATIC_FUNCTION(setAwardedBonusKeys) 
	#endif

	#ifndef GEODE_STATICS_setStarsForMapPack
		#define GEODE_STATICS_setStarsForMapPack
		GEODE_AS_STATIC_FUNCTION(setStarsForMapPack) 
	#endif

	#ifndef GEODE_STATICS_setStat
		#define GEODE_STATICS_setStat
		GEODE_AS_STATIC_FUNCTION(setStat) 
	#endif

	#ifndef GEODE_STATICS_setStatIfHigher
		#define GEODE_STATICS_setStatIfHigher
		GEODE_AS_STATIC_FUNCTION(setStatIfHigher) 
	#endif

	#ifndef GEODE_STATICS_setupIconCredits
		#define GEODE_STATICS_setupIconCredits
		GEODE_AS_STATIC_FUNCTION(setupIconCredits) 
	#endif

	#ifndef GEODE_STATICS_shopTypeForItemID
		#define GEODE_STATICS_shopTypeForItemID
		GEODE_AS_STATIC_FUNCTION(shopTypeForItemID) 
	#endif

	#ifndef GEODE_STATICS_shouldAwardSecretKey
		#define GEODE_STATICS_shouldAwardSecretKey
		GEODE_AS_STATIC_FUNCTION(shouldAwardSecretKey) 
	#endif

	#ifndef GEODE_STATICS_starsForMapPack
		#define GEODE_STATICS_starsForMapPack
		GEODE_AS_STATIC_FUNCTION(starsForMapPack) 
	#endif

	#ifndef GEODE_STATICS_storeChallenge
		#define GEODE_STATICS_storeChallenge
		GEODE_AS_STATIC_FUNCTION(storeChallenge) 
	#endif

	#ifndef GEODE_STATICS_storeChallengeTime
		#define GEODE_STATICS_storeChallengeTime
		GEODE_AS_STATIC_FUNCTION(storeChallengeTime) 
	#endif

	#ifndef GEODE_STATICS_storePendingUserCoin
		#define GEODE_STATICS_storePendingUserCoin
		GEODE_AS_STATIC_FUNCTION(storePendingUserCoin) 
	#endif

	#ifndef GEODE_STATICS_storeQueuedChallenge
		#define GEODE_STATICS_storeQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(storeQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_storeRewardState
		#define GEODE_STATICS_storeRewardState
		GEODE_AS_STATIC_FUNCTION(storeRewardState) 
	#endif

	#ifndef GEODE_STATICS_storeSecondaryQueuedChallenge
		#define GEODE_STATICS_storeSecondaryQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(storeSecondaryQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_storeSecretCoin
		#define GEODE_STATICS_storeSecretCoin
		GEODE_AS_STATIC_FUNCTION(storeSecretCoin) 
	#endif

	#ifndef GEODE_STATICS_storeUserCoin
		#define GEODE_STATICS_storeUserCoin
		GEODE_AS_STATIC_FUNCTION(storeUserCoin) 
	#endif

	#ifndef GEODE_STATICS_tempClear
		#define GEODE_STATICS_tempClear
		GEODE_AS_STATIC_FUNCTION(tempClear) 
	#endif

	#ifndef GEODE_STATICS_toggleEnableItem
		#define GEODE_STATICS_toggleEnableItem
		GEODE_AS_STATIC_FUNCTION(toggleEnableItem) 
	#endif

	#ifndef GEODE_STATICS_trySelectActivePath
		#define GEODE_STATICS_trySelectActivePath
		GEODE_AS_STATIC_FUNCTION(trySelectActivePath) 
	#endif

	#ifndef GEODE_STATICS_uncompleteLevel
		#define GEODE_STATICS_uncompleteLevel
		GEODE_AS_STATIC_FUNCTION(uncompleteLevel) 
	#endif

	#ifndef GEODE_STATICS_unlockGauntletChest
		#define GEODE_STATICS_unlockGauntletChest
		GEODE_AS_STATIC_FUNCTION(unlockGauntletChest) 
	#endif

	#ifndef GEODE_STATICS_unlockPathChest
		#define GEODE_STATICS_unlockPathChest
		GEODE_AS_STATIC_FUNCTION(unlockPathChest) 
	#endif

	#ifndef GEODE_STATICS_unlockSecretChest
		#define GEODE_STATICS_unlockSecretChest
		GEODE_AS_STATIC_FUNCTION(unlockSecretChest) 
	#endif

	#ifndef GEODE_STATICS_unlockSpecialChest
		#define GEODE_STATICS_unlockSpecialChest
		GEODE_AS_STATIC_FUNCTION(unlockSpecialChest) 
	#endif

	#ifndef GEODE_STATICS_updateActivePath
		#define GEODE_STATICS_updateActivePath
		GEODE_AS_STATIC_FUNCTION(updateActivePath) 
	#endif

	#ifndef GEODE_STATICS_usernameForAccountID
		#define GEODE_STATICS_usernameForAccountID
		GEODE_AS_STATIC_FUNCTION(usernameForAccountID) 
	#endif

	#ifndef GEODE_STATICS_verifyUserCoins
		#define GEODE_STATICS_verifyUserCoins
		GEODE_AS_STATIC_FUNCTION(verifyUserCoins) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameStatsManager> : ModifyBase<ModifyDerive<Der, GameStatsManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameStatsManager>>;
		using ModifyBase<ModifyDerive<Der, GameStatsManager>>::ModifyBase;
		using Base = GameStatsManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167d90, Optcall, GameStatsManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x179bd0, Membercall, GameStatsManager, addSimpleSpecialChestReward, gd::string, UnlockType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x179e00, Membercall, GameStatsManager, addSpecialRewardDescription, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x169f40, Membercall, GameStatsManager, addStoreItem, int, int, int, int, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172080, Membercall, GameStatsManager, awardCurrencyForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1725a0, Membercall, GameStatsManager, awardDiamondsForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x180040, Membercall, GameStatsManager, awardSecretKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16b0b0, Membercall, GameStatsManager, checkAchievement, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1700b0, Membercall, GameStatsManager, completedDemonLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1701a0, Membercall, GameStatsManager, completedStarLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17a620, Membercall, GameStatsManager, createSecretChestItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17aab0, Membercall, GameStatsManager, createSecretChestRewards, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x176940, Membercall, GameStatsManager, createSpecialChestItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168680, Membercall, GameStatsManager, createStoreItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x180630, Membercall, GameStatsManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1680a0, Membercall, GameStatsManager, generateItemUnlockableData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171eb0, Membercall, GameStatsManager, getAwardedCurrencyForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1723f0, Membercall, GameStatsManager, getAwardedDiamondsForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171d90, Membercall, GameStatsManager, getBaseCurrencyForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173400, Membercall, GameStatsManager, getChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1738f0, Membercall, GameStatsManager, getChallengeKey, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16fa70, Membercall, GameStatsManager, getCollectedCoinsForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171c70, Membercall, GameStatsManager, getCurrencyKey, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173d60, Membercall, GameStatsManager, getDailyLevelKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16fcb0, Membercall, GameStatsManager, getDemonLevelKey, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x179d00, Membercall, GameStatsManager, getGauntletRewardKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1729f0, Membercall, GameStatsManager, getItemKey, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x176730, Membercall, GameStatsManager, getItemUnlockState, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16fb10, Membercall, GameStatsManager, getLevelKey, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16fb80, Membercall, GameStatsManager, getLevelKey, int, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173b70, Membercall, GameStatsManager, getListRewardKey, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17a3d0, Membercall, GameStatsManager, getPathRewardKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1734d0, Membercall, GameStatsManager, getQueuedChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1735a0, Membercall, GameStatsManager, getSecondaryQueuedChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x179c70, Membercall, GameStatsManager, getSpecialChestKeyForItem, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16fd10, Membercall, GameStatsManager, getStarLevelKey, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16adc0, Membercall, GameStatsManager, getStat, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1740d0, Membercall, GameStatsManager, getTotalCollectedCurrency, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173bf0, Membercall, GameStatsManager, hasClaimedListReward, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173970, Membercall, GameStatsManager, hasCompletedChallenge, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173de0, Membercall, GameStatsManager, hasCompletedDailyLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16fe00, Membercall, GameStatsManager, hasCompletedDemonLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16fec0, Membercall, GameStatsManager, hasCompletedStarLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171670, Membercall, GameStatsManager, hasPendingUserCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1717e0, Membercall, GameStatsManager, hasSecretCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171500, Membercall, GameStatsManager, hasUserCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a4f0, Membercall, GameStatsManager, incrementActivePath, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173670, Membercall, GameStatsManager, incrementChallenge, GJChallengeType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a250, Membercall, GameStatsManager, incrementStat, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1767f0, Membercall, GameStatsManager, isItemEnabled, UnlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x176570, Membercall, GameStatsManager, isItemUnlocked, UnlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17a4d0, Membercall, GameStatsManager, isPathChestUnlocked, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17a7c0, Membercall, GameStatsManager, isSecretChestUnlocked, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17a050, Membercall, GameStatsManager, isSpecialChestUnlocked, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a010, Membercall, GameStatsManager, isStoreItemUnlocked, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17a9b0, Membercall, GameStatsManager, keyCostForSecretChest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x181810, Membercall, GameStatsManager, postLoadGameStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172c80, Membercall, GameStatsManager, preProcessReward, GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1819d0, Membercall, GameStatsManager, preSaveGameStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173b10, Membercall, GameStatsManager, processChallengeQueue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a0f0, Membercall, GameStatsManager, purchaseItem, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x174ec0, Membercall, GameStatsManager, recountSpecialStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17fee0, Membercall, GameStatsManager, registerRewardsFromItem, GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172ff0, Membercall, GameStatsManager, removeChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173190, Membercall, GameStatsManager, removeQueuedChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173330, Membercall, GameStatsManager, removeQueuedSecondaryChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16af10, Membercall, GameStatsManager, setStat, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15e8d0, Membercall, GameStatsManager, setupIconCredits, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172f20, Membercall, GameStatsManager, storeChallenge, int, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172ea0, Membercall, GameStatsManager, storeChallengeTime, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1730c0, Membercall, GameStatsManager, storeQueuedChallenge, int, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173260, Membercall, GameStatsManager, storeSecondaryQueuedChallenge, int, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x176890, Membercall, GameStatsManager, toggleEnableItem, UnlockType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a350, Membercall, GameStatsManager, trySelectActivePath, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17a8a0, Membercall, GameStatsManager, unlockSecretChest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17a130, Membercall, GameStatsManager, unlockSpecialChest, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15e830, Membercall, GameStatsManager, usernameForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168000, Thiscall, GameStatsManager, init, )
		}
	};
}
