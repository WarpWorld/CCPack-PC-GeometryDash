#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TableViewDataSource {
public:
    static constexpr auto CLASS_NAME = "TableViewDataSource";

    /**
     * @note[short] Out of line
     */
    virtual int numberOfRowsInSection(unsigned int p0, TableView* p1);

    /**
     * @note[short] Out of line
     */
    virtual unsigned int numberOfSectionsInTableView(TableView* p0);

    /**
     * @note[short] Out of line
     */
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);

    /**
     * @note[short] Out of line
     */
    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);
};
