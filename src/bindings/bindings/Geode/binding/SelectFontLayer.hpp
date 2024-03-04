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

class SelectFontLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectFontLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectFontLayer, FLAlertLayer)
    
private:
    [[deprecated("SelectFontLayer::create not implemented")]]
    /**
     */
    static SelectFontLayer* create(LevelEditorLayer* p0);
public:

    /**
     * @note[short] Windows: 0x204dd0
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] Windows: 0x205460
     */
    void onChangeFont(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SelectFontLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x205320
     */
    TodoReturn updateFontLabel();
    
private:
    [[deprecated("SelectFontLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
