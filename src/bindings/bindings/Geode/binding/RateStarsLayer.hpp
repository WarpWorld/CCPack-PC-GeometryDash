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

class RateStarsLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x2f4870
     */
    static RateStarsLayer* create(int p0, bool p1, bool p2);
    
private:
    [[deprecated("RateStarsLayer::getStarsButton not implemented")]]
    /**
     */
    TodoReturn getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
public:

    /**
     * @note[short] Windows: 0x2f4920
     */
    bool init(int p0, bool p1, bool p2);

    /**
     * @note[short] Windows: 0x2f53b0
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f4f90
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f51c0
     */
    void onRate(cocos2d::CCObject* sender);
    
private:
    [[deprecated("RateStarsLayer::onToggleCoins not implemented")]]
    /**
     */
    void onToggleCoins(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2f5070
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);
    
private:
    [[deprecated("RateStarsLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("RateStarsLayer::uploadActionFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("RateStarsLayer::uploadActionFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("RateStarsLayer::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    GEODE_PAD(16);
    int m_starsRate;
};
