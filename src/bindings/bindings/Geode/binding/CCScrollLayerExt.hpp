#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCScrollLayerExt : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CCScrollLayerExt";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCScrollLayerExt, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x276e0
     */
     CCScrollLayerExt(cocos2d::CCRect p0);
    
private:
    [[deprecated("CCScrollLayerExt::constraintContent not implemented")]]
    /**
     */
    TodoReturn constraintContent();
public:
    
private:
    [[deprecated("CCScrollLayerExt::doConstraintContent not implemented")]]
    /**
     */
    TodoReturn doConstraintContent(bool p0);
public:
    
private:
    [[deprecated("CCScrollLayerExt::getMaxY not implemented")]]
    /**
     */
    TodoReturn getMaxY();
public:
    
private:
    [[deprecated("CCScrollLayerExt::getMinY not implemented")]]
    /**
     */
    TodoReturn getMinY();
public:

    /**
     * @note[short] Windows: 0x27b60
     */
    TodoReturn moveToTop();

    /**
     * @note[short] Windows: 0x27ae0
     */
    TodoReturn moveToTopWithOffset(float p0);
    
private:
    [[deprecated("CCScrollLayerExt::scrollingEnd not implemented")]]
    /**
     */
    TodoReturn scrollingEnd();
public:

    /**
     * @note[short] Windows: 0x28550
     */
    TodoReturn scrollLayer(float p0);
    
private:
    [[deprecated("CCScrollLayerExt::setContentLayerSize not implemented")]]
    /**
     */
    void setContentLayerSize(cocos2d::CCSize p0);
public:
    
private:
    [[deprecated("CCScrollLayerExt::setContentOffset not implemented")]]
    /**
     */
    void setContentOffset(cocos2d::CCPoint p0, bool p1);
public:
    
private:
    [[deprecated("CCScrollLayerExt::updateIndicators not implemented")]]
    /**
     */
    TodoReturn updateIndicators(float p0);
public:

    /**
     * @note[short] Windows: 0x28600
     */
    virtual void visit();

    /**
     * @note[short] Windows: 0x280d0
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x28410
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x281c0
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x283e0
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x280a0
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x286d0
     */
    virtual TodoReturn preVisitWithClippingRect(cocos2d::CCRect p0);

    /**
     * @note[short] Windows: 0x28760
     */
    virtual TodoReturn postVisit();
    cocos2d::CCTouch* m_touch;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::cc_timeval m_timeValue;
    bool m_touchDown;
    bool m_notAtEndOfScroll;
    cocos2d::CCLayerColor* m_verticalScrollbar;
    cocos2d::CCLayerColor* m_horizontalScrollbar;
    CCScrollLayerExtDelegate* m_delegate;
    CCContentLayer* m_contentLayer;
    bool m_cutContent;
    bool m_vScrollbarVisible;
    bool m_hScrollbarVisible;
    bool m_disableHorizontal;
    bool m_disableVertical;
    bool m_disableMovement;
    float m_scrollLimitTop;
    float m_scrollLimitBottom;
    float m_peekLimitTop;
    float m_peekLimitBottom;
};
