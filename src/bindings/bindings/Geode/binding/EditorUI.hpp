#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "ColorSelectDelegate.hpp"
#include "GJRotationControlDelegate.hpp"
#include "GJScaleControlDelegate.hpp"
#include "GJTransformControlDelegate.hpp"
#include "MusicDownloadDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public GJTransformControlDelegate, public MusicDownloadDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorUI";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditorUI, cocos2d::CCLayer)
    
private:
    [[deprecated("EditorUI::create not implemented")]]
    /**
     */
    static EditorUI* create(LevelEditorLayer* p0);
public:

    /**
     * @note[short] Windows: 0xd83d0
     */
    TodoReturn activateRotationControl(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xcc130
     */
    TodoReturn activateScaleControl(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::activateTransformControl not implemented")]]
    /**
     */
    TodoReturn activateTransformControl(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::addObjectsToSmartTemplate not implemented")]]
    /**
     */
    TodoReturn addObjectsToSmartTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("EditorUI::addSnapPosition not implemented")]]
    /**
     */
    TodoReturn addSnapPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("EditorUI::alignObjects not implemented")]]
    /**
     */
    TodoReturn alignObjects(cocos2d::CCArray* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0xd7d70
     */
    TodoReturn applyOffset(GameObject* p0);
    
private:
    [[deprecated("EditorUI::applySpecialOffset not implemented")]]
    /**
     */
    TodoReturn applySpecialOffset(cocos2d::CCPoint p0, GameObject* p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("EditorUI::arrayContainsClass not implemented")]]
    /**
     */
    TodoReturn arrayContainsClass(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::assignNewGroups not implemented")]]
    /**
     */
    TodoReturn assignNewGroups(bool p0);
public:
    
private:
    [[deprecated("EditorUI::canAllowMultiActivate not implemented")]]
    /**
     */
    TodoReturn canAllowMultiActivate(GameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] Windows: 0xc89c0
     */
    TodoReturn canSelectObject(GameObject* p0);

    /**
     * @note[short] Windows: 0xaa950
     */
    TodoReturn centerCameraOnObject(GameObject* p0);
    
private:
    [[deprecated("EditorUI::changeSelectedObjects not implemented")]]
    /**
     */
    TodoReturn changeSelectedObjects(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::checkDiffAfterTransformAnchor not implemented")]]
    /**
     */
    TodoReturn checkDiffAfterTransformAnchor(cocos2d::CCPoint p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] Windows: 0xc8b70
     */
    TodoReturn checkLiveColorSelect();

    /**
     * @note[short] Windows: 0xa6870
     */
    TodoReturn clickOnPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0xd4550
     */
    TodoReturn closeLiveColorSelect();

    /**
     * @note[short] Windows: 0xd46d0
     */
    TodoReturn closeLiveHSVSelect();
    
private:
    [[deprecated("EditorUI::colorSelectClosed not implemented")]]
    /**
     */
    TodoReturn colorSelectClosed(cocos2d::ccColor3B p0);
public:

    /**
     * @note[short] Windows: 0xd7df0
     */
    TodoReturn constrainGameLayerPosition();

    /**
     * @note[short] Windows: 0xd7df0
     */
    void constrainGameLayerPosition(float p0, float p1);
    
private:
    [[deprecated("EditorUI::convertKeyBasedOnNeighbors not implemented")]]
    /**
     */
    TodoReturn convertKeyBasedOnNeighbors(int p0, int p1, cocos2d::CCPoint p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::convertToBaseKey not implemented")]]
    /**
     */
    TodoReturn convertToBaseKey(int p0);
public:

    /**
     * @note[short] Windows: 0xca970
     */
    TodoReturn copyObjects(cocos2d::CCArray* p0, bool p1, bool p2);
    
private:
    [[deprecated("EditorUI::copyObjectsDetailed not implemented")]]
    /**
     */
    TodoReturn copyObjectsDetailed(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0xa8570
     */
    cocos2d::CCArray* createCustomItems();
    
private:
    [[deprecated("EditorUI::createEdgeForObject not implemented")]]
    /**
     */
    TodoReturn createEdgeForObject(GameObject* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::createExtraObject not implemented")]]
    /**
     */
    TodoReturn createExtraObject(int p0, cocos2d::CCPoint p1, GameObject* p2, cocos2d::CCArray* p3, int p4, int p5);
public:
    
private:
    [[deprecated("EditorUI::createExtras not implemented")]]
    /**
     */
    TodoReturn createExtras(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createExtrasForObject not implemented")]]
    /**
     */
    TodoReturn createExtrasForObject(int p0, GameObject* p1, cocos2d::CCArray* p2);
public:
    
private:
    [[deprecated("EditorUI::createGlow not implemented")]]
    /**
     */
    TodoReturn createGlow();
public:
    
private:
    [[deprecated("EditorUI::createLoop not implemented")]]
    /**
     */
    TodoReturn createLoop();
public:

    /**
     * @note[short] Windows: 0xd1be0
     */
    TodoReturn createMoveMenu();
    
private:
    [[deprecated("EditorUI::createNewKeyframeAnim not implemented")]]
    /**
     */
    TodoReturn createNewKeyframeAnim();
public:

    /**
     * @note[short] Windows: 0xc86a0
     */
    TodoReturn createObject(int p0, cocos2d::CCPoint p1);
    
private:
    [[deprecated("EditorUI::createOutlines not implemented")]]
    /**
     */
    TodoReturn createOutlines(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createPrefab not implemented")]]
    /**
     */
    TodoReturn createPrefab(GJSmartTemplate* p0, gd::string p1, int p2);
public:
    
private:
    [[deprecated("EditorUI::createRockBases not implemented")]]
    /**
     */
    TodoReturn createRockBases(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createRockEdges not implemented")]]
    /**
     */
    TodoReturn createRockEdges(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createSmartObjectsFromTemplate not implemented")]]
    /**
     */
    TodoReturn createSmartObjectsFromTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1, bool p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("EditorUI::createSmartObjectsFromType not implemented")]]
    /**
     */
    TodoReturn createSmartObjectsFromType(int p0, cocos2d::CCArray* p1, bool p2, bool p3);
public:

    /**
     * @note[short] Windows: 0xc9320
     */
    TodoReturn createUndoObject(UndoCommand p0, bool p1);

    /**
     * @note[short] Windows: 0xc9470
     */
    TodoReturn createUndoSelectObject(bool p0);
    
private:
    [[deprecated("EditorUI::deactivateRotationControl not implemented")]]
    /**
     */
    TodoReturn deactivateRotationControl();
public:

    /**
     * @note[short] Windows: 0xcc2d0
     */
    TodoReturn deactivateScaleControl();

    /**
     * @note[short] Windows: 0xcc800
     */
    TodoReturn deactivateTransformControl();

    /**
     * @note[short] Windows: 0xaa120
     */
    void deleteObject(GameObject* p0, bool p1);
    
private:
    [[deprecated("EditorUI::deleteSmartBlocksFromObjects not implemented")]]
    /**
     */
    TodoReturn deleteSmartBlocksFromObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::deleteTypeFromObjects not implemented")]]
    /**
     */
    TodoReturn deleteTypeFromObjects(int p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] Windows: 0xc9600
     */
    TodoReturn deselectAll();

    /**
     * @note[short] Windows: 0xc94f0
     */
    TodoReturn deselectObject();

    /**
     * @note[short] Windows: 0xc9540
     */
    TodoReturn deselectObject(GameObject* p0);
    
private:
    [[deprecated("EditorUI::deselectObjectsColor not implemented")]]
    /**
     */
    TodoReturn deselectObjectsColor();
public:

    /**
     * @note[short] Windows: 0xaa480
     */
    TodoReturn deselectTargetPortals();
    
private:
    [[deprecated("EditorUI::disableButton not implemented")]]
    /**
     */
    TodoReturn disableButton(CreateMenuItem* p0);
public:

    /**
     * @note[short] Windows: 0xcaf10
     */
    TodoReturn doCopyObjects(bool p0);
    
private:
    [[deprecated("EditorUI::doPasteInPlace not implemented")]]
    /**
     */
    TodoReturn doPasteInPlace(bool p0);
public:

    /**
     * @note[short] Windows: 0xcb090
     */
    TodoReturn doPasteObjects(bool p0);
    
private:
    [[deprecated("EditorUI::dynamicGroupUpdate not implemented")]]
    /**
     */
    TodoReturn dynamicGroupUpdate(bool p0);
public:
    
private:
    [[deprecated("EditorUI::edgeForObject not implemented")]]
    /**
     */
    TodoReturn edgeForObject(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0xd13a0
     */
    TodoReturn editButton2Usable();

    /**
     * @note[short] Windows: 0xd0cc0
     */
    TodoReturn editButtonUsable();

    /**
     * @note[short] Windows: 0xd4110
     */
    TodoReturn editColor();

    /**
     * @note[short] Windows: 0xd3d50
     */
    TodoReturn editColorButtonUsable();

    /**
     * @note[short] Windows: 0xd4720
     */
    TodoReturn editGroup(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xd45a0
     */
    TodoReturn editHSV();

    /**
     * @note[short] Windows: 0xd2840
     */
    TodoReturn editObject(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xd36b0
     */
    TodoReturn editObject2(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::editObject3 not implemented")]]
    /**
     */
    TodoReturn editObject3(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0xd36c0
     */
    TodoReturn editObjectSpecial(int p0);

    /**
     * @note[short] Windows: 0xcbda0
     */
    TodoReturn editorLayerForArray(cocos2d::CCArray* p0, bool p1);
    
private:
    [[deprecated("EditorUI::enableButton not implemented")]]
    /**
     */
    TodoReturn enableButton(CreateMenuItem* p0);
public:

    /**
     * @note[short] Windows: 0xaa870
     */
    TodoReturn findAndSelectObject(int p0, bool p1);
    
private:
    [[deprecated("EditorUI::findSnapObject not implemented")]]
    /**
     */
    TodoReturn findSnapObject(cocos2d::CCArray* p0, float p1);
public:
    
private:
    [[deprecated("EditorUI::findSnapObject not implemented")]]
    /**
     */
    TodoReturn findSnapObject(cocos2d::CCPoint p0, float p1);
public:
    
private:
    [[deprecated("EditorUI::findTriggerTest not implemented")]]
    /**
     */
    TodoReturn findTriggerTest();
public:

    /**
     * @note[short] Windows: 0xd5c20
     */
    TodoReturn flipObjectsX(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0xd5e50
     */
    TodoReturn flipObjectsY(cocos2d::CCArray* p0);
    
private:
    [[deprecated("EditorUI::getButton not implemented")]]
    /**
     */
    TodoReturn getButton(char const* p0, int p1, cocos2d::SEL_MenuHandler p2, cocos2d::CCMenu* p3);
public:

    /**
     * @note[short] Windows: 0xc78a0
     */
    CreateMenuItem* getCreateBtn(int id, int bg);
    
private:
    [[deprecated("EditorUI::getCreateMenuItemButton not implemented")]]
    /**
     */
    TodoReturn getCreateMenuItemButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:
    
private:
    [[deprecated("EditorUI::getCycledObject not implemented")]]
    /**
     */
    TodoReturn getCycledObject(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::getEditColorTargets not implemented")]]
    /**
     */
    TodoReturn getEditColorTargets(ColorAction*& p0, ColorAction*& p1, EffectGameObject*& p2);
public:

    /**
     * @note[short] Windows: 0xd8aa0
     */
    TodoReturn getGridSnappedPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0xd8140
     */
    TodoReturn getGroupCenter(cocos2d::CCArray* p0, bool p1);
    
private:
    [[deprecated("EditorUI::getGroupInfo not implemented")]]
    /**
     */
    TodoReturn getGroupInfo(GameObject* p0, cocos2d::CCArray* p1, int& p2, int& p3, int& p4);
public:

    /**
     * @note[short] Windows: 0xd4ff0
     */
    TodoReturn getLimitedPosition(cocos2d::CCPoint p0);
    
private:
    [[deprecated("EditorUI::getModeBtn not implemented")]]
    /**
     */
    TodoReturn getModeBtn(char const* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::getNeighbor not implemented")]]
    /**
     */
    TodoReturn getNeighbor(int p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::getRandomStartKey not implemented")]]
    /**
     */
    TodoReturn getRandomStartKey(int p0);
public:
    
private:
    [[deprecated("EditorUI::getRelativeOffset not implemented")]]
    /**
     */
    TodoReturn getRelativeOffset(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0xc92a0
     */
    cocos2d::CCArray* getSelectedObjects();
    
private:
    [[deprecated("EditorUI::getSimpleButton not implemented")]]
    /**
     */
    TodoReturn getSimpleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2);
public:
    
private:
    [[deprecated("EditorUI::getSmartNeighbor not implemented")]]
    /**
     */
    TodoReturn getSmartNeighbor(SmartGameObject* p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::getSmartObjectKey not implemented")]]
    /**
     */
    TodoReturn getSmartObjectKey(int p0, GJSmartDirection p1);
public:

    /**
     * @note[short] Windows: 0x23c490
     */
    TodoReturn getSnapAngle(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("EditorUI::getSpriteButton not implemented")]]
    /**
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:

    /**
     * @note[short] Windows: 0xa6c00
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
    
private:
    [[deprecated("EditorUI::getSpriteButton not implemented")]]
    /**
     */
    CCMenuItemSpriteExtra* getSpriteButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:
    
private:
    [[deprecated("EditorUI::getTouchPoint not implemented")]]
    /**
     */
    TodoReturn getTouchPoint(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("EditorUI::getTransformState not implemented")]]
    /**
     */
    TodoReturn getTransformState();
public:

    /**
     * @note[short] Windows: 0xd8010
     */
    TodoReturn getXMin(int p0);

    /**
     * @note[short] Windows: 0xa4260
     */
    bool init(LevelEditorLayer* editorLayer);
    
private:
    [[deprecated("EditorUI::isLiveColorSelectTrigger not implemented")]]
    /**
     */
    bool isLiveColorSelectTrigger(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0xdd6e0
     */
    bool isSpecialSnapObject(int p0);
    
private:
    [[deprecated("EditorUI::liveEditColorUsable not implemented")]]
    /**
     */
    TodoReturn liveEditColorUsable();
public:
    
private:
    [[deprecated("EditorUI::menuItemFromObjectString not implemented")]]
    /**
     */
    TodoReturn menuItemFromObjectString(gd::string p0, int p1);
public:

    /**
     * @note[short] Windows: 0xd4a20
     */
    cocos2d::CCPoint moveForCommand(EditCommand command);

    /**
     * @note[short] Windows: 0xa7070
     */
    TodoReturn moveGamelayer(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0xd4f10
     */
    TodoReturn moveObject(GameObject* p0, cocos2d::CCPoint p1);
    
private:
    [[deprecated("EditorUI::moveObjectCall not implemented")]]
    /**
     */
    TodoReturn moveObjectCall(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0xd4d40
     */
    TodoReturn moveObjectCall(EditCommand p0);

    /**
     * @note[short] Windows: 0xdb460
     */
    TodoReturn offsetForKey(int p0);
    
private:
    [[deprecated("EditorUI::onAssignNewGroupID not implemented")]]
    /**
     */
    TodoReturn onAssignNewGroupID();
public:
    
private:
    [[deprecated("EditorUI::onColorFilter not implemented")]]
    /**
     */
    void onColorFilter(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xcaf00
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcbcd0
     */
    void onCopyState(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc7ee0
     */
    bool onCreate();

    /**
     * @note[short] Windows: 0xc7d50
     */
    void onCreateButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc7fc0
     */
    TodoReturn onCreateObject(int p0);

    /**
     * @note[short] Windows: 0xa9b50
     */
    void onDelete(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onDeleteAll not implemented")]]
    /**
     */
    void onDeleteAll(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteCustomItem not implemented")]]
    /**
     */
    void onDeleteCustomItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteInfo not implemented")]]
    /**
     */
    void onDeleteInfo(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xaa1a0
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xaa5f0
     */
    void onDeleteSelectedType(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onDeleteStartPos not implemented")]]
    /**
     */
    void onDeleteStartPos(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xc95c0
     */
    void onDeselectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xca7d0
     */
    void onDuplicate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd3eb0
     */
    void onEditColor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onFindObject not implemented")]]
    /**
     */
    void onFindObject(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xcbec0
     */
    void onGoToBaseLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcbe10
     */
    void onGoToLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd47a0
     */
    void onGroupDown(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onGroupIDFilter not implemented")]]
    /**
     */
    void onGroupIDFilter(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xca5c0
     */
    void onGroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd4780
     */
    void onGroupUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd48f0
     */
    void onLockLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa81c0
     */
    void onNewCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcb080
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcbd50
     */
    void onPasteColor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onPasteInPlace not implemented")]]
    /**
     */
    void onPasteInPlace(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xcbd00
     */
    void onPasteState(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa6130
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc9d20
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xca090
     */
    void onPlaytest(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onResetSpecialFilter not implemented")]]
    /**
     */
    void onResetSpecialFilter(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xcbee0
     */
    void onSelectBuildTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa60e0
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xca200
     */
    void onStopPlaytest(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onTargetIDChange not implemented")]]
    /**
     */
    TodoReturn onTargetIDChange(int p0);
public:
    
private:
    [[deprecated("EditorUI::onToggleGuide not implemented")]]
    /**
     */
    TodoReturn onToggleGuide(EffectGameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::onToggleSelectedOrder not implemented")]]
    /**
     */
    TodoReturn onToggleSelectedOrder(EffectGameObject* p0);
public:

    /**
     * @note[short] Windows: 0xca600
     */
    void onUngroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xaabe0
     */
    void onUpdateDeleteFilter(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::orderDownCustomItem not implemented")]]
    /**
     */
    TodoReturn orderDownCustomItem(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::orderUpCustomItem not implemented")]]
    /**
     */
    TodoReturn orderUpCustomItem(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0xcb240
     */
    TodoReturn pasteObjects(gd::string p0, bool p1);
    
private:
    [[deprecated("EditorUI::playCircleAnim not implemented")]]
    /**
     */
    TodoReturn playCircleAnim(cocos2d::CCPoint p0, float p1, float p2);
public:
    
private:
    [[deprecated("EditorUI::playerTouchBegan not implemented")]]
    /**
     */
    TodoReturn playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("EditorUI::playerTouchEnded not implemented")]]
    /**
     */
    TodoReturn playerTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] Windows: 0xca240
     */
    TodoReturn playtestStopped();

    /**
     * @note[short] Windows: 0xc8720
     */
    TodoReturn positionIsInSnapped(cocos2d::CCPoint p0);
    
private:
    [[deprecated("EditorUI::positionWithoutOffset not implemented")]]
    /**
     */
    TodoReturn positionWithoutOffset(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::processSelectObjects not implemented")]]
    /**
     */
    TodoReturn processSelectObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::processSmartObjectsFromType not implemented")]]
    /**
     */
    TodoReturn processSmartObjectsFromType(int p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2, cocos2d::CCArray* p3, cocos2d::CCArray* p4);
public:

    /**
     * @note[short] Windows: 0xa8a60
     */
    void recreateButtonTabs();

    /**
     * @note[short] Windows: 0xc9ba0
     */
    TodoReturn redoLastAction(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xa8a10
     */
    void reloadCustomItems();

    /**
     * @note[short] Windows: 0xd7cf0
     */
    TodoReturn removeOffset(GameObject* p0);
    
private:
    [[deprecated("EditorUI::replaceGroupID not implemented")]]
    /**
     */
    TodoReturn replaceGroupID(GameObject* p0, int p1, int p2);
public:

    /**
     * @note[short] Windows: 0xcbc50
     */
    TodoReturn repositionObjectsToCenter(cocos2d::CCArray* p0, cocos2d::CCPoint p1, bool p2);

    /**
     * @note[short] Windows: 0xcca80
     */
    TodoReturn resetObjectEditorValues(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0xd4990
     */
    TodoReturn resetSelectedObjectsColor();

    /**
     * @note[short] Windows: 0xa8b10
     */
    TodoReturn resetUI();

    /**
     * @note[short] Windows: 0xd6080
     */
    TodoReturn rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);
    
private:
    [[deprecated("EditorUI::rotationforCommand not implemented")]]
    /**
     */
    TodoReturn rotationforCommand(EditCommand p0);
public:

    /**
     * @note[short] Windows: 0xd64b0
     */
    TodoReturn scaleObjects(cocos2d::CCArray* p0, float p1, float p2, cocos2d::CCPoint p3, ObjectScaleType p4);

    /**
     * @note[short] Windows: 0xc9750
     */
    TodoReturn selectAll();

    /**
     * @note[short] Windows: 0xc9890
     */
    TodoReturn selectAllWithDirection(bool p0);

    /**
     * @note[short] Windows: 0xcbf00
     */
    TodoReturn selectBuildTab(int p0);

    /**
     * @note[short] Windows: 0xc8aa0
     */
    TodoReturn selectObject(GameObject* p0, bool p1);

    /**
     * @note[short] Windows: 0xc8d40
     */
    TodoReturn selectObjects(cocos2d::CCArray* p0, bool p1);
    
private:
    [[deprecated("EditorUI::selectObjectsInRect not implemented")]]
    /**
     */
    TodoReturn selectObjectsInRect(cocos2d::CCRect p0);
public:

    /**
     * @note[short] Windows: 0xab240
     */
    TodoReturn setupCreateMenu();

    /**
     * @note[short] Windows: 0xa8cc0
     */
    TodoReturn setupDeleteMenu();
    
private:
    [[deprecated("EditorUI::setupEditMenu not implemented")]]
    /**
     */
    TodoReturn setupEditMenu();
public:
    
private:
    [[deprecated("EditorUI::setupTransformControl not implemented")]]
    /**
     */
    TodoReturn setupTransformControl();
public:
    
private:
    [[deprecated("EditorUI::shouldDeleteObject not implemented")]]
    /**
     */
    TodoReturn shouldDeleteObject(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::shouldSnap not implemented")]]
    /**
     */
    TodoReturn shouldSnap(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::showDeleteConfirmation not implemented")]]
    /**
     */
    TodoReturn showDeleteConfirmation();
public:
    
private:
    [[deprecated("EditorUI::showLiveColorSelectForMode not implemented")]]
    /**
     */
    TodoReturn showLiveColorSelectForMode(int p0);
public:
    
private:
    [[deprecated("EditorUI::showLiveColorSelectForModeSpecial not implemented")]]
    /**
     */
    TodoReturn showLiveColorSelectForModeSpecial(int p0);
public:

    /**
     * @note[short] Windows: 0xca6c0
     */
    TodoReturn showMaxBasicError();

    /**
     * @note[short] Windows: 0xca750
     */
    TodoReturn showMaxCoinError();

    /**
     * @note[short] Windows: 0xca640
     */
    TodoReturn showMaxError();

    /**
     * @note[short] Windows: 0xc9c10
     */
    TodoReturn showUI(bool p0);

    /**
     * @note[short] Windows: 0xa6cd0
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::smartTypeForKey not implemented")]]
    /**
     */
    TodoReturn smartTypeForKey(int p0);
public:
    
private:
    [[deprecated("EditorUI::spriteFromObjectString not implemented")]]
    /**
     */
    TodoReturn spriteFromObjectString(gd::string p0, bool p1, bool p2, int p3, cocos2d::CCArray* p4, cocos2d::CCArray* p5, GameObject* p6);
public:
    
private:
    [[deprecated("EditorUI::toggleDuplicateButton not implemented")]]
    /**
     */
    TodoReturn toggleDuplicateButton();
public:

    /**
     * @note[short] Windows: 0xd1680
     */
    TodoReturn toggleEditObjectButton();

    /**
     * @note[short] Windows: 0xc8900
     */
    TodoReturn toggleEnableRotate(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xc8810
     */
    TodoReturn toggleFreeMove(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::toggleLockUI not implemented")]]
    /**
     */
    TodoReturn toggleLockUI(bool p0);
public:

    /**
     * @note[short] Windows: 0xa8c20
     */
    TodoReturn toggleMode(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::toggleObjectInfoLabel not implemented")]]
    /**
     */
    TodoReturn toggleObjectInfoLabel();
public:

    /**
     * @note[short] Windows: 0xc8880
     */
    TodoReturn toggleSnap(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::toggleSpecialEditButtons not implemented")]]
    /**
     */
    TodoReturn toggleSpecialEditButtons();
public:

    /**
     * @note[short] Windows: 0xa6080
     */
    TodoReturn toggleStickyControls(bool p0);

    /**
     * @note[short] Windows: 0xc87a0
     */
    TodoReturn toggleSwipe(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xd5780
     */
    TodoReturn transformObject(GameObject* p0, EditCommand p1, bool p2);

    /**
     * @note[short] Windows: 0xd5360
     */
    TodoReturn transformObjectCall(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xd5380
     */
    TodoReturn transformObjectCall(EditCommand p0);

    /**
     * @note[short] Windows: 0xd6e40
     */
    TodoReturn transformObjects(cocos2d::CCArray* p0, cocos2d::CCPoint p1, float p2, float p3, float p4, float p5, float p6, float p7);

    /**
     * @note[short] Windows: 0xd6d20
     */
    TodoReturn transformObjectsActive();

    /**
     * @note[short] Windows: 0xd6da0
     */
    TodoReturn transformObjectsReset();
    
private:
    [[deprecated("EditorUI::triggerSwipeMode not implemented")]]
    /**
     */
    TodoReturn triggerSwipeMode();
public:
    
private:
    [[deprecated("EditorUI::tryUpdateTimeMarkers not implemented")]]
    /**
     */
    TodoReturn tryUpdateTimeMarkers();
public:

    /**
     * @note[short] Windows: 0xc9b40
     */
    TodoReturn undoLastAction(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xa6310
     */
    TodoReturn updateButtons();

    /**
     * @note[short] Windows: 0xc7d90
     */
    TodoReturn updateCreateMenu(bool p0);
    
private:
    [[deprecated("EditorUI::updateDeleteButtons not implemented")]]
    /**
     */
    TodoReturn updateDeleteButtons();
public:
    
private:
    [[deprecated("EditorUI::updateDeleteMenu not implemented")]]
    /**
     */
    TodoReturn updateDeleteMenu();
public:

    /**
     * @note[short] Windows: 0xcc030
     */
    TodoReturn updateEditButtonColor(int p0, cocos2d::ccColor3B p1);
    
private:
    [[deprecated("EditorUI::updateEditColorButton not implemented")]]
    /**
     */
    TodoReturn updateEditColorButton();
public:

    /**
     * @note[short] Windows: 0xd0c90
     */
    TodoReturn updateEditMenu();

    /**
     * @note[short] Windows: 0xa6f20
     */
    void updateGridNodeSize();
    
private:
    [[deprecated("EditorUI::updateGridNodeSize not implemented")]]
    /**
     */
    TodoReturn updateGridNodeSize(int p0);
public:
    
private:
    [[deprecated("EditorUI::updateGroupIDBtn2 not implemented")]]
    /**
     */
    TodoReturn updateGroupIDBtn2();
public:

    /**
     * @note[short] Windows: 0xd47d0
     */
    TodoReturn updateGroupIDLabel();

    /**
     * @note[short] Windows: 0xa70d0
     */
    TodoReturn updateObjectInfoLabel();

    /**
     * @note[short] Windows: 0xc9f80
     */
    TodoReturn updatePlaybackBtn();

    /**
     * @note[short] Windows: 0xa6ed0
     */
    TodoReturn updateSlider();
    
private:
    [[deprecated("EditorUI::updateSpecialUIElements not implemented")]]
    /**
     */
    TodoReturn updateSpecialUIElements();
public:

    /**
     * @note[short] Windows: 0xca3d0
     */
    void updateZoom(float p0);

    /**
     * @note[short] Windows: 0xa6e20
     */
    void valueFromXPos(float p0);
    
private:
    [[deprecated("EditorUI::xPosFromValue not implemented")]]
    /**
     */
    TodoReturn xPosFromValue(float p0);
public:
    
private:
    [[deprecated("EditorUI::zoomGameLayer not implemented")]]
    /**
     */
    TodoReturn zoomGameLayer(bool p0);
public:

    /**
     * @note[short] Windows: 0xca2f0
     */
    TodoReturn zoomIn(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xca360
     */
    TodoReturn zoomOut(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xd80f0
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0xd8be0
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xd9160
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xd9730
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x4c830
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("EditorUI::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0xcc020
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xda300
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0xa3aa0
     */
    virtual TodoReturn getUI();

    /**
     * @note[short] Windows: 0xaa700
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] Windows: 0xaa650
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xcc870
     */
    virtual TodoReturn updateTransformControl();

    /**
     * @note[short] Windows: 0xccc50
     */
    virtual TodoReturn transformChangeBegin();
    
private:
    [[deprecated("EditorUI::transformChangeEnded not implemented")]]
    /**
     */
    virtual TodoReturn transformChangeEnded();
public:

    /**
     * @note[short] Windows: 0xa3ab0
     */
    virtual TodoReturn getTransformNode();

    /**
     * @note[short] Windows: 0xd6ba0
     */
    virtual TodoReturn transformScaleXChanged(float p0);

    /**
     * @note[short] Windows: 0xd6bc0
     */
    virtual TodoReturn transformScaleYChanged(float p0);

    /**
     * @note[short] Windows: 0xd6be0
     */
    virtual TodoReturn transformScaleXYChanged(float p0, float p1);

    /**
     * @note[short] Windows: 0xd6c10
     */
    virtual TodoReturn transformSkewXChanged(float p0);

    /**
     * @note[short] Windows: 0xd6c30
     */
    virtual TodoReturn transformSkewYChanged(float p0);

    /**
     * @note[short] Windows: 0xd6c50
     */
    virtual TodoReturn transformRotationXChanged(float p0);

    /**
     * @note[short] Windows: 0xd6c70
     */
    virtual TodoReturn transformRotationYChanged(float p0);

    /**
     * @note[short] Windows: 0xd6c90
     */
    virtual TodoReturn transformRotationChanged(float p0);

    /**
     * @note[short] Windows: 0xd6cc0
     */
    virtual TodoReturn transformResetRotation();

    /**
     * @note[short] Windows: 0xd6cf0
     */
    virtual TodoReturn transformRestoreRotation();

    /**
     * @note[short] Windows: 0xca080
     */
    virtual TodoReturn songStateChanged();

    /**
     * @note[short] Windows: 0xd4930
     */
    virtual TodoReturn colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] Windows: 0xdb210
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0xdb260
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] Windows: 0xd84d0
     */
    virtual TodoReturn angleChangeBegin();

    /**
     * @note[short] Windows: 0x95c0
     */
    virtual TodoReturn angleChangeEnded();

    /**
     * @note[short] Windows: 0xd84e0
     */
    virtual TodoReturn angleChanged(float p0);

    /**
     * @note[short] Windows: 0xcc380
     */
    virtual TodoReturn updateScaleControl();

    /**
     * @note[short] Windows: 0xccc60
     */
    virtual TodoReturn anchorPointMoved(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0xcc4b0
     */
    virtual TodoReturn scaleChangeBegin();
    
private:
    [[deprecated("EditorUI::scaleChangeEnded not implemented")]]
    /**
     */
    virtual TodoReturn scaleChangeEnded();
public:

    /**
     * @note[short] Windows: 0xcc4c0
     */
    virtual TodoReturn scaleXChanged(float p0);

    /**
     * @note[short] Windows: 0xcc540
     */
    virtual TodoReturn scaleYChanged(float p0);

    /**
     * @note[short] Windows: 0xcc5c0
     */
    virtual TodoReturn scaleXYChanged(float p0, float p1);
    GEODE_PAD(96);
    float m_unk1b8;
    float m_unk1bc;
    GEODE_PAD(4);
    EditButtonBar* m_buttonBar;
    GEODE_PAD(4);
    cocos2d::CCArray* m_unk1cc;
    float m_unk1d0;
    GEODE_PAD(48);
    cocos2d::CCLabelBMFont* m_unk204;
    GJRotationControl* m_rotationControl;
    GEODE_PAD(12);
    GJScaleControl* m_scaleControl;
    GJTransformControl* m_transformControl;
    cocos2d::CCNode* m_unk220;
    cocos2d::CCNode* m_unk224;
    cocos2d::CCDictionary* m_editButtonDict;
    EditButtonBar* m_createButtonBar;
    EditButtonBar* m_editButtonBar;
    Slider* m_positionSlider;
    float m_unk238;
    float m_unk23c;
    float m_unk240;
    float m_unk244;
    GEODE_PAD(16);
    cocos2d::CCArray* m_unk258;
    GEODE_PAD(8);
    cocos2d::CCArray* m_selectedObjects;
    cocos2d::CCMenu* m_deleteMenu;
    cocos2d::CCArray* m_unknownArray4;
    CCMenuItemSpriteExtra* m_deleteModeBtn;
    CCMenuItemSpriteExtra* m_buildModeBtn;
    CCMenuItemSpriteExtra* m_editModeBtn;
    CCMenuItemSpriteExtra* m_swipeBtn;
    CCMenuItemSpriteExtra* m_freeMoveBtn;
    CCMenuItemSpriteExtra* m_deselectBtn;
    CCMenuItemSpriteExtra* m_snapBtn;
    CCMenuItemSpriteExtra* m_rotateBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_playtestBtn;
    CCMenuItemSpriteExtra* m_playtestStopBtn;
    CCMenuItemSpriteExtra* m_trashBtn;
    CCMenuItemSpriteExtra* m_linkBtn;
    CCMenuItemSpriteExtra* m_unlinkBtn;
    CCMenuItemSpriteExtra* m_undoBtn;
    CCMenuItemSpriteExtra* m_redoBtn;
    CCMenuItemSpriteExtra* m_editObjectBtn;
    CCMenuItemSpriteExtra* m_editGroupBtn;
    CCMenuItemSpriteExtra* m_editHSVBtn;
    CCMenuItemSpriteExtra* m_editSpecialBtn;
    GEODE_PAD(4);
    CCMenuItemSpriteExtra* m_copyPasteBtn;
    CCMenuItemSpriteExtra* m_copyBtn;
    CCMenuItemSpriteExtra* m_pasteBtn;
    CCMenuItemSpriteExtra* m_copyValuesBtn;
    CCMenuItemSpriteExtra* m_pasteStateBtn;
    CCMenuItemSpriteExtra* m_pasteColorBtn;
    CCMenuItemSpriteExtra* m_goToLayerBtn;
    cocos2d::CCArray* m_createButtonBars;
    cocos2d::CCMenu* m_tabsMenu;
    cocos2d::CCArray* m_tabsArray;
    cocos2d::CCSprite* m_idkSprite0;
    cocos2d::CCSprite* m_idkSprite1;
    CCMenuItemSpriteExtra* m_button27;
    CCMenuItemSpriteExtra* m_button28;
    CCMenuItemSpriteExtra* m_deleteFilterNone;
    CCMenuItemSpriteExtra* m_deleteFilterStatic;
    CCMenuItemSpriteExtra* m_deleteFilterDetails;
    CCMenuItemSpriteExtra* m_deleteFilterCustom;
    cocos2d::CCLabelBMFont* m_currentLayerLabel;
    CCMenuItemSpriteExtra* m_layerNextBtn;
    CCMenuItemSpriteExtra* m_layerPrevBtn;
    CCMenuItemSpriteExtra* m_goToBaseBtn;
    ButtonSprite* m_unk31c;
    ButtonSprite* m_unk320;
    int m_selectedCreateObjectID;
    GEODE_PAD(8);
    cocos2d::CCArray* m_createButtonArray;
    cocos2d::CCArray* m_customObjectButtonArray;
    cocos2d::CCArray* m_unknownArray9;
    int m_selectedMode;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCPoint m_swipeStart;
    cocos2d::CCPoint m_swipeEnd;
    GEODE_PAD(8);
    cocos2d::CCPoint m_lastTouchPoint;
    cocos2d::CCPoint m_cameraTest;
    cocos2d::CCPoint m_clickAtPosition;
    GameObject* m_selectedObject;
    GEODE_PAD(12);
    int m_selectedTab;
    GEODE_PAD(44);
    bool m_unk3b4;
    GEODE_PAD(8);
};
