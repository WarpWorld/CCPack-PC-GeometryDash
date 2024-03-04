#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGameLevel : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJGameLevel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLevel, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x113a60
     */
    static GJGameLevel* create();

    /**
     * @note[short] Windows: 0x112680
     */
    static GJGameLevel* create(cocos2d::CCDictionary* p0, bool p1);
	inline static GJGameLevel* createWithCoder(DS_Dictionary* dict) {
		//inlined on windows
		auto level = GJGameLevel::create();
		level->dataLoaded(dict);
		return level;
	}

    /**
     * @note[short] Windows: 0x116e00
     */
    TodoReturn areCoinsVerified();
    
private:
    [[deprecated("GJGameLevel::copyLevelInfo not implemented")]]
    /**
     */
    TodoReturn copyLevelInfo(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0x115060
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("GJGameLevel::demonIconForDifficulty not implemented")]]
    /**
     */
    TodoReturn demonIconForDifficulty(DemonDifficultyType p0);
public:
    
private:
    [[deprecated("GJGameLevel::generateSettingsString not implemented")]]
    /**
     */
    TodoReturn generateSettingsString();
public:

    /**
     * @note[short] Windows: 0x114440
     */
    gd::string getAudioFileName();

    /**
     * @note[short] Windows: 0x114180
     */
    int getAverageDifficulty();

    /**
     * @note[short] Windows: 0x114220
     */
    char const* getCoinKey(int p0);
    
private:
    [[deprecated("GJGameLevel::getLastBuildPageForTab not implemented")]]
    /**
     */
    TodoReturn getLastBuildPageForTab(int p0);
public:

    /**
     * @note[short] Windows: 0x1140c0
     */
    TodoReturn getLengthKey(int p0, bool p1);
    
private:
    [[deprecated("GJGameLevel::getListSnapshot not implemented")]]
    /**
     */
    TodoReturn getListSnapshot();
public:
    
private:
    [[deprecated("GJGameLevel::getNormalPercent not implemented")]]
    /**
     */
    TodoReturn getNormalPercent();
public:
    
private:
    [[deprecated("GJGameLevel::getSongName not implemented")]]
    /**
     */
    TodoReturn getSongName();
public:

    /**
     * @note[short] Windows: 0x116f10
     */
    gd::string getUnpackedLevelDescription();
    
private:
    [[deprecated("GJGameLevel::handleStatsConflict not implemented")]]
    /**
     */
    TodoReturn handleStatsConflict(GJGameLevel* p0);
public:
	inline bool isPlatformer() {
		return m_levelLength == 5;
	}
    
private:
    [[deprecated("GJGameLevel::lengthKeyToString not implemented")]]
    /**
     */
    TodoReturn lengthKeyToString(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::levelWasAltered not implemented")]]
    /**
     */
    TodoReturn levelWasAltered();
public:
    
private:
    [[deprecated("GJGameLevel::levelWasSubmitted not implemented")]]
    /**
     */
    TodoReturn levelWasSubmitted();
public:
    
private:
    [[deprecated("GJGameLevel::parseSettingsString not implemented")]]
    /**
     */
    TodoReturn parseSettingsString(gd::string p0);
public:
    
private:
    [[deprecated("GJGameLevel::saveNewScore not implemented")]]
    /**
     */
    TodoReturn saveNewScore(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x113d70
     */
    TodoReturn savePercentage(int p0, bool p1, int p2, int p3, bool p4);
    
private:
    [[deprecated("GJGameLevel::scoreStringToVector not implemented")]]
    /**
     */
    TodoReturn scoreStringToVector(gd::string& p0, gd::vector<int>& p1);
public:
    
private:
    [[deprecated("GJGameLevel::scoreVectorToString not implemented")]]
    /**
     */
    TodoReturn scoreVectorToString(gd::vector<int>& p0, int p1);
public:
    
private:
    [[deprecated("GJGameLevel::setAccountID not implemented")]]
    /**
     */
    void setAccountID(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setAttempts not implemented")]]
    /**
     */
    void setAttempts(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setAttemptTime not implemented")]]
    /**
     */
    void setAttemptTime(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setClicks not implemented")]]
    /**
     */
    void setClicks(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setCoinsVerified not implemented")]]
    /**
     */
    void setCoinsVerified(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setDailyID not implemented")]]
    /**
     */
    void setDailyID(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setDemon not implemented")]]
    /**
     */
    void setDemon(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setJumps not implemented")]]
    /**
     */
    void setJumps(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setLastBuildPageForTab not implemented")]]
    /**
     */
    void setLastBuildPageForTab(int p0, int p1);
public:
    
private:
    [[deprecated("GJGameLevel::setLevelID not implemented")]]
    /**
     */
    void setLevelID(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setNewNormalPercent not implemented")]]
    /**
     */
    void setNewNormalPercent(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setNewNormalPercent2 not implemented")]]
    /**
     */
    void setNewNormalPercent2(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setNormalPercent not implemented")]]
    /**
     */
    void setNormalPercent(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setObjectCount not implemented")]]
    /**
     */
    void setObjectCount(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setOriginalLevel not implemented")]]
    /**
     */
    void setOriginalLevel(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setPassword not implemented")]]
    /**
     */
    void setPassword(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::setStars not implemented")]]
    /**
     */
    void setStars(int p0);
public:
    
private:
    [[deprecated("GJGameLevel::storeNewLocalScore not implemented")]]
    /**
     */
    TodoReturn storeNewLocalScore(int p0, int p1);
public:
    
private:
    [[deprecated("GJGameLevel::unverifyCoins not implemented")]]
    /**
     */
    TodoReturn unverifyCoins();
public:

    /**
     * @note[short] Windows: 0x1160d0
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("GJGameLevel::canEncode not implemented")]]
    /**
     */
    virtual bool canEncode();
public:

    /**
     * @note[short] Windows: 0x113b00
     */
    virtual bool init();
    cocos2d::CCDictionary* m_lastBuildSave;
    geode::SeedValueRSV m_levelID;
    gd::string m_levelName;
    gd::string m_levelDesc;
    gd::string m_levelString;
    gd::string m_creatorName;
    gd::string m_recordString;
    gd::string m_uploadDate;
    gd::string m_updateDate;
    gd::string m_unkString1;
    gd::string m_unkString2;
    cocos2d::CCPoint m_unkPoint;
    geode::SeedValueRSV m_userID;
    geode::SeedValueRSV m_accountID;
    GJDifficulty m_difficulty;
    int m_audioTrack;
    int m_songID;
    int m_levelRev;
    bool m_unlisted;
    bool m_friendsOnly;
    geode::SeedValueRSV m_objectCount;
    int m_levelIndex;
    int m_ratings;
    int m_ratingsSum;
    int m_downloads;
    bool m_isEditable;
    bool m_gauntletLevel;
    bool m_gauntletLevel2;
    int m_workingTime;
    int m_workingTime2;
    bool m_lowDetailMode;
    bool m_lowDetailModeToggled;
    bool m_selected;
    bool m_localOrSaved;
    bool m_disableShake;
    geode::SeedValueRS m_isVerified;
    bool m_isVerifiedRaw;
    bool m_isUploaded;
    bool m_hasBeenModified;
    int m_levelVersion;
    int m_gameVersion;
    geode::SeedValueRSV m_attempts;
    geode::SeedValueRSV m_jumps;
    geode::SeedValueRSV m_clicks;
    geode::SeedValueRSV m_attemptTime;
    int m_chk;
    bool m_isChkValid;
    bool m_isCompletionLegitimate;
    geode::SeedValueVSR m_normalPercent;
    geode::SeedValueRSV m_orbCompletion;
    geode::SeedValueRSV m_newNormalPercent2;
    int m_practicePercent;
    int m_likes;
    int m_dislikes;
    int m_levelLength;
    int m_featured;
    int m_isEpic;
    bool m_levelFavorited;
    int m_levelFolder;
    geode::SeedValueRSV m_dailyID;
    geode::SeedValueRSV m_demon;
    int m_demonDifficulty;
    geode::SeedValueRSV m_stars;
    bool m_autoLevel;
    int m_coins;
    geode::SeedValueRSV m_coinsVerified;
    geode::SeedValueRS m_password;
    geode::SeedValueRSV m_originalLevel;
    bool m_twoPlayerMode;
    int m_failedPasswordAttempts;
    geode::SeedValueRSV m_firstCoinVerified;
    geode::SeedValueRSV m_secondCoinVerified;
    geode::SeedValueRSV m_thirdCoinVerified;
    int m_starsRequested;
    bool m_showedSongWarning;
    int m_starRatings;
    int m_starRatingsSum;
    int m_maxStarRatings;
    int m_minStarRatings;
    int m_demonVotes;
    int m_rateStars;
    int m_rateFeature;
    gd::string m_rateUser;
    bool m_dontSave;
    bool m_levelNotDownloaded;
    int m_requiredCoins;
    bool m_isUnlocked;
    cocos2d::CCPoint m_lastCameraPos;
    float m_fastEditorZoom;
    int m_lastBuildTab;
    int m_lastBuildPage;
    int m_lastBuildGroupID;
    GJLevelType m_levelType;
    int m_M_ID;
    gd::string m_tempName;
    gd::string m_capacityString;
    bool m_highObjectsEnabled;
    bool m_unlimitedObjectsEnabled;
    gd::string m_personalBests;
    int m_timestamp;
    int m_unkInt;
    gd::string m_songIDs;
    gd::string m_sfxIDs;
    int m_54;
    int m_bestTime;
    int m_bestPoints;
    int m_k111;
    gd::string m_unkString3;
    gd::string m_unkString4;
};
