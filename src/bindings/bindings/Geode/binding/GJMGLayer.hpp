#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMGLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJMGLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMGLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GJMGLayer::create not implemented")]]
    /**
     */
    static GJMGLayer* create(int p0);
public:
    
private:
    [[deprecated("GJMGLayer::deactivateGround not implemented")]]
    /**
     */
    TodoReturn deactivateGround();
public:
    
private:
    [[deprecated("GJMGLayer::init not implemented")]]
    /**
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("GJMGLayer::loadGroundSprites not implemented")]]
    /**
     */
    TodoReturn loadGroundSprites(int p0, bool p1);
public:
    
private:
    [[deprecated("GJMGLayer::scaleGround not implemented")]]
    /**
     */
    TodoReturn scaleGround(float p0);
public:
    
private:
    [[deprecated("GJMGLayer::toggleVisible01 not implemented")]]
    /**
     */
    TodoReturn toggleVisible01(bool p0);
public:
    
private:
    [[deprecated("GJMGLayer::toggleVisible02 not implemented")]]
    /**
     */
    TodoReturn toggleVisible02(bool p0);
public:
    
private:
    [[deprecated("GJMGLayer::updateGroundColor not implemented")]]
    /**
     */
    TodoReturn updateGroundColor(cocos2d::ccColor3B p0, bool p1);
public:
    
private:
    [[deprecated("GJMGLayer::updateGroundOpacity not implemented")]]
    /**
     */
    TodoReturn updateGroundOpacity(unsigned char p0, bool p1);
public:
    
private:
    [[deprecated("GJMGLayer::updateGroundPos not implemented")]]
    /**
     */
    TodoReturn updateGroundPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJMGLayer::updateGroundWidth not implemented")]]
    /**
     */
    TodoReturn updateGroundWidth(bool p0);
public:
    
private:
    [[deprecated("GJMGLayer::updateMG01Blend not implemented")]]
    /**
     */
    TodoReturn updateMG01Blend(bool p0);
public:
    
private:
    [[deprecated("GJMGLayer::updateMG02Blend not implemented")]]
    /**
     */
    TodoReturn updateMG02Blend(bool p0);
public:
    
private:
    [[deprecated("GJMGLayer::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("GJMGLayer::showGround not implemented")]]
    /**
     */
    virtual TodoReturn showGround();
public:
};
