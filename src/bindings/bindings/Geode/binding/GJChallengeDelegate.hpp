#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChallengeDelegate {
public:
    static constexpr auto CLASS_NAME = "GJChallengeDelegate";
    
private:
    [[deprecated("GJChallengeDelegate::challengeStatusFinished not implemented")]]
    /**
     */
    virtual TodoReturn challengeStatusFinished();
public:
    
private:
    [[deprecated("GJChallengeDelegate::challengeStatusFailed not implemented")]]
    /**
     */
    virtual TodoReturn challengeStatusFailed();
public:
};
