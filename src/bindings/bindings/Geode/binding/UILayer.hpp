#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UILayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "UILayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UILayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("UILayer::create not implemented")]]
    /**
     */
    static UILayer* create(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("UILayer::disableMenu not implemented")]]
    /**
     */
    TodoReturn disableMenu();
public:
    
private:
    [[deprecated("UILayer::editorPlaytest not implemented")]]
    /**
     */
    TodoReturn editorPlaytest(bool p0);
public:

    /**
     * @note[short] Windows: 0x3bf420
     */
    TodoReturn enableEditorMode();
    
private:
    [[deprecated("UILayer::enableMenu not implemented")]]
    /**
     */
    TodoReturn enableMenu();
public:

    /**
     * @note[short] Windows: 0x3bf480
     */
    TodoReturn handleKeypress(cocos2d::enumKeyCodes p0, bool p1);

    /**
     * @note[short] Windows: 0x3bec10
     */
    bool init(GJBaseGameLayer* p0);
    
private:
    [[deprecated("UILayer::isJumpButtonPressed not implemented")]]
    /**
     */
    bool isJumpButtonPressed(bool p0);
public:

    /**
     * @note[short] Windows: 0x3bfa10
     */
    void onCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3bfa50
     */
    void onDeleteCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3bf9a0
     */
    void onPause(cocos2d::CCObject* sender);
    
private:
    [[deprecated("UILayer::processUINodesTouch not implemented")]]
    /**
     */
    TodoReturn processUINodesTouch(GJUITouchEvent p0, cocos2d::CCTouch* p1);
public:
    
private:
    [[deprecated("UILayer::processUINodeTouch not implemented")]]
    /**
     */
    TodoReturn processUINodeTouch(GJUITouchEvent p0, int p1, cocos2d::CCPoint p2, GJUINode* p3);
public:
    
private:
    [[deprecated("UILayer::refreshDpad not implemented")]]
    /**
     */
    TodoReturn refreshDpad();
public:

    /**
     * @note[short] Windows: 0x3bfad0
     */
    TodoReturn resetAllButtons();

    /**
     * @note[short] Windows: 0x3bf390
     */
    TodoReturn resetUINodeState();
    
private:
    [[deprecated("UILayer::toggleCheckpointsMenu not implemented")]]
    /**
     */
    TodoReturn toggleCheckpointsMenu(bool p0);
public:

    /**
     * @note[short] Windows: 0x3bfa80
     */
    TodoReturn toggleMenuVisibility(bool p0);
    
private:
    [[deprecated("UILayer::togglePlatformerMode not implemented")]]
    /**
     */
    TodoReturn togglePlatformerMode(bool p0);
public:
    
private:
    [[deprecated("UILayer::updateDualMode not implemented")]]
    /**
     */
    TodoReturn updateDualMode(bool p0);
public:
    
private:
    [[deprecated("UILayer::updateUINodeVisibility not implemented")]]
    /**
     */
    TodoReturn updateUINodeVisibility(bool p0);
public:

    /**
     * @note[short] Windows: 0x3c0de0
     */
    virtual void draw();
    
private:
    [[deprecated("UILayer::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UILayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UILayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UILayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UILayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x3bf970
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x3bf930
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x3bf950
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    void* m_stupidDelegate;
};
