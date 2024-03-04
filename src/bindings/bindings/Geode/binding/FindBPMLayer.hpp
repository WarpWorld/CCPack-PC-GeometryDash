#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CreateGuidelinesLayer.hpp"

class FindBPMLayer : public CreateGuidelinesLayer {
public:
    static constexpr auto CLASS_NAME = "FindBPMLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindBPMLayer, CreateGuidelinesLayer)
    
private:
    [[deprecated("FindBPMLayer::create not implemented")]]
    /**
     */
    static FindBPMLayer* create(int p0);
public:
    
private:
    [[deprecated("FindBPMLayer::calculateBPM not implemented")]]
    /**
     */
    TodoReturn calculateBPM();
public:
    
private:
    [[deprecated("FindBPMLayer::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("FindBPMLayer::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FindBPMLayer::playMusic not implemented")]]
    /**
     */
    virtual TodoReturn playMusic();
public:
    
private:
    [[deprecated("FindBPMLayer::registerTouch not implemented")]]
    /**
     */
    virtual TodoReturn registerTouch();
public:
    
private:
    [[deprecated("FindBPMLayer::onInfo not implemented")]]
    /**
     */
    virtual void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FindBPMLayer::onRecord not implemented")]]
    /**
     */
    virtual void onRecord(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FindBPMLayer::recordingDidStop not implemented")]]
    /**
     */
    virtual TodoReturn recordingDidStop();
public:
};
