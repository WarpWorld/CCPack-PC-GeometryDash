#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class SongInfoLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongInfoLayer, FLAlertLayer)
    
private:
    [[deprecated("SongInfoLayer::create not implemented")]]
    /**
     */
    static SongInfoLayer* create(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, gd::string p5, int p6, gd::string p7);
public:

    /**
     * @note[short] Windows: 0x38aba0
     */
    static SongInfoLayer* create(int p0);

    /**
     * @note[short] Windows: 0x38ae50
     */
    bool init(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, gd::string p5, int p6, gd::string p7);
    
private:
    [[deprecated("SongInfoLayer::onBPM not implemented")]]
    /**
     */
    void onBPM(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::onDownload not implemented")]]
    /**
     */
    void onDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::onFB not implemented")]]
    /**
     */
    void onFB(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x38bd20
     */
    void onMenuMusic(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SongInfoLayer::onNG not implemented")]]
    /**
     */
    void onNG(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x38bda0
     */
    void onPracticeMusic(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SongInfoLayer::onYT not implemented")]]
    /**
     */
    void onYT(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x38baa0
     */
    TodoReturn showCustomMusicUnlockInfo();
    
private:
    [[deprecated("SongInfoLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
};
