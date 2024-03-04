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
#include "TextInputDelegate.hpp"

class SetIDPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetIDPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x20f840
     */
    static SetIDPopup* create(int p0, int p1, int p2, gd::string p3, gd::string p4, bool p5, int p6, float p7, bool p8, bool p9);

    /**
     * @note[short] Windows: 0x20f980
     */
    bool init(int p0, int p1, int p2, gd::string p3, gd::string p4, bool p5, int p6, float p7, bool p8, bool p9);

    /**
     * @note[short] Windows: 0x210410
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x210430
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2101e0
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x210240
     */
    void onResetValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2102f0
     */
    TodoReturn updateTextInputLabel();
    
private:
    [[deprecated("SetIDPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] Windows: 0x2103a0
     */
    virtual void show();
    
private:
    [[deprecated("SetIDPopup::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetIDPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetIDPopup::valueChanged not implemented")]]
    /**
     */
    virtual TodoReturn valueChanged();
public:
    CCTextInputNode* m_inputNode;
    int m_value;
    bool m_unkBool;
    bool m_cancelled;
    int m_minimum;
    int m_maximum;
    int m_default;
    SetIDPopupDelegate* m_delegate;
};
