#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FriendRequestDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendRequestDelegate";
    
private:
    [[deprecated("FriendRequestDelegate::loadFRequestsFinished not implemented")]]
    /**
     */
    virtual TodoReturn loadFRequestsFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("FriendRequestDelegate::loadFRequestsFailed not implemented")]]
    /**
     */
    virtual TodoReturn loadFRequestsFailed(char const* p0, GJErrorCode p1);
public:
    
private:
    [[deprecated("FriendRequestDelegate::setupPageInfo not implemented")]]
    /**
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);
public:
    
private:
    [[deprecated("FriendRequestDelegate::forceReloadRequests not implemented")]]
    /**
     */
    virtual TodoReturn forceReloadRequests(bool p0);
public:
};
