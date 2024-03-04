#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UploadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadMessageDelegate";
    
private:
    [[deprecated("UploadMessageDelegate::uploadMessageFinished not implemented")]]
    /**
     */
    virtual TodoReturn uploadMessageFinished(int p0);
public:
    
private:
    [[deprecated("UploadMessageDelegate::uploadMessageFailed not implemented")]]
    /**
     */
    virtual TodoReturn uploadMessageFailed(int p0);
public:
};
