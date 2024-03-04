#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomScrollLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomScrollLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("BoomScrollLayer::create not implemented")]]
    /**
     */
    static BoomScrollLayer* create(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);
public:
    
private:
    [[deprecated("BoomScrollLayer::create not implemented")]]
    /**
     */
    static BoomScrollLayer* create(cocos2d::CCArray* p0, int p1, bool p2);
public:
    
private:
    [[deprecated("BoomScrollLayer::addPage not implemented")]]
    /**
     */
    TodoReturn addPage(cocos2d::CCLayer* p0, int p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::addPage not implemented")]]
    /**
     */
    TodoReturn addPage(cocos2d::CCLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::cancelAndStoleTouch not implemented")]]
    /**
     */
    TodoReturn cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::claimTouch not implemented")]]
    /**
     */
    TodoReturn claimTouch(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getPage not implemented")]]
    /**
     */
    TodoReturn getPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getRelativePageForNum not implemented")]]
    /**
     */
    TodoReturn getRelativePageForNum(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getRelativePosForPage not implemented")]]
    /**
     */
    TodoReturn getRelativePosForPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getTotalPages not implemented")]]
    /**
     */
    TodoReturn getTotalPages();
public:
    
private:
    [[deprecated("BoomScrollLayer::init not implemented")]]
    /**
     */
    bool init(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);
public:
    
private:
    [[deprecated("BoomScrollLayer::instantMoveToPage not implemented")]]
    /**
     */
    TodoReturn instantMoveToPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::moveToPage not implemented")]]
    /**
     */
    TodoReturn moveToPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::moveToPageEnded not implemented")]]
    /**
     */
    TodoReturn moveToPageEnded();
public:
    
private:
    [[deprecated("BoomScrollLayer::pageNumberForPosition not implemented")]]
    /**
     */
    TodoReturn pageNumberForPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::positionForPageWithNumber not implemented")]]
    /**
     */
    TodoReturn positionForPageWithNumber(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::quickUpdate not implemented")]]
    /**
     */
    TodoReturn quickUpdate();
public:
    
private:
    [[deprecated("BoomScrollLayer::removePage not implemented")]]
    /**
     */
    TodoReturn removePage(cocos2d::CCLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::removePageWithNumber not implemented")]]
    /**
     */
    TodoReturn removePageWithNumber(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::repositionPagesLooped not implemented")]]
    /**
     */
    TodoReturn repositionPagesLooped();
public:
    
private:
    [[deprecated("BoomScrollLayer::selectPage not implemented")]]
    /**
     */
    TodoReturn selectPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::setDotScale not implemented")]]
    /**
     */
    void setDotScale(float p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::setPagesIndicatorPosition not implemented")]]
    /**
     */
    void setPagesIndicatorPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::setupDynamicScrolling not implemented")]]
    /**
     */
    TodoReturn setupDynamicScrolling(cocos2d::CCArray* p0, DynamicScrollDelegate* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::togglePageIndicators not implemented")]]
    /**
     */
    TodoReturn togglePageIndicators(bool p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::updateDots not implemented")]]
    /**
     */
    TodoReturn updateDots(float p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::updatePages not implemented")]]
    /**
     */
    TodoReturn updatePages();
public:
    
private:
    [[deprecated("BoomScrollLayer::visit not implemented")]]
    /**
     */
    virtual void visit();
public:
    
private:
    [[deprecated("BoomScrollLayer::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
};
