#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LevelLeaderboard : public FLAlertLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LevelLeaderboard";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelLeaderboard, FLAlertLayer)

    /**
     * @note[short] Windows: 0x257fa0
     */
    static LevelLeaderboard* create(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    
private:
    [[deprecated("LevelLeaderboard::deleteLocalScores not implemented")]]
    /**
     */
    TodoReturn deleteLocalScores();
public:
    
private:
    [[deprecated("LevelLeaderboard::getLocalScores not implemented")]]
    /**
     */
    TodoReturn getLocalScores();
public:
    
private:
    [[deprecated("LevelLeaderboard::getSpriteButton not implemented")]]
    /**
     */
    TodoReturn getSpriteButton(gd::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4, int p5);
public:

    /**
     * @note[short] Windows: 0x258060
     */
    bool init(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    
private:
    [[deprecated("LevelLeaderboard::isCorrect not implemented")]]
    /**
     */
    bool isCorrect(char const* p0);
public:
    
private:
    [[deprecated("LevelLeaderboard::loadScores not implemented")]]
    /**
     */
    TodoReturn loadScores();
public:

    /**
     * @note[short] Windows: 0x2595f0
     */
    void onChangeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2595a0
     */
    void onChangeType(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x6a750
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelLeaderboard::onDeleteLocalScores not implemented")]]
    /**
     */
    void onDeleteLocalScores(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x259630
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2594f0
     */
    TodoReturn reloadLeaderboard(LevelLeaderboardType p0, LevelLeaderboardMode p1);
    
private:
    [[deprecated("LevelLeaderboard::setupLeaderboard not implemented")]]
    /**
     */
    TodoReturn setupLeaderboard(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelLeaderboard::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("LevelLeaderboard::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] Windows: 0x5d6d0
     */
    virtual void show();
    
private:
    [[deprecated("LevelLeaderboard::loadLeaderboardFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("LevelLeaderboard::loadLeaderboardFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadLeaderboardFailed(char const* p0);
public:
    
private:
    [[deprecated("LevelLeaderboard::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("LevelLeaderboard::updateUserScoreFinished not implemented")]]
    /**
     */
    virtual TodoReturn updateUserScoreFinished();
public:
    
private:
    [[deprecated("LevelLeaderboard::updateUserScoreFailed not implemented")]]
    /**
     */
    virtual TodoReturn updateUserScoreFailed();
public:
    GJGameLevel* m_level;
    LevelLeaderboardType m_type;
    LevelLeaderboardMode m_mode;
    cocos2d::CCArray* m_scores;
    GJCommentListLayer* m_list;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    CCMenuItemSpriteExtra* m_refreshBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_pointsBtn;
};
