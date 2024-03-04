#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlatformDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "PlatformDownloadDelegate";
    
private:
    [[deprecated("PlatformDownloadDelegate::downloadFinished not implemented")]]
    /**
     */
    virtual TodoReturn downloadFinished(char const* p0);
public:
    
private:
    [[deprecated("PlatformDownloadDelegate::downloadFailed not implemented")]]
    /**
     */
    virtual TodoReturn downloadFailed(char const* p0);
public:
};
