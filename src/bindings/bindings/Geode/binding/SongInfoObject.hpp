#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongInfoObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SongInfoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongInfoObject, cocos2d::CCNode)
    
private:
    [[deprecated("SongInfoObject::create not implemented")]]
    /**
     */
    static SongInfoObject* create(cocos2d::CCDictionary* p0);
public:

    /**
     * @note[short] Windows: 0x288650
     */
    static SongInfoObject* create(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, int priority);

    /**
     * @note[short] Windows: 0x287f00
     */
    static SongInfoObject* create(int p0);
    
private:
    [[deprecated("SongInfoObject::addTags not implemented")]]
    /**
     */
    TodoReturn addTags(gd::string p0);
public:
    
private:
    [[deprecated("SongInfoObject::containsTag not implemented")]]
    /**
     */
    TodoReturn containsTag(int p0);
public:

    /**
     * @note[short] Windows: 0x288a10
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("SongInfoObject::getTagsString not implemented")]]
    /**
     */
    TodoReturn getTagsString();
public:

    /**
     * @note[short] Windows: 0x288860
     */
    bool init(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, int priority);
    
private:
    [[deprecated("SongInfoObject::encodeWithCoder not implemented")]]
    /**
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("SongInfoObject::canEncode not implemented")]]
    /**
     */
    virtual bool canEncode();
public:
    int m_songID;
    gd::string m_songName;
    gd::string m_artistName;
    gd::string m_youtubeVideo;
    gd::string m_youtubeChannel;
    gd::string m_songUrl;
    gd::string m_artistID;
    float m_fileSize;
    bool m_isUnkownSong;
    int m_priority;
};
