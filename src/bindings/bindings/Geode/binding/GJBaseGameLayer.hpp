#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGameState.hpp"
#include "PlayerButtonCommand.hpp"
#include "TriggerEffectDelegate.hpp"

class GJBaseGameLayer : public cocos2d::CCLayer, public TriggerEffectDelegate {
public:
    static constexpr auto CLASS_NAME = "GJBaseGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBaseGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x18ef50
     */
     ~GJBaseGameLayer();
    
private:
    [[deprecated("GJBaseGameLayer::activateCustomRing not implemented")]]
    /**
     */
    TodoReturn activateCustomRing(RingObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatedAudioTrigger not implemented")]]
    /**
     */
    TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateEventTrigger not implemented")]]
    /**
     */
    TodoReturn activateEventTrigger(EventLinkTrigger* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateItemCompareTrigger not implemented")]]
    /**
     */
    TodoReturn activateItemCompareTrigger(ItemTriggerGameObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateItemEditTrigger not implemented")]]
    /**
     */
    TodoReturn activateItemEditTrigger(ItemTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateObjectControlTrigger not implemented")]]
    /**
     */
    TodoReturn activateObjectControlTrigger(ObjectControlGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePersistentItemTrigger not implemented")]]
    /**
     */
    TodoReturn activatePersistentItemTrigger(ItemTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePlayerControlTrigger not implemented")]]
    /**
     */
    TodoReturn activatePlayerControlTrigger(PlayerControlGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateResetTrigger not implemented")]]
    /**
     */
    TodoReturn activateResetTrigger(EffectGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1c4370
     */
    TodoReturn activateSFXEditTrigger(SFXTriggerGameObject* p0);

    /**
     * @note[short] Windows: 0x1c4230
     */
    TodoReturn activateSFXTrigger(SFXTriggerGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::activateSongEditTrigger not implemented")]]
    /**
     */
    TodoReturn activateSongEditTrigger(SongTriggerGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1c3df0
     */
    TodoReturn activateSongTrigger(SongTriggerGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::activateTimerTrigger not implemented")]]
    /**
     */
    TodoReturn activateTimerTrigger(TimerTriggerGameObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addAreaEffect not implemented")]]
    /**
     */
    TodoReturn addAreaEffect(EnterEffectObject* p0, gd::vector<EnterEffectInstance>* p1, GJAreaActionType p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addCustomEnterEffect not implemented")]]
    /**
     */
    TodoReturn addCustomEnterEffect(EnterEffectObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addGuideArt not implemented")]]
    /**
     */
    TodoReturn addGuideArt(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1b74c0
     */
    TodoReturn addObjectCounter(LabelGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::addPickupTrigger not implemented")]]
    /**
     */
    TodoReturn addPickupTrigger(CountTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addPoints not implemented")]]
    /**
     */
    TodoReturn addPoints(int p0);
public:

    /**
     * @note[short] Windows: 0x1c4a20
     */
    TodoReturn addProximityVolumeEffect(int p0, int p1, SFXTriggerGameObject* p2);
    
private:
    [[deprecated("GJBaseGameLayer::addRemapTargets not implemented")]]
    /**
     */
    TodoReturn addRemapTargets(gd::set<int>& p0);
public:

    /**
     * @note[short] Windows: 0x1a96a0
     */
    TodoReturn addToGroupParents(GameObject* p0);

    /**
     * @note[short] Windows: 0x1a8c80
     */
    TodoReturn addToGroups(GameObject* p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::addToObjectsToShow not implemented")]]
    /**
     */
    TodoReturn addToObjectsToShow(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addUIObject not implemented")]]
    /**
     */
    TodoReturn addUIObject(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::animateInDualGroundNew not implemented")]]
    /**
     */
    TodoReturn animateInDualGroundNew(GameObject* p0, float p1, bool p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::animateInGroundNew not implemented")]]
    /**
     */
    TodoReturn animateInGroundNew(bool p0, float p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::animateOutGroundNew not implemented")]]
    /**
     */
    TodoReturn animateOutGroundNew(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::animatePortalY not implemented")]]
    /**
     */
    TodoReturn animatePortalY(float p0, float p1, float p2, float p3);
public:

    /**
     * @note[short] Windows: 0x1bd900
     */
    TodoReturn applyLevelSettings(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::applyRemap not implemented")]]
    /**
     */
    TodoReturn applyRemap(EffectGameObject* p0, gd::vector<int> const& p1, gd::unordered_map<int, int>& p2);
public:

    /**
     * @note[short] Windows: 0x1c45b0
     */
    TodoReturn applySFXEditTrigger(int p0, int p1, SFXTriggerGameObject* p2);

    /**
     * @note[short] Windows: 0x1c18c0
     */
    TodoReturn applyShake(cocos2d::CCPoint& p0);

    /**
     * @note[short] Windows: 0x1a9cb0
     */
    TodoReturn assignNewStickyGroups(cocos2d::CCArray* p0);
    
private:
    [[deprecated("GJBaseGameLayer::asyncBGLoaded not implemented")]]
    /**
     */
    TodoReturn asyncBGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::asyncGLoaded not implemented")]]
    /**
     */
    TodoReturn asyncGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::asyncMGLoaded not implemented")]]
    /**
     */
    TodoReturn asyncMGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::atlasValue not implemented")]]
    /**
     */
    TodoReturn atlasValue(int p0);
public:

    /**
     * @note[short] Windows: 0x19e670
     */
    TodoReturn bumpPlayer(PlayerObject* p0, EffectGameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::buttonIDToButton not implemented")]]
    /**
     */
    TodoReturn buttonIDToButton(int p0);
public:

    /**
     * @note[short] Windows: 0x1960b0
     */
    TodoReturn calculateColorGroups();
    
private:
    [[deprecated("GJBaseGameLayer::cameraMoveX not implemented")]]
    /**
     */
    TodoReturn cameraMoveX(float p0, float p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::cameraMoveY not implemented")]]
    /**
     */
    TodoReturn cameraMoveY(float p0, float p1, float p2, bool p3);
public:

    /**
     * @note[short] Windows: 0x19e470
     */
    TodoReturn canBeActivatedByPlayer(PlayerObject* p0, EffectGameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::canProcessSFX not implemented")]]
    /**
     */
    TodoReturn canProcessSFX(SFXTriggerState& p0, gd::unordered_map<int, int>& p1, gd::unordered_map<int, float>& p2, gd::vector<SFXTriggerState>& p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::canTouchObject not implemented")]]
    /**
     */
    TodoReturn canTouchObject(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkCameraLimitAfterTeleport not implemented")]]
    /**
     */
    TodoReturn checkCameraLimitAfterTeleport(PlayerObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkCollision not implemented")]]
    /**
     */
    TodoReturn checkCollision(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkCollisionBlocks not implemented")]]
    /**
     */
    TodoReturn checkCollisionBlocks(EffectGameObject* p0, gd::vector<EffectGameObject*>* p1, int p2);
public:

    /**
     * @note[short] Windows: 0x19b310
     */
    TodoReturn checkCollisions(PlayerObject* p0, float p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::checkRepellPlayer not implemented")]]
    /**
     */
    TodoReturn checkRepellPlayer();
public:

    /**
     * @note[short] Windows: 0x1a1390
     */
    TodoReturn checkSpawnObjects();
    
private:
    [[deprecated("GJBaseGameLayer::claimMoveAction not implemented")]]
    /**
     */
    TodoReturn claimMoveAction(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimParticle not implemented")]]
    /**
     */
    TodoReturn claimParticle(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimRotationAction not implemented")]]
    /**
     */
    TodoReturn claimRotationAction(int p0, int p1, float& p2, float& p3, bool p4, bool p5);
public:

    /**
     * @note[short] Windows: 0x1c5590
     */
    TodoReturn clearActivatedAudioTriggers();
    
private:
    [[deprecated("GJBaseGameLayer::clearPickedUpItems not implemented")]]
    /**
     */
    TodoReturn clearPickedUpItems();
public:
    
private:
    [[deprecated("GJBaseGameLayer::collectedObject not implemented")]]
    /**
     */
    TodoReturn collectedObject(EffectGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x19c1b0
     */
    TodoReturn collisionCheckObjects(PlayerObject* p0, gd::vector<GameObject*>* p1, int p2, float p3);
    
private:
    [[deprecated("GJBaseGameLayer::controlAdvancedFollowCommand not implemented")]]
    /**
     */
    TodoReturn controlAdvancedFollowCommand(AdvancedFollowTriggerObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlAreaEffect not implemented")]]
    /**
     */
    TodoReturn controlAreaEffect(EnterEffectObject* p0, gd::vector<EnterEffectInstance>* p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlAreaEffectWithID not implemented")]]
    /**
     */
    TodoReturn controlAreaEffectWithID(int p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicCommand not implemented")]]
    /**
     */
    TodoReturn controlDynamicCommand(EffectGameObject* p0, int p1, gd::vector<DynamicObjectAction>& p2, GJActionCommand p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicMoveCommand not implemented")]]
    /**
     */
    TodoReturn controlDynamicMoveCommand(EffectGameObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicRotateCommand not implemented")]]
    /**
     */
    TodoReturn controlDynamicRotateCommand(EffectGameObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlEventLink not implemented")]]
    /**
     */
    TodoReturn controlEventLink(int p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlGradientTrigger not implemented")]]
    /**
     */
    TodoReturn controlGradientTrigger(GradientTriggerObject* p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlTriggersInGroup not implemented")]]
    /**
     */
    TodoReturn controlTriggersInGroup(int p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlTriggersWithControlID not implemented")]]
    /**
     */
    TodoReturn controlTriggersWithControlID(int p0, GJActionCommand p1);
public:

    /**
     * @note[short] Windows: 0x1b2c10
     */
    TodoReturn convertToClosestDirection(float p0, float p1);

    /**
     * @note[short] Windows: 0x193890
     */
    void createBackground(int p0);

    /**
     * @note[short] Windows: 0x193c60
     */
    void createGroundLayer(int p0, int p1);

    /**
     * @note[short] Windows: 0x193bc0
     */
    void createMiddleground(int p0);

    /**
     * @note[short] Windows: 0x1b6bd0
     */
    TodoReturn createNewKeyframeAnim();

    /**
     * @note[short] Windows: 0x1c2fb0
     */
    TodoReturn createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);

    /**
     * @note[short] Windows: 0x193550
     */
    TodoReturn createPlayer();

    /**
     * @note[short] Windows: 0x19f1b0
     */
    TodoReturn createPlayerCollisionBlock();

    /**
     * @note[short] Windows: 0x197090
     */
    TodoReturn createTextLayers();
    
private:
    [[deprecated("GJBaseGameLayer::damagingObjectsInRect not implemented")]]
    /**
     */
    TodoReturn damagingObjectsInRect(cocos2d::CCRect p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x19cf50
     */
    void destroyObject(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::enterDualMode not implemented")]]
    /**
     */
    TodoReturn enterDualMode(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::exitStaticCamera not implemented")]]
    /**
     */
    TodoReturn exitStaticCamera(bool p0, bool p1, float p2, int p3, float p4, bool p5, float p6, bool p7);
public:
    
private:
    [[deprecated("GJBaseGameLayer::flipFinished not implemented")]]
    /**
     */
    TodoReturn flipFinished();
public:

    /**
     * @note[short] Windows: 0x19a5f0
     */
    TodoReturn flipGravity(PlayerObject* p0, bool p1, bool p2);

    /**
     * @note[short] Windows: 0x1c8980
     */
    TodoReturn flipObjects();
    
private:
    [[deprecated("GJBaseGameLayer::gameEventToString not implemented")]]
    /**
     */
    TodoReturn gameEventToString(GJGameEvent p0);
public:

    /**
     * @note[short] Windows: 0x1b5bf0
     */
    TodoReturn gameEventTriggered(GJGameEvent p0, int p1, int p2);
    
private:
    [[deprecated("GJBaseGameLayer::generateEnterEasingBuffer not implemented")]]
    /**
     */
    TodoReturn generateEnterEasingBuffer(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::generateEnterEasingBuffers not implemented")]]
    /**
     */
    TodoReturn generateEnterEasingBuffers(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::generatePickupAnimRandVal not implemented")]]
    /**
     */
    TodoReturn generatePickupAnimRandVal(GameObject* p0, float& p1, float& p2);
public:

    /**
     * @note[short] Windows: 0x1a3fc0
     */
    TodoReturn generateSpawnRemap();

    /**
     * @note[short] Windows: 0x1a9f10
     */
    TodoReturn generateTargetGroups();

    /**
     * @note[short] Windows: 0x1b5060
     */
    TodoReturn generateVisibilityGroups();
    
private:
    [[deprecated("GJBaseGameLayer::getActiveOrderSpawnObjects not implemented")]]
    /**
     */
    TodoReturn getActiveOrderSpawnObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getAreaObjectValue not implemented")]]
    /**
     */
    TodoReturn getAreaObjectValue(EnterEffectInstance* p0, GameObject* p1, cocos2d::CCPoint& p2, bool& p3);
public:

    /**
     * @note[short] Windows: 0x19e590
     */
    TodoReturn getBumpMod(PlayerObject* p0, int p1);
    
private:
    [[deprecated("GJBaseGameLayer::getCameraEdgeValue not implemented")]]
    /**
     */
    TodoReturn getCameraEdgeValue(int p0);
public:

    /**
     * @note[short] Windows: 0x196ee0
     */
    TodoReturn getCapacityString();
    
private:
    [[deprecated("GJBaseGameLayer::getCenterGroupObject not implemented")]]
    /**
     */
    TodoReturn getCenterGroupObject(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getCustomEnterEffects not implemented")]]
    /**
     */
    TodoReturn getCustomEnterEffects(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEasedAreaValue not implemented")]]
    /**
     */
    TodoReturn getEasedAreaValue(GameObject* p0, EnterEffectInstance* p1, float p2, bool p3, int p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEnterEasingKey not implemented")]]
    /**
     */
    TodoReturn getEnterEasingKey(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEnterEasingValue not implemented")]]
    /**
     */
    TodoReturn getEnterEasingValue(float p0, int p1, float p2, int p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getFollowSpeedVal not implemented")]]
    /**
     */
    TodoReturn getFollowSpeedVal(GameObject* p0, int p1, int p2, float p3, float p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroundHeight not implemented")]]
    /**
     */
    TodoReturn getGroundHeight(PlayerObject* p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroundHeightForMode not implemented")]]
    /**
     */
    TodoReturn getGroundHeightForMode(int p0);
public:

    /**
     * @note[short] Windows: 0x1a8f50
     */
    TodoReturn getGroup(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::getGroupParent not implemented")]]
    /**
     */
    TodoReturn getGroupParent(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroupParentsString not implemented")]]
    /**
     */
    TodoReturn getGroupParentsString(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getItemValue not implemented")]]
    /**
     */
    TodoReturn getItemValue(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMaxPortalY not implemented")]]
    /**
     */
    TodoReturn getMaxPortalY();
public:

    /**
     * @note[short] Windows: 0x1c4ea0
     */
    TodoReturn getMinDistance(cocos2d::CCPoint p0, cocos2d::CCArray* p1, float p2, int p3);
    
private:
    [[deprecated("GJBaseGameLayer::getMinPortalY not implemented")]]
    /**
     */
    TodoReturn getMinPortalY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getModifiedDelta not implemented")]]
    /**
     */
    TodoReturn getModifiedDelta(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMoveTargetDelta not implemented")]]
    /**
     */
    TodoReturn getMoveTargetDelta(EffectGameObject* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x1a9010
     */
    TodoReturn getOptimizedGroup(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::getOtherPlayer not implemented")]]
    /**
     */
    TodoReturn getOtherPlayer(PlayerObject* p0);
public:

    /**
     * @note[short] Windows: 0x1c2d70
     */
    TodoReturn getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
    
private:
    [[deprecated("GJBaseGameLayer::getParticleKey2 not implemented")]]
    /**
     */
    TodoReturn getParticleKey2(gd::string p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayerButtonID not implemented")]]
    /**
     */
    TodoReturn getPlayerButtonID(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayTimerFullSeconds not implemented")]]
    /**
     */
    TodoReturn getPlayTimerFullSeconds();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayTimerMilli not implemented")]]
    /**
     */
    TodoReturn getPlayTimerMilli();
public:

    /**
     * @note[short] Windows: 0x1985c0
     */
    TodoReturn getPortalTarget(TeleportPortalObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::getPortalTargetPos not implemented")]]
    /**
     */
    TodoReturn getPortalTargetPos(TeleportPortalObject* p0, GameObject* p1, PlayerObject* p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getRecordString not implemented")]]
    /**
     */
    TodoReturn getRecordString();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getRotateCommandTargets not implemented")]]
    /**
     */
    TodoReturn getRotateCommandTargets(EnhancedTriggerObject* p0, GameObject*& p1, GameObject*& p2, GameObject*& p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getSavedPosition not implemented")]]
    /**
     */
    TodoReturn getSavedPosition(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getScaledGroundHeight not implemented")]]
    /**
     */
    TodoReturn getScaledGroundHeight(float p0);
public:

    /**
     * @note[short] Windows: 0x1a9070
     */
    TodoReturn getSingleGroupObject(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::getSpecialKey not implemented")]]
    /**
     */
    TodoReturn getSpecialKey(int p0, bool p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x1a8fb0
     */
    TodoReturn getStaticGroup(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::getStickyGroup not implemented")]]
    /**
     */
    TodoReturn getStickyGroup(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetFlyCameraY not implemented")]]
    /**
     */
    TodoReturn getTargetFlyCameraY(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetGroup not implemented")]]
    /**
     */
    TodoReturn getTargetGroup(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetGroupOrigin not implemented")]]
    /**
     */
    TodoReturn getTargetGroupOrigin(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x19e770
     */
    TodoReturn gravBumpPlayer(PlayerObject* p0, EffectGameObject* p1);

    /**
     * @note[short] Windows: 0x1a9b20
     */
    TodoReturn groupStickyObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x1b69f0
     */
    TodoReturn handleButton(bool p0, int p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::hasItem not implemented")]]
    /**
     */
    TodoReturn hasItem(int p0);
public:

    /**
     * @note[short] Windows: 0x19d580
     */
    TodoReturn hasUniqueCoin(EffectGameObject* p0);

    /**
     * @note[short] Windows: 0x194b40
     */
    TodoReturn increaseBatchNodeCapacity();
    
private:
    [[deprecated("GJBaseGameLayer::isFlipping not implemented")]]
    /**
     */
    bool isFlipping();
public:
    
private:
    [[deprecated("GJBaseGameLayer::isPlayer2Button not implemented")]]
    /**
     */
    bool isPlayer2Button(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::lightningFlash not implemented")]]
    /**
     */
    TodoReturn lightningFlash(cocos2d::CCPoint p0, cocos2d::ccColor3B p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::lightningFlash not implemented")]]
    /**
     */
    TodoReturn lightningFlash(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::ccColor3B p2, float p3, float p4, int p5, bool p6, float p7);
public:
    
private:
    [[deprecated("GJBaseGameLayer::loadGroupParentsFromString not implemented")]]
    /**
     */
    TodoReturn loadGroupParentsFromString(GameObject* p0, gd::string p1);
public:

    /**
     * @note[short] Windows: 0x1bd7b0
     */
    TodoReturn loadLevelSettings();

    /**
     * @note[short] Windows: 0x1b8d10
     */
    TodoReturn loadStartPosObject();

    /**
     * @note[short] Windows: 0x1b8e80
     */
    TodoReturn loadUpToPosition(float p0, int p1, int p2);
    
private:
    [[deprecated("GJBaseGameLayer::maxZOrderForShaderZ not implemented")]]
    /**
     */
    TodoReturn maxZOrderForShaderZ(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::minZOrderForShaderZ not implemented")]]
    /**
     */
    TodoReturn minZOrderForShaderZ(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::modifyGroupPhysics not implemented")]]
    /**
     */
    TodoReturn modifyGroupPhysics(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::modifyObjectPhysics not implemented")]]
    /**
     */
    TodoReturn modifyObjectPhysics(AdvancedFollowEditObject* p0, GameObjectPhysics& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveAreaObject not implemented")]]
    /**
     */
    TodoReturn moveAreaObject(GameObject* p0, float p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveCameraToPos not implemented")]]
    /**
     */
    TodoReturn moveCameraToPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveObject not implemented")]]
    /**
     */
    TodoReturn moveObject(GameObject* p0, double p1, double p2, bool p3);
public:

    /**
     * @note[short] Windows: 0x1b1fa0
     */
    TodoReturn moveObjects(cocos2d::CCArray* p0, double p1, double p2, bool p3);
    
private:
    [[deprecated("GJBaseGameLayer::moveObjectsSilent not implemented")]]
    /**
     */
    TodoReturn moveObjectsSilent(int p0, double p1, double p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::objectIntersectsCircle not implemented")]]
    /**
     */
    TodoReturn objectIntersectsCircle(GameObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::objectTypeToGameEvent not implemented")]]
    /**
     */
    TodoReturn objectTypeToGameEvent(int p0);
public:

    /**
     * @note[short] Windows: 0x1b4cd0
     */
    TodoReturn optimizeMoveGroups();

    /**
     * @note[short] Windows: 0x1c7c20
     */
    TodoReturn orderSpawnObjects();
    
private:
    [[deprecated("GJBaseGameLayer::parentForZLayer not implemented")]]
    /**
     */
    TodoReturn parentForZLayer(int p0, bool p1, int p2, int p3);
public:

    /**
     * @note[short] Windows: 0x1bb600
     */
    TodoReturn pauseAudio();
    
private:
    [[deprecated("GJBaseGameLayer::performMathOperation not implemented")]]
    /**
     */
    TodoReturn performMathOperation(double p0, double p1, int p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::performMathRounding not implemented")]]
    /**
     */
    TodoReturn performMathRounding(double p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::pickupItem not implemented")]]
    /**
     */
    TodoReturn pickupItem(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playAnimationCommand not implemented")]]
    /**
     */
    TodoReturn playAnimationCommand(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerCircleCollision not implemented")]]
    /**
     */
    TodoReturn playerCircleCollision(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerIntersectsCircle not implemented")]]
    /**
     */
    TodoReturn playerIntersectsCircle(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerTouchedObject not implemented")]]
    /**
     */
    TodoReturn playerTouchedObject(PlayerObject* p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x19eca0
     */
    TodoReturn playerTouchedRing(PlayerObject* p0, RingObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::playerTouchedTrigger not implemented")]]
    /**
     */
    TodoReturn playerTouchedTrigger(PlayerObject* p0, EffectGameObject* p1);
public:

    /**
     * @note[short] Windows: 0x19e530
     */
    TodoReturn playerWasTouchingObject(PlayerObject* p0, GameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::playerWillSwitchMode not implemented")]]
    /**
     */
    TodoReturn playerWillSwitchMode(PlayerObject* p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x19da70
     */
    TodoReturn playExitDualEffect(PlayerObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::playFlashEffect not implemented")]]
    /**
     */
    TodoReturn playFlashEffect(float p0, int p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playKeyframeAnimation not implemented")]]
    /**
     */
    TodoReturn playKeyframeAnimation(KeyframeAnimTriggerObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playSpeedParticle not implemented")]]
    /**
     */
    TodoReturn playSpeedParticle(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::positionForShaderTarget not implemented")]]
    /**
     */
    TodoReturn positionForShaderTarget(int p0);
public:

    /**
     * @note[short] Windows: 0x1ab2f0
     */
    TodoReturn positionUIObjects();

    /**
     * @note[short] Windows: 0x1a0220
     */
    TodoReturn prepareSavePositionObjects();
    
private:
    [[deprecated("GJBaseGameLayer::prepareTransformParent not implemented")]]
    /**
     */
    TodoReturn prepareTransformParent(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::preResumeGame not implemented")]]
    /**
     */
    TodoReturn preResumeGame();
public:

    /**
     * @note[short] Windows: 0x1b97e0
     */
    TodoReturn preUpdateVisibility(float p0);

    /**
     * @note[short] Windows: 0x1c5960
     */
    TodoReturn processActivatedAudioTriggers(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::processAdvancedFollowAction not implemented")]]
    /**
     */
    TodoReturn processAdvancedFollowAction(AdvancedFollowInstance& p0, bool p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAdvancedFollowActions not implemented")]]
    /**
     */
    TodoReturn processAdvancedFollowActions(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaActions not implemented")]]
    /**
     */
    TodoReturn processAreaActions(float p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaEffects not implemented")]]
    /**
     */
    TodoReturn processAreaEffects(gd::vector<EnterEffectInstance>* p0, GJAreaActionType p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaFadeGroupAction not implemented")]]
    /**
     */
    TodoReturn processAreaFadeGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaMoveGroupAction not implemented")]]
    /**
     */
    TodoReturn processAreaMoveGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaRotateGroupAction not implemented")]]
    /**
     */
    TodoReturn processAreaRotateGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaTintGroupAction not implemented")]]
    /**
     */
    TodoReturn processAreaTintGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaTransformGroupAction not implemented")]]
    /**
     */
    TodoReturn processAreaTransformGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaVisualActions not implemented")]]
    /**
     */
    TodoReturn processAreaVisualActions(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processCameraObject not implemented")]]
    /**
     */
    TodoReturn processCameraObject(GameObject* p0, PlayerObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processCommands not implemented")]]
    /**
     */
    TodoReturn processCommands(float p0);
public:

    /**
     * @note[short] Windows: 0x1b2740
     */
    TodoReturn processDynamicObjectActions(int p0, float p1);
    
private:
    [[deprecated("GJBaseGameLayer::processFollowActions not implemented")]]
    /**
     */
    TodoReturn processFollowActions();
public:

    /**
     * @note[short] Windows: 0x19d2b0
     */
    TodoReturn processItems();

    /**
     * @note[short] Windows: 0x1b1b90
     */
    TodoReturn processMoveActions();

    /**
     * @note[short] Windows: 0x1afce0
     */
    TodoReturn processMoveActionsStep(float p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::processOptionsTrigger not implemented")]]
    /**
     */
    TodoReturn processOptionsTrigger(GameOptionsTrigger* p0);
public:

    /**
     * @note[short] Windows: 0x1b2400
     */
    TodoReturn processPlayerFollowActions(float p0);

    /**
     * @note[short] Windows: 0x1be520
     */
    TodoReturn processQueuedAudioTriggers();

    /**
     * @note[short] Windows: 0x1b5b40
     */
    TodoReturn processQueuedButtons();
    
private:
    [[deprecated("GJBaseGameLayer::processRotationActions not implemented")]]
    /**
     */
    TodoReturn processRotationActions();
public:

    /**
     * @note[short] Windows: 0x1c3fe0
     */
    TodoReturn processSFXObjects();
    
private:
    [[deprecated("GJBaseGameLayer::processSFXState not implemented")]]
    /**
     */
    TodoReturn processSFXState(SFXTriggerState* p0, SFXTriggerState* p1, int p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processSongState not implemented")]]
    /**
     */
    TodoReturn processSongState(int p0, float p1, float p2, int p3, float p4, float p5, gd::vector<SongTriggerState>* p6);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processStateObjects not implemented")]]
    /**
     */
    TodoReturn processStateObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::processTransformActions not implemented")]]
    /**
     */
    TodoReturn processTransformActions(bool p0);
public:

    /**
     * @note[short] Windows: 0x1b5af0
     */
    TodoReturn queueButton(int p0, bool p1, bool p2);

    /**
     * @note[short] Windows: 0x1a9e40
     */
    TodoReturn reAddToStickyGroup(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::recordAction not implemented")]]
    /**
     */
    TodoReturn recordAction(int p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rectIntersectsCircle not implemented")]]
    /**
     */
    TodoReturn rectIntersectsCircle(cocos2d::CCRect p0, cocos2d::CCPoint p1, float p2);
public:

    /**
     * @note[short] Windows: 0x1b87a0
     */
    TodoReturn refreshCounterLabels();

    /**
     * @note[short] Windows: 0x1b6d70
     */
    TodoReturn refreshKeyframeAnims();

    /**
     * @note[short] Windows: 0x196be0
     */
    TodoReturn regenerateEnterEasingBuffers();
    
private:
    [[deprecated("GJBaseGameLayer::registerSpawnRemap not implemented")]]
    /**
     */
    TodoReturn registerSpawnRemap(gd::vector<ChanceObject>& p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::registerStateObject not implemented")]]
    /**
     */
    TodoReturn registerStateObject(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeBackground not implemented")]]
    /**
     */
    TodoReturn removeBackground();
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeCustomEnterEffects not implemented")]]
    /**
     */
    TodoReturn removeCustomEnterEffects(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x1a9600
     */
    TodoReturn removeFromGroupParents(GameObject* p0);

    /**
     * @note[short] Windows: 0x1a8da0
     */
    TodoReturn removeFromGroups(GameObject* p0);

    /**
     * @note[short] Windows: 0x1a9da0
     */
    TodoReturn removeFromStickyGroup(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::removeGroundLayer not implemented")]]
    /**
     */
    TodoReturn removeGroundLayer();
public:

    /**
     * @note[short] Windows: 0x1a9550
     */
    TodoReturn removeGroupParent(int p0);

    /**
     * @note[short] Windows: 0x1b6c90
     */
    TodoReturn removeKeyframe(KeyframeGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::removeMiddleground not implemented")]]
    /**
     */
    TodoReturn removeMiddleground();
public:

    /**
     * @note[short] Windows: 0x1abea0
     */
    TodoReturn removeObjectFromSection(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::removePlayer2 not implemented")]]
    /**
     */
    TodoReturn removePlayer2();
public:

    /**
     * @note[short] Windows: 0x1c3d30
     */
    TodoReturn removeTemporaryParticles();
    
private:
    [[deprecated("GJBaseGameLayer::reorderObjectSection not implemented")]]
    /**
     */
    TodoReturn reorderObjectSection(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::reparentObject not implemented")]]
    /**
     */
    TodoReturn reparentObject(cocos2d::CCNode* p0, cocos2d::CCNode* p1);
public:

    /**
     * @note[short] Windows: 0x196350
     */
    TodoReturn resetActiveEnterEffects();
    
private:
    [[deprecated("GJBaseGameLayer::resetAreaObjectValues not implemented")]]
    /**
     */
    TodoReturn resetAreaObjectValues(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetAudio not implemented")]]
    /**
     */
    TodoReturn resetAudio();
public:

    /**
     * @note[short] Windows: 0x1c22b0
     */
    TodoReturn resetCamera();
    
private:
    [[deprecated("GJBaseGameLayer::resetGradientLayers not implemented")]]
    /**
     */
    TodoReturn resetGradientLayers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetGroupCounters not implemented")]]
    /**
     */
    TodoReturn resetGroupCounters(bool p0);
public:

    /**
     * @note[short] Windows: 0x1bdb10
     */
    TodoReturn resetLevelVariables();
    
private:
    [[deprecated("GJBaseGameLayer::resetMoveOptimizedValue not implemented")]]
    /**
     */
    TodoReturn resetMoveOptimizedValue();
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetPlayer not implemented")]]
    /**
     */
    TodoReturn resetPlayer();
public:

    /**
     * @note[short] Windows: 0x3bf30
     */
    void resetSongTriggerValues();

    /**
     * @note[short] Windows: 0x1c7e40
     */
    TodoReturn resetSpawnChannelIndex();
    
private:
    [[deprecated("GJBaseGameLayer::resetStaticCamera not implemented")]]
    /**
     */
    TodoReturn resetStaticCamera(bool p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetStoppedAreaObjects not implemented")]]
    /**
     */
    TodoReturn resetStoppedAreaObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreAllUIObjects not implemented")]]
    /**
     */
    TodoReturn restoreAllUIObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreDefaultGameplayOffsetX not implemented")]]
    /**
     */
    TodoReturn restoreDefaultGameplayOffsetX();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreDefaultGameplayOffsetY not implemented")]]
    /**
     */
    TodoReturn restoreDefaultGameplayOffsetY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreRemap not implemented")]]
    /**
     */
    TodoReturn restoreRemap(EffectGameObject* p0, gd::unordered_map<int, int>& p1);
public:

    /**
     * @note[short] Windows: 0x1bb660
     */
    TodoReturn resumeAudio();
    
private:
    [[deprecated("GJBaseGameLayer::rotateAreaObjects not implemented")]]
    /**
     */
    TodoReturn rotateAreaObjects(GameObject* p0, cocos2d::CCArray* p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateObject not implemented")]]
    /**
     */
    TodoReturn rotateObject(GameObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateObjects not implemented")]]
    /**
     */
    TodoReturn rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, cocos2d::CCPoint p3, bool p4, bool p5);
public:

    /**
     * @note[short] Windows: 0x1a9460
     */
    void setGroupParent(GameObject* p0, int p1);

    /**
     * @note[short] Windows: 0x199e90
     */
    void setStartPosObject(StartPosObject* p0);

    /**
     * @note[short] Windows: 0x191440
     */
    TodoReturn setupLayers();

    /**
     * @note[short] Windows: 0x199ed0
     */
    TodoReturn setupLevelStart(LevelSettingsObject* p0);

    /**
     * @note[short] Windows: 0x1bd3d0
     */
    TodoReturn setupReplay(gd::string p0);

    /**
     * @note[short] Windows: 0x1be5d0
     */
    TodoReturn shakeCamera(float p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x1934a0
     */
    TodoReturn shouldExitHackedLevel();
    
private:
    [[deprecated("GJBaseGameLayer::sortAllGroupsX not implemented")]]
    /**
     */
    TodoReturn sortAllGroupsX();
public:

    /**
     * @note[short] Windows: 0x1a90f0
     */
    TodoReturn sortGroups();

    /**
     * @note[short] Windows: 0x1ac070
     */
    TodoReturn sortSectionVector();

    /**
     * @note[short] Windows: 0x1a99e0
     */
    TodoReturn sortStickyGroups();
    
private:
    [[deprecated("GJBaseGameLayer::spawnGroupTriggered not implemented")]]
    /**
     */
    TodoReturn spawnGroupTriggered(int p0, float p1, bool p2, gd::vector<int> const& p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnObjectsInOrder not implemented")]]
    /**
     */
    TodoReturn spawnObjectsInOrder(cocos2d::CCArray* p0, double p1, gd::vector<int> const& p2, int p3, int p4);
public:

    /**
     * @note[short] Windows: 0x1c2b80
     */
    TodoReturn spawnParticle(char const* p0, int p1, cocos2d::tCCPositionType p2, cocos2d::CCPoint p3);
    
private:
    [[deprecated("GJBaseGameLayer::spawnParticleTrigger not implemented")]]
    /**
     */
    TodoReturn spawnParticleTrigger(int p0, cocos2d::CCPoint p1, float p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnParticleTrigger not implemented")]]
    /**
     */
    TodoReturn spawnParticleTrigger(SpawnParticleGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x19d970
     */
    TodoReturn spawnPlayer2();
    
private:
    [[deprecated("GJBaseGameLayer::speedForShaderTarget not implemented")]]
    /**
     */
    TodoReturn speedForShaderTarget(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::staticObjectsInRect not implemented")]]
    /**
     */
    TodoReturn staticObjectsInRect(cocos2d::CCRect p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopAllGroundActions not implemented")]]
    /**
     */
    TodoReturn stopAllGroundActions();
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopCameraShake not implemented")]]
    /**
     */
    TodoReturn stopCameraShake();
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopCustomEnterEffect not implemented")]]
    /**
     */
    TodoReturn stopCustomEnterEffect(EnterEffectObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopCustomEnterEffect not implemented")]]
    /**
     */
    TodoReturn stopCustomEnterEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopSFXTrigger not implemented")]]
    /**
     */
    TodoReturn stopSFXTrigger(SFXTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::swapBackground not implemented")]]
    /**
     */
    TodoReturn swapBackground(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::swapGround not implemented")]]
    /**
     */
    TodoReturn swapGround(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::swapMiddleground not implemented")]]
    /**
     */
    TodoReturn swapMiddleground(int p0);
public:

    /**
     * @note[short] Windows: 0x19a6d0
     */
    void switchToFlyMode(PlayerObject* p0, GameObject* p1, bool p2, int p3);

    /**
     * @note[short] Windows: 0x19a800
     */
    void switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] Windows: 0x19a9c0
     */
    void switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] Windows: 0x19a8e0
     */
    void switchToSpiderMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] Windows: 0x1bda80
     */
    TodoReturn syncBGTextures();
    
private:
    [[deprecated("GJBaseGameLayer::teleportPlayer not implemented")]]
    /**
     */
    TodoReturn teleportPlayer(TeleportPortalObject* p0, PlayerObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::testInstantCountTrigger not implemented")]]
    /**
     */
    TodoReturn testInstantCountTrigger(int p0, int p1, int p2, bool p3, int p4, gd::vector<int> const& p5, int p6, int p7);
public:

    /**
     * @note[short] Windows: 0x1ca4d0
     */
    void toggleAudioVisualizer(bool p0);

    /**
     * @note[short] Windows: 0x19d6a0
     */
    TodoReturn toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);

    /**
     * @note[short] Windows: 0x1c87e0
     */
    TodoReturn toggleFlipped(bool p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::toggleGroup not implemented")]]
    /**
     */
    TodoReturn toggleGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleLockPlayer not implemented")]]
    /**
     */
    TodoReturn toggleLockPlayer(bool p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::togglePlayerStreakBlend not implemented")]]
    /**
     */
    TodoReturn togglePlayerStreakBlend(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::togglePlayerVisibility not implemented")]]
    /**
     */
    TodoReturn togglePlayerVisibility(bool p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::togglePlayerVisibility not implemented")]]
    /**
     */
    TodoReturn togglePlayerVisibility(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::transformAreaObjects not implemented")]]
    /**
     */
    TodoReturn transformAreaObjects(GameObject* p0, cocos2d::CCArray* p1, float p2, float p3, bool p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAdvancedFollowCommand not implemented")]]
    /**
     */
    TodoReturn triggerAdvancedFollowCommand(AdvancedFollowTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAdvancedFollowEditCommand not implemented")]]
    /**
     */
    TodoReturn triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAreaEffect not implemented")]]
    /**
     */
    TodoReturn triggerAreaEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAreaEffectAnimation not implemented")]]
    /**
     */
    TodoReturn triggerAreaEffectAnimation(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerDynamicMoveCommand not implemented")]]
    /**
     */
    TodoReturn triggerDynamicMoveCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerDynamicRotateCommand not implemented")]]
    /**
     */
    TodoReturn triggerDynamicRotateCommand(EnhancedTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerGradientCommand not implemented")]]
    /**
     */
    TodoReturn triggerGradientCommand(GradientTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerGravityChange not implemented")]]
    /**
     */
    TodoReturn triggerGravityChange(EffectGameObject* p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerMoveCommand not implemented")]]
    /**
     */
    TodoReturn triggerMoveCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerRotateCommand not implemented")]]
    /**
     */
    TodoReturn triggerRotateCommand(EnhancedTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerShaderCommand not implemented")]]
    /**
     */
    TodoReturn triggerShaderCommand(ShaderGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerTransformCommand not implemented")]]
    /**
     */
    TodoReturn triggerTransformCommand(TransformTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::tryGetGroupParent not implemented")]]
    /**
     */
    TodoReturn tryGetGroupParent(int p0);
public:

    /**
     * @note[short] Windows: 0x1a9340
     */
    TodoReturn tryGetMainObject(int p0);

    /**
     * @note[short] Windows: 0x1a9380
     */
    TodoReturn tryGetObject(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::tryResumeAudio not implemented")]]
    /**
     */
    TodoReturn tryResumeAudio();
public:
    
private:
    [[deprecated("GJBaseGameLayer::unclaimParticle not implemented")]]
    /**
     */
    TodoReturn unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1);
public:

    /**
     * @note[short] Windows: 0x1a9c10
     */
    TodoReturn ungroupStickyObjects(cocos2d::CCArray* p0);
    
private:
    [[deprecated("GJBaseGameLayer::unlinkAllEvents not implemented")]]
    /**
     */
    TodoReturn unlinkAllEvents();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateActiveEnterEffect not implemented")]]
    /**
     */
    TodoReturn updateActiveEnterEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAllObjectSection not implemented")]]
    /**
     */
    TodoReturn updateAllObjectSection();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAreaObjectLastValues not implemented")]]
    /**
     */
    TodoReturn updateAreaObjectLastValues(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1ca410
     */
    TodoReturn updateAudioVisualizer();
    
private:
    [[deprecated("GJBaseGameLayer::updateBGArtSpeed not implemented")]]
    /**
     */
    TodoReturn updateBGArtSpeed(float p0, float p1);
public:

    /**
     * @note[short] Windows: 0x1be670
     */
    TodoReturn updateCamera(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraBGArt not implemented")]]
    /**
     */
    TodoReturn updateCameraBGArt(cocos2d::CCPoint p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraEdge not implemented")]]
    /**
     */
    TodoReturn updateCameraEdge(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x19aaa0
     */
    void updateCameraMode(EffectGameObject* p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraOffsetX not implemented")]]
    /**
     */
    TodoReturn updateCameraOffsetX(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraOffsetY not implemented")]]
    /**
     */
    TodoReturn updateCameraOffsetY(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCollisionBlocks not implemented")]]
    /**
     */
    TodoReturn updateCollisionBlocks();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCounters not implemented")]]
    /**
     */
    TodoReturn updateCounters(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateDualGround not implemented")]]
    /**
     */
    TodoReturn updateDualGround(PlayerObject* p0, int p1, bool p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateEnterEffects not implemented")]]
    /**
     */
    TodoReturn updateEnterEffects(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateExtendedCollision not implemented")]]
    /**
     */
    TodoReturn updateExtendedCollision(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateExtraGameLayers not implemented")]]
    /**
     */
    TodoReturn updateExtraGameLayers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateGameplayOffsetX not implemented")]]
    /**
     */
    TodoReturn updateGameplayOffsetX(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateGameplayOffsetY not implemented")]]
    /**
     */
    TodoReturn updateGameplayOffsetY(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x1a57c0
     */
    TodoReturn updateGradientLayers();
    
private:
    [[deprecated("GJBaseGameLayer::updateGroundShadows not implemented")]]
    /**
     */
    TodoReturn updateGroundShadows();
public:

    /**
     * @note[short] Windows: 0x1c8700
     */
    TodoReturn updateGuideArt();
    
private:
    [[deprecated("GJBaseGameLayer::updateInternalCamOffsetX not implemented")]]
    /**
     */
    TodoReturn updateInternalCamOffsetX(float p0, float p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateInternalCamOffsetY not implemented")]]
    /**
     */
    TodoReturn updateInternalCamOffsetY(float p0, float p1, float p2);
public:

    /**
     * @note[short] Windows: 0x1b6ce0
     */
    TodoReturn updateKeyframeOrder(int p0);

    /**
     * @note[short] Windows: 0x194ca0
     */
    TodoReturn updateLayerCapacity(gd::string p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateLegacyLayerCapacity not implemented")]]
    /**
     */
    TodoReturn updateLegacyLayerCapacity(int p0, int p1, int p2, int p3);
public:

    /**
     * @note[short] Windows: 0x194490
     */
    TodoReturn updateLevelColors();

    /**
     * @note[short] Windows: 0x1bd960
     */
    TodoReturn updateMaxGameplayY();
    
private:
    [[deprecated("GJBaseGameLayer::updateMGArtSpeed not implemented")]]
    /**
     */
    TodoReturn updateMGArtSpeed(float p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateMGOffsetY not implemented")]]
    /**
     */
    TodoReturn updateMGOffsetY(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateOBB2 not implemented")]]
    /**
     */
    TodoReturn updateOBB2(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateParticles not implemented")]]
    /**
     */
    TodoReturn updateParticles(float p0);
public:

    /**
     * @note[short] Windows: 0x1bcd60
     */
    TodoReturn updatePlatformerTime();
    
private:
    [[deprecated("GJBaseGameLayer::updatePlayerCollisionBlocks not implemented")]]
    /**
     */
    TodoReturn updatePlayerCollisionBlocks();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateProximityVolumeEffects not implemented")]]
    /**
     */
    TodoReturn updateProximityVolumeEffects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateQueuedLabels not implemented")]]
    /**
     */
    TodoReturn updateQueuedLabels();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateReplay not implemented")]]
    /**
     */
    TodoReturn updateReplay();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateSavePositionObjects not implemented")]]
    /**
     */
    TodoReturn updateSavePositionObjects();
public:

    /**
     * @note[short] Windows: 0x1a7820
     */
    TodoReturn updateShaderLayer(float p0);

    /**
     * @note[short] Windows: 0x196060
     */
    TodoReturn updateSpecialGroupData();

    /**
     * @note[short] Windows: 0x1bc9f0
     */
    TodoReturn updateSpecialLabels();

    /**
     * @note[short] Windows: 0x1c1cb0
     */
    TodoReturn updateStaticCameraPos(cocos2d::CCPoint p0, bool p1, bool p2, bool p3, float p4, int p5, float p6);
    
private:
    [[deprecated("GJBaseGameLayer::updateStaticCameraPosToGroup not implemented")]]
    /**
     */
    TodoReturn updateStaticCameraPosToGroup(int p0, bool p1, bool p2, bool p3, float p4, float p5, int p6, float p7, bool p8, float p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimeMod not implemented")]]
    /**
     */
    TodoReturn updateTimeMod(float p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimerLabels not implemented")]]
    /**
     */
    TodoReturn updateTimerLabels();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateZoom not implemented")]]
    /**
     */
    TodoReturn updateZoom(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::visitWithColorFlash not implemented")]]
    /**
     */
    TodoReturn visitWithColorFlash();
public:

    /**
     * @note[short] Windows: 0x1c4ae0
     */
    TodoReturn volumeForProximityEffect(SFXTriggerInstance& p0);

    /**
     * @note[short] Windows: 0x1bb780
     */
    virtual void update(float p0);

    /**
     * @note[short] Windows: 0x190290
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x1c8ea0
     */
    virtual void visit();
    
private:
    [[deprecated("GJBaseGameLayer::postUpdate not implemented")]]
    /**
     */
    virtual TodoReturn postUpdate(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkForEnd not implemented")]]
    /**
     */
    virtual TodoReturn checkForEnd();
public:
    
private:
    [[deprecated("GJBaseGameLayer::testTime not implemented")]]
    /**
     */
    virtual TodoReturn testTime();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateVerifyDamage not implemented")]]
    /**
     */
    virtual TodoReturn updateVerifyDamage();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAttemptTime not implemented")]]
    /**
     */
    virtual TodoReturn updateAttemptTime(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateVisibility not implemented")]]
    /**
     */
    virtual TodoReturn updateVisibility(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerTookDamage not implemented")]]
    /**
     */
    virtual TodoReturn playerTookDamage(PlayerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::opacityForObject not implemented")]]
    /**
     */
    virtual TodoReturn opacityForObject(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addToSpeedObjects not implemented")]]
    /**
     */
    virtual TodoReturn addToSpeedObjects(EffectGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x19fac0
     */
    virtual TodoReturn objectsCollided(int p0, int p1);

    /**
     * @note[short] Windows: 0x1a8760
     */
    virtual TodoReturn updateColor(cocos2d::ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
    
private:
    [[deprecated("GJBaseGameLayer::toggleGroupTriggered not implemented")]]
    /**
     */
    virtual TodoReturn toggleGroupTriggered(int p0, bool p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnGroup not implemented")]]
    /**
     */
    virtual TodoReturn spawnGroup(int p0, bool p1, double p2, gd::vector<int> const& p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnObject not implemented")]]
    /**
     */
    virtual TodoReturn spawnObject(GameObject* p0, double p1, gd::vector<int> const& p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateEndTrigger not implemented")]]
    /**
     */
    virtual TodoReturn activateEndTrigger(int p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePlatformerEndTrigger not implemented")]]
    /**
     */
    virtual TodoReturn activatePlatformerEndTrigger(EndTriggerGameObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleGlitter not implemented")]]
    /**
     */
    virtual TodoReturn toggleGlitter(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::destroyPlayer not implemented")]]
    /**
     */
    virtual TodoReturn destroyPlayer(PlayerObject* p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x1986f0
     */
    virtual TodoReturn updateDebugDraw();

    /**
     * @note[short] Windows: 0x1ab800
     */
    virtual TodoReturn addToSection(GameObject* p0);

    /**
     * @note[short] Windows: 0x1a8ce0
     */
    virtual void addToGroup(GameObject* p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x1a8e00
     */
    virtual void removeFromGroup(GameObject* p0, int p1);

    /**
     * @note[short] Windows: 0x1acd40
     */
    virtual TodoReturn updateObjectSection(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateDisabledObjectsLastPos not implemented")]]
    /**
     */
    virtual TodoReturn updateDisabledObjectsLastPos(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleGroundVisibility not implemented")]]
    /**
     */
    virtual TodoReturn toggleGroundVisibility(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleMGVisibility not implemented")]]
    /**
     */
    virtual TodoReturn toggleMGVisibility(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleHideAttempts not implemented")]]
    /**
     */
    virtual TodoReturn toggleHideAttempts(bool p0);
public:

    /**
     * @note[short] Out of line
     */
    virtual TodoReturn timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);

    /**
     * @note[short] Out of line
     */
    virtual TodoReturn posForTime(float p0);

    /**
     * @note[short] Out of line
     */
    virtual TodoReturn resetSPTriggered();

    /**
     * @note[short] Windows: 0x1b9450
     */
    virtual TodoReturn updateScreenRotation(float p0, bool p1, bool p2, float p3, int p4, float p5, int p6, int p7);

    /**
     * @note[short] Windows: 0x19efb0
     */
    virtual TodoReturn reverseDirection(EffectGameObject* p0);

    /**
     * @note[short] Windows: 0x19f010
     */
    virtual TodoReturn rotateGameplay(RotateGameplayGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::didRotateGameplay not implemented")]]
    /**
     */
    virtual TodoReturn didRotateGameplay();
public:

    /**
     * @note[short] Windows: 0x2dfda0
     */
    virtual TodoReturn updateTimeWarp(float p0);

    /**
     * @note[short] Windows: 0x2dfda0
     */
    virtual TodoReturn updateTimeWarp(GameObject* p0, float p1);

    /**
     * @note[short] Windows: 0x1b9770
     */
    virtual TodoReturn applyTimeWarp(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::playGravityEffect not implemented")]]
    /**
     */
    virtual TodoReturn playGravityEffect(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::manualUpdateObjectColors not implemented")]]
    /**
     */
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::createCustomParticle not implemented")]]
    /**
     */
    virtual TodoReturn createCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimCustomParticle not implemented")]]
    /**
     */
    virtual TodoReturn claimCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, int p3, int p4, bool p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::unclaimCustomParticle not implemented")]]
    /**
     */
    virtual TodoReturn unclaimCustomParticle(gd::string const& p0, cocos2d::CCParticleSystemQuad* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatedAudioTrigger not implemented")]]
    /**
     */
    virtual TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1c8a50
     */
    virtual TodoReturn checkpointActivated(CheckpointGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::flipArt not implemented")]]
    /**
     */
    virtual TodoReturn flipArt(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addKeyframe not implemented")]]
    /**
     */
    virtual TodoReturn addKeyframe(KeyframeGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimeLabel not implemented")]]
    /**
     */
    virtual TodoReturn updateTimeLabel(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkSnapshot not implemented")]]
    /**
     */
    virtual TodoReturn checkSnapshot();
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleProgressbar not implemented")]]
    /**
     */
    virtual TodoReturn toggleProgressbar();
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleInfoLabel not implemented")]]
    /**
     */
    virtual TodoReturn toggleInfoLabel();
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeAllCheckpoints not implemented")]]
    /**
     */
    virtual void removeAllCheckpoints();
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleMusicInPractice not implemented")]]
    /**
     */
    virtual TodoReturn toggleMusicInPractice();
public:
    GEODE_PAD(8);
    GJGameState m_gameState;
    GJGameLevel* m_level;
    PlaybackMode m_playbackMode;
    GEODE_PAD(656);
    PlayerObject* m_player1;
    PlayerObject* m_player2;
    LevelSettingsObject* m_levelSettings;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_unknownCB0;
    cocos2d::CCArray* m_unknownCB8;
    cocos2d::CCDictionary* m_unknownCC0;
    cocos2d::CCNode* m_unknownCC8;
    gd::vector<GameObject*> m_unknownCD0;
    gd::vector<GameObject*> m_unknownCE8;
    gd::vector<GameObject*> m_unknownD00;
    gd::vector<GameObject*> m_unknownD18;
    gd::vector<GameObject*> m_unknownD30;
    gd::unordered_map<int, gd::unordered_set<int>> m_unknownD48;
    gd::vector<GameObject*> m_unknownD70;
    gd::unordered_map<int, gd::vector<GameObject*>> m_unknownD88;
    int m_unknownDB0;
    int m_unknownDB8;
    int m_unknownDBC;
    int m_unknownDC0;
    int m_unknownDC4;
    int m_unknownDC8;
    int m_unknownDCC;
    int m_unknownDD0;
    int m_unknownDD4;
    cocos2d::CCDictionary* m_groupDict;
    cocos2d::CCDictionary* m_staticGroupDict;
    cocos2d::CCDictionary* m_optimizedGroupDict;
    gd::vector<cocos2d::CCArray*> m_groups;
    gd::vector<cocos2d::CCArray*> m_staticGroups;
    gd::vector<cocos2d::CCArray*> m_optimizedGroups;
    cocos2d::CCDictionary* m_unknownE38;
    cocos2d::CCDictionary* m_unknownE40;
    cocos2d::CCDictionary* m_unknownE48;
    cocos2d::CCArray* m_unknownE50;
    gd::unordered_map<int, std::pair<int, int>> m_unknownE58;
    cocos2d::CCDictionary* m_unknownE80;
    float m_unknownE88;
    cocos2d::CCNode* m_unknownE90;
    cocos2d::CCNode* m_unknownE98;
    cocos2d::CCNode* m_unknownEA0;
    cocos2d::CCLayer* m_objectLayer;
    GEODE_PAD(112);
    std::array<float, 2000> m_massiveFloatArray;
    GEODE_PAD(272);
    bool m_isPracticeMode;
    bool m_practiceMusicSync;
    float m_unk2a80;
    cocos2d::CCNode* m_unk2a84;
    int m_unk2a88;
    float m_unk2a8c;
    int m_unk2a90;
    int m_unk2a94;
    int m_unk2a98;
    cocos2d::CCDictionary* m_unk2a9c;
    float m_levelLength;
    int m_unk2aa4;
    EndPortalObject* m_endPortal;
    bool m_isTestMode;
    GEODE_PAD(35);
    bool m_started;
    GEODE_PAD(124);
    gd::vector<PlayerButtonCommand> m_queuedButtons;
    GEODE_PAD(176);
    UILayer* m_uiLayer;
    GEODE_PAD(56);
    gd::vector<GameObject*> m_sections;
    GEODE_PAD(281);
    cocos2d::CCDrawNode* m_debugDrawNode;
    GEODE_PAD(4);
    bool m_isDebugDrawEnabled;
};
