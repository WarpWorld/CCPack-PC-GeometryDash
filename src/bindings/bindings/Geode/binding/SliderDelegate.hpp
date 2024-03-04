#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "SliderDelegate";
    
private:
    [[deprecated("SliderDelegate::sliderBegan not implemented")]]
    /**
     */
    virtual TodoReturn sliderBegan(Slider* p0);
public:
    
private:
    [[deprecated("SliderDelegate::sliderEnded not implemented")]]
    /**
     */
    virtual TodoReturn sliderEnded(Slider* p0);
public:
};
