#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJBaseGameLayer.hpp"
#include "LevelSettingsDelegate.hpp"

class LevelEditorLayer : public GJBaseGameLayer, public LevelSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelEditorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelEditorLayer, GJBaseGameLayer)

    /**
     * @note[short] Out of line
     */
    static LevelEditorLayer* get();

    /**
     * @note[short] Windows: 0x2399c0
     */
    static LevelEditorLayer* create(GJGameLevel* p0, bool p1);
    
private:
    [[deprecated("LevelEditorLayer::activateTriggerEffect not implemented")]]
    /**
     */
    TodoReturn activateTriggerEffect(EffectGameObject* p0, float p1, float p2, float p3, bool p4);
public:
    
private:
    [[deprecated("LevelEditorLayer::addDelayedSpawn not implemented")]]
    /**
     */
    TodoReturn addDelayedSpawn(EffectGameObject* p0, float p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::addExclusionList not implemented")]]
    /**
     */
    TodoReturn addExclusionList(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::addObjectFromVector not implemented")]]
    /**
     */
    TodoReturn addObjectFromVector(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::addObjectsAtPosition not implemented")]]
    /**
     */
    TodoReturn addObjectsAtPosition(cocos2d::CCPoint p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2);
public:
    
private:
    [[deprecated("LevelEditorLayer::addObjectsInRect not implemented")]]
    /**
     */
    TodoReturn addObjectsInRect(cocos2d::CCRect p0, bool p1, cocos2d::CCArray* p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("LevelEditorLayer::addObjectToGroup not implemented")]]
    /**
     */
    TodoReturn addObjectToGroup(GameObject* p0, int p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::addPlayer2Point not implemented")]]
    /**
     */
    TodoReturn addPlayer2Point(cocos2d::CCPoint p0, bool p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::addPlayerCollisionBlock not implemented")]]
    /**
     */
    TodoReturn addPlayerCollisionBlock();
public:
    
private:
    [[deprecated("LevelEditorLayer::addPlayerPoint not implemented")]]
    /**
     */
    TodoReturn addPlayerPoint(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] Windows: 0x23ec50
     */
    void addSpecial(GameObject* p0);
    
private:
    [[deprecated("LevelEditorLayer::addToRedoList not implemented")]]
    /**
     */
    TodoReturn addToRedoList(UndoObject* p0);
public:

    /**
     * @note[short] Windows: 0x2509d0
     */
    TodoReturn addTouchPoint(cocos2d::CCPoint p0);
    
private:
    [[deprecated("LevelEditorLayer::addToUndoList not implemented")]]
    /**
     */
    TodoReturn addToUndoList(UndoObject* p0, bool p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::applyAttributeState not implemented")]]
    /**
     */
    TodoReturn applyAttributeState(GameObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::applyGroupState not implemented")]]
    /**
     */
    TodoReturn applyGroupState(GameObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::breakApartTextObject not implemented")]]
    /**
     */
    TodoReturn breakApartTextObject(TextGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::canPasteState not implemented")]]
    /**
     */
    TodoReturn canPasteState();
public:
    
private:
    [[deprecated("LevelEditorLayer::clearPlayerPoints not implemented")]]
    /**
     */
    TodoReturn clearPlayerPoints();
public:
    
private:
    [[deprecated("LevelEditorLayer::clearTouchPoints not implemented")]]
    /**
     */
    TodoReturn clearTouchPoints();
public:

    /**
     * @note[short] Windows: 0x2477f0
     */
    TodoReturn copyObjectState(GameObject* p0);
    
private:
    [[deprecated("LevelEditorLayer::copyParticleState not implemented")]]
    /**
     */
    TodoReturn copyParticleState(ParticleGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x23bf10
     */
    GameObject* createObject(int p0, cocos2d::CCPoint p1, bool p2);

    /**
     * @note[short] Windows: 0x23b330
     */
    void createObjectsFromSetup(gd::string& p0);

    /**
     * @note[short] Windows: 0x23b970
     */
    cocos2d::CCArray* createObjectsFromString(gd::string const& p0, bool p1, bool p2);
    
private:
    [[deprecated("LevelEditorLayer::dirtifyTriggers not implemented")]]
    /**
     */
    TodoReturn dirtifyTriggers();
public:
    
private:
    [[deprecated("LevelEditorLayer::duplicateKeyframeAnimation not implemented")]]
    /**
     */
    TodoReturn duplicateKeyframeAnimation(int p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::fastUpdateDisabledGroups not implemented")]]
    /**
     */
    TodoReturn fastUpdateDisabledGroups();
public:

    /**
     * @note[short] Windows: 0x23d260
     */
    TodoReturn findGameObject(int p0);
    
private:
    [[deprecated("LevelEditorLayer::findStartPosObject not implemented")]]
    /**
     */
    TodoReturn findStartPosObject();
public:
    
private:
    [[deprecated("LevelEditorLayer::forceShowSelectedObjects not implemented")]]
    /**
     */
    TodoReturn forceShowSelectedObjects(bool p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::fullUpdateDisabledGroups not implemented")]]
    /**
     */
    TodoReturn fullUpdateDisabledGroups();
public:
    
private:
    [[deprecated("LevelEditorLayer::getAllObjects not implemented")]]
    /**
     */
    TodoReturn getAllObjects();
public:
    
private:
    [[deprecated("LevelEditorLayer::getDelayedSpawnNode not implemented")]]
    /**
     */
    TodoReturn getDelayedSpawnNode();
public:
    
private:
    [[deprecated("LevelEditorLayer::getGridPos not implemented")]]
    /**
     */
    TodoReturn getGridPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getLastObjectX not implemented")]]
    /**
     */
    TodoReturn getLastObjectX();
public:

    /**
     * @note[short] Windows: 0x23db70
     */
    TodoReturn getLevelString();
    
private:
    [[deprecated("LevelEditorLayer::getLockedLayers not implemented")]]
    /**
     */
    TodoReturn getLockedLayers();
public:
    
private:
    [[deprecated("LevelEditorLayer::getNextColorChannel not implemented")]]
    /**
     */
    TodoReturn getNextColorChannel();
public:
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeAreaEffectID not implemented")]]
    /**
     */
    TodoReturn getNextFreeAreaEffectID(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeBlockID not implemented")]]
    /**
     */
    TodoReturn getNextFreeBlockID(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x241950
     */
    TodoReturn getNextFreeEditorLayer(cocos2d::CCArray* p0);
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeEnterChannel not implemented")]]
    /**
     */
    TodoReturn getNextFreeEnterChannel(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeGradientID not implemented")]]
    /**
     */
    TodoReturn getNextFreeGradientID(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x241530
     */
    int getNextFreeGroupID(cocos2d::CCArray* p0);
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeItemID not implemented")]]
    /**
     */
    TodoReturn getNextFreeItemID(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x241870
     */
    TodoReturn getNextFreeOrderChannel(cocos2d::CCArray* p0);
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeSFXGroupID not implemented")]]
    /**
     */
    TodoReturn getNextFreeSFXGroupID(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeSFXID not implemented")]]
    /**
     */
    TodoReturn getNextFreeSFXID(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x23cb10
     */
    TodoReturn getObjectRect(GameObject* p0, bool p1, bool p2);
    
private:
    [[deprecated("LevelEditorLayer::getRelativeOffset not implemented")]]
    /**
     */
    TodoReturn getRelativeOffset(GameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getSavedEditorPosition not implemented")]]
    /**
     */
    TodoReturn getSavedEditorPosition(int p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getSavedEditorPositions not implemented")]]
    /**
     */
    TodoReturn getSavedEditorPositions();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSectionCount not implemented")]]
    /**
     */
    TodoReturn getSectionCount();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSelectedEditorOrder not implemented")]]
    /**
     */
    TodoReturn getSelectedEditorOrder();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSelectedEffectPos not implemented")]]
    /**
     */
    TodoReturn getSelectedEffectPos();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSelectedOrderChannel not implemented")]]
    /**
     */
    TodoReturn getSelectedOrderChannel();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSFXIDs not implemented")]]
    /**
     */
    TodoReturn getSFXIDs();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSongIDs not implemented")]]
    /**
     */
    TodoReturn getSongIDs(bool& p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getTriggerGroup not implemented")]]
    /**
     */
    TodoReturn getTriggerGroup(int p0);
public:

    /**
     * @note[short] Windows: 0x23d670
     */
    void handleAction(bool p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("LevelEditorLayer::hasAction not implemented")]]
    /**
     */
    TodoReturn hasAction(bool p0);
public:

    /**
     * @note[short] Windows: 0x239a70
     */
    bool init(GJGameLevel* p0, bool p1);

    /**
     * @note[short] Out of line
     */
    bool isLayerLocked(int layer);

    /**
     * @note[short] Windows: 0x23c610
     */
    TodoReturn objectAtPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0x23f080
     */
    TodoReturn objectMoved(GameObject* p0);
    
private:
    [[deprecated("LevelEditorLayer::objectsAtPosition not implemented")]]
    /**
     */
    TodoReturn objectsAtPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::objectsInRect not implemented")]]
    /**
     */
    TodoReturn objectsInRect(cocos2d::CCRect p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x246c70
     */
    TodoReturn onPausePlaytest();

    /**
     * @note[short] Windows: 0x2463a0
     */
    TodoReturn onPlaytest();

    /**
     * @note[short] Windows: 0x246d60
     */
    TodoReturn onResumePlaytest();
    
private:
    [[deprecated("LevelEditorLayer::onStopPlaytest not implemented")]]
    /**
     */
    TodoReturn onStopPlaytest();
public:

    /**
     * @note[short] Windows: 0x247940
     */
    TodoReturn pasteAttributeState(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x2478d0
     */
    TodoReturn pasteColorState(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("LevelEditorLayer::pasteGroupState not implemented")]]
    /**
     */
    TodoReturn pasteGroupState(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::pasteParticleState not implemented")]]
    /**
     */
    TodoReturn pasteParticleState(ParticleGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::processLoadedMoveActions not implemented")]]
    /**
     */
    TodoReturn processLoadedMoveActions();
public:
    
private:
    [[deprecated("LevelEditorLayer::quickUpdateAllPositions not implemented")]]
    /**
     */
    TodoReturn quickUpdateAllPositions();
public:
    
private:
    [[deprecated("LevelEditorLayer::recreateGroups not implemented")]]
    /**
     */
    TodoReturn recreateGroups();
public:
    
private:
    [[deprecated("LevelEditorLayer::redoLastAction not implemented")]]
    /**
     */
    TodoReturn redoLastAction();
public:
    
private:
    [[deprecated("LevelEditorLayer::refreshSpecial not implemented")]]
    /**
     */
    TodoReturn refreshSpecial(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x23d360
     */
    TodoReturn removeAllObjects();
    
private:
    [[deprecated("LevelEditorLayer::removeAllObjectsOfType not implemented")]]
    /**
     */
    TodoReturn removeAllObjectsOfType(int p0);
public:

    /**
     * @note[short] Windows: 0x23d2b0
     */
    TodoReturn removeObject(GameObject* p0, bool p1);
    
private:
    [[deprecated("LevelEditorLayer::removePlayerCollisionBlock not implemented")]]
    /**
     */
    TodoReturn removePlayerCollisionBlock();
public:

    /**
     * @note[short] Windows: 0x23f2f0
     */
    TodoReturn removeSpecial(GameObject* p0);
    
private:
    [[deprecated("LevelEditorLayer::resetDelayedSpawnNodes not implemented")]]
    /**
     */
    TodoReturn resetDelayedSpawnNodes();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetEffectTriggerOptim not implemented")]]
    /**
     */
    TodoReturn resetEffectTriggerOptim(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::resetMovingObjects not implemented")]]
    /**
     */
    TodoReturn resetMovingObjects();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetObjectVector not implemented")]]
    /**
     */
    TodoReturn resetObjectVector();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetPlayback not implemented")]]
    /**
     */
    TodoReturn resetPlayback();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetToggledGroups not implemented")]]
    /**
     */
    TodoReturn resetToggledGroups();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetToggledGroupsAndObjects not implemented")]]
    /**
     */
    TodoReturn resetToggledGroupsAndObjects();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetUnusedColorChannels not implemented")]]
    /**
     */
    TodoReturn resetUnusedColorChannels();
public:
    
private:
    [[deprecated("LevelEditorLayer::reverseKeyframeAnimationOrder not implemented")]]
    /**
     */
    TodoReturn reverseKeyframeAnimationOrder(int p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::reverseObjectChanged not implemented")]]
    /**
     */
    TodoReturn reverseObjectChanged(EffectGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::rotationForSlopeNearObject not implemented")]]
    /**
     */
    TodoReturn rotationForSlopeNearObject(GameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::runColorEffect not implemented")]]
    /**
     */
    TodoReturn runColorEffect(EffectGameObject* p0, int p1, float p2, float p3, bool p4);
public:
    
private:
    [[deprecated("LevelEditorLayer::saveEditorPosition not implemented")]]
    /**
     */
    TodoReturn saveEditorPosition(cocos2d::CCPoint& p0, int p1);
public:

    /**
     * @note[short] Windows: 0x239980
     */
    static cocos2d::CCScene* scene(GJGameLevel* p0, bool p1);
    
private:
    [[deprecated("LevelEditorLayer::setObjectCount not implemented")]]
    /**
     */
    void setObjectCount(int p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::shouldBlend not implemented")]]
    /**
     */
    TodoReturn shouldBlend(int p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::sortBatchnodeChildren not implemented")]]
    /**
     */
    TodoReturn sortBatchnodeChildren(float p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::spawnGroupPreview not implemented")]]
    /**
     */
    TodoReturn spawnGroupPreview(int p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7);
public:
    
private:
    [[deprecated("LevelEditorLayer::stopPlayback not implemented")]]
    /**
     */
    TodoReturn stopPlayback();
public:
    
private:
    [[deprecated("LevelEditorLayer::stopTriggersInGroup not implemented")]]
    /**
     */
    TodoReturn stopTriggersInGroup(int p0, float p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::timeObjectChanged not implemented")]]
    /**
     */
    TodoReturn timeObjectChanged();
public:
    
private:
    [[deprecated("LevelEditorLayer::toggleBackground not implemented")]]
    /**
     */
    TodoReturn toggleBackground(bool p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::toggleGrid not implemented")]]
    /**
     */
    TodoReturn toggleGrid(bool p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::toggleGround not implemented")]]
    /**
     */
    TodoReturn toggleGround(bool p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::toggleGroupPreview not implemented")]]
    /**
     */
    TodoReturn toggleGroupPreview(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x23e6a0
     */
    TodoReturn toggleLockActiveLayer();
    
private:
    [[deprecated("LevelEditorLayer::transferDefaultColors not implemented")]]
    /**
     */
    TodoReturn transferDefaultColors(GJEffectManager* p0, GJEffectManager* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::triggerFollowCommand not implemented")]]
    /**
     */
    TodoReturn triggerFollowCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::triggerPlayerFollowCommand not implemented")]]
    /**
     */
    TodoReturn triggerPlayerFollowCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::triggerRotateCommand not implemented")]]
    /**
     */
    TodoReturn triggerRotateCommand(EffectGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x23f600
     */
    TodoReturn tryUpdateSpeedObject(EffectGameObject* p0, bool p1);

    /**
     * @note[short] Windows: 0x23c100
     */
    TodoReturn typeExistsAtPosition(int p0, cocos2d::CCPoint p1, bool p2, bool p3, float p4);
    
private:
    [[deprecated("LevelEditorLayer::undoLastAction not implemented")]]
    /**
     */
    TodoReturn undoLastAction();
public:
    
private:
    [[deprecated("LevelEditorLayer::unlockAllLayers not implemented")]]
    /**
     */
    TodoReturn unlockAllLayers();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateAnimateOnTriggerObjects not implemented")]]
    /**
     */
    TodoReturn updateAnimateOnTriggerObjects(bool p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateArt not implemented")]]
    /**
     */
    TodoReturn updateArt(float p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateBlendValues not implemented")]]
    /**
     */
    TodoReturn updateBlendValues();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateEditor not implemented")]]
    /**
     */
    TodoReturn updateEditor(float p0);
public:

    /**
     * @note[short] Windows: 0x2423a0
     */
    TodoReturn updateEditorMode();
    
private:
    [[deprecated("LevelEditorLayer::updateGameObjects not implemented")]]
    /**
     */
    TodoReturn updateGameObjects();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateGridLayer not implemented")]]
    /**
     */
    TodoReturn updateGridLayer();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateGridLayerParent not implemented")]]
    /**
     */
    TodoReturn updateGridLayerParent();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateKeyframeObjects not implemented")]]
    /**
     */
    TodoReturn updateKeyframeObjects();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateKeyframeVisibility not implemented")]]
    /**
     */
    TodoReturn updateKeyframeVisibility(bool p0);
public:

    /**
     * @note[short] Windows: 0x2458c0
     */
    void updateLevelFont(int p0);
    
private:
    [[deprecated("LevelEditorLayer::updateObjectColors not implemented")]]
    /**
     */
    TodoReturn updateObjectColors(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x23e710
     */
    static void updateObjectLabel(GameObject* p0);

    /**
     * @note[short] Windows: 0x23afa0
     */
    TodoReturn updateOptions();

    /**
     * @note[short] Windows: 0x247c90
     */
    TodoReturn updatePreviewAnim();

    /**
     * @note[short] Windows: 0x247ec0
     */
    void updatePreviewParticle(ParticleGameObject* p0);

    /**
     * @note[short] Windows: 0x247e20
     */
    TodoReturn updatePreviewParticles();
    
private:
    [[deprecated("LevelEditorLayer::updateToggledGroups not implemented")]]
    /**
     */
    TodoReturn updateToggledGroups();
public:
    
private:
    [[deprecated("LevelEditorLayer::validGroup not implemented")]]
    /**
     */
    TodoReturn validGroup(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::draw not implemented")]]
    /**
     */
    virtual void draw();
public:

    /**
     * @note[short] Windows: 0x2475d0
     */
    virtual TodoReturn postUpdate(float p0);

    /**
     * @note[short] Windows: 0x23fa90
     */
    virtual TodoReturn updateVisibility(float p0);
    
private:
    [[deprecated("LevelEditorLayer::playerTookDamage not implemented")]]
    /**
     */
    virtual TodoReturn playerTookDamage(PlayerObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateColor not implemented")]]
    /**
     */
    virtual TodoReturn updateColor(cocos2d::ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateDebugDraw not implemented")]]
    /**
     */
    virtual TodoReturn updateDebugDraw();
public:
    
private:
    [[deprecated("LevelEditorLayer::addToGroup not implemented")]]
    /**
     */
    virtual TodoReturn addToGroup(GameObject* p0, int p1, bool p2);
public:
    
private:
    [[deprecated("LevelEditorLayer::removeFromGroup not implemented")]]
    /**
     */
    virtual TodoReturn removeFromGroup(GameObject* p0, int p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateObjectSection not implemented")]]
    /**
     */
    virtual TodoReturn updateObjectSection(GameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateDisabledObjectsLastPos not implemented")]]
    /**
     */
    virtual TodoReturn updateDisabledObjectsLastPos(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::timeForPos not implemented")]]
    /**
     */
    virtual TodoReturn timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);
public:
    
private:
    [[deprecated("LevelEditorLayer::posForTime not implemented")]]
    /**
     */
    virtual TodoReturn posForTime(float p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::resetSPTriggered not implemented")]]
    /**
     */
    virtual TodoReturn resetSPTriggered();
public:

    /**
     * @note[short] Windows: 0x2460b0
     */
    virtual TodoReturn didRotateGameplay();
    
private:
    [[deprecated("LevelEditorLayer::manualUpdateObjectColors not implemented")]]
    /**
     */
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::claimCustomParticle not implemented")]]
    /**
     */
    virtual TodoReturn claimCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, int p3, int p4, bool p5);
public:
    
private:
    [[deprecated("LevelEditorLayer::unclaimCustomParticle not implemented")]]
    /**
     */
    virtual TodoReturn unclaimCustomParticle(gd::string const& p0, cocos2d::CCParticleSystemQuad* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::activatedAudioTrigger not implemented")]]
    /**
     */
    virtual TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::checkpointActivated not implemented")]]
    /**
     */
    virtual TodoReturn checkpointActivated(CheckpointGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::addKeyframe not implemented")]]
    /**
     */
    virtual TodoReturn addKeyframe(KeyframeGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x23b2b0
     */
    virtual TodoReturn levelSettingsUpdated();
    bool m_drawTriggerBoxes;
    bool m_showGrid;
    bool m_hideGridOnPlay;
    bool m_drawEffectLines;
    bool m_showGround;
    bool m_showDurationLines;
    bool m_increaseMaxUndoRedo;
    bool m_hideBackground;
    bool m_gv0120;
    bool m_layerLockingEnabled;
    bool m_unkBool4;
    bool m_previewParticles;
    bool m_previewAnimations;
    bool m_previewShaders;
    bool m_hideParticleIcons;
    bool m_unkBool5;
    bool m_playTestSmoothFix;
    GEODE_PAD(15);
    cocos2d::CCArray* m_unkArr0;
    cocos2d::CCArray* m_unkArr1;
    cocos2d::CCArray* m_unkArr2;
    cocos2d::CCArray* m_unkArr3;
    cocos2d::CCArray* m_unkArr4;
    cocos2d::CCArray* m_unkArr8;
    cocos2d::CCArray* m_unkArr11;
    cocos2d::CCArray* m_unkArr12;
    cocos2d::CCArray* m_unkArr13;
    cocos2d::CCDictionary* m_unkDict3;
    cocos2d::CCArray* m_unkArr5;
    GEODE_PAD(8);
    cocos2d::CCDictionary* m_unkDict4;
    cocos2d::CCArray* m_unkArr7;
    bool m_unkBool3;
    bool m_unkBool2;
    geode::SeedValueRSV m_coinCount;
    GEODE_PAD(8);
    cocos2d::CCArray* m_unkArr6;
    GEODE_PAD(4);
    cocos2d::CCDictionary* m_unkDict1;
    cocos2d::CCDictionary* m_unkDict2;
    bool m_unkBool0;
    bool m_unkBool1;
    short m_currentLayer;
    GEODE_PAD(24);
    EditorUI* m_editorUI;
    cocos2d::CCArray* m_undoObjects;
    cocos2d::CCArray* m_redoObjects;
    geode::SeedValueRSV m_objectCount;
    DrawGridLayer* m_drawGridLayer;
    bool m_unkBool;
    bool m_previewMode;
    GEODE_PAD(134);
    gd::vector<bool> m_lockedLayers;
};
