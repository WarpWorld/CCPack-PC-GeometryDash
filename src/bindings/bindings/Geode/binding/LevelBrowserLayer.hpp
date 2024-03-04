#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "SetIDPopupDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "ShareCommentDelegate.hpp"

class LevelBrowserLayer : public cocos2d::CCLayerColor, public LevelManagerDelegate, public FLAlertLayerProtocol, public SetIDPopupDelegate, public SetTextPopupDelegate, public TableViewCellDelegate, public ShareCommentDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelBrowserLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelBrowserLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x232db0
     */
    static LevelBrowserLayer* create(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0x236600
     */
    TodoReturn createNewLevel(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelBrowserLayer::createNewList not implemented")]]
    /**
     */
    TodoReturn createNewList(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelBrowserLayer::createNewSmartTemplate not implemented")]]
    /**
     */
    TodoReturn createNewSmartTemplate(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelBrowserLayer::deleteSelected not implemented")]]
    /**
     */
    TodoReturn deleteSelected();
public:
    
private:
    [[deprecated("LevelBrowserLayer::exitLayer not implemented")]]
    /**
     */
    TodoReturn exitLayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelBrowserLayer::getItemsMatchingSearch not implemented")]]
    /**
     */
    TodoReturn getItemsMatchingSearch(cocos2d::CCArray* p0, gd::string p1, GJSearchObject* p2);
public:

    /**
     * @note[short] Windows: 0x235390
     */
    TodoReturn getSearchTitle();

    /**
     * @note[short] Windows: 0x232e60
     */
    bool init(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0x2343a0
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] Windows: 0x2344e0
     */
    TodoReturn loadPage(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0x236e90
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236c30
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x237460
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236a10
     */
    void onFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x235d10
     */
    void onGoToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x235c10
     */
    void onGoToLastPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x235c40
     */
    void onGoToPage(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelBrowserLayer::onHelp not implemented")]]
    /**
     */
    void onHelp(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x236140
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236500
     */
    void onLocalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236860
     */
    void onMyOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236440
     */
    void onNew(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x235f90
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x235fd0
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236dc0
     */
    void onRefresh(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelBrowserLayer::onRemoveAllFavorites not implemented")]]
    /**
     */
    void onRemoveAllFavorites(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelBrowserLayer::onSaved not implemented")]]
    /**
     */
    void onSaved(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x236470
     */
    void onSavedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236f60
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2376e0
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelBrowserLayer::reloadAllObjects not implemented")]]
    /**
     */
    void reloadAllObjects();
public:

    /**
     * @note[short] Windows: 0x232d70
     */
    static cocos2d::CCScene* scene(GJSearchObject* search);
    
private:
    [[deprecated("LevelBrowserLayer::setSearchObject not implemented")]]
    /**
     */
    void setSearchObject(GJSearchObject* p0);
public:

    /**
     * @note[short] Windows: 0x235080
     */
    void setupLevelBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x237c60
     */
    void show();

    /**
     * @note[short] Windows: 0x235b90
     */
    void updateLevelsLabel();

    /**
     * @note[short] Windows: 0x235e80
     */
    void updatePageLabel();

    /**
     * @note[short] Windows: 0x237ae0
     */
    virtual void onEnter();
    
private:
    [[deprecated("LevelBrowserLayer::onEnterTransitionDidFinish not implemented")]]
    /**
     */
    virtual void onEnterTransitionDidFinish();
public:
    
private:
    [[deprecated("LevelBrowserLayer::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LevelBrowserLayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LevelBrowserLayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LevelBrowserLayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] Windows: 0x237c20
     */
    virtual void registerWithTouchDispatcher();
    
private:
    [[deprecated("LevelBrowserLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("LevelBrowserLayer::keyDown not implemented")]]
    /**
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:

    /**
     * @note[short] Windows: 0x2358a0
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] Windows: 0x2359a0
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] Windows: 0x2359e0
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);
    
private:
    [[deprecated("LevelBrowserLayer::onBack not implemented")]]
    /**
     */
    virtual void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelBrowserLayer::shareCommentClosed not implemented")]]
    /**
     */
    virtual TodoReturn shareCommentClosed(gd::string p0, ShareCommentLayer* p1);
public:
    
private:
    [[deprecated("LevelBrowserLayer::setTextPopupClosed not implemented")]]
    /**
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);
public:
    
private:
    [[deprecated("LevelBrowserLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x235d80
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
    
private:
    [[deprecated("LevelBrowserLayer::updateResultArray not implemented")]]
    /**
     */
    virtual TodoReturn updateResultArray(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelBrowserLayer::cellPerformedAction not implemented")]]
    /**
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:
    bool m_unk;
    bool m_allSelected;
    TextArea* m_noInternet;
    GJListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_lastBtn;
    CCMenuItemSpriteExtra* m_cancelSearchBtn;
    CCMenuItemSpriteExtra* m_refreshBtn;
    cocos2d::CCArray* m_selected;
    GJSearchObject* m_searchObject;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCLabelBMFont* m_pageText;
    CCMenuItemSpriteExtra* m_pageBtn;
    cocos2d::CCLabelBMFont* m_folderText;
    CCMenuItemSpriteExtra* m_folderBtn;
    CCMenuItemToggler* m_allObjectsToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    LoadingCircle* m_circle;
    int m_lastPage;
    bool m_isOverlay;
    GEODE_PAD(4);
    int m_zOffset;
    bool m_unk2;
    int m_listHeight;
    GEODE_PAD(22);
};
