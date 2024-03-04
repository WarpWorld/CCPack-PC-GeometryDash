#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectToolbox : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectToolbox";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectToolbox, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x28b340
     */
    static ObjectToolbox* sharedState();
    
private:
    [[deprecated("ObjectToolbox::allKeys not implemented")]]
    /**
     */
    TodoReturn allKeys();
public:

    /**
     * @note[short] Windows: 0x2af310
     */
    float gridNodeSizeForKey(int p0);

    /**
     * @note[short] Windows: 0x166920
     */
    TodoReturn intKeyToFrame(int p0);
    
private:
    [[deprecated("ObjectToolbox::perspectiveBlockFrame not implemented")]]
    /**
     */
    TodoReturn perspectiveBlockFrame(int p0);
public:
    
private:
    [[deprecated("ObjectToolbox::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
