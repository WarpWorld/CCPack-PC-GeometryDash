#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CheckpointObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CheckpointObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CheckpointObject, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x2eb9a0
     */
    static CheckpointObject* create();
    
private:
    [[deprecated("CheckpointObject::getObject not implemented")]]
    /**
     */
    TodoReturn getObject();
public:
    
private:
    [[deprecated("CheckpointObject::setObject not implemented")]]
    /**
     */
    void setObject(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x52e00
     */
    virtual bool init();
};
