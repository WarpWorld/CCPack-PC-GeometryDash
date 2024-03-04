#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJFriendRequest : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJFriendRequest";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJFriendRequest, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x1190e0
     */
    static GJFriendRequest* create();
    
private:
    [[deprecated("GJFriendRequest::create not implemented")]]
    /**
     */
    static GJFriendRequest* create(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GJFriendRequest::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
