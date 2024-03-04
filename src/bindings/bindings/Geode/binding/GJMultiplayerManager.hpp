#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMultiplayerManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMultiplayerManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMultiplayerManager, cocos2d::CCNode)
    
private:
    [[deprecated("GJMultiplayerManager::sharedState not implemented")]]
    /**
     */
    static GJMultiplayerManager* sharedState();
public:

    /**
     * @note[short] Windows: 0x1fc100
     */
    void addComment(gd::string p0, int p1);
    
private:
    [[deprecated("GJMultiplayerManager::addDLToActive not implemented")]]
    /**
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);
public:
    
private:
    [[deprecated("GJMultiplayerManager::addDLToActive not implemented")]]
    /**
     */
    void addDLToActive(char const* tag);
public:

    /**
     * @note[short] Windows: 0x1fbfc0
     */
    TodoReturn createAndAddComment(gd::string p0, int p1);
    
private:
    [[deprecated("GJMultiplayerManager::dataLoaded not implemented")]]
    /**
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::encodeDataTo not implemented")]]
    /**
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::exitLobby not implemented")]]
    /**
     */
    TodoReturn exitLobby(int p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::firstSetup not implemented")]]
    /**
     */
    TodoReturn firstSetup();
public:
    
private:
    [[deprecated("GJMultiplayerManager::getBasePostString not implemented")]]
    /**
     */
    TodoReturn getBasePostString();
public:
    
private:
    [[deprecated("GJMultiplayerManager::getDLObject not implemented")]]
    /**
     */
    TodoReturn getDLObject(char const* p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::getLastCommentIDForGame not implemented")]]
    /**
     */
    TodoReturn getLastCommentIDForGame(int p0);
public:

    /**
     * @note[short] Windows: 0x1faf80
     */
    TodoReturn handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("GJMultiplayerManager::handleItDelayed not implemented")]]
    /**
     */
    TodoReturn handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GJMultiplayerManager::handleItND not implemented")]]
    /**
     */
    TodoReturn handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("GJMultiplayerManager::isDLActive not implemented")]]
    /**
     */
    bool isDLActive(char const* tag);
public:
    
private:
    [[deprecated("GJMultiplayerManager::joinLobby not implemented")]]
    /**
     */
    TodoReturn joinLobby(int p0);
public:

    /**
     * @note[short] Windows: 0x1fb820
     */
    TodoReturn onExitLobbyCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x1fb220
     */
    TodoReturn onJoinLobbyCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x1fae60
     */
    TodoReturn onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Windows: 0x1fbe80
     */
    TodoReturn onUploadCommentCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x1fac50
     */
    TodoReturn ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("GJMultiplayerManager::removeDLFromActive not implemented")]]
    /**
     */
    TodoReturn removeDLFromActive(char const* p0);
public:

    /**
     * @note[short] Windows: 0x1fb970
     */
    TodoReturn uploadComment(gd::string p0, int p1);

    /**
     * @note[short] Windows: 0x1fb1c0
     */
    virtual bool init();
};
