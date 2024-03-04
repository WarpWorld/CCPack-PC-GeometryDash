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
#include "TextInputDelegate.hpp"

class MoreSearchLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreSearchLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x265610
     */
    static MoreSearchLayer* create();
    
private:
    [[deprecated("MoreSearchLayer::audioNext not implemented")]]
    /**
     */
    TodoReturn audioNext(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("MoreSearchLayer::audioPrevious not implemented")]]
    /**
     */
    TodoReturn audioPrevious(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("MoreSearchLayer::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] Windows: 0x2671b0
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreSearchLayer::onCoins not implemented")]]
    /**
     */
    void onCoins(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onCompleted not implemented")]]
    /**
     */
    void onCompleted(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onEpic not implemented")]]
    /**
     */
    void onEpic(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onFeatured not implemented")]]
    /**
     */
    void onFeatured(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onFollowed not implemented")]]
    /**
     */
    void onFollowed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onFriends not implemented")]]
    /**
     */
    void onFriends(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onLegendary not implemented")]]
    /**
     */
    void onLegendary(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onMythic not implemented")]]
    /**
     */
    void onMythic(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onNoStar not implemented")]]
    /**
     */
    void onNoStar(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onOriginal not implemented")]]
    /**
     */
    void onOriginal(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2669e0
     */
    void onSongFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x266c90
     */
    void onSongMode(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreSearchLayer::onTwoPlayer not implemented")]]
    /**
     */
    void onTwoPlayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onUncompleted not implemented")]]
    /**
     */
    void onUncompleted(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::selectSong not implemented")]]
    /**
     */
    TodoReturn selectSong(int p0);
public:
    
private:
    [[deprecated("MoreSearchLayer::toggleSongNodes not implemented")]]
    /**
     */
    TodoReturn toggleSongNodes(bool p0, bool p1);
public:
    
private:
    [[deprecated("MoreSearchLayer::updateAudioLabel not implemented")]]
    /**
     */
    TodoReturn updateAudioLabel();
public:

    /**
     * @note[short] Windows: 0x2656b0
     */
    virtual bool init();
    
private:
    [[deprecated("MoreSearchLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("MoreSearchLayer::textInputShouldOffset not implemented")]]
    /**
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("MoreSearchLayer::textInputReturn not implemented")]]
    /**
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
    cocos2d::CCLabelBMFont* m_audioTrackName;
    CCMenuItemSpriteExtra* m_songLeftBtn;
    CCMenuItemSpriteExtra* m_songRightBtn;
    CCMenuItemSpriteExtra* m_normalBtn;
    CCMenuItemSpriteExtra* m_customBtn;
    CCTextInputNode* m_enterSongID;
};
