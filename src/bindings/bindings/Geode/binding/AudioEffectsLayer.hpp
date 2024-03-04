#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AudioEffectsLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "AudioEffectsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AudioEffectsLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("AudioEffectsLayer::create not implemented")]]
    /**
     */
    static AudioEffectsLayer* create(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x5beb0
     */
    TodoReturn audioStep(float p0);
    
private:
    [[deprecated("AudioEffectsLayer::getBGSquare not implemented")]]
    /**
     */
    TodoReturn getBGSquare();
public:
    
private:
    [[deprecated("AudioEffectsLayer::goingDown not implemented")]]
    /**
     */
    TodoReturn goingDown();
public:
    
private:
    [[deprecated("AudioEffectsLayer::init not implemented")]]
    /**
     */
    bool init(gd::string p0);
public:
    
private:
    [[deprecated("AudioEffectsLayer::resetAudioVars not implemented")]]
    /**
     */
    TodoReturn resetAudioVars();
public:

    /**
     * @note[short] Windows: 0x5bf70
     */
    TodoReturn triggerEffect(float p0);
    
private:
    [[deprecated("AudioEffectsLayer::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("AudioEffectsLayer::updateTweenAction not implemented")]]
    /**
     */
    virtual void updateTweenAction(float p0, char const* p1);
public:
};
