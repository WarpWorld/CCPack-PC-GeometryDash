#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayerDelegate";
    
private:
    [[deprecated("BoomScrollLayerDelegate::scrollLayerScrollingStarted not implemented")]]
    /**
     */
    virtual TodoReturn scrollLayerScrollingStarted(BoomScrollLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayerDelegate::scrollLayerScrolledToPage not implemented")]]
    /**
     */
    virtual TodoReturn scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);
public:
    
private:
    [[deprecated("BoomScrollLayerDelegate::scrollLayerMoved not implemented")]]
    /**
     */
    virtual TodoReturn scrollLayerMoved(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("BoomScrollLayerDelegate::scrollLayerWillScrollToPage not implemented")]]
    /**
     */
    virtual TodoReturn scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);
public:
};
