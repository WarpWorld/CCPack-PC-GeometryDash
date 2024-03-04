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
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class InfoLayer : public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "InfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x228730
     */
    static InfoLayer* create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);
    
private:
    [[deprecated("InfoLayer::confirmReport not implemented")]]
    /**
     */
    TodoReturn confirmReport(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("InfoLayer::getAccountID not implemented")]]
    /**
     */
    int getAccountID();
public:

    /**
     * @note[short] Out of line
     */
    int getID();
    
private:
    [[deprecated("InfoLayer::getRealID not implemented")]]
    /**
     */
    int getRealID();
public:

    /**
     * @note[short] Windows: 0x22a410
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Windows: 0x228810
     */
    bool init(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);
    
private:
    [[deprecated("InfoLayer::isCorrect not implemented")]]
    /**
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] Windows: 0x22b340
     */
    void loadPage(int p0, bool p1);

    /**
     * @note[short] Windows: 0x22b200
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22aba0
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22a8f0
     */
    void onCopyLevelID(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22ad90
     */
    void onGetComments(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22ada0
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22aaa0
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22bac0
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22aae0
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22bae0
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22a680
     */
    void onRefreshComments(cocos2d::CCObject* sender);
    
private:
    [[deprecated("InfoLayer::onSimilar not implemented")]]
    /**
     */
    void onSimilar(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x22bd00
     */
    TodoReturn reloadWindow();

    /**
     * @note[short] Windows: 0x22b670
     */
    TodoReturn setupCommentsBrowser(cocos2d::CCArray* p0);
    
private:
    [[deprecated("InfoLayer::setupLevelInfo not implemented")]]
    /**
     */
    TodoReturn setupLevelInfo();
public:
    
private:
    [[deprecated("InfoLayer::toggleCommentMode not implemented")]]
    /**
     */
    TodoReturn toggleCommentMode(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("InfoLayer::toggleExtendedMode not implemented")]]
    /**
     */
    TodoReturn toggleExtendedMode(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x22bc10
     */
    TodoReturn toggleSmallCommentMode(cocos2d::CCObject* p0);
    
private:
    [[deprecated("InfoLayer::updateCommentModeButtons not implemented")]]
    /**
     */
    TodoReturn updateCommentModeButtons();
public:
    
private:
    [[deprecated("InfoLayer::updateLevelsLabel not implemented")]]
    /**
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("InfoLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("InfoLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] Windows: 0x8fff0
     */
    virtual void show();
    
private:
    [[deprecated("InfoLayer::loadCommentsFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("InfoLayer::loadCommentsFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadCommentsFailed(char const* p0);
public:
    
private:
    [[deprecated("InfoLayer::setupPageInfo not implemented")]]
    /**
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);
public:
    
private:
    [[deprecated("InfoLayer::commentUploadFinished not implemented")]]
    /**
     */
    virtual TodoReturn commentUploadFinished(int p0);
public:
    
private:
    [[deprecated("InfoLayer::commentUploadFailed not implemented")]]
    /**
     */
    virtual TodoReturn commentUploadFailed(int p0, CommentError p1);
public:
    
private:
    [[deprecated("InfoLayer::updateUserScoreFinished not implemented")]]
    /**
     */
    virtual TodoReturn updateUserScoreFinished();
public:
    
private:
    [[deprecated("InfoLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    GJGameLevel* m_level;
    GJUserScore* m_score;
    GJLevelList* m_levelList;
    gd::string m_commentKey;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_noComments;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_reportBtn;
    CCMenuItemSpriteExtra* m_commentsBtn;
    CCMenuItemSpriteExtra* m_refreshCommentsBtn;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_canUpdateUserScore;
    CommentKeyType m_mode;
};
