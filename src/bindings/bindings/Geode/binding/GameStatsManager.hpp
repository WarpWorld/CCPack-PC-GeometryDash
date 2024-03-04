#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameStatsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameStatsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameStatsManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x167d90
     */
    static GameStatsManager* sharedState();
    
private:
    [[deprecated("GameStatsManager::accountIDForIcon not implemented")]]
    /**
     */
    TodoReturn accountIDForIcon(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x179bd0
     */
    TodoReturn addSimpleSpecialChestReward(gd::string p0, UnlockType p1, int p2, bool p3);

    /**
     * @note[short] Windows: 0x179e00
     */
    TodoReturn addSpecialRewardDescription(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x169f40
     */
    TodoReturn addStoreItem(int p0, int p1, int p2, int p3, ShopType p4);
    
private:
    [[deprecated("GameStatsManager::areChallengesLoaded not implemented")]]
    /**
     */
    TodoReturn areChallengesLoaded();
public:
    
private:
    [[deprecated("GameStatsManager::areRewardsLoaded not implemented")]]
    /**
     */
    TodoReturn areRewardsLoaded();
public:

    /**
     * @note[short] Windows: 0x172080
     */
    TodoReturn awardCurrencyForLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x1725a0
     */
    TodoReturn awardDiamondsForLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x180040
     */
    TodoReturn awardSecretKey();

    /**
     * @note[short] Windows: 0x16b0b0
     */
    TodoReturn checkAchievement(char const* p0);
    
private:
    [[deprecated("GameStatsManager::checkCoinAchievement not implemented")]]
    /**
     */
    TodoReturn checkCoinAchievement(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::checkCoinsForLevel not implemented")]]
    /**
     */
    TodoReturn checkCoinsForLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::claimListReward not implemented")]]
    /**
     */
    TodoReturn claimListReward(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameStatsManager::collectReward not implemented")]]
    /**
     */
    TodoReturn collectReward(GJRewardType p0, GJRewardItem* p1);
public:
    
private:
    [[deprecated("GameStatsManager::collectVideoReward not implemented")]]
    /**
     */
    TodoReturn collectVideoReward(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedChallenge not implemented")]]
    /**
     */
    TodoReturn completedChallenge(GJChallengeItem* p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedDailyLevel not implemented")]]
    /**
     */
    TodoReturn completedDailyLevel(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0x1700b0
     */
    TodoReturn completedDemonLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::completedLevel not implemented")]]
    /**
     */
    TodoReturn completedLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedMapPack not implemented")]]
    /**
     */
    TodoReturn completedMapPack(GJMapPack* p0);
public:

    /**
     * @note[short] Windows: 0x1701a0
     */
    TodoReturn completedStarLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::countSecretChests not implemented")]]
    /**
     */
    TodoReturn countSecretChests(GJRewardType p0);
public:
    
private:
    [[deprecated("GameStatsManager::countUnlockedSecretChests not implemented")]]
    /**
     */
    TodoReturn countUnlockedSecretChests(GJRewardType p0);
public:

    /**
     * @note[short] Windows: 0x17a620
     */
    TodoReturn createSecretChestItems();

    /**
     * @note[short] Windows: 0x17aab0
     */
    TodoReturn createSecretChestRewards();

    /**
     * @note[short] Windows: 0x176940
     */
    TodoReturn createSpecialChestItems();

    /**
     * @note[short] Windows: 0x168680
     */
    TodoReturn createStoreItems();
    
private:
    [[deprecated("GameStatsManager::dataLoaded not implemented")]]
    /**
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
public:

    /**
     * @note[short] Windows: 0x180630
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);
    
private:
    [[deprecated("GameStatsManager::firstSetup not implemented")]]
    /**
     */
    TodoReturn firstSetup();
public:

    /**
     * @note[short] Windows: 0x1680a0
     */
    TodoReturn generateItemUnlockableData();

    /**
     * @note[short] Windows: 0x171eb0
     */
    int getAwardedCurrencyForLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x1723f0
     */
    TodoReturn getAwardedDiamondsForLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::getBaseCurrency not implemented")]]
    /**
     */
    TodoReturn getBaseCurrency(int p0, bool p1, int p2);
public:

    /**
     * @note[short] Windows: 0x171d90
     */
    int getBaseCurrencyForLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::getBaseDiamonds not implemented")]]
    /**
     */
    TodoReturn getBaseDiamonds(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getBonusDiamonds not implemented")]]
    /**
     */
    TodoReturn getBonusDiamonds(int p0);
public:

    /**
     * @note[short] Windows: 0x173400
     */
    GJChallengeItem* getChallenge(int p0);

    /**
     * @note[short] Windows: 0x1738f0
     */
    TodoReturn getChallengeKey(GJChallengeItem* p0);

    /**
     * @note[short] Windows: 0x16fa70
     */
    int getCollectedCoinsForLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::getCompletedMapPacks not implemented")]]
    /**
     */
    TodoReturn getCompletedMapPacks();
public:

    /**
     * @note[short] Windows: 0x171c70
     */
    TodoReturn getCurrencyKey(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x173d60
     */
    TodoReturn getDailyLevelKey(int p0);

    /**
     * @note[short] Windows: 0x16fcb0
     */
    TodoReturn getDemonLevelKey(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x179d00
     */
    TodoReturn getGauntletRewardKey(int p0);

    /**
     * @note[short] Windows: 0x1729f0
     */
    TodoReturn getItemKey(int p0, int p1);

    /**
     * @note[short] Windows: 0x176730
     */
    int getItemUnlockState(int p0, UnlockType p1);
    
private:
    [[deprecated("GameStatsManager::getItemUnlockStateLite not implemented")]]
    /**
     */
    int getItemUnlockStateLite(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x16fb10
     */
    gd::string getLevelKey(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x16fb80
     */
    gd::string getLevelKey(int p0, bool p1, bool p2, bool p3);

    /**
     * @note[short] Windows: 0x173b70
     */
    TodoReturn getListRewardKey(GJLevelList* p0);
    
private:
    [[deprecated("GameStatsManager::getMapPackKey not implemented")]]
    /**
     */
    TodoReturn getMapPackKey(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getNextVideoAdReward not implemented")]]
    /**
     */
    TodoReturn getNextVideoAdReward();
public:

    /**
     * @note[short] Windows: 0x17a3d0
     */
    TodoReturn getPathRewardKey(int p0);

    /**
     * @note[short] Windows: 0x1734d0
     */
    GJChallengeItem* getQueuedChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::getRewardForSecretChest not implemented")]]
    /**
     */
    TodoReturn getRewardForSecretChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardForSpecialChest not implemented")]]
    /**
     */
    TodoReturn getRewardForSpecialChest(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardItem not implemented")]]
    /**
     */
    TodoReturn getRewardItem(GJRewardType p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardKey not implemented")]]
    /**
     */
    TodoReturn getRewardKey(GJRewardType p0, int p1);
public:

    /**
     * @note[short] Windows: 0x1735a0
     */
    GJChallengeItem* getSecondaryQueuedChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::getSecretChestForItem not implemented")]]
    /**
     */
    TodoReturn getSecretChestForItem(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GameStatsManager::getSecretCoinKey not implemented")]]
    /**
     */
    TodoReturn getSecretCoinKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x179c70
     */
    TodoReturn getSpecialChestKeyForItem(int p0, UnlockType p1);
    
private:
    [[deprecated("GameStatsManager::getSpecialRewardDescription not implemented")]]
    /**
     */
    TodoReturn getSpecialRewardDescription(gd::string p0, bool p1);
public:
    
private:
    [[deprecated("GameStatsManager::getSpecialUnlockDescription not implemented")]]
    /**
     */
    TodoReturn getSpecialUnlockDescription(int p0, UnlockType p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x16fd10
     */
    TodoReturn getStarLevelKey(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x16adc0
     */
    int getStat(char const* p0);
    
private:
    [[deprecated("GameStatsManager::getStatFromKey not implemented")]]
    /**
     */
    TodoReturn getStatFromKey(StatKey p0);
public:
    
private:
    [[deprecated("GameStatsManager::getStoreItem not implemented")]]
    /**
     */
    TodoReturn getStoreItem(int p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::getStoreItem not implemented")]]
    /**
     */
    TodoReturn getStoreItem(int p0);
public:

    /**
     * @note[short] Windows: 0x1740d0
     */
    TodoReturn getTotalCollectedCurrency();
    
private:
    [[deprecated("GameStatsManager::getTotalCollectedDiamonds not implemented")]]
    /**
     */
    TodoReturn getTotalCollectedDiamonds();
public:

    /**
     * @note[short] Windows: 0x173bf0
     */
    bool hasClaimedListReward(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x173970
     */
    bool hasCompletedChallenge(GJChallengeItem* p0);

    /**
     * @note[short] Windows: 0x173de0
     */
    bool hasCompletedDailyLevel(int p0);

    /**
     * @note[short] Windows: 0x16fe00
     */
    bool hasCompletedDemonLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::hasCompletedGauntletLevel not implemented")]]
    /**
     */
    bool hasCompletedGauntletLevel(int p0);
public:

    /**
     * @note[short] Out of line
     */
    bool hasCompletedLevel(GJGameLevel* level);

    /**
     * @note[short] Out of line
     */
    bool hasCompletedMainLevel(int levelID);
    
private:
    [[deprecated("GameStatsManager::hasCompletedMapPack not implemented")]]
    /**
     */
    bool hasCompletedMapPack(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::hasCompletedOnlineLevel not implemented")]]
    /**
     */
    bool hasCompletedOnlineLevel(int p0);
public:

    /**
     * @note[short] Windows: 0x16fec0
     */
    bool hasCompletedStarLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x171670
     */
    bool hasPendingUserCoin(char const* p0);
    
private:
    [[deprecated("GameStatsManager::hasRewardBeenCollected not implemented")]]
    /**
     */
    bool hasRewardBeenCollected(GJRewardType p0, int p1);
public:

    /**
     * @note[short] Windows: 0x1717e0
     */
    bool hasSecretCoin(char const* p0);

    /**
     * @note[short] Windows: 0x171500
     */
    bool hasUserCoin(char const* p0);

    /**
     * @note[short] Windows: 0x16a4f0
     */
    TodoReturn incrementActivePath(int p0);

    /**
     * @note[short] Windows: 0x173670
     */
    TodoReturn incrementChallenge(GJChallengeType p0, int p1);

    /**
     * @note[short] Windows: 0x16a250
     */
    TodoReturn incrementStat(char const* p0, int p1);
    
private:
    [[deprecated("GameStatsManager::incrementStat not implemented")]]
    /**
     */
    TodoReturn incrementStat(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::isGauntletChestUnlocked not implemented")]]
    /**
     */
    bool isGauntletChestUnlocked(int p0);
public:

    /**
     * @note[short] Windows: 0x1767f0
     */
    bool isItemEnabled(UnlockType p0, int p1);

    /**
     * @note[short] Windows: 0x176570
     */
    bool isItemUnlocked(UnlockType p0, int p1);

    /**
     * @note[short] Windows: 0x17a4d0
     */
    bool isPathChestUnlocked(int p0);
    
private:
    [[deprecated("GameStatsManager::isPathUnlocked not implemented")]]
    /**
     */
    bool isPathUnlocked(StatKey p0);
public:

    /**
     * @note[short] Windows: 0x17a7c0
     */
    bool isSecretChestUnlocked(int p0);
    
private:
    [[deprecated("GameStatsManager::isSecretCoin not implemented")]]
    /**
     */
    bool isSecretCoin(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::isSecretCoinValid not implemented")]]
    /**
     */
    bool isSecretCoinValid(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::isSpecialChestLiteUnlockable not implemented")]]
    /**
     */
    bool isSpecialChestLiteUnlockable(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x17a050
     */
    bool isSpecialChestUnlocked(gd::string p0);

    /**
     * @note[short] Windows: 0x16a010
     */
    bool isStoreItemUnlocked(int p0);

    /**
     * @note[short] Windows: 0x17a9b0
     */
    TodoReturn keyCostForSecretChest(int p0);
    
private:
    [[deprecated("GameStatsManager::logCoins not implemented")]]
    /**
     */
    TodoReturn logCoins();
public:
    
private:
    [[deprecated("GameStatsManager::markLevelAsCompletedAndClaimed not implemented")]]
    /**
     */
    TodoReturn markLevelAsCompletedAndClaimed(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0x181810
     */
    TodoReturn postLoadGameStats();

    /**
     * @note[short] Windows: 0x172c80
     */
    TodoReturn preProcessReward(GJRewardItem* p0);

    /**
     * @note[short] Windows: 0x1819d0
     */
    TodoReturn preSaveGameStats();

    /**
     * @note[short] Windows: 0x173b10
     */
    TodoReturn processChallengeQueue(int p0);

    /**
     * @note[short] Windows: 0x16a0f0
     */
    TodoReturn purchaseItem(int p0);

    /**
     * @note[short] Windows: 0x174ec0
     */
    TodoReturn recountSpecialStats();
    
private:
    [[deprecated("GameStatsManager::recountUserCoins not implemented")]]
    /**
     */
    TodoReturn recountUserCoins(bool p0);
public:

    /**
     * @note[short] Windows: 0x17fee0
     */
    TodoReturn registerRewardsFromItem(GJRewardItem* p0);

    /**
     * @note[short] Windows: 0x172ff0
     */
    TodoReturn removeChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::removeErrorFromSpecialChests not implemented")]]
    /**
     */
    TodoReturn removeErrorFromSpecialChests();
public:

    /**
     * @note[short] Windows: 0x173190
     */
    TodoReturn removeQueuedChallenge(int p0);

    /**
     * @note[short] Windows: 0x173330
     */
    TodoReturn removeQueuedSecondaryChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::resetChallengeTimer not implemented")]]
    /**
     */
    TodoReturn resetChallengeTimer();
public:
    
private:
    [[deprecated("GameStatsManager::resetPreSync not implemented")]]
    /**
     */
    TodoReturn resetPreSync();
public:
    
private:
    [[deprecated("GameStatsManager::resetSpecialStatAchievements not implemented")]]
    /**
     */
    TodoReturn resetSpecialStatAchievements();
public:
    
private:
    [[deprecated("GameStatsManager::resetUserCoins not implemented")]]
    /**
     */
    TodoReturn resetUserCoins();
public:
    
private:
    [[deprecated("GameStatsManager::restorePostSync not implemented")]]
    /**
     */
    TodoReturn restorePostSync();
public:
    
private:
    [[deprecated("GameStatsManager::setAwardedBonusKeys not implemented")]]
    /**
     */
    void setAwardedBonusKeys(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::setStarsForMapPack not implemented")]]
    /**
     */
    void setStarsForMapPack(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x16af10
     */
    void setStat(char const* p0, int p1);
    
private:
    [[deprecated("GameStatsManager::setStatIfHigher not implemented")]]
    /**
     */
    void setStatIfHigher(char const* p0, int p1);
public:

    /**
     * @note[short] Windows: 0x15e8d0
     */
    TodoReturn setupIconCredits();
    
private:
    [[deprecated("GameStatsManager::shopTypeForItemID not implemented")]]
    /**
     */
    TodoReturn shopTypeForItemID(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::shouldAwardSecretKey not implemented")]]
    /**
     */
    TodoReturn shouldAwardSecretKey();
public:
    
private:
    [[deprecated("GameStatsManager::starsForMapPack not implemented")]]
    /**
     */
    TodoReturn starsForMapPack(int p0);
public:

    /**
     * @note[short] Windows: 0x172f20
     */
    TodoReturn storeChallenge(int p0, GJChallengeItem* p1);

    /**
     * @note[short] Windows: 0x172ea0
     */
    TodoReturn storeChallengeTime(int p0);
    
private:
    [[deprecated("GameStatsManager::storePendingUserCoin not implemented")]]
    /**
     */
    TodoReturn storePendingUserCoin(char const* p0);
public:

    /**
     * @note[short] Windows: 0x1730c0
     */
    TodoReturn storeQueuedChallenge(int p0, GJChallengeItem* p1);
    
private:
    [[deprecated("GameStatsManager::storeRewardState not implemented")]]
    /**
     */
    TodoReturn storeRewardState(GJRewardType p0, int p1, int p2, gd::string p3);
public:

    /**
     * @note[short] Windows: 0x173260
     */
    TodoReturn storeSecondaryQueuedChallenge(int p0, GJChallengeItem* p1);
    
private:
    [[deprecated("GameStatsManager::storeSecretCoin not implemented")]]
    /**
     */
    TodoReturn storeSecretCoin(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::storeUserCoin not implemented")]]
    /**
     */
    TodoReturn storeUserCoin(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::tempClear not implemented")]]
    /**
     */
    TodoReturn tempClear();
public:

    /**
     * @note[short] Windows: 0x176890
     */
    TodoReturn toggleEnableItem(UnlockType p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x16a350
     */
    TodoReturn trySelectActivePath();
    
private:
    [[deprecated("GameStatsManager::uncompleteLevel not implemented")]]
    /**
     */
    TodoReturn uncompleteLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::unlockGauntletChest not implemented")]]
    /**
     */
    TodoReturn unlockGauntletChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::unlockPathChest not implemented")]]
    /**
     */
    TodoReturn unlockPathChest(int p0);
public:

    /**
     * @note[short] Windows: 0x17a8a0
     */
    TodoReturn unlockSecretChest(int p0);

    /**
     * @note[short] Windows: 0x17a130
     */
    TodoReturn unlockSpecialChest(gd::string p0);
    
private:
    [[deprecated("GameStatsManager::updateActivePath not implemented")]]
    /**
     */
    TodoReturn updateActivePath(StatKey p0);
public:

    /**
     * @note[short] Windows: 0x15e830
     */
    TodoReturn usernameForAccountID(int p0);
    
private:
    [[deprecated("GameStatsManager::verifyUserCoins not implemented")]]
    /**
     */
    TodoReturn verifyUserCoins();
public:

    /**
     * @note[short] Windows: 0x168000
     */
    virtual bool init();
    bool m_usePlayerStatsCCDictionary;
    cocos2d::CCString* m_trueString;
    cocos2d::CCDictionary* m_allStoreItems;
    cocos2d::CCDictionary* m_storeItems;
    cocos2d::CCDictionary* m_allTreasureRoomChests;
    cocos2d::CCDictionary* m_allTreasureRoomChestItems;
    cocos2d::CCDictionary* m_allSpecialChests;
    cocos2d::CCDictionary* m_allSpecialChestItems;
    gd::unordered_map<int, gd::string> m_specialRewardDescriptions;
    gd::unordered_map<int, gd::string> m_createSpecialChestItemsMap;
    cocos2d::CCDictionary* m_specialChestsLite;
    cocos2d::CCArray* m_storeItemArray;
    cocos2d::CCDictionary* m_rewardItems;
    cocos2d::CCDictionary* m_dailyChests;
    cocos2d::CCDictionary* m_worldAdvertChests;
    cocos2d::CCDictionary* m_activeChallenges;
    cocos2d::CCDictionary* m_upcomingChallenges;
    double m_challengeTime;
    cocos2d::CCDictionary* m_playerStats;
    gd::unordered_map<int, int> m_playerStatsRandMap;
    gd::unordered_map<int, int> m_playerStatsSeedMap;
    cocos2d::CCDictionary* m_completedLevels;
    cocos2d::CCDictionary* m_verifiedUserCoins;
    cocos2d::CCDictionary* m_pendingUserCoins;
    cocos2d::CCDictionary* m_purchasedItems;
    cocos2d::CCDictionary* m_onlineCurrencyScores;
    cocos2d::CCDictionary* m_mainCurrencyScores;
    cocos2d::CCDictionary* m_gauntletCurrencyScores;
    cocos2d::CCDictionary* m_timelyCurrencyScores;
    cocos2d::CCDictionary* m_onlineStars;
    cocos2d::CCDictionary* m_timelyStars;
    cocos2d::CCDictionary* m_gauntletDiamondScores;
    cocos2d::CCDictionary* m_timelyDiamondScores;
    cocos2d::CCDictionary* m_unusedCurrencyAwardDict;
    cocos2d::CCDictionary* m_challengeDiamonds;
    cocos2d::CCDictionary* m_completedMappacks;
    cocos2d::CCDictionary* m_completedLists;
    cocos2d::CCDictionary* m_weeklyChest;
    cocos2d::CCDictionary* m_treasureRoomChests;
    geode::SeedValueSRV m_bonusKey;
    cocos2d::CCDictionary* m_miscChests;
    cocos2d::CCDictionary* m_enabledItems;
    bool m_unkBoolIncrementStat;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_unlockedItems;
    gd::map<int, UnlockType> m_accountIDForIcon;
    gd::map<int, gd::string> m_usernameForAccountID;
    bool m_GS29;
    int m_activePath;
};
