#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UserInfoDelegate {
public:
    static constexpr auto CLASS_NAME = "UserInfoDelegate";
    
private:
    [[deprecated("UserInfoDelegate::getUserInfoFinished not implemented")]]
    /**
     */
    virtual TodoReturn getUserInfoFinished(GJUserScore* p0);
public:
    
private:
    [[deprecated("UserInfoDelegate::getUserInfoFailed not implemented")]]
    /**
     */
    virtual TodoReturn getUserInfoFailed(int p0);
public:
    
private:
    [[deprecated("UserInfoDelegate::userInfoChanged not implemented")]]
    /**
     */
    virtual TodoReturn userInfoChanged(GJUserScore* p0);
public:
};
