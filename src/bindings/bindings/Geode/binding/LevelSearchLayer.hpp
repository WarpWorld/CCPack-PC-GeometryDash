#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DemonFilterDelegate.hpp"

class LevelSearchLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DemonFilterDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSearchLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x260e70
     */
    static LevelSearchLayer* create(int p0);
    
private:
    [[deprecated("LevelSearchLayer::checkDiff not implemented")]]
    /**
     */
    TodoReturn checkDiff(int p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::checkTime not implemented")]]
    /**
     */
    TodoReturn checkTime(int p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::clearFilters not implemented")]]
    /**
     */
    TodoReturn clearFilters();
public:
    
private:
    [[deprecated("LevelSearchLayer::confirmClearFilters not implemented")]]
    /**
     */
    TodoReturn confirmClearFilters(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::getDiffKey not implemented")]]
    /**
     */
    TodoReturn getDiffKey(int p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::getLevelLenKey not implemented")]]
    /**
     */
    TodoReturn getLevelLenKey();
public:
    
private:
    [[deprecated("LevelSearchLayer::getSearchDiffKey not implemented")]]
    /**
     */
    TodoReturn getSearchDiffKey();
public:

    /**
     * @note[short] Windows: 0x263ba0
     */
    GJSearchObject* getSearchObject(SearchType p0, gd::string p1);
    
private:
    [[deprecated("LevelSearchLayer::getTimeKey not implemented")]]
    /**
     */
    TodoReturn getTimeKey(int p0);
public:

    /**
     * @note[short] Windows: 0x260f10
     */
    bool init(int p0);

    /**
     * @note[short] Windows: 0x2646e0
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2646a0
     */
    void onClearFreeSearch(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onFollowed not implemented")]]
    /**
     */
    void onFollowed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onFriends not implemented")]]
    /**
     */
    void onFriends(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onLatestStars not implemented")]]
    /**
     */
    void onLatestStars(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onMagic not implemented")]]
    /**
     */
    void onMagic(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2629d0
     */
    void onMoreOptions(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onMostDownloaded not implemented")]]
    /**
     */
    void onMostDownloaded(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x263e40
     */
    void onMostLikes(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onMostRecent not implemented")]]
    /**
     */
    void onMostRecent(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x264340
     */
    void onSearch(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onSearchMode not implemented")]]
    /**
     */
    void onSearchMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2644f0
     */
    void onSearchUser(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onSpecialDemon not implemented")]]
    /**
     */
    void onSpecialDemon(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onStarAward not implemented")]]
    /**
     */
    void onStarAward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onSuggested not implemented")]]
    /**
     */
    void onSuggested(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onTrending not implemented")]]
    /**
     */
    void onTrending(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(int p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::toggleDifficulty not implemented")]]
    /**
     */
    TodoReturn toggleDifficulty(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::toggleDifficultyNum not implemented")]]
    /**
     */
    TodoReturn toggleDifficultyNum(int p0, bool p1);
public:
    
private:
    [[deprecated("LevelSearchLayer::toggleStar not implemented")]]
    /**
     */
    TodoReturn toggleStar(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::toggleTime not implemented")]]
    /**
     */
    TodoReturn toggleTime(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::toggleTimeNum not implemented")]]
    /**
     */
    TodoReturn toggleTimeNum(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x2638d0
     */
    TodoReturn updateSearchLabel(char const* p0);
    
private:
    [[deprecated("LevelSearchLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("LevelSearchLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("LevelSearchLayer::demonFilterSelectClosed not implemented")]]
    /**
     */
    virtual TodoReturn demonFilterSelectClosed(int p0);
public:
    int m_type;
    CCTextInputNode* m_searchInput;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCArray* m_difficultySprites;
    cocos2d::CCArray* m_lengthSprites;
    cocos2d::CCDictionary* m_difficultyDict;
    cocos2d::CCSprite* m_lastDifficultySprite;
    CCMenuItemSpriteExtra* m_demonTypeButton;
};
