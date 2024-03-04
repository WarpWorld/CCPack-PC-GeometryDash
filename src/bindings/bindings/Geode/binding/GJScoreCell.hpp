#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJScoreCell : public TableViewCell, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJScoreCell, TableViewCell)

    /**
     * @note[short] Windows: 0x865b0
     */
    TodoReturn loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJScoreCell::onBan not implemented")]]
    /**
     */
    void onBan(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJScoreCell::onCheck not implemented")]]
    /**
     */
    void onCheck(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJScoreCell::onMoreLevels not implemented")]]
    /**
     */
    void onMoreLevels(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x876f0
     */
    void onViewProfile(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJScoreCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("GJScoreCell::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJScoreCell::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("GJScoreCell::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    GJUserScore* m_score;
};
