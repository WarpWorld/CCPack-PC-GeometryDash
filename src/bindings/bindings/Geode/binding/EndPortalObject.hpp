#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class EndPortalObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EndPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndPortalObject, GameObject)

    /**
     * @note[short] Windows: 0xeb140
     */
    static EndPortalObject* create();

    /**
     * @note[short] Windows: 0xeb740
     */
    TodoReturn getSpawnPos();

    /**
     * @note[short] Windows: 0xeb6c0
     */
    TodoReturn triggerObject(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0xeb5b0
     */
    TodoReturn updateColors(cocos2d::ccColor3B p0);

    /**
     * @note[short] Windows: 0xeb920
     */
    TodoReturn updateEndPos(bool p0);
    
private:
    [[deprecated("EndPortalObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("EndPortalObject::setPosition not implemented")]]
    /**
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
public:
    
private:
    [[deprecated("EndPortalObject::setVisible not implemented")]]
    /**
     */
    virtual void setVisible(bool p0);
public:
};
