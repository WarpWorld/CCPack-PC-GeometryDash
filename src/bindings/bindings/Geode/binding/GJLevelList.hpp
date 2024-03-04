#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJLevelList : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJLevelList";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLevelList, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x11bf40
     */
    static GJLevelList* create();
    
private:
    [[deprecated("GJLevelList::create not implemented")]]
    /**
     */
    static GJLevelList* create(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GJLevelList::addLevelToList not implemented")]]
    /**
     */
    TodoReturn addLevelToList(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0x11cdd0
     */
    TodoReturn completedLevels();
    
private:
    [[deprecated("GJLevelList::createWithCoder not implemented")]]
    /**
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
public:

    /**
     * @note[short] Windows: 0x11d290
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("GJLevelList::duplicateListLevels not implemented")]]
    /**
     */
    TodoReturn duplicateListLevels(GJLevelList* p0);
public:

    /**
     * @note[short] Windows: 0x11d7e0
     */
    TodoReturn frameForListDifficulty(int p0, DifficultyIconType p1);
    
private:
    [[deprecated("GJLevelList::getListLevelsArray not implemented")]]
    /**
     */
    TodoReturn getListLevelsArray(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x11c1b0
     */
    gd::string getUnpackedDescription();
    
private:
    [[deprecated("GJLevelList::orderForLevel not implemented")]]
    /**
     */
    TodoReturn orderForLevel(int p0);
public:
    
private:
    [[deprecated("GJLevelList::parseListLevels not implemented")]]
    /**
     */
    TodoReturn parseListLevels(gd::string p0);
public:
    
private:
    [[deprecated("GJLevelList::removeLevelFromList not implemented")]]
    /**
     */
    TodoReturn removeLevelFromList(int p0);
public:
    
private:
    [[deprecated("GJLevelList::reorderLevel not implemented")]]
    /**
     */
    TodoReturn reorderLevel(int p0, int p1);
public:
    
private:
    [[deprecated("GJLevelList::reorderLevelStep not implemented")]]
    /**
     */
    TodoReturn reorderLevelStep(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x11cef0
     */
    TodoReturn showListInfo();
    
private:
    [[deprecated("GJLevelList::totalLevels not implemented")]]
    /**
     */
    TodoReturn totalLevels();
public:
    
private:
    [[deprecated("GJLevelList::updateLevelsString not implemented")]]
    /**
     */
    TodoReturn updateLevelsString();
public:
    
private:
    [[deprecated("GJLevelList::encodeWithCoder not implemented")]]
    /**
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJLevelList::canEncode not implemented")]]
    /**
     */
    virtual bool canEncode();
public:
    
private:
    [[deprecated("GJLevelList::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    gd::vector<int> m_levels;
    int m_listID;
    int m_listVersion;
    int m_downloads;
    int m_likes;
    int m_difficulty;
    int m_accountID;
    int m_folder;
    int m_listRevision;
    int m_listOrder;
    int m_original;
    int m_diamonds;
    int m_levelsToClaim;
    bool m_unkBool;
    bool m_unlisted;
    bool m_friendsOnly;
    bool m_uploaded;
    bool m_favorite;
    bool m_featured;
    bool m_k100;
    gd::string m_creatorName;
    gd::string m_listName;
    gd::string m_unkString;
    gd::string m_levelsString;
    gd::string m_listDesc;
    int m_uploadDate;
    int m_updateDate;
    cocos2d::CCDictionary* m_k97;
    int m_listType;
    int m_M_ID;
};
