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
#include "ListUploadDelegate.hpp"

class UploadListPopup : public FLAlertLayer, public ListUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadListPopup, FLAlertLayer)
    
private:
    [[deprecated("UploadListPopup::create not implemented")]]
    /**
     */
    static UploadListPopup* create(GJLevelList* p0);
public:
    
private:
    [[deprecated("UploadListPopup::init not implemented")]]
    /**
     */
    bool init(GJLevelList* p0);
public:
    
private:
    [[deprecated("UploadListPopup::onBack not implemented")]]
    /**
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadListPopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadListPopup::onReturnToList not implemented")]]
    /**
     */
    void onReturnToList(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadListPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("UploadListPopup::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("UploadListPopup::listUploadFinished not implemented")]]
    /**
     */
    virtual TodoReturn listUploadFinished(GJLevelList* p0);
public:
    
private:
    [[deprecated("UploadListPopup::listUploadFailed not implemented")]]
    /**
     */
    virtual TodoReturn listUploadFailed(GJLevelList* p0, int p1);
public:
};
