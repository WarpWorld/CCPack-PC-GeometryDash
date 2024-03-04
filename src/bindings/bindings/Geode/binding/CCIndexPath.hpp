#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCIndexPath : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCIndexPath";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCIndexPath, cocos2d::CCObject)

    /**
     * @note[short] Out of line
     */
     CCIndexPath();
    
private:
    [[deprecated("CCIndexPath::CCIndexPathWithSectionRow not implemented")]]
    /**
     */
    TodoReturn CCIndexPathWithSectionRow(int p0, int p1);
public:
};
