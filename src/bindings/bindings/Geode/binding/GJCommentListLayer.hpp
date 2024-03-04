#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJCommentListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJCommentListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJCommentListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x207dc0
     */
    static GJCommentListLayer* create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);

    /**
     * @note[short] Windows: 0x207eb0
     */
    bool init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);
    BoomListView* m_list;
};
