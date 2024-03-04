#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSFXWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSFXWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSFXWidget, cocos2d::CCNode)
    
private:
    [[deprecated("CustomSFXWidget::create not implemented")]]
    /**
     */
    static CustomSFXWidget* create(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6);
public:
    
private:
    [[deprecated("CustomSFXWidget::deleteSFX not implemented")]]
    /**
     */
    TodoReturn deleteSFX();
public:
    
private:
    [[deprecated("CustomSFXWidget::downloadFailed not implemented")]]
    /**
     */
    TodoReturn downloadFailed();
public:
    
private:
    [[deprecated("CustomSFXWidget::hideLoadingArt not implemented")]]
    /**
     */
    TodoReturn hideLoadingArt();
public:
    
private:
    [[deprecated("CustomSFXWidget::init not implemented")]]
    /**
     */
    bool init(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6);
public:
    
private:
    [[deprecated("CustomSFXWidget::onCancelDownload not implemented")]]
    /**
     */
    void onCancelDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSFXWidget::onDelete not implemented")]]
    /**
     */
    void onDelete(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSFXWidget::onDownload not implemented")]]
    /**
     */
    void onDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSFXWidget::onPlayback not implemented")]]
    /**
     */
    void onPlayback(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSFXWidget::onSelect not implemented")]]
    /**
     */
    void onSelect(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSFXWidget::showLoadingArt not implemented")]]
    /**
     */
    TodoReturn showLoadingArt();
public:
    
private:
    [[deprecated("CustomSFXWidget::startDownload not implemented")]]
    /**
     */
    TodoReturn startDownload();
public:
    
private:
    [[deprecated("CustomSFXWidget::startMonitorDownload not implemented")]]
    /**
     */
    TodoReturn startMonitorDownload();
public:
    
private:
    [[deprecated("CustomSFXWidget::updateDownloadProgress not implemented")]]
    /**
     */
    TodoReturn updateDownloadProgress(float p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::updateError not implemented")]]
    /**
     */
    TodoReturn updateError(GJSongError p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::updateLengthMod not implemented")]]
    /**
     */
    TodoReturn updateLengthMod(float p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::updatePlaybackBtn not implemented")]]
    /**
     */
    TodoReturn updatePlaybackBtn();
public:
    
private:
    [[deprecated("CustomSFXWidget::updateProgressBar not implemented")]]
    /**
     */
    TodoReturn updateProgressBar(int p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::updateSFXInfo not implemented")]]
    /**
     */
    TodoReturn updateSFXInfo();
public:
    
private:
    [[deprecated("CustomSFXWidget::updateSFXObject not implemented")]]
    /**
     */
    TodoReturn updateSFXObject(SFXInfoObject* p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::verifySFXID not implemented")]]
    /**
     */
    TodoReturn verifySFXID(int p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::downloadSFXFinished not implemented")]]
    /**
     */
    virtual TodoReturn downloadSFXFinished(int p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::downloadSFXFailed not implemented")]]
    /**
     */
    virtual TodoReturn downloadSFXFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("CustomSFXWidget::songStateChanged not implemented")]]
    /**
     */
    virtual TodoReturn songStateChanged();
public:
    
private:
    [[deprecated("CustomSFXWidget::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
};
