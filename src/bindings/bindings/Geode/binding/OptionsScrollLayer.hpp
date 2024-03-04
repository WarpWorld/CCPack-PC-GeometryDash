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
#include "TableViewCellDelegate.hpp"

class OptionsScrollLayer : public FLAlertLayer, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "OptionsScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsScrollLayer, FLAlertLayer)
    
private:
    [[deprecated("OptionsScrollLayer::create not implemented")]]
    /**
     */
    static OptionsScrollLayer* create(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("OptionsScrollLayer::getRelevantObjects not implemented")]]
    /**
     */
    TodoReturn getRelevantObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("OptionsScrollLayer::init not implemented")]]
    /**
     */
    bool init(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("OptionsScrollLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsScrollLayer::setupList not implemented")]]
    /**
     */
    TodoReturn setupList(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("OptionsScrollLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("OptionsScrollLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("OptionsScrollLayer::cellPerformedAction not implemented")]]
    /**
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:
};
