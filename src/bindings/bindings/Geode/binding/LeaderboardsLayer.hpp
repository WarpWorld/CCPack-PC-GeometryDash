#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LeaderboardsLayer : public cocos2d::CCLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LeaderboardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LeaderboardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x22dbc0
     */
    static LeaderboardsLayer* create(LeaderboardState p0);

    /**
     * @note[short] Windows: 0x22dc60
     */
    bool init(LeaderboardState p0);
    
private:
    [[deprecated("LeaderboardsLayer::isCorrect not implemented")]]
    /**
     */
    bool isCorrect(char const* p0);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onCreators not implemented")]]
    /**
     */
    void onCreators(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onGlobal not implemented")]]
    /**
     */
    void onGlobal(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onTop not implemented")]]
    /**
     */
    void onTop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onWeek not implemented")]]
    /**
     */
    void onWeek(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::refreshTabs not implemented")]]
    /**
     */
    TodoReturn refreshTabs();
public:
    
private:
    [[deprecated("LeaderboardsLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(LeaderboardState p0);
public:
    
private:
    [[deprecated("LeaderboardsLayer::selectLeaderboard not implemented")]]
    /**
     */
    TodoReturn selectLeaderboard(LeaderboardState p0);
public:
    
private:
    [[deprecated("LeaderboardsLayer::setupLevelBrowser not implemented")]]
    /**
     */
    TodoReturn setupLevelBrowser(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LeaderboardsLayer::setupTabs not implemented")]]
    /**
     */
    TodoReturn setupTabs();
public:
    
private:
    [[deprecated("LeaderboardsLayer::toggleTabButtons not implemented")]]
    /**
     */
    TodoReturn toggleTabButtons();
public:
    
private:
    [[deprecated("LeaderboardsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("LeaderboardsLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("LeaderboardsLayer::updateUserScoreFinished not implemented")]]
    /**
     */
    virtual TodoReturn updateUserScoreFinished();
public:
    
private:
    [[deprecated("LeaderboardsLayer::updateUserScoreFailed not implemented")]]
    /**
     */
    virtual TodoReturn updateUserScoreFailed();
public:
    
private:
    [[deprecated("LeaderboardsLayer::loadLeaderboardFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("LeaderboardsLayer::loadLeaderboardFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadLeaderboardFailed(char const* p0);
public:
    GJListLayer* m_list;
    cocos2d::CCArray* m_userScores;
    LeaderboardState m_state;
    CCMenuItemToggler* m_topBtn;
    CCMenuItemToggler* m_globalBtn;
    CCMenuItemToggler* m_creatorsBtn;
    CCMenuItemToggler* m_friendsBtn;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    cocos2d::CCArray* m_tabs;
};
