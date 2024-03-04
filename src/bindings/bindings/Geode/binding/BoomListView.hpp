#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewDelegate.hpp"
#include "TableViewDataSource.hpp"

class BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
    static constexpr auto CLASS_NAME = "BoomListView";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListView, cocos2d::CCLayer)

    /**
     * @note[short] Out of line
     */
     BoomListView();

    /**
     * @note[short] Out of line
     */
     ~BoomListView();
    
private:
    [[deprecated("BoomListView::create not implemented")]]
    /**
     */
    static BoomListView* create(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);
public:
    
private:
    [[deprecated("BoomListView::addObjectToList not implemented")]]
    /**
     */
    TodoReturn addObjectToList(cocos2d::CCNode* p0);
public:

    /**
     * @note[short] Windows: 0x1d400
     */
    bool init(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);
    
private:
    [[deprecated("BoomListView::lockList not implemented")]]
    /**
     */
    TodoReturn lockList(bool p0);
public:

    /**
     * @note[short] Out of line
     */
    bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height);

    /**
     * @note[short] Out of line
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x1d5c0
     */
    virtual TodoReturn setupList(float p0);

    /**
     * @note[short] Out of line
     */
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] Windows: 0x1d650
     */
    virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] Out of line
     */
    virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] Windows: 0x1d660
     */
    virtual int numberOfRowsInSection(unsigned p0, TableView* p1);

    /**
     * @note[short] Out of line
     */
    virtual unsigned int numberOfSectionsInTableView(TableView* p0);

    /**
     * @note[short] Windows: 0x1d670
     */
    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] Out of line
     */
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);

    /**
     * @note[short] Out of line
     */
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] Windows: 0x1d6d0
     */
    virtual TableViewCell* getListCell(char const* p0);

    /**
     * @note[short] Windows: 0x1d7b0
     */
    virtual TodoReturn loadCell(TableViewCell* p0, int p1);
    TableView* m_tableView;
    cocos2d::CCArray* m_entries;
    BoomListType m_type;
    float m_height;
    float m_width;
    float m_itemSeparation;
    int m_currentPage;
    bool m_locked;
};
