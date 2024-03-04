#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGroundLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGroundLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x1f73f0
     */
    static GJGroundLayer* create(int p0, int p1);

    /**
     * @note[short] Windows: 0x1f7b70
     */
    TodoReturn createLine(int p0);
    
private:
    [[deprecated("GJGroundLayer::deactivateGround not implemented")]]
    /**
     */
    TodoReturn deactivateGround();
public:
    
private:
    [[deprecated("GJGroundLayer::fadeInFinished not implemented")]]
    /**
     */
    TodoReturn fadeInFinished();
public:
    
private:
    [[deprecated("GJGroundLayer::getGroundY not implemented")]]
    /**
     */
    TodoReturn getGroundY();
public:
    
private:
    [[deprecated("GJGroundLayer::hideShadows not implemented")]]
    /**
     */
    TodoReturn hideShadows();
public:

    /**
     * @note[short] Windows: 0x1f74a0
     */
    bool init(int p0, int p1);

    /**
     * @note[short] Windows: 0x1f7900
     */
    TodoReturn loadGroundSprites(int p0, bool p1);
    
private:
    [[deprecated("GJGroundLayer::positionGround not implemented")]]
    /**
     */
    TodoReturn positionGround(float p0);
public:
    
private:
    [[deprecated("GJGroundLayer::scaleGround not implemented")]]
    /**
     */
    TodoReturn scaleGround(float p0);
public:
    
private:
    [[deprecated("GJGroundLayer::toggleVisible01 not implemented")]]
    /**
     */
    TodoReturn toggleVisible01(bool p0);
public:
    
private:
    [[deprecated("GJGroundLayer::toggleVisible02 not implemented")]]
    /**
     */
    TodoReturn toggleVisible02(bool p0);
public:

    /**
     * @note[short] Windows: 0x1f7ab0
     */
    TodoReturn updateGround01Color(cocos2d::ccColor3B p0);

    /**
     * @note[short] Windows: 0x1f7b10
     */
    TodoReturn updateGround02Color(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("GJGroundLayer::updateGroundPos not implemented")]]
    /**
     */
    TodoReturn updateGroundPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateGroundWidth not implemented")]]
    /**
     */
    TodoReturn updateGroundWidth(bool p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateLineBlend not implemented")]]
    /**
     */
    TodoReturn updateLineBlend(bool p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateShadows not implemented")]]
    /**
     */
    TodoReturn updateShadows();
public:
    
private:
    [[deprecated("GJGroundLayer::updateShadowXPos not implemented")]]
    /**
     */
    TodoReturn updateShadowXPos(float p0, float p1);
public:
    
private:
    [[deprecated("GJGroundLayer::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("GJGroundLayer::showGround not implemented")]]
    /**
     */
    virtual TodoReturn showGround();
public:
    
private:
    [[deprecated("GJGroundLayer::fadeInGround not implemented")]]
    /**
     */
    virtual TodoReturn fadeInGround(float p0);
public:
    
private:
    [[deprecated("GJGroundLayer::fadeOutGround not implemented")]]
    /**
     */
    virtual TodoReturn fadeOutGround(float p0);
public:
};
