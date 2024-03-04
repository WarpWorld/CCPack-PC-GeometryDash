#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelBrowserLayer.hpp"
#include "TextInputDelegate.hpp"
#include "SelectListIconDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "LevelListDeleteDelegate.hpp"

class LevelListLayer : public LevelBrowserLayer, public TextInputDelegate, public SelectListIconDelegate, public LikeItemDelegate, public LevelListDeleteDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListLayer, LevelBrowserLayer)

    /**
     * @note[short] Windows: 0x25a1e0
     */
    static LevelListLayer* create(GJLevelList* p0);
    
private:
    [[deprecated("LevelListLayer::cloneList not implemented")]]
    /**
     */
    TodoReturn cloneList();
public:
    
private:
    [[deprecated("LevelListLayer::confirmClone not implemented")]]
    /**
     */
    TodoReturn confirmClone(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelListLayer::confirmDelete not implemented")]]
    /**
     */
    TodoReturn confirmDelete(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelListLayer::confirmOwnerDelete not implemented")]]
    /**
     */
    TodoReturn confirmOwnerDelete(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x25a280
     */
    bool init(GJLevelList* p0);
    
private:
    [[deprecated("LevelListLayer::onClaimReward not implemented")]]
    /**
     */
    void onClaimReward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onDelete not implemented")]]
    /**
     */
    TodoReturn onDelete();
public:
    
private:
    [[deprecated("LevelListLayer::onDescription not implemented")]]
    /**
     */
    void onDescription(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onFavorite not implemented")]]
    /**
     */
    void onFavorite(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onLike not implemented")]]
    /**
     */
    void onLike(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onListInfo not implemented")]]
    /**
     */
    void onListInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onRefreshLevelList not implemented")]]
    /**
     */
    void onRefreshLevelList(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onSelectIcon not implemented")]]
    /**
     */
    void onSelectIcon(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onShare not implemented")]]
    /**
     */
    void onShare(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onToggleEditMode not implemented")]]
    /**
     */
    void onToggleEditMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onViewProfile not implemented")]]
    /**
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::ownerDelete not implemented")]]
    /**
     */
    TodoReturn ownerDelete();
public:
    
private:
    [[deprecated("LevelListLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(GJLevelList* p0);
public:
    
private:
    [[deprecated("LevelListLayer::updateEditMode not implemented")]]
    /**
     */
    TodoReturn updateEditMode();
public:

    /**
     * @note[short] Windows: 0x25d770
     */
    TodoReturn updateSideButtons();

    /**
     * @note[short] Windows: 0x25bab0
     */
    TodoReturn updateStatsArt();
    
private:
    [[deprecated("LevelListLayer::verifyListName not implemented")]]
    /**
     */
    TodoReturn verifyListName();
public:
    
private:
    [[deprecated("LevelListLayer::onEnter not implemented")]]
    /**
     */
    virtual void onEnter();
public:
    
private:
    [[deprecated("LevelListLayer::onExit not implemented")]]
    /**
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("LevelListLayer::loadLevelsFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);
public:
    
private:
    [[deprecated("LevelListLayer::loadLevelsFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadLevelsFailed(char const* p0, int p1);
public:
    
private:
    [[deprecated("LevelListLayer::onBack not implemented")]]
    /**
     */
    virtual void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::shareCommentClosed not implemented")]]
    /**
     */
    virtual TodoReturn shareCommentClosed(gd::string p0, ShareCommentLayer* p1);
public:
    
private:
    [[deprecated("LevelListLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("LevelListLayer::setIDPopupClosed not implemented")]]
    /**
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
public:
    
private:
    [[deprecated("LevelListLayer::updateResultArray not implemented")]]
    /**
     */
    virtual TodoReturn updateResultArray(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelListLayer::cellPerformedAction not implemented")]]
    /**
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:
    
private:
    [[deprecated("LevelListLayer::likedItem not implemented")]]
    /**
     */
    virtual TodoReturn likedItem(LikeItemType p0, int p1, bool p2);
public:
    
private:
    [[deprecated("LevelListLayer::iconSelectClosed not implemented")]]
    /**
     */
    virtual TodoReturn iconSelectClosed(SelectListIconLayer* p0);
public:
    
private:
    [[deprecated("LevelListLayer::levelListDeleteFinished not implemented")]]
    /**
     */
    virtual TodoReturn levelListDeleteFinished(int p0);
public:
    
private:
    [[deprecated("LevelListLayer::levelListDeleteFailed not implemented")]]
    /**
     */
    virtual TodoReturn levelListDeleteFailed(int p0);
public:
    
private:
    [[deprecated("LevelListLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("LevelListLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("LevelListLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
