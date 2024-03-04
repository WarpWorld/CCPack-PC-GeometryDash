#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "OptionsObjectDelegate.hpp"

class MusicSearchResult : public cocos2d::CCObject, public OptionsObjectDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicSearchResult, cocos2d::CCObject)
    
private:
    [[deprecated("MusicSearchResult::create not implemented")]]
    /**
     */
    static MusicSearchResult* create();
public:
    
private:
    [[deprecated("MusicSearchResult::applyArtistFilters not implemented")]]
    /**
     */
    TodoReturn applyArtistFilters(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("MusicSearchResult::applyTagFilters not implemented")]]
    /**
     */
    TodoReturn applyTagFilters(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("MusicSearchResult::createArtistFilterObjects not implemented")]]
    /**
     */
    TodoReturn createArtistFilterObjects();
public:
    
private:
    [[deprecated("MusicSearchResult::createTagFilterObjects not implemented")]]
    /**
     */
    TodoReturn createTagFilterObjects();
public:
    
private:
    [[deprecated("MusicSearchResult::getFilesMatchingSearch not implemented")]]
    /**
     */
    TodoReturn getFilesMatchingSearch(cocos2d::CCArray* p0, gd::string p1);
public:
    
private:
    [[deprecated("MusicSearchResult::init not implemented")]]
    /**
     */
    bool init();
public:
    
private:
    [[deprecated("MusicSearchResult::updateFutureCount not implemented")]]
    /**
     */
    TodoReturn updateFutureCount(cocos2d::CCArray* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("MusicSearchResult::updateObjects not implemented")]]
    /**
     */
    TodoReturn updateObjects();
public:
    
private:
    [[deprecated("MusicSearchResult::updateObjects not implemented")]]
    /**
     */
    virtual TodoReturn updateObjects(AudioSortType p0);
public:
    
private:
    [[deprecated("MusicSearchResult::stateChanged not implemented")]]
    /**
     */
    virtual TodoReturn stateChanged(OptionsObject* p0);
public:
};
