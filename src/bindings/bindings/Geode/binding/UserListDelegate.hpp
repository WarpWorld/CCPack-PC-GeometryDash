#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "UserListDelegate";
    
private:
    [[deprecated("UserListDelegate::getUserListFinished not implemented")]]
    /**
     */
    virtual TodoReturn getUserListFinished(cocos2d::CCArray* p0, UserListType p1);
public:
    
private:
    [[deprecated("UserListDelegate::getUserListFailed not implemented")]]
    /**
     */
    virtual TodoReturn getUserListFailed(UserListType p0, GJErrorCode p1);
public:
    
private:
    [[deprecated("UserListDelegate::userListChanged not implemented")]]
    /**
     */
    virtual TodoReturn userListChanged(cocos2d::CCArray* p0, UserListType p1);
public:
    
private:
    [[deprecated("UserListDelegate::forceReloadList not implemented")]]
    /**
     */
    virtual TodoReturn forceReloadList(UserListType p0);
public:
};
