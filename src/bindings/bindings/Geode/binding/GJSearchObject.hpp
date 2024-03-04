#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSearchObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSearchObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSearchObject, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x11a480
     */
    static GJSearchObject* create(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] Windows: 0x11a380
     */
    static GJSearchObject* create(SearchType searchType, gd::string searchQuery);

    /**
     * @note[short] Windows: 0x11a290
     */
    static GJSearchObject* create(SearchType searchType);

    /**
     * @note[short] Windows: 0x119ee0
     */
    static GJSearchObject* createFromKey(char const* key);

    /**
     * @note[short] Windows: 0x11a7d0
     */
    char const* getKey();
    
private:
    [[deprecated("GJSearchObject::getNextPageKey not implemented")]]
    /**
     */
    char const* getNextPageKey();
public:
    
private:
    [[deprecated("GJSearchObject::getNextPageObject not implemented")]]
    /**
     */
    GJSearchObject* getNextPageObject();
public:

    /**
     * @note[short] Windows: 0x11aa90
     */
    GJSearchObject* getPageObject(int page);
    
private:
    [[deprecated("GJSearchObject::getPrevPageObject not implemented")]]
    /**
     */
    GJSearchObject* getPrevPageObject();
public:
    
private:
    [[deprecated("GJSearchObject::getSearchKey not implemented")]]
    /**
     */
    char const* getSearchKey(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);
public:

    /**
     * @note[short] Windows: 0x11a630
     */
    bool init(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] Windows: 0x11ade0
     */
    bool isLevelSearchObject();
    SearchType m_searchType;
    gd::string m_searchQuery;
    gd::string m_difficulty;
    gd::string m_length;
    int m_page;
    bool m_starFilter;
    bool m_noStarFilter;
    int m_total;
    bool m_uncompletedFilter;
    bool m_completedFilter;
    bool m_featuredFilter;
    bool m_originalFilter;
    bool m_twoPlayerFilter;
    bool m_coinsFilter;
    bool m_epicFilter;
    bool m_legendaryFilter;
    bool m_mythicFilter;
    GJDifficulty m_demonFilter;
    int m_folder;
    int m_songID;
    bool m_customSongFilter;
    bool m_songFilter;
    bool m_searchIsOverlay;
    int m_searchMode;
};
