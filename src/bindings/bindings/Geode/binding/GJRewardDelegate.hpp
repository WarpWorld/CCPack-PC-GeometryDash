#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "GJRewardDelegate";
    
private:
    [[deprecated("GJRewardDelegate::rewardsStatusFinished not implemented")]]
    /**
     */
    virtual TodoReturn rewardsStatusFinished(int p0);
public:
    
private:
    [[deprecated("GJRewardDelegate::rewardsStatusFailed not implemented")]]
    /**
     */
    virtual TodoReturn rewardsStatusFailed();
public:
};
