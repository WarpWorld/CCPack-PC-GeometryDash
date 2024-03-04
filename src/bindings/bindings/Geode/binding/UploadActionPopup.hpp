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

class UploadActionPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "UploadActionPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadActionPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x20ac30
     */
    static UploadActionPopup* create(UploadPopupDelegate* p0, gd::string p1);
    
private:
    [[deprecated("UploadActionPopup::closePopup not implemented")]]
    /**
     */
    TodoReturn closePopup();
public:

    /**
     * @note[short] Windows: 0x20ad00
     */
    bool init(UploadPopupDelegate* p0, gd::string p1);
    
private:
    [[deprecated("UploadActionPopup::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x20b1e0
     */
    void showFailMessage(gd::string p0);

    /**
     * @note[short] Windows: 0x20b0e0
     */
    void showSuccessMessage(gd::string p0);
    
private:
    [[deprecated("UploadActionPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
