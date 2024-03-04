#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCContentLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCContentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCContentLayer, cocos2d::CCLayerColor)
	inline CCContentLayer() {}
    
private:
    [[deprecated("CCContentLayer::create not implemented")]]
    /**
     */
    static CCContentLayer* create(cocos2d::ccColor4B const& p0, float p1, float p2);
public:

    /**
     * @note[short] Windows: 0x23b20
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
};
