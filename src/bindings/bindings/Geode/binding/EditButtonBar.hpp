#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EditButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "EditButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditButtonBar, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x9b7e0
     */
    static EditButtonBar* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, bool p3, int p4, int p5);
    
private:
    [[deprecated("EditButtonBar::getPage not implemented")]]
    /**
     */
    TodoReturn getPage();
public:
    
private:
    [[deprecated("EditButtonBar::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0);
public:

    /**
     * @note[short] Windows: 0x9b8e0
     */
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, bool p3, int p4, int p5);

    /**
     * @note[short] Windows: 0x9b970
     */
    void loadFromItems(cocos2d::CCArray* p0, int p1, int p2, bool p3);
    
private:
    [[deprecated("EditButtonBar::onLeft not implemented")]]
    /**
     */
    void onLeft(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditButtonBar::onRight not implemented")]]
    /**
     */
    void onRight(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Out of line
     */
    void reloadItems(int rowCount, int columnCount);
    cocos2d::CCPoint m_position;
    int m_unknown;
    bool m_unknownBool;
    cocos2d::CCArray* m_buttonArray;
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pagesArray;
};
