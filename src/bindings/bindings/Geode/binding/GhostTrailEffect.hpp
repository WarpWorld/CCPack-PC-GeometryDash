#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GhostTrailEffect : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GhostTrailEffect";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GhostTrailEffect, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x46b20
     */
    static GhostTrailEffect* create();
    
private:
    [[deprecated("GhostTrailEffect::doBlendAdditive not implemented")]]
    /**
     */
    TodoReturn doBlendAdditive();
public:
    
private:
    [[deprecated("GhostTrailEffect::runWithTarget not implemented")]]
    /**
     */
    TodoReturn runWithTarget(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, bool p5);
public:
    
private:
    [[deprecated("GhostTrailEffect::stopTrail not implemented")]]
    /**
     */
    TodoReturn stopTrail();
public:
    
private:
    [[deprecated("GhostTrailEffect::trailSnapshot not implemented")]]
    /**
     */
    TodoReturn trailSnapshot(float p0);
public:
    
private:
    [[deprecated("GhostTrailEffect::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GhostTrailEffect::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
