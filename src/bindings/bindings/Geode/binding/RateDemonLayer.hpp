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
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class RateDemonLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateDemonLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateDemonLayer, FLAlertLayer)
    
private:
    [[deprecated("RateDemonLayer::create not implemented")]]
    /**
     */
    static RateDemonLayer* create(int p0);
public:

    /**
     * @note[short] Windows: 0x2f35b0
     */
    bool init(int p0);
    
private:
    [[deprecated("RateDemonLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2f3c20
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f3ac0
     */
    void selectRating(cocos2d::CCObject* p0);
    
private:
    [[deprecated("RateDemonLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("RateDemonLayer::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("RateDemonLayer::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("RateDemonLayer::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    GEODE_PAD(18);
    int m_demonRate;
};
