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

class SelectSettingLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSettingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSettingLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x270c10
     */
    static SelectSettingLayer* create(SelectSettingType p0, int p1);

    /**
     * @note[short] Windows: 0x271380
     */
    TodoReturn frameForItem(SelectSettingType p0, int p1);
    
private:
    [[deprecated("SelectSettingLayer::frameForValue not implemented")]]
    /**
     */
    TodoReturn frameForValue(SelectSettingType p0, int p1);
public:
    
private:
    [[deprecated("SelectSettingLayer::getSelectedFrame not implemented")]]
    /**
     */
    TodoReturn getSelectedFrame();
public:
    
private:
    [[deprecated("SelectSettingLayer::getSelectedValue not implemented")]]
    /**
     */
    TodoReturn getSelectedValue();
public:
    
private:
    [[deprecated("SelectSettingLayer::idxToValue not implemented")]]
    /**
     */
    TodoReturn idxToValue(SelectSettingType p0, int p1);
public:

    /**
     * @note[short] Windows: 0x270cc0
     */
    bool init(SelectSettingType p0, int p1);
    
private:
    [[deprecated("SelectSettingLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2715d0
     */
    void onSelect(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SelectSettingLayer::valueToIdx not implemented")]]
    /**
     */
    TodoReturn valueToIdx(SelectSettingType p0, int p1);
public:
    
private:
    [[deprecated("SelectSettingLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    GEODE_PAD(4);
    int m_settingID;
};
