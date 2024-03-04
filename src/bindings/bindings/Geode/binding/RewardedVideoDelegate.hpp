#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardedVideoDelegate";
    
private:
    [[deprecated("RewardedVideoDelegate::rewardedVideoFinished not implemented")]]
    /**
     */
    virtual TodoReturn rewardedVideoFinished();
public:
    
private:
    [[deprecated("RewardedVideoDelegate::shouldOffsetRewardCurrency not implemented")]]
    /**
     */
    virtual TodoReturn shouldOffsetRewardCurrency();
public:
};
