#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelTools {
public:
    static constexpr auto CLASS_NAME = "LevelTools";

    /**
     * @note[short] Windows: 0x2737c0
     */
    static int artistForAudio(int p0);

    /**
     * @note[short] Windows: 0x2753e0
     */
    TodoReturn base64DecodeString(gd::string p0);

    /**
     * @note[short] Windows: 0x275360
     */
    TodoReturn base64EncodeString(gd::string p0);
    
private:
    [[deprecated("LevelTools::createStarPackDict not implemented")]]
    /**
     */
    TodoReturn createStarPackDict();
public:

    /**
     * @note[short] Windows: 0x274010
     */
    static gd::string fbURLForArtist(int p0);
    
private:
    [[deprecated("LevelTools::getAudioBPM not implemented")]]
    /**
     */
    TodoReturn getAudioBPM(int p0);
public:

    /**
     * @note[short] Windows: 0x273430
     */
    static gd::string getAudioFileName(int p0);

    /**
     * @note[short] Windows: 0x274140
     */
    static gd::string getAudioString(int p0);

    /**
     * @note[short] Windows: 0x273090
     */
    static gd::string getAudioTitle(int p0);
    
private:
    [[deprecated("LevelTools::getLastGameplayReversed not implemented")]]
    /**
     */
    TodoReturn getLastGameplayReversed();
public:
    
private:
    [[deprecated("LevelTools::getLastGameplayRotated not implemented")]]
    /**
     */
    TodoReturn getLastGameplayRotated();
public:
    
private:
    [[deprecated("LevelTools::getLastTimewarp not implemented")]]
    /**
     */
    TodoReturn getLastTimewarp();
public:

    /**
     * @note[short] Windows: 0x2725d0
     */
    static GJGameLevel* getLevel(int p0, bool p1);
    
private:
    [[deprecated("LevelTools::getLevelList not implemented")]]
    /**
     */
    TodoReturn getLevelList();
public:

    /**
     * @note[short] Windows: 0x275040
     */
    TodoReturn getSongObject(int p0);
    
private:
    [[deprecated("LevelTools::moveTriggerObjectsToArray not implemented")]]
    /**
     */
    TodoReturn moveTriggerObjectsToArray(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, int p2);
public:

    /**
     * @note[short] Windows: 0x2738c0
     */
    static gd::string nameForArtist(int p0);

    /**
     * @note[short] Windows: 0x273d90
     */
    static gd::string ngURLForArtist(int p0);
    
private:
    [[deprecated("LevelTools::offsetBPMForTrack not implemented")]]
    /**
     */
    TodoReturn offsetBPMForTrack(int p0);
public:
    
private:
    [[deprecated("LevelTools::posForTime not implemented")]]
    /**
     */
    TodoReturn posForTime(float p0, cocos2d::CCArray* p1, int p2, bool p3, int& p4);
public:

    /**
     * @note[short] Windows: 0x274a60
     */
    TodoReturn posForTimeInternal(float p0, cocos2d::CCArray* p1, int p2, bool p3, bool p4, bool p5, int& p6, int p7);

    /**
     * @note[short] Windows: 0x275600
     */
    TodoReturn sortChannelOrderObjects(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, bool p2);

    /**
     * @note[short] Windows: 0x275820
     */
    TodoReturn sortSpeedObjects(cocos2d::CCArray* p0, GJBaseGameLayer* p1);

    /**
     * @note[short] Windows: 0x2743d0
     */
    TodoReturn timeForPos(cocos2d::CCPoint p0, cocos2d::CCArray* p1, int p2, int p3, int p4, bool p5, bool p6, bool p7, bool p8, int p9);
    
private:
    [[deprecated("LevelTools::toggleDebugLogging not implemented")]]
    /**
     */
    TodoReturn toggleDebugLogging(bool p0);
public:

    /**
     * @note[short] Windows: 0x273a00
     */
    static gd::string urlForAudio(int p0);

    /**
     * @note[short] Windows: 0x274380
     */
    TodoReturn valueForSpeedMod(int p0);

    /**
     * @note[short] Windows: 0x2751d0
     */
    TodoReturn verifyLevelIntegrity(gd::string p0, int p1);

    /**
     * @note[short] Windows: 0x273ed0
     */
    static gd::string ytURLForArtist(int p0);
};
