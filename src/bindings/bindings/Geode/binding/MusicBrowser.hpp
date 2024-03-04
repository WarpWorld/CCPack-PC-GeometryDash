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
#include "FLAlertLayerProtocol.hpp"
#include "SliderDelegate.hpp"

class MusicBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public FLAlertLayerProtocol, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MusicBrowser, FLAlertLayer)

    /**
     * @note[short] Windows: 0x27eb00
     */
    static MusicBrowser* create(int p0);

    /**
     * @note[short] Windows: 0x27eba0
     */
    bool init(int p0);
    
private:
    [[deprecated("MusicBrowser::onArtistFilters not implemented")]]
    /**
     */
    void onArtistFilters(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onClearSearch not implemented")]]
    /**
     */
    void onClearSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onPage not implemented")]]
    /**
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onPlaybackControl not implemented")]]
    /**
     */
    void onPlaybackControl(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onSearch not implemented")]]
    /**
     */
    void onSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onTagFilters not implemented")]]
    /**
     */
    void onTagFilters(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onUpdateLibrary not implemented")]]
    /**
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27fd00
     */
    TodoReturn setupList(MusicSearchResult* p0);

    /**
     * @note[short] Windows: 0x27f760
     */
    TodoReturn setupSongControls();
    
private:
    [[deprecated("MusicBrowser::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x27fad0
     */
    TodoReturn trySetupMusicBrowser();

    /**
     * @note[short] Windows: 0x280340
     */
    TodoReturn updatePageLabel();
    
private:
    [[deprecated("MusicBrowser::update not implemented")]]
    /**
     */
    virtual void update(float p0);
public:
    
private:
    [[deprecated("MusicBrowser::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("MusicBrowser::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("MusicBrowser::musicActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn musicActionFinished(GJMusicAction p0);
public:
    
private:
    [[deprecated("MusicBrowser::musicActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn musicActionFailed(GJMusicAction p0);
public:
    
private:
    [[deprecated("MusicBrowser::sliderEnded not implemented")]]
    /**
     */
    virtual TodoReturn sliderEnded(Slider* p0);
public:
    
private:
    [[deprecated("MusicBrowser::setTextPopupClosed not implemented")]]
    /**
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);
public:
    
private:
    [[deprecated("MusicBrowser::cellPerformedAction not implemented")]]
    /**
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:
    
private:
    [[deprecated("MusicBrowser::getSelectedCellIdx not implemented")]]
    /**
     */
    virtual TodoReturn getSelectedCellIdx();
public:
    
private:
    [[deprecated("MusicBrowser::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
};
