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
#include "TextInputDelegate.hpp"

class SetGroupIDLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetGroupIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetGroupIDLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x310cd0
     */
    static SetGroupIDLayer* create(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x314320
     */
    TodoReturn addGroupID(int p0);
    
private:
    [[deprecated("SetGroupIDLayer::callRemoveFromGroup not implemented")]]
    /**
     */
    void callRemoveFromGroup(float p0);
public:

    /**
     * @note[short] Windows: 0x312b40
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, int p1, int p2, gd::string p3, float p4, int p5);

    /**
     * @note[short] Windows: 0x313130
     */
    TodoReturn determineStartValues();

    /**
     * @note[short] Windows: 0x310d80
     */
    bool init(GameObject* obj, cocos2d::CCArray* objs);

    /**
     * @note[short] Windows: 0x313fd0
     */
    void onAddGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x313fe0
     */
    void onAddGroupParent(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x313580
     */
    void onAnim(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x312fc0
     */
    TodoReturn onArrow(int p0, int p1);

    /**
     * @note[short] Windows: 0x312f80
     */
    void onArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x312fa0
     */
    void onArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x314bd0
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3134a0
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x313530
     */
    void onExtra(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x313560
     */
    void onExtra2(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3142c0
     */
    void onNextFreeEditorLayer1(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3142f0
     */
    void onNextFreeEditorLayer2(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x314910
     */
    void onNextFreeOrderChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3137e0
     */
    void onNextGroupID1(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3134c0
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x313f20
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetGroupIDLayer::onSmoothEase not implemented")]]
    /**
     */
    void onSmoothEase(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x312aa0
     */
    void onToggleGuide(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x312af0
     */
    void onToggleSelectedOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x314050
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x314150
     */
    void onZLayerShift(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetGroupIDLayer::removeGroupID not implemented")]]
    /**
     */
    TodoReturn removeGroupID(int p0);
public:

    /**
     * @note[short] Windows: 0x314610
     */
    TodoReturn updateEditorLabel();

    /**
     * @note[short] Windows: 0x3146a0
     */
    TodoReturn updateEditorLabel2();

    /**
     * @note[short] Windows: 0x314200
     */
    TodoReturn updateEditorLayerID();

    /**
     * @note[short] Windows: 0x314260
     */
    TodoReturn updateEditorLayerID2();

    /**
     * @note[short] Windows: 0x314b40
     */
    TodoReturn updateEditorOrder();

    /**
     * @note[short] Windows: 0x314850
     */
    TodoReturn updateEditorOrderLabel();

    /**
     * @note[short] Windows: 0x313810
     */
    TodoReturn updateGroupIDButtons();

    /**
     * @note[short] Windows: 0x3147c0
     */
    TodoReturn updateGroupIDLabel();

    /**
     * @note[short] Windows: 0x314ab0
     */
    TodoReturn updateOrderChannel();

    /**
     * @note[short] Windows: 0x3148b0
     */
    TodoReturn updateOrderChannelLabel();
    
private:
    [[deprecated("SetGroupIDLayer::updateZLayerButtons not implemented")]]
    /**
     */
    TodoReturn updateZLayerButtons();
public:

    /**
     * @note[short] Windows: 0x314590
     */
    TodoReturn updateZOrder();

    /**
     * @note[short] Windows: 0x314730
     */
    TodoReturn updateZOrderLabel();
    
private:
    [[deprecated("SetGroupIDLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SetGroupIDLayer::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetGroupIDLayer::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_array0;
    cocos2d::CCArray* m_groupIDObjects;
    CCTextInputNode* m_editorLayerInput;
    CCTextInputNode* m_editorLayer2Input;
    CCTextInputNode* m_zOrderInput;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    bool m_showChannelOrder;
    int m_channelValue;
    bool m_channelUpdated;
    int m_groupIDValue;
    int m_editorLayerValue;
    int m_editorLayer2Value;
    int m_zOrderValue;
    ZLayer m_zLayerValue;
    int m_orderValue;
    bool m_channelOrderEdited;
    bool m_editorLayerEdited;
    bool m_removeGroupsLock;
    int m_groupToRemove;
    bool m_addedGroup;
    bool m_unkBool0;
    bool m_hasTargetObjects;
};
