#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"

class SupportLayer : public GJDropDownLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SupportLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SupportLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x3bbb30
     */
    static SupportLayer* create();

    /**
     * @note[short] Windows: 0x3bc520
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCArray* p5);
    
private:
    [[deprecated("SupportLayer::exitLayer not implemented")]]
    /**
     */
    TodoReturn exitLayer();
public:
    
private:
    [[deprecated("SupportLayer::onCocos2d not implemented")]]
    /**
     */
    void onCocos2d(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onEmail not implemented")]]
    /**
     */
    void onEmail(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onGetReward not implemented")]]
    /**
     */
    void onGetReward(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x3bce90
     */
    void onLinks(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3bcc50
     */
    void onLowDetail(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SupportLayer::onPrivacy not implemented")]]
    /**
     */
    void onPrivacy(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x3bca70
     */
    void onRequestAccess(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SupportLayer::onRobTop not implemented")]]
    /**
     */
    void onRobTop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onSFX not implemented")]]
    /**
     */
    void onSFX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onTOS not implemented")]]
    /**
     */
    void onTOS(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x3bcd40
     */
    TodoReturn sendSupportMail();

    /**
     * @note[short] Windows: 0x3bbcc0
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0x3bcbc0
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x3bcc20
     */
    virtual void uploadActionFailed(int p0, int p1);
    
private:
    [[deprecated("SupportLayer::onClosePopup not implemented")]]
    /**
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:

    /**
     * @note[short] Windows: 0x3bd0b0
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
