#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCIndexPath.hpp"
#include "CCScrollLayerExt.hpp"
#include "CCScrollLayerExtDelegate.hpp"

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
    static constexpr auto CLASS_NAME = "TableView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TableView, CCScrollLayerExt)
    
private:
    [[deprecated("TableView::create not implemented")]]
    /**
     */
    static TableView* create(TableViewDelegate* p0, TableViewDataSource* p1, TableViewCellDelegate* p2, cocos2d::CCRect p3);
public:
    
private:
    [[deprecated("TableView::cancelAndStoleTouch not implemented")]]
    /**
     */
    TodoReturn cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("TableView::cellForRowAtIndexPath not implemented")]]
    /**
     */
    TodoReturn cellForRowAtIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::cellForTouch not implemented")]]
    /**
     */
    TodoReturn cellForTouch(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfCell not implemented")]]
    /**
     */
    TodoReturn checkBoundaryOfCell(cocos2d::CCPoint& p0, float p1);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfCell not implemented")]]
    /**
     */
    TodoReturn checkBoundaryOfCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfContent not implemented")]]
    /**
     */
    TodoReturn checkBoundaryOfContent(float p0);
public:
    
private:
    [[deprecated("TableView::checkFirstCell not implemented")]]
    /**
     */
    TodoReturn checkFirstCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::checkLastCell not implemented")]]
    /**
     */
    TodoReturn checkLastCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::claimTouch not implemented")]]
    /**
     */
    TodoReturn claimTouch(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("TableView::deleteTableViewCell not implemented")]]
    /**
     */
    TodoReturn deleteTableViewCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::dequeueReusableCellWithIdentifier not implemented")]]
    /**
     */
    TodoReturn dequeueReusableCellWithIdentifier(char const* p0);
public:
    
private:
    [[deprecated("TableView::initTableViewCells not implemented")]]
    /**
     */
    TodoReturn initTableViewCells();
public:
    
private:
    [[deprecated("TableView::isDuplicateIndexPath not implemented")]]
    /**
     */
    bool isDuplicateIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::isDuplicateInVisibleCellArray not implemented")]]
    /**
     */
    bool isDuplicateInVisibleCellArray(CCIndexPath* p0);
public:

    /**
     * @note[short] Windows: 0x50770
     */
    TodoReturn reloadData();
    
private:
    [[deprecated("TableView::removeIndexPathFromPathAddedArray not implemented")]]
    /**
     */
    TodoReturn removeIndexPathFromPathAddedArray(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::scrollToIndexPath not implemented")]]
    /**
     */
    TodoReturn scrollToIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::touchFinish not implemented")]]
    /**
     */
    TodoReturn touchFinish(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("TableView::onEnter not implemented")]]
    /**
     */
    virtual void onEnter();
public:
    
private:
    [[deprecated("TableView::onExit not implemented")]]
    /**
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("TableView::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("TableView::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("TableView::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("TableView::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("TableView::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x50fd0
     */
    virtual void scrollWheel(float p0, float p1);
    
private:
    [[deprecated("TableView::scrllViewWillBeginDecelerating not implemented")]]
    /**
     */
    virtual TodoReturn scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);
public:
    
private:
    [[deprecated("TableView::scrollViewDidEndDecelerating not implemented")]]
    /**
     */
    virtual TodoReturn scrollViewDidEndDecelerating(CCScrollLayerExt* p0);
public:
    
private:
    [[deprecated("TableView::scrollViewTouchMoving not implemented")]]
    /**
     */
    virtual TodoReturn scrollViewTouchMoving(CCScrollLayerExt* p0);
public:
    
private:
    [[deprecated("TableView::scrollViewDidEndMoving not implemented")]]
    /**
     */
    virtual TodoReturn scrollViewDidEndMoving(CCScrollLayerExt* p0);
public:
    bool m_touchOutOfBoundary;
    cocos2d::CCTouch* m_touchStart;
    cocos2d::CCPoint m_touchStartPosition2;
    cocos2d::CCPoint m_unknown2;
    cocos2d::CCPoint m_touchPosition2;
    void* m_idk;
    bool m_touchMoved;
    cocos2d::CCArray* m_cellArray;
    cocos2d::CCArray* m_array2;
    cocos2d::CCArray* m_array3;
    TableViewDelegate* m_tableDelegate;
    TableViewDataSource* m_dataSource;
    TableViewCellDelegate* m_cellDelegate;
    int m_unused2;
    void* m_unused3;
    int m_unused4;
    float m_touchLastY;
    bool m_cancellingTouches;
};
