#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "LoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x2762d0
     */
    static LoadingLayer* create(bool p0);

    /**
     * @note[short] Windows: 0x277280
     */
    TodoReturn getLoadingString();

    /**
     * @note[short] Windows: 0x276370
     */
    bool init(bool p0);

    /**
     * @note[short] Windows: 0x276bd0
     */
    TodoReturn loadAssets();

    /**
     * @note[short] Windows: 0x276ae0
     */
    TodoReturn loadingFinished();
    
private:
    [[deprecated("LoadingLayer::scene not implemented")]]
    /**
     */
    TodoReturn scene(bool p0);
public:
    
private:
    [[deprecated("LoadingLayer::updateProgress not implemented")]]
    /**
     */
    TodoReturn updateProgress(int p0);
public:
    bool m_unknown;
    bool m_unknown2;
    int m_loadStep;
    cocos2d::CCLabelBMFont* m_caption;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_sliderBar;
    float m_sliderGrooveXPos;
    float m_sliderGrooveHeight;
    bool m_fromRefresh;
};
