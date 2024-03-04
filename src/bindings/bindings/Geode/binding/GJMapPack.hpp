#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMapPack : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMapPack";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMapPack, cocos2d::CCNode)
    
private:
    [[deprecated("GJMapPack::create not implemented")]]
    /**
     */
    static GJMapPack* create();
public:
    
private:
    [[deprecated("GJMapPack::create not implemented")]]
    /**
     */
    static GJMapPack* create(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GJMapPack::completedMaps not implemented")]]
    /**
     */
    TodoReturn completedMaps();
public:
    
private:
    [[deprecated("GJMapPack::hasCompletedMapPack not implemented")]]
    /**
     */
    TodoReturn hasCompletedMapPack();
public:
    
private:
    [[deprecated("GJMapPack::parsePackColors not implemented")]]
    /**
     */
    TodoReturn parsePackColors(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GJMapPack::parsePackLevels not implemented")]]
    /**
     */
    TodoReturn parsePackLevels(gd::string p0);
public:
    
private:
    [[deprecated("GJMapPack::totalMaps not implemented")]]
    /**
     */
    TodoReturn totalMaps();
public:
    
private:
    [[deprecated("GJMapPack::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    cocos2d::CCArray* m_levels;
    int m_packID;
    GJDifficulty m_difficulty;
    int m_stars;
    int m_coins;
    gd::string m_packName;
    gd::string m_levelStrings;
    cocos2d::ccColor3B m_textColour;
    cocos2d::ccColor3B m_barColour;
    int m_MId;
    bool m_isGauntlet;
};
