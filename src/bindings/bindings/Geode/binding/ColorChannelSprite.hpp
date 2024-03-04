#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorChannelSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ColorChannelSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorChannelSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x1d85c0
     */
    static ColorChannelSprite* create();

    /**
     * @note[short] Windows: 0x1d8990
     */
    TodoReturn updateBlending(bool p0);

    /**
     * @note[short] Windows: 0x1d86c0
     */
    TodoReturn updateCopyLabel(int p0, bool p1);

    /**
     * @note[short] Windows: 0x1d8840
     */
    TodoReturn updateOpacity(float p0);

    /**
     * @note[short] Windows: 0x1d8a80
     */
    TodoReturn updateValues(ColorAction* p0);
    
private:
    [[deprecated("ColorChannelSprite::init not implemented")]]
    /**
     */
    virtual bool init();
public:
};
