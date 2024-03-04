#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "GameRateDelegate.hpp"
#include "ListButtonBarDelegate.hpp"
#include "DialogDelegate.hpp"
#include "CharacterColorDelegate.hpp"

class GJGarageLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate, public CharacterColorDelegate {
public:
    static constexpr auto CLASS_NAME = "GJGarageLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGarageLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GJGarageLayer::achievementForUnlock not implemented")]]
    /**
     */
    TodoReturn achievementForUnlock(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GJGarageLayer::descriptionForUnlock not implemented")]]
    /**
     */
    TodoReturn descriptionForUnlock(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GJGarageLayer::getItems not implemented")]]
    /**
     */
    TodoReturn getItems(IconType p0);
public:

    /**
     * @note[short] Windows: 0x1f2310
     */
    TodoReturn getItems(int p0, int p1, IconType p2, int p3);
    
private:
    [[deprecated("GJGarageLayer::getLockFrame not implemented")]]
    /**
     */
    TodoReturn getLockFrame(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x1eedc0
     */
    static GJGarageLayer* node();

    /**
     * @note[short] Windows: 0x1f1bf0
     */
    void onArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f3c70
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJGarageLayer::onInfo not implemented")]]
    /**
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJGarageLayer::onNavigate not implemented")]]
    /**
     */
    void onNavigate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x1f3bb0
     */
    void onPaint(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f2d30
     */
    void onSelect(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJGarageLayer::onSelectTab not implemented")]]
    /**
     */
    void onSelectTab(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x1f3b90
     */
    void onShards(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f3c00
     */
    void onShop(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJGarageLayer::onSpecial not implemented")]]
    /**
     */
    void onSpecial(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x1f3050
     */
    void onToggleItem(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f3a00
     */
    TodoReturn playRainbowEffect();
    
private:
    [[deprecated("GJGarageLayer::playShadowEffect not implemented")]]
    /**
     */
    TodoReturn playShadowEffect();
public:
	inline static cocos2d::CCScene* scene() {
		auto scene = cocos2d::CCScene::create();
		scene->addChild(GJGarageLayer::node());
		return scene;
	}

    /**
     * @note[short] Windows: 0x1f1cd0
     */
    TodoReturn selectTab(IconType p0);

    /**
     * @note[short] Windows: 0x1f1170
     */
    TodoReturn setupIconSelect();

    /**
     * @note[short] Windows: 0x1f1d70
     */
    void setupPage(int p0, IconType p1);

    /**
     * @note[short] Windows: 0x1f2590
     */
    TodoReturn setupSpecialPage();
    
private:
    [[deprecated("GJGarageLayer::showUnlockPopupNew not implemented")]]
    /**
     */
    TodoReturn showUnlockPopupNew(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GJGarageLayer::titleForUnlock not implemented")]]
    /**
     */
    TodoReturn titleForUnlock(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GJGarageLayer::toggleGlow not implemented")]]
    /**
     */
    TodoReturn toggleGlow();
public:

    /**
     * @note[short] Windows: 0x1f3180
     */
    TodoReturn updatePlayerColors();
    
private:
    [[deprecated("GJGarageLayer::updatePlayerName not implemented")]]
    /**
     */
    TodoReturn updatePlayerName(char const* p0);
public:

    /**
     * @note[short] Windows: 0x1ef250
     */
    virtual bool init();
    
private:
    [[deprecated("GJGarageLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJGarageLayer::textInputOpened not implemented")]]
    /**
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("GJGarageLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("GJGarageLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("GJGarageLayer::listButtonBarSwitchedPage not implemented")]]
    /**
     */
    virtual TodoReturn listButtonBarSwitchedPage(ListButtonBar* p0, int p1);
public:

    /**
     * @note[short] Windows: 0x1f32b0
     */
    virtual TodoReturn showUnlockPopup(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x1f3880
     */
    virtual TodoReturn updateRate();
    
private:
    [[deprecated("GJGarageLayer::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("GJGarageLayer::dialogClosed not implemented")]]
    /**
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
public:
    
private:
    [[deprecated("GJGarageLayer::playerColorChanged not implemented")]]
    /**
     */
    virtual TodoReturn playerColorChanged();
public:
};
