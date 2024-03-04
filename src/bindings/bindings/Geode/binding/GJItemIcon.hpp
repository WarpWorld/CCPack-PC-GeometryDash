#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJItemIcon : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJItemIcon";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJItemIcon, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x1f5010
     */
    static GJItemIcon* create(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);

    /**
     * @note[short] Windows: 0x1f5920
     */
    void changeToLockedState(float p0);
	inline static GJItemIcon* createBrowserItem(UnlockType unlockType, int itemID) {
		return GJItemIcon::create(unlockType, itemID, {0xAF, 0xAF, 0xAF}, {0xFF, 0xFF, 0xFF}, false, true, true, {0xFF, 0xFF, 0xFF});
	}
    
private:
    [[deprecated("GJItemIcon::createStoreItem not implemented")]]
    /**
     */
    TodoReturn createStoreItem(UnlockType p0, int p1, bool p2, cocos2d::ccColor3B p3);
public:

    /**
     * @note[short] Windows: 0x1f5720
     */
    void darkenStoreItem(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("GJItemIcon::darkenStoreItem not implemented")]]
    /**
     */
    TodoReturn darkenStoreItem(ShopType p0);
public:

    /**
     * @note[short] Windows: 0x1f50f0
     */
    bool init(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);

    /**
     * @note[short] Windows: 0x1f59e0
     */
    TodoReturn scaleForType(UnlockType p0);

    /**
     * @note[short] Windows: 0x1f5870
     */
    TodoReturn toggleEnabledState(bool p0);
    
private:
    [[deprecated("GJItemIcon::unlockedColorForType not implemented")]]
    /**
     */
    TodoReturn unlockedColorForType(int p0);
public:
    
private:
    [[deprecated("GJItemIcon::setOpacity not implemented")]]
    /**
     */
    virtual void setOpacity(unsigned char p0);
public:
};
