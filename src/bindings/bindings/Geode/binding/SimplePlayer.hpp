#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SimplePlayer : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "SimplePlayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SimplePlayer, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x1f3e90
     */
    static SimplePlayer* create(int p0);
    
private:
    [[deprecated("SimplePlayer::asyncLoadIcon not implemented")]]
    /**
     */
    TodoReturn asyncLoadIcon(int p0, IconType p1);
public:

    /**
     * @note[short] Windows: 0x1f45d0
     */
    TodoReturn createRobotSprite(int p0);

    /**
     * @note[short] Windows: 0x1f4620
     */
    TodoReturn createSpiderSprite(int p0);
	inline void disableCustomGlowColor() {
		m_hasCustomGlowColor = false;
	}
	inline void enableCustomGlowColor(cocos2d::_ccColor3B const& color) {
		m_hasCustomGlowColor = true;
		m_glowColor = color;
	}
    
private:
    [[deprecated("SimplePlayer::hideAll not implemented")]]
    /**
     */
    TodoReturn hideAll();
public:
    
private:
    [[deprecated("SimplePlayer::hideSecondary not implemented")]]
    /**
     */
    TodoReturn hideSecondary();
public:
    
private:
    [[deprecated("SimplePlayer::iconFinishedLoading not implemented")]]
    /**
     */
    TodoReturn iconFinishedLoading(int p0, IconType p1);
public:

    /**
     * @note[short] Windows: 0x1f3f30
     */
    bool init(int p0);
    
private:
    [[deprecated("SimplePlayer::setColors not implemented")]]
    /**
     */
    void setColors(cocos2d::ccColor3B const& p0, cocos2d::ccColor3B const& p1);
public:

    /**
     * @note[short] Windows: 0x1f4dc0
     */
    void setFrames(char const* p0, char const* p1, char const* p2, char const* p3, char const* p4);
	inline void setSecondColor(cocos2d::_ccColor3B const& color) {
		m_secondLayer->setColor(color);
		updateColors();
	}

    /**
     * @note[short] Windows: 0x1f46d0
     */
    TodoReturn updateColors();

    /**
     * @note[short] Windows: 0x1f49c0
     */
    TodoReturn updatePlayerFrame(int p0, IconType p1);

    /**
     * @note[short] Windows: 0x1f4f70
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Windows: 0x1f46a0
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);
	inline void setGlowOutline(cocos2d::ccColor3B color) {
		enableCustomGlowColor(color);
		m_hasGlowOutline = true;
		updateColors();
	}
	inline void disableGlowOutline() {
		disableCustomGlowColor();
		m_hasGlowOutline = false;
		updateColors();
	}
    cocos2d::CCSprite* m_firstLayer;
    cocos2d::CCSprite* m_secondLayer;
    cocos2d::CCSprite* m_birdDome;
    cocos2d::CCSprite* m_outlineSprite;
    cocos2d::CCSprite* m_detailSprite;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    int m_unknown;
    bool m_hasGlowOutline;
    GEODE_PAD(7);
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    GEODE_PAD(4);
};
