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
#include "MusicDownloadDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "SelectSFXSortDelegate.hpp"

class SFXBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public SelectSFXSortDelegate {
public:
    static constexpr auto CLASS_NAME = "SFXBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXBrowser, FLAlertLayer)

    /**
     * @note[short] Windows: 0x378110
     */
    static SFXBrowser* create(int p0);

    /**
     * @note[short] Windows: 0x3781b0
     */
    bool init(int p0);
    
private:
    [[deprecated("SFXBrowser::onClearSearch not implemented")]]
    /**
     */
    void onClearSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onCredits not implemented")]]
    /**
     */
    void onCredits(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onExitFolder not implemented")]]
    /**
     */
    void onExitFolder(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onPage not implemented")]]
    /**
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onSearch not implemented")]]
    /**
     */
    void onSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onSorting not implemented")]]
    /**
     */
    void onSorting(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onToggleCompactMode not implemented")]]
    /**
     */
    void onToggleCompactMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onUpdateLibrary not implemented")]]
    /**
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x379250
     */
    TodoReturn setupList(SFXSearchResult* p0);

    /**
     * @note[short] Windows: 0x379010
     */
    TodoReturn trySetupSFXBrowser();

    /**
     * @note[short] Windows: 0x379ea0
     */
    TodoReturn updatePageLabel();
    
private:
    [[deprecated("SFXBrowser::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("SFXBrowser::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SFXBrowser::musicActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn musicActionFinished(GJMusicAction p0);
public:
    
private:
    [[deprecated("SFXBrowser::musicActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn musicActionFailed(GJMusicAction p0);
public:
    
private:
    [[deprecated("SFXBrowser::sortSelectClosed not implemented")]]
    /**
     */
    virtual TodoReturn sortSelectClosed(SelectSFXSortLayer* p0);
public:
    
private:
    [[deprecated("SFXBrowser::setTextPopupClosed not implemented")]]
    /**
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);
public:
    
private:
    [[deprecated("SFXBrowser::cellPerformedAction not implemented")]]
    /**
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:
    
private:
    [[deprecated("SFXBrowser::getSelectedCellIdx not implemented")]]
    /**
     */
    virtual TodoReturn getSelectedCellIdx();
public:
    
private:
    [[deprecated("SFXBrowser::shouldSnapToSelected not implemented")]]
    /**
     */
    virtual TodoReturn shouldSnapToSelected();
public:
};
