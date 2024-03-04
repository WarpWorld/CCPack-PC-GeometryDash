#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUINode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUINode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUINode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3c0230
     */
    static GJUINode* create(UIButtonConfig& p0);
    
private:
    [[deprecated("GJUINode::activeRangeTouchTest not implemented")]]
    /**
     */
    TodoReturn activeRangeTouchTest(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJUINode::activeTouchTest not implemented")]]
    /**
     */
    TodoReturn activeTouchTest(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJUINode::getButtonScale not implemented")]]
    /**
     */
    TodoReturn getButtonScale();
public:
    
private:
    [[deprecated("GJUINode::getOpacity not implemented")]]
    /**
     */
    TodoReturn getOpacity();
public:
    
private:
    [[deprecated("GJUINode::highlightButton not implemented")]]
    /**
     */
    TodoReturn highlightButton(int p0);
public:
    
private:
    [[deprecated("GJUINode::init not implemented")]]
    /**
     */
    bool init(UIButtonConfig& p0);
public:
    
private:
    [[deprecated("GJUINode::loadFromConfig not implemented")]]
    /**
     */
    TodoReturn loadFromConfig(UIButtonConfig& p0);
public:

    /**
     * @note[short] Windows: 0x3c04f0
     */
    TodoReturn resetState();
    
private:
    [[deprecated("GJUINode::saveToConfig not implemented")]]
    /**
     */
    TodoReturn saveToConfig(UIButtonConfig& p0);
public:
    
private:
    [[deprecated("GJUINode::setOpacity not implemented")]]
    /**
     */
    void setOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GJUINode::toggleHighlight not implemented")]]
    /**
     */
    TodoReturn toggleHighlight(int p0, bool p1);
public:
    
private:
    [[deprecated("GJUINode::toggleModeB not implemented")]]
    /**
     */
    TodoReturn toggleModeB(bool p0);
public:
    
private:
    [[deprecated("GJUINode::touchEnded not implemented")]]
    /**
     */
    TodoReturn touchEnded();
public:
    
private:
    [[deprecated("GJUINode::touchTest not implemented")]]
    /**
     */
    TodoReturn touchTest(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJUINode::updateButtonFrames not implemented")]]
    /**
     */
    TodoReturn updateButtonFrames();
public:
    
private:
    [[deprecated("GJUINode::updateButtonPositions not implemented")]]
    /**
     */
    TodoReturn updateButtonPositions();
public:
    
private:
    [[deprecated("GJUINode::updateButtonScale not implemented")]]
    /**
     */
    TodoReturn updateButtonScale(float p0);
public:
    
private:
    [[deprecated("GJUINode::updateDeadzone not implemented")]]
    /**
     */
    TodoReturn updateDeadzone(int p0);
public:
    
private:
    [[deprecated("GJUINode::updateDragRadius not implemented")]]
    /**
     */
    TodoReturn updateDragRadius(float p0);
public:
    
private:
    [[deprecated("GJUINode::updateHeight not implemented")]]
    /**
     */
    TodoReturn updateHeight(float p0);
public:
    
private:
    [[deprecated("GJUINode::updateRangePos not implemented")]]
    /**
     */
    TodoReturn updateRangePos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJUINode::updateSize not implemented")]]
    /**
     */
    TodoReturn updateSize(float p0, float p1);
public:
    
private:
    [[deprecated("GJUINode::updateWidth not implemented")]]
    /**
     */
    TodoReturn updateWidth(float p0);
public:
    
private:
    [[deprecated("GJUINode::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
};
