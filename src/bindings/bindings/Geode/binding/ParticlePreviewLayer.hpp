#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ParticlePreviewLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ParticlePreviewLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ParticlePreviewLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("ParticlePreviewLayer::create not implemented")]]
    /**
     */
    static ParticlePreviewLayer* create(cocos2d::CCParticleSystemQuad* p0);
public:
    
private:
    [[deprecated("ParticlePreviewLayer::init not implemented")]]
    /**
     */
    bool init(cocos2d::CCParticleSystemQuad* p0);
public:
    
private:
    [[deprecated("ParticlePreviewLayer::postVisit not implemented")]]
    /**
     */
    TodoReturn postVisit();
public:
    
private:
    [[deprecated("ParticlePreviewLayer::preVisitWithClippingRect not implemented")]]
    /**
     */
    TodoReturn preVisitWithClippingRect(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("ParticlePreviewLayer::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("ParticlePreviewLayer::visit not implemented")]]
    /**
     */
    virtual void visit();
public:
};
