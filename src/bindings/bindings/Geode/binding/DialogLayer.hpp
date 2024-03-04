#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextAreaDelegate.hpp"

class DialogLayer : public cocos2d::CCLayerColor, public TextAreaDelegate {
public:
    static constexpr auto CLASS_NAME = "DialogLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("DialogLayer::create not implemented")]]
    /**
     */
    static DialogLayer* create(DialogObject* p0, int p1);
public:
    
private:
    [[deprecated("DialogLayer::addToMainScene not implemented")]]
    /**
     */
    TodoReturn addToMainScene();
public:

    /**
     * @note[short] Windows: 0x9b4c0
     */
    TodoReturn animateIn(DialogAnimationType p0);
    
private:
    [[deprecated("DialogLayer::animateInDialog not implemented")]]
    /**
     */
    TodoReturn animateInDialog();
public:
    
private:
    [[deprecated("DialogLayer::animateInRandomSide not implemented")]]
    /**
     */
    TodoReturn animateInRandomSide();
public:

    /**
     * @note[short] Windows: 0x9a850
     */
    static DialogLayer* createDialogLayer(DialogObject* p0, cocos2d::CCArray* p1, int p2);
    
private:
    [[deprecated("DialogLayer::createWithObjects not implemented")]]
    /**
     */
    TodoReturn createWithObjects(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("DialogLayer::displayDialogObject not implemented")]]
    /**
     */
    TodoReturn displayDialogObject(DialogObject* p0);
public:
    
private:
    [[deprecated("DialogLayer::displayNextObject not implemented")]]
    /**
     */
    TodoReturn displayNextObject();
public:
    
private:
    [[deprecated("DialogLayer::finishCurrentAnimation not implemented")]]
    /**
     */
    TodoReturn finishCurrentAnimation();
public:
    
private:
    [[deprecated("DialogLayer::handleDialogTap not implemented")]]
    /**
     */
    TodoReturn handleDialogTap();
public:

    /**
     * @note[short] Windows: 0x9a900
     */
    bool init(DialogObject* p0, cocos2d::CCArray* p1, int p2);
    
private:
    [[deprecated("DialogLayer::onClose not implemented")]]
    /**
     */
    TodoReturn onClose();
public:
    
private:
    [[deprecated("DialogLayer::updateChatPlacement not implemented")]]
    /**
     */
    TodoReturn updateChatPlacement(DialogChatPlacement p0);
public:
    
private:
    [[deprecated("DialogLayer::updateNavButtonFrame not implemented")]]
    /**
     */
    TodoReturn updateNavButtonFrame();
public:
    
private:
    [[deprecated("DialogLayer::onEnter not implemented")]]
    /**
     */
    virtual void onEnter();
public:
    
private:
    [[deprecated("DialogLayer::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("DialogLayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("DialogLayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("DialogLayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("DialogLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("DialogLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("DialogLayer::keyDown not implemented")]]
    /**
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("DialogLayer::fadeInTextFinished not implemented")]]
    /**
     */
    virtual TodoReturn fadeInTextFinished(TextArea* p0);
public:
};
