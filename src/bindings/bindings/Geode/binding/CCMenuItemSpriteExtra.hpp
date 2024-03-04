#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemSpriteExtra";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemSpriteExtra, cocos2d::CCMenuItemSprite)

    /**
     * @note[short] Out of line
     */
     ~CCMenuItemSpriteExtra();

    /**
     * @note[short] Out of line
     */
     CCMenuItemSpriteExtra();

    /**
     * @note[short] Windows: 0x25830
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] Out of line
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] Windows: 0x258f0
     */
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
	inline void setSizeMult(float mult) {
		//inlined on windows, member is in CCMenuItemSprite
		m_fSizeMult = mult;
	}
    
private:
    [[deprecated("CCMenuItemSpriteExtra::useAnimationType not implemented")]]
    /**
     */
    TodoReturn useAnimationType(MenuAnimationType p0);
public:

    /**
     * @note[short] Windows: 0x259d0
     */
    virtual void activate();

    /**
     * @note[short] Windows: 0x25aa0
     */
    virtual void selected();

    /**
     * @note[short] Windows: 0x25c80
     */
    virtual void unselected();
    float m_scaleMultiplier;
    float m_baseScale;
    bool m_animationEnabled;
    bool m_colorEnabled;
    float m_unknown1;
    gd::string m_unknown2;
    gd::string m_unknown3;
    float m_colorDip;
    cocos2d::CCPoint m_destPosition;
    cocos2d::CCPoint m_offset;
    MenuAnimationType m_animationType;
    cocos2d::CCPoint m_startPosition;
    int m_unknown4;
};
