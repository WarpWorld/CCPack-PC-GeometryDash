#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class LikeItemLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LikeItemLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LikeItemLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x275d20
     */
    static LikeItemLayer* create(LikeItemType p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x275dd0
     */
    bool init(LikeItemType p0, int p1, int p2);
    
private:
    [[deprecated("LikeItemLayer::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LikeItemLayer::onDislike not implemented")]]
    /**
     */
    void onDislike(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LikeItemLayer::onLike not implemented")]]
    /**
     */
    void onLike(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LikeItemLayer::triggerLike not implemented")]]
    /**
     */
    TodoReturn triggerLike(bool p0);
public:
    
private:
    [[deprecated("LikeItemLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    LikeItemType m_itemType;
    int m_itemID;
    int m_commentSourceID;
    LikeItemDelegate* m_likeDelegate;
};
