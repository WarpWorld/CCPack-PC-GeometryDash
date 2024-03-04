#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJBaseGameLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_activateCustomRing
		#define GEODE_STATICS_activateCustomRing
		GEODE_AS_STATIC_FUNCTION(activateCustomRing) 
	#endif

	#ifndef GEODE_STATICS_activatedAudioTrigger
		#define GEODE_STATICS_activatedAudioTrigger
		GEODE_AS_STATIC_FUNCTION(activatedAudioTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateEventTrigger
		#define GEODE_STATICS_activateEventTrigger
		GEODE_AS_STATIC_FUNCTION(activateEventTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateItemCompareTrigger
		#define GEODE_STATICS_activateItemCompareTrigger
		GEODE_AS_STATIC_FUNCTION(activateItemCompareTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateItemEditTrigger
		#define GEODE_STATICS_activateItemEditTrigger
		GEODE_AS_STATIC_FUNCTION(activateItemEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateObjectControlTrigger
		#define GEODE_STATICS_activateObjectControlTrigger
		GEODE_AS_STATIC_FUNCTION(activateObjectControlTrigger) 
	#endif

	#ifndef GEODE_STATICS_activatePersistentItemTrigger
		#define GEODE_STATICS_activatePersistentItemTrigger
		GEODE_AS_STATIC_FUNCTION(activatePersistentItemTrigger) 
	#endif

	#ifndef GEODE_STATICS_activatePlayerControlTrigger
		#define GEODE_STATICS_activatePlayerControlTrigger
		GEODE_AS_STATIC_FUNCTION(activatePlayerControlTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateResetTrigger
		#define GEODE_STATICS_activateResetTrigger
		GEODE_AS_STATIC_FUNCTION(activateResetTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSFXEditTrigger
		#define GEODE_STATICS_activateSFXEditTrigger
		GEODE_AS_STATIC_FUNCTION(activateSFXEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSFXTrigger
		#define GEODE_STATICS_activateSFXTrigger
		GEODE_AS_STATIC_FUNCTION(activateSFXTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSongEditTrigger
		#define GEODE_STATICS_activateSongEditTrigger
		GEODE_AS_STATIC_FUNCTION(activateSongEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSongTrigger
		#define GEODE_STATICS_activateSongTrigger
		GEODE_AS_STATIC_FUNCTION(activateSongTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateTimerTrigger
		#define GEODE_STATICS_activateTimerTrigger
		GEODE_AS_STATIC_FUNCTION(activateTimerTrigger) 
	#endif

	#ifndef GEODE_STATICS_addAreaEffect
		#define GEODE_STATICS_addAreaEffect
		GEODE_AS_STATIC_FUNCTION(addAreaEffect) 
	#endif

	#ifndef GEODE_STATICS_addCustomEnterEffect
		#define GEODE_STATICS_addCustomEnterEffect
		GEODE_AS_STATIC_FUNCTION(addCustomEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_addGuideArt
		#define GEODE_STATICS_addGuideArt
		GEODE_AS_STATIC_FUNCTION(addGuideArt) 
	#endif

	#ifndef GEODE_STATICS_addObjectCounter
		#define GEODE_STATICS_addObjectCounter
		GEODE_AS_STATIC_FUNCTION(addObjectCounter) 
	#endif

	#ifndef GEODE_STATICS_addPickupTrigger
		#define GEODE_STATICS_addPickupTrigger
		GEODE_AS_STATIC_FUNCTION(addPickupTrigger) 
	#endif

	#ifndef GEODE_STATICS_addPoints
		#define GEODE_STATICS_addPoints
		GEODE_AS_STATIC_FUNCTION(addPoints) 
	#endif

	#ifndef GEODE_STATICS_addProximityVolumeEffect
		#define GEODE_STATICS_addProximityVolumeEffect
		GEODE_AS_STATIC_FUNCTION(addProximityVolumeEffect) 
	#endif

	#ifndef GEODE_STATICS_addRemapTargets
		#define GEODE_STATICS_addRemapTargets
		GEODE_AS_STATIC_FUNCTION(addRemapTargets) 
	#endif

	#ifndef GEODE_STATICS_addToGroupParents
		#define GEODE_STATICS_addToGroupParents
		GEODE_AS_STATIC_FUNCTION(addToGroupParents) 
	#endif

	#ifndef GEODE_STATICS_addToGroups
		#define GEODE_STATICS_addToGroups
		GEODE_AS_STATIC_FUNCTION(addToGroups) 
	#endif

	#ifndef GEODE_STATICS_addToObjectsToShow
		#define GEODE_STATICS_addToObjectsToShow
		GEODE_AS_STATIC_FUNCTION(addToObjectsToShow) 
	#endif

	#ifndef GEODE_STATICS_addUIObject
		#define GEODE_STATICS_addUIObject
		GEODE_AS_STATIC_FUNCTION(addUIObject) 
	#endif

	#ifndef GEODE_STATICS_animateInDualGroundNew
		#define GEODE_STATICS_animateInDualGroundNew
		GEODE_AS_STATIC_FUNCTION(animateInDualGroundNew) 
	#endif

	#ifndef GEODE_STATICS_animateInGroundNew
		#define GEODE_STATICS_animateInGroundNew
		GEODE_AS_STATIC_FUNCTION(animateInGroundNew) 
	#endif

	#ifndef GEODE_STATICS_animateOutGroundNew
		#define GEODE_STATICS_animateOutGroundNew
		GEODE_AS_STATIC_FUNCTION(animateOutGroundNew) 
	#endif

	#ifndef GEODE_STATICS_animatePortalY
		#define GEODE_STATICS_animatePortalY
		GEODE_AS_STATIC_FUNCTION(animatePortalY) 
	#endif

	#ifndef GEODE_STATICS_applyLevelSettings
		#define GEODE_STATICS_applyLevelSettings
		GEODE_AS_STATIC_FUNCTION(applyLevelSettings) 
	#endif

	#ifndef GEODE_STATICS_applyRemap
		#define GEODE_STATICS_applyRemap
		GEODE_AS_STATIC_FUNCTION(applyRemap) 
	#endif

	#ifndef GEODE_STATICS_applySFXEditTrigger
		#define GEODE_STATICS_applySFXEditTrigger
		GEODE_AS_STATIC_FUNCTION(applySFXEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_applyShake
		#define GEODE_STATICS_applyShake
		GEODE_AS_STATIC_FUNCTION(applyShake) 
	#endif

	#ifndef GEODE_STATICS_assignNewStickyGroups
		#define GEODE_STATICS_assignNewStickyGroups
		GEODE_AS_STATIC_FUNCTION(assignNewStickyGroups) 
	#endif

	#ifndef GEODE_STATICS_asyncBGLoaded
		#define GEODE_STATICS_asyncBGLoaded
		GEODE_AS_STATIC_FUNCTION(asyncBGLoaded) 
	#endif

	#ifndef GEODE_STATICS_asyncGLoaded
		#define GEODE_STATICS_asyncGLoaded
		GEODE_AS_STATIC_FUNCTION(asyncGLoaded) 
	#endif

	#ifndef GEODE_STATICS_asyncMGLoaded
		#define GEODE_STATICS_asyncMGLoaded
		GEODE_AS_STATIC_FUNCTION(asyncMGLoaded) 
	#endif

	#ifndef GEODE_STATICS_atlasValue
		#define GEODE_STATICS_atlasValue
		GEODE_AS_STATIC_FUNCTION(atlasValue) 
	#endif

	#ifndef GEODE_STATICS_bumpPlayer
		#define GEODE_STATICS_bumpPlayer
		GEODE_AS_STATIC_FUNCTION(bumpPlayer) 
	#endif

	#ifndef GEODE_STATICS_buttonIDToButton
		#define GEODE_STATICS_buttonIDToButton
		GEODE_AS_STATIC_FUNCTION(buttonIDToButton) 
	#endif

	#ifndef GEODE_STATICS_calculateColorGroups
		#define GEODE_STATICS_calculateColorGroups
		GEODE_AS_STATIC_FUNCTION(calculateColorGroups) 
	#endif

	#ifndef GEODE_STATICS_cameraMoveX
		#define GEODE_STATICS_cameraMoveX
		GEODE_AS_STATIC_FUNCTION(cameraMoveX) 
	#endif

	#ifndef GEODE_STATICS_cameraMoveY
		#define GEODE_STATICS_cameraMoveY
		GEODE_AS_STATIC_FUNCTION(cameraMoveY) 
	#endif

	#ifndef GEODE_STATICS_canBeActivatedByPlayer
		#define GEODE_STATICS_canBeActivatedByPlayer
		GEODE_AS_STATIC_FUNCTION(canBeActivatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_canProcessSFX
		#define GEODE_STATICS_canProcessSFX
		GEODE_AS_STATIC_FUNCTION(canProcessSFX) 
	#endif

	#ifndef GEODE_STATICS_canTouchObject
		#define GEODE_STATICS_canTouchObject
		GEODE_AS_STATIC_FUNCTION(canTouchObject) 
	#endif

	#ifndef GEODE_STATICS_checkCameraLimitAfterTeleport
		#define GEODE_STATICS_checkCameraLimitAfterTeleport
		GEODE_AS_STATIC_FUNCTION(checkCameraLimitAfterTeleport) 
	#endif

	#ifndef GEODE_STATICS_checkCollision
		#define GEODE_STATICS_checkCollision
		GEODE_AS_STATIC_FUNCTION(checkCollision) 
	#endif

	#ifndef GEODE_STATICS_checkCollisionBlocks
		#define GEODE_STATICS_checkCollisionBlocks
		GEODE_AS_STATIC_FUNCTION(checkCollisionBlocks) 
	#endif

	#ifndef GEODE_STATICS_checkCollisions
		#define GEODE_STATICS_checkCollisions
		GEODE_AS_STATIC_FUNCTION(checkCollisions) 
	#endif

	#ifndef GEODE_STATICS_checkRepellPlayer
		#define GEODE_STATICS_checkRepellPlayer
		GEODE_AS_STATIC_FUNCTION(checkRepellPlayer) 
	#endif

	#ifndef GEODE_STATICS_checkSpawnObjects
		#define GEODE_STATICS_checkSpawnObjects
		GEODE_AS_STATIC_FUNCTION(checkSpawnObjects) 
	#endif

	#ifndef GEODE_STATICS_claimMoveAction
		#define GEODE_STATICS_claimMoveAction
		GEODE_AS_STATIC_FUNCTION(claimMoveAction) 
	#endif

	#ifndef GEODE_STATICS_claimParticle
		#define GEODE_STATICS_claimParticle
		GEODE_AS_STATIC_FUNCTION(claimParticle) 
	#endif

	#ifndef GEODE_STATICS_claimRotationAction
		#define GEODE_STATICS_claimRotationAction
		GEODE_AS_STATIC_FUNCTION(claimRotationAction) 
	#endif

	#ifndef GEODE_STATICS_clearActivatedAudioTriggers
		#define GEODE_STATICS_clearActivatedAudioTriggers
		GEODE_AS_STATIC_FUNCTION(clearActivatedAudioTriggers) 
	#endif

	#ifndef GEODE_STATICS_clearPickedUpItems
		#define GEODE_STATICS_clearPickedUpItems
		GEODE_AS_STATIC_FUNCTION(clearPickedUpItems) 
	#endif

	#ifndef GEODE_STATICS_collectedObject
		#define GEODE_STATICS_collectedObject
		GEODE_AS_STATIC_FUNCTION(collectedObject) 
	#endif

	#ifndef GEODE_STATICS_collisionCheckObjects
		#define GEODE_STATICS_collisionCheckObjects
		GEODE_AS_STATIC_FUNCTION(collisionCheckObjects) 
	#endif

	#ifndef GEODE_STATICS_controlAdvancedFollowCommand
		#define GEODE_STATICS_controlAdvancedFollowCommand
		GEODE_AS_STATIC_FUNCTION(controlAdvancedFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_controlAreaEffect
		#define GEODE_STATICS_controlAreaEffect
		GEODE_AS_STATIC_FUNCTION(controlAreaEffect) 
	#endif

	#ifndef GEODE_STATICS_controlAreaEffectWithID
		#define GEODE_STATICS_controlAreaEffectWithID
		GEODE_AS_STATIC_FUNCTION(controlAreaEffectWithID) 
	#endif

	#ifndef GEODE_STATICS_controlDynamicCommand
		#define GEODE_STATICS_controlDynamicCommand
		GEODE_AS_STATIC_FUNCTION(controlDynamicCommand) 
	#endif

	#ifndef GEODE_STATICS_controlDynamicMoveCommand
		#define GEODE_STATICS_controlDynamicMoveCommand
		GEODE_AS_STATIC_FUNCTION(controlDynamicMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_controlDynamicRotateCommand
		#define GEODE_STATICS_controlDynamicRotateCommand
		GEODE_AS_STATIC_FUNCTION(controlDynamicRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_controlEventLink
		#define GEODE_STATICS_controlEventLink
		GEODE_AS_STATIC_FUNCTION(controlEventLink) 
	#endif

	#ifndef GEODE_STATICS_controlGradientTrigger
		#define GEODE_STATICS_controlGradientTrigger
		GEODE_AS_STATIC_FUNCTION(controlGradientTrigger) 
	#endif

	#ifndef GEODE_STATICS_controlTriggersInGroup
		#define GEODE_STATICS_controlTriggersInGroup
		GEODE_AS_STATIC_FUNCTION(controlTriggersInGroup) 
	#endif

	#ifndef GEODE_STATICS_controlTriggersWithControlID
		#define GEODE_STATICS_controlTriggersWithControlID
		GEODE_AS_STATIC_FUNCTION(controlTriggersWithControlID) 
	#endif

	#ifndef GEODE_STATICS_convertToClosestDirection
		#define GEODE_STATICS_convertToClosestDirection
		GEODE_AS_STATIC_FUNCTION(convertToClosestDirection) 
	#endif

	#ifndef GEODE_STATICS_createBackground
		#define GEODE_STATICS_createBackground
		GEODE_AS_STATIC_FUNCTION(createBackground) 
	#endif

	#ifndef GEODE_STATICS_createGroundLayer
		#define GEODE_STATICS_createGroundLayer
		GEODE_AS_STATIC_FUNCTION(createGroundLayer) 
	#endif

	#ifndef GEODE_STATICS_createMiddleground
		#define GEODE_STATICS_createMiddleground
		GEODE_AS_STATIC_FUNCTION(createMiddleground) 
	#endif

	#ifndef GEODE_STATICS_createNewKeyframeAnim
		#define GEODE_STATICS_createNewKeyframeAnim
		GEODE_AS_STATIC_FUNCTION(createNewKeyframeAnim) 
	#endif

	#ifndef GEODE_STATICS_createParticle
		#define GEODE_STATICS_createParticle
		GEODE_AS_STATIC_FUNCTION(createParticle) 
	#endif

	#ifndef GEODE_STATICS_createPlayer
		#define GEODE_STATICS_createPlayer
		GEODE_AS_STATIC_FUNCTION(createPlayer) 
	#endif

	#ifndef GEODE_STATICS_createPlayerCollisionBlock
		#define GEODE_STATICS_createPlayerCollisionBlock
		GEODE_AS_STATIC_FUNCTION(createPlayerCollisionBlock) 
	#endif

	#ifndef GEODE_STATICS_createTextLayers
		#define GEODE_STATICS_createTextLayers
		GEODE_AS_STATIC_FUNCTION(createTextLayers) 
	#endif

	#ifndef GEODE_STATICS_damagingObjectsInRect
		#define GEODE_STATICS_damagingObjectsInRect
		GEODE_AS_STATIC_FUNCTION(damagingObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_destroyObject
		#define GEODE_STATICS_destroyObject
		GEODE_AS_STATIC_FUNCTION(destroyObject) 
	#endif

	#ifndef GEODE_STATICS_enterDualMode
		#define GEODE_STATICS_enterDualMode
		GEODE_AS_STATIC_FUNCTION(enterDualMode) 
	#endif

	#ifndef GEODE_STATICS_exitStaticCamera
		#define GEODE_STATICS_exitStaticCamera
		GEODE_AS_STATIC_FUNCTION(exitStaticCamera) 
	#endif

	#ifndef GEODE_STATICS_flipFinished
		#define GEODE_STATICS_flipFinished
		GEODE_AS_STATIC_FUNCTION(flipFinished) 
	#endif

	#ifndef GEODE_STATICS_flipGravity
		#define GEODE_STATICS_flipGravity
		GEODE_AS_STATIC_FUNCTION(flipGravity) 
	#endif

	#ifndef GEODE_STATICS_flipObjects
		#define GEODE_STATICS_flipObjects
		GEODE_AS_STATIC_FUNCTION(flipObjects) 
	#endif

	#ifndef GEODE_STATICS_gameEventToString
		#define GEODE_STATICS_gameEventToString
		GEODE_AS_STATIC_FUNCTION(gameEventToString) 
	#endif

	#ifndef GEODE_STATICS_gameEventTriggered
		#define GEODE_STATICS_gameEventTriggered
		GEODE_AS_STATIC_FUNCTION(gameEventTriggered) 
	#endif

	#ifndef GEODE_STATICS_generateEnterEasingBuffer
		#define GEODE_STATICS_generateEnterEasingBuffer
		GEODE_AS_STATIC_FUNCTION(generateEnterEasingBuffer) 
	#endif

	#ifndef GEODE_STATICS_generateEnterEasingBuffers
		#define GEODE_STATICS_generateEnterEasingBuffers
		GEODE_AS_STATIC_FUNCTION(generateEnterEasingBuffers) 
	#endif

	#ifndef GEODE_STATICS_generatePickupAnimRandVal
		#define GEODE_STATICS_generatePickupAnimRandVal
		GEODE_AS_STATIC_FUNCTION(generatePickupAnimRandVal) 
	#endif

	#ifndef GEODE_STATICS_generateSpawnRemap
		#define GEODE_STATICS_generateSpawnRemap
		GEODE_AS_STATIC_FUNCTION(generateSpawnRemap) 
	#endif

	#ifndef GEODE_STATICS_generateTargetGroups
		#define GEODE_STATICS_generateTargetGroups
		GEODE_AS_STATIC_FUNCTION(generateTargetGroups) 
	#endif

	#ifndef GEODE_STATICS_generateVisibilityGroups
		#define GEODE_STATICS_generateVisibilityGroups
		GEODE_AS_STATIC_FUNCTION(generateVisibilityGroups) 
	#endif

	#ifndef GEODE_STATICS_getActiveOrderSpawnObjects
		#define GEODE_STATICS_getActiveOrderSpawnObjects
		GEODE_AS_STATIC_FUNCTION(getActiveOrderSpawnObjects) 
	#endif

	#ifndef GEODE_STATICS_getAreaObjectValue
		#define GEODE_STATICS_getAreaObjectValue
		GEODE_AS_STATIC_FUNCTION(getAreaObjectValue) 
	#endif

	#ifndef GEODE_STATICS_getBumpMod
		#define GEODE_STATICS_getBumpMod
		GEODE_AS_STATIC_FUNCTION(getBumpMod) 
	#endif

	#ifndef GEODE_STATICS_getCameraEdgeValue
		#define GEODE_STATICS_getCameraEdgeValue
		GEODE_AS_STATIC_FUNCTION(getCameraEdgeValue) 
	#endif

	#ifndef GEODE_STATICS_getCapacityString
		#define GEODE_STATICS_getCapacityString
		GEODE_AS_STATIC_FUNCTION(getCapacityString) 
	#endif

	#ifndef GEODE_STATICS_getCenterGroupObject
		#define GEODE_STATICS_getCenterGroupObject
		GEODE_AS_STATIC_FUNCTION(getCenterGroupObject) 
	#endif

	#ifndef GEODE_STATICS_getCustomEnterEffects
		#define GEODE_STATICS_getCustomEnterEffects
		GEODE_AS_STATIC_FUNCTION(getCustomEnterEffects) 
	#endif

	#ifndef GEODE_STATICS_getEasedAreaValue
		#define GEODE_STATICS_getEasedAreaValue
		GEODE_AS_STATIC_FUNCTION(getEasedAreaValue) 
	#endif

	#ifndef GEODE_STATICS_getEnterEasingKey
		#define GEODE_STATICS_getEnterEasingKey
		GEODE_AS_STATIC_FUNCTION(getEnterEasingKey) 
	#endif

	#ifndef GEODE_STATICS_getEnterEasingValue
		#define GEODE_STATICS_getEnterEasingValue
		GEODE_AS_STATIC_FUNCTION(getEnterEasingValue) 
	#endif

	#ifndef GEODE_STATICS_getFollowSpeedVal
		#define GEODE_STATICS_getFollowSpeedVal
		GEODE_AS_STATIC_FUNCTION(getFollowSpeedVal) 
	#endif

	#ifndef GEODE_STATICS_getGroundHeight
		#define GEODE_STATICS_getGroundHeight
		GEODE_AS_STATIC_FUNCTION(getGroundHeight) 
	#endif

	#ifndef GEODE_STATICS_getGroundHeightForMode
		#define GEODE_STATICS_getGroundHeightForMode
		GEODE_AS_STATIC_FUNCTION(getGroundHeightForMode) 
	#endif

	#ifndef GEODE_STATICS_getGroup
		#define GEODE_STATICS_getGroup
		GEODE_AS_STATIC_FUNCTION(getGroup) 
	#endif

	#ifndef GEODE_STATICS_getGroupParent
		#define GEODE_STATICS_getGroupParent
		GEODE_AS_STATIC_FUNCTION(getGroupParent) 
	#endif

	#ifndef GEODE_STATICS_getGroupParentsString
		#define GEODE_STATICS_getGroupParentsString
		GEODE_AS_STATIC_FUNCTION(getGroupParentsString) 
	#endif

	#ifndef GEODE_STATICS_getItemValue
		#define GEODE_STATICS_getItemValue
		GEODE_AS_STATIC_FUNCTION(getItemValue) 
	#endif

	#ifndef GEODE_STATICS_getMaxPortalY
		#define GEODE_STATICS_getMaxPortalY
		GEODE_AS_STATIC_FUNCTION(getMaxPortalY) 
	#endif

	#ifndef GEODE_STATICS_getMinDistance
		#define GEODE_STATICS_getMinDistance
		GEODE_AS_STATIC_FUNCTION(getMinDistance) 
	#endif

	#ifndef GEODE_STATICS_getMinPortalY
		#define GEODE_STATICS_getMinPortalY
		GEODE_AS_STATIC_FUNCTION(getMinPortalY) 
	#endif

	#ifndef GEODE_STATICS_getModifiedDelta
		#define GEODE_STATICS_getModifiedDelta
		GEODE_AS_STATIC_FUNCTION(getModifiedDelta) 
	#endif

	#ifndef GEODE_STATICS_getMoveTargetDelta
		#define GEODE_STATICS_getMoveTargetDelta
		GEODE_AS_STATIC_FUNCTION(getMoveTargetDelta) 
	#endif

	#ifndef GEODE_STATICS_getOptimizedGroup
		#define GEODE_STATICS_getOptimizedGroup
		GEODE_AS_STATIC_FUNCTION(getOptimizedGroup) 
	#endif

	#ifndef GEODE_STATICS_getOtherPlayer
		#define GEODE_STATICS_getOtherPlayer
		GEODE_AS_STATIC_FUNCTION(getOtherPlayer) 
	#endif

	#ifndef GEODE_STATICS_getParticleKey
		#define GEODE_STATICS_getParticleKey
		GEODE_AS_STATIC_FUNCTION(getParticleKey) 
	#endif

	#ifndef GEODE_STATICS_getParticleKey2
		#define GEODE_STATICS_getParticleKey2
		GEODE_AS_STATIC_FUNCTION(getParticleKey2) 
	#endif

	#ifndef GEODE_STATICS_getPlayerButtonID
		#define GEODE_STATICS_getPlayerButtonID
		GEODE_AS_STATIC_FUNCTION(getPlayerButtonID) 
	#endif

	#ifndef GEODE_STATICS_getPlayTimerFullSeconds
		#define GEODE_STATICS_getPlayTimerFullSeconds
		GEODE_AS_STATIC_FUNCTION(getPlayTimerFullSeconds) 
	#endif

	#ifndef GEODE_STATICS_getPlayTimerMilli
		#define GEODE_STATICS_getPlayTimerMilli
		GEODE_AS_STATIC_FUNCTION(getPlayTimerMilli) 
	#endif

	#ifndef GEODE_STATICS_getPortalTarget
		#define GEODE_STATICS_getPortalTarget
		GEODE_AS_STATIC_FUNCTION(getPortalTarget) 
	#endif

	#ifndef GEODE_STATICS_getPortalTargetPos
		#define GEODE_STATICS_getPortalTargetPos
		GEODE_AS_STATIC_FUNCTION(getPortalTargetPos) 
	#endif

	#ifndef GEODE_STATICS_getRecordString
		#define GEODE_STATICS_getRecordString
		GEODE_AS_STATIC_FUNCTION(getRecordString) 
	#endif

	#ifndef GEODE_STATICS_getRotateCommandTargets
		#define GEODE_STATICS_getRotateCommandTargets
		GEODE_AS_STATIC_FUNCTION(getRotateCommandTargets) 
	#endif

	#ifndef GEODE_STATICS_getSavedPosition
		#define GEODE_STATICS_getSavedPosition
		GEODE_AS_STATIC_FUNCTION(getSavedPosition) 
	#endif

	#ifndef GEODE_STATICS_getScaledGroundHeight
		#define GEODE_STATICS_getScaledGroundHeight
		GEODE_AS_STATIC_FUNCTION(getScaledGroundHeight) 
	#endif

	#ifndef GEODE_STATICS_getSingleGroupObject
		#define GEODE_STATICS_getSingleGroupObject
		GEODE_AS_STATIC_FUNCTION(getSingleGroupObject) 
	#endif

	#ifndef GEODE_STATICS_getSpecialKey
		#define GEODE_STATICS_getSpecialKey
		GEODE_AS_STATIC_FUNCTION(getSpecialKey) 
	#endif

	#ifndef GEODE_STATICS_getStaticGroup
		#define GEODE_STATICS_getStaticGroup
		GEODE_AS_STATIC_FUNCTION(getStaticGroup) 
	#endif

	#ifndef GEODE_STATICS_getStickyGroup
		#define GEODE_STATICS_getStickyGroup
		GEODE_AS_STATIC_FUNCTION(getStickyGroup) 
	#endif

	#ifndef GEODE_STATICS_getTargetFlyCameraY
		#define GEODE_STATICS_getTargetFlyCameraY
		GEODE_AS_STATIC_FUNCTION(getTargetFlyCameraY) 
	#endif

	#ifndef GEODE_STATICS_getTargetGroup
		#define GEODE_STATICS_getTargetGroup
		GEODE_AS_STATIC_FUNCTION(getTargetGroup) 
	#endif

	#ifndef GEODE_STATICS_getTargetGroupOrigin
		#define GEODE_STATICS_getTargetGroupOrigin
		GEODE_AS_STATIC_FUNCTION(getTargetGroupOrigin) 
	#endif

	#ifndef GEODE_STATICS_gravBumpPlayer
		#define GEODE_STATICS_gravBumpPlayer
		GEODE_AS_STATIC_FUNCTION(gravBumpPlayer) 
	#endif

	#ifndef GEODE_STATICS_groupStickyObjects
		#define GEODE_STATICS_groupStickyObjects
		GEODE_AS_STATIC_FUNCTION(groupStickyObjects) 
	#endif

	#ifndef GEODE_STATICS_handleButton
		#define GEODE_STATICS_handleButton
		GEODE_AS_STATIC_FUNCTION(handleButton) 
	#endif

	#ifndef GEODE_STATICS_hasItem
		#define GEODE_STATICS_hasItem
		GEODE_AS_STATIC_FUNCTION(hasItem) 
	#endif

	#ifndef GEODE_STATICS_hasUniqueCoin
		#define GEODE_STATICS_hasUniqueCoin
		GEODE_AS_STATIC_FUNCTION(hasUniqueCoin) 
	#endif

	#ifndef GEODE_STATICS_increaseBatchNodeCapacity
		#define GEODE_STATICS_increaseBatchNodeCapacity
		GEODE_AS_STATIC_FUNCTION(increaseBatchNodeCapacity) 
	#endif

	#ifndef GEODE_STATICS_isFlipping
		#define GEODE_STATICS_isFlipping
		GEODE_AS_STATIC_FUNCTION(isFlipping) 
	#endif

	#ifndef GEODE_STATICS_isPlayer2Button
		#define GEODE_STATICS_isPlayer2Button
		GEODE_AS_STATIC_FUNCTION(isPlayer2Button) 
	#endif

	#ifndef GEODE_STATICS_lightningFlash
		#define GEODE_STATICS_lightningFlash
		GEODE_AS_STATIC_FUNCTION(lightningFlash) 
	#endif

	#ifndef GEODE_STATICS_loadGroupParentsFromString
		#define GEODE_STATICS_loadGroupParentsFromString
		GEODE_AS_STATIC_FUNCTION(loadGroupParentsFromString) 
	#endif

	#ifndef GEODE_STATICS_loadLevelSettings
		#define GEODE_STATICS_loadLevelSettings
		GEODE_AS_STATIC_FUNCTION(loadLevelSettings) 
	#endif

	#ifndef GEODE_STATICS_loadStartPosObject
		#define GEODE_STATICS_loadStartPosObject
		GEODE_AS_STATIC_FUNCTION(loadStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_loadUpToPosition
		#define GEODE_STATICS_loadUpToPosition
		GEODE_AS_STATIC_FUNCTION(loadUpToPosition) 
	#endif

	#ifndef GEODE_STATICS_maxZOrderForShaderZ
		#define GEODE_STATICS_maxZOrderForShaderZ
		GEODE_AS_STATIC_FUNCTION(maxZOrderForShaderZ) 
	#endif

	#ifndef GEODE_STATICS_minZOrderForShaderZ
		#define GEODE_STATICS_minZOrderForShaderZ
		GEODE_AS_STATIC_FUNCTION(minZOrderForShaderZ) 
	#endif

	#ifndef GEODE_STATICS_modifyGroupPhysics
		#define GEODE_STATICS_modifyGroupPhysics
		GEODE_AS_STATIC_FUNCTION(modifyGroupPhysics) 
	#endif

	#ifndef GEODE_STATICS_modifyObjectPhysics
		#define GEODE_STATICS_modifyObjectPhysics
		GEODE_AS_STATIC_FUNCTION(modifyObjectPhysics) 
	#endif

	#ifndef GEODE_STATICS_moveAreaObject
		#define GEODE_STATICS_moveAreaObject
		GEODE_AS_STATIC_FUNCTION(moveAreaObject) 
	#endif

	#ifndef GEODE_STATICS_moveCameraToPos
		#define GEODE_STATICS_moveCameraToPos
		GEODE_AS_STATIC_FUNCTION(moveCameraToPos) 
	#endif

	#ifndef GEODE_STATICS_moveObject
		#define GEODE_STATICS_moveObject
		GEODE_AS_STATIC_FUNCTION(moveObject) 
	#endif

	#ifndef GEODE_STATICS_moveObjects
		#define GEODE_STATICS_moveObjects
		GEODE_AS_STATIC_FUNCTION(moveObjects) 
	#endif

	#ifndef GEODE_STATICS_moveObjectsSilent
		#define GEODE_STATICS_moveObjectsSilent
		GEODE_AS_STATIC_FUNCTION(moveObjectsSilent) 
	#endif

	#ifndef GEODE_STATICS_objectIntersectsCircle
		#define GEODE_STATICS_objectIntersectsCircle
		GEODE_AS_STATIC_FUNCTION(objectIntersectsCircle) 
	#endif

	#ifndef GEODE_STATICS_objectTypeToGameEvent
		#define GEODE_STATICS_objectTypeToGameEvent
		GEODE_AS_STATIC_FUNCTION(objectTypeToGameEvent) 
	#endif

	#ifndef GEODE_STATICS_optimizeMoveGroups
		#define GEODE_STATICS_optimizeMoveGroups
		GEODE_AS_STATIC_FUNCTION(optimizeMoveGroups) 
	#endif

	#ifndef GEODE_STATICS_orderSpawnObjects
		#define GEODE_STATICS_orderSpawnObjects
		GEODE_AS_STATIC_FUNCTION(orderSpawnObjects) 
	#endif

	#ifndef GEODE_STATICS_parentForZLayer
		#define GEODE_STATICS_parentForZLayer
		GEODE_AS_STATIC_FUNCTION(parentForZLayer) 
	#endif

	#ifndef GEODE_STATICS_pauseAudio
		#define GEODE_STATICS_pauseAudio
		GEODE_AS_STATIC_FUNCTION(pauseAudio) 
	#endif

	#ifndef GEODE_STATICS_performMathOperation
		#define GEODE_STATICS_performMathOperation
		GEODE_AS_STATIC_FUNCTION(performMathOperation) 
	#endif

	#ifndef GEODE_STATICS_performMathRounding
		#define GEODE_STATICS_performMathRounding
		GEODE_AS_STATIC_FUNCTION(performMathRounding) 
	#endif

	#ifndef GEODE_STATICS_pickupItem
		#define GEODE_STATICS_pickupItem
		GEODE_AS_STATIC_FUNCTION(pickupItem) 
	#endif

	#ifndef GEODE_STATICS_playAnimationCommand
		#define GEODE_STATICS_playAnimationCommand
		GEODE_AS_STATIC_FUNCTION(playAnimationCommand) 
	#endif

	#ifndef GEODE_STATICS_playerCircleCollision
		#define GEODE_STATICS_playerCircleCollision
		GEODE_AS_STATIC_FUNCTION(playerCircleCollision) 
	#endif

	#ifndef GEODE_STATICS_playerIntersectsCircle
		#define GEODE_STATICS_playerIntersectsCircle
		GEODE_AS_STATIC_FUNCTION(playerIntersectsCircle) 
	#endif

	#ifndef GEODE_STATICS_playerTouchedObject
		#define GEODE_STATICS_playerTouchedObject
		GEODE_AS_STATIC_FUNCTION(playerTouchedObject) 
	#endif

	#ifndef GEODE_STATICS_playerTouchedRing
		#define GEODE_STATICS_playerTouchedRing
		GEODE_AS_STATIC_FUNCTION(playerTouchedRing) 
	#endif

	#ifndef GEODE_STATICS_playerTouchedTrigger
		#define GEODE_STATICS_playerTouchedTrigger
		GEODE_AS_STATIC_FUNCTION(playerTouchedTrigger) 
	#endif

	#ifndef GEODE_STATICS_playerWasTouchingObject
		#define GEODE_STATICS_playerWasTouchingObject
		GEODE_AS_STATIC_FUNCTION(playerWasTouchingObject) 
	#endif

	#ifndef GEODE_STATICS_playerWillSwitchMode
		#define GEODE_STATICS_playerWillSwitchMode
		GEODE_AS_STATIC_FUNCTION(playerWillSwitchMode) 
	#endif

	#ifndef GEODE_STATICS_playExitDualEffect
		#define GEODE_STATICS_playExitDualEffect
		GEODE_AS_STATIC_FUNCTION(playExitDualEffect) 
	#endif

	#ifndef GEODE_STATICS_playFlashEffect
		#define GEODE_STATICS_playFlashEffect
		GEODE_AS_STATIC_FUNCTION(playFlashEffect) 
	#endif

	#ifndef GEODE_STATICS_playKeyframeAnimation
		#define GEODE_STATICS_playKeyframeAnimation
		GEODE_AS_STATIC_FUNCTION(playKeyframeAnimation) 
	#endif

	#ifndef GEODE_STATICS_playSpeedParticle
		#define GEODE_STATICS_playSpeedParticle
		GEODE_AS_STATIC_FUNCTION(playSpeedParticle) 
	#endif

	#ifndef GEODE_STATICS_positionForShaderTarget
		#define GEODE_STATICS_positionForShaderTarget
		GEODE_AS_STATIC_FUNCTION(positionForShaderTarget) 
	#endif

	#ifndef GEODE_STATICS_positionUIObjects
		#define GEODE_STATICS_positionUIObjects
		GEODE_AS_STATIC_FUNCTION(positionUIObjects) 
	#endif

	#ifndef GEODE_STATICS_prepareSavePositionObjects
		#define GEODE_STATICS_prepareSavePositionObjects
		GEODE_AS_STATIC_FUNCTION(prepareSavePositionObjects) 
	#endif

	#ifndef GEODE_STATICS_prepareTransformParent
		#define GEODE_STATICS_prepareTransformParent
		GEODE_AS_STATIC_FUNCTION(prepareTransformParent) 
	#endif

	#ifndef GEODE_STATICS_preResumeGame
		#define GEODE_STATICS_preResumeGame
		GEODE_AS_STATIC_FUNCTION(preResumeGame) 
	#endif

	#ifndef GEODE_STATICS_preUpdateVisibility
		#define GEODE_STATICS_preUpdateVisibility
		GEODE_AS_STATIC_FUNCTION(preUpdateVisibility) 
	#endif

	#ifndef GEODE_STATICS_processActivatedAudioTriggers
		#define GEODE_STATICS_processActivatedAudioTriggers
		GEODE_AS_STATIC_FUNCTION(processActivatedAudioTriggers) 
	#endif

	#ifndef GEODE_STATICS_processAdvancedFollowAction
		#define GEODE_STATICS_processAdvancedFollowAction
		GEODE_AS_STATIC_FUNCTION(processAdvancedFollowAction) 
	#endif

	#ifndef GEODE_STATICS_processAdvancedFollowActions
		#define GEODE_STATICS_processAdvancedFollowActions
		GEODE_AS_STATIC_FUNCTION(processAdvancedFollowActions) 
	#endif

	#ifndef GEODE_STATICS_processAreaActions
		#define GEODE_STATICS_processAreaActions
		GEODE_AS_STATIC_FUNCTION(processAreaActions) 
	#endif

	#ifndef GEODE_STATICS_processAreaEffects
		#define GEODE_STATICS_processAreaEffects
		GEODE_AS_STATIC_FUNCTION(processAreaEffects) 
	#endif

	#ifndef GEODE_STATICS_processAreaFadeGroupAction
		#define GEODE_STATICS_processAreaFadeGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaFadeGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaMoveGroupAction
		#define GEODE_STATICS_processAreaMoveGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaMoveGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaRotateGroupAction
		#define GEODE_STATICS_processAreaRotateGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaRotateGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaTintGroupAction
		#define GEODE_STATICS_processAreaTintGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaTintGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaTransformGroupAction
		#define GEODE_STATICS_processAreaTransformGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaTransformGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaVisualActions
		#define GEODE_STATICS_processAreaVisualActions
		GEODE_AS_STATIC_FUNCTION(processAreaVisualActions) 
	#endif

	#ifndef GEODE_STATICS_processCameraObject
		#define GEODE_STATICS_processCameraObject
		GEODE_AS_STATIC_FUNCTION(processCameraObject) 
	#endif

	#ifndef GEODE_STATICS_processCommands
		#define GEODE_STATICS_processCommands
		GEODE_AS_STATIC_FUNCTION(processCommands) 
	#endif

	#ifndef GEODE_STATICS_processDynamicObjectActions
		#define GEODE_STATICS_processDynamicObjectActions
		GEODE_AS_STATIC_FUNCTION(processDynamicObjectActions) 
	#endif

	#ifndef GEODE_STATICS_processFollowActions
		#define GEODE_STATICS_processFollowActions
		GEODE_AS_STATIC_FUNCTION(processFollowActions) 
	#endif

	#ifndef GEODE_STATICS_processItems
		#define GEODE_STATICS_processItems
		GEODE_AS_STATIC_FUNCTION(processItems) 
	#endif

	#ifndef GEODE_STATICS_processMoveActions
		#define GEODE_STATICS_processMoveActions
		GEODE_AS_STATIC_FUNCTION(processMoveActions) 
	#endif

	#ifndef GEODE_STATICS_processMoveActionsStep
		#define GEODE_STATICS_processMoveActionsStep
		GEODE_AS_STATIC_FUNCTION(processMoveActionsStep) 
	#endif

	#ifndef GEODE_STATICS_processOptionsTrigger
		#define GEODE_STATICS_processOptionsTrigger
		GEODE_AS_STATIC_FUNCTION(processOptionsTrigger) 
	#endif

	#ifndef GEODE_STATICS_processPlayerFollowActions
		#define GEODE_STATICS_processPlayerFollowActions
		GEODE_AS_STATIC_FUNCTION(processPlayerFollowActions) 
	#endif

	#ifndef GEODE_STATICS_processQueuedAudioTriggers
		#define GEODE_STATICS_processQueuedAudioTriggers
		GEODE_AS_STATIC_FUNCTION(processQueuedAudioTriggers) 
	#endif

	#ifndef GEODE_STATICS_processQueuedButtons
		#define GEODE_STATICS_processQueuedButtons
		GEODE_AS_STATIC_FUNCTION(processQueuedButtons) 
	#endif

	#ifndef GEODE_STATICS_processRotationActions
		#define GEODE_STATICS_processRotationActions
		GEODE_AS_STATIC_FUNCTION(processRotationActions) 
	#endif

	#ifndef GEODE_STATICS_processSFXObjects
		#define GEODE_STATICS_processSFXObjects
		GEODE_AS_STATIC_FUNCTION(processSFXObjects) 
	#endif

	#ifndef GEODE_STATICS_processSFXState
		#define GEODE_STATICS_processSFXState
		GEODE_AS_STATIC_FUNCTION(processSFXState) 
	#endif

	#ifndef GEODE_STATICS_processSongState
		#define GEODE_STATICS_processSongState
		GEODE_AS_STATIC_FUNCTION(processSongState) 
	#endif

	#ifndef GEODE_STATICS_processStateObjects
		#define GEODE_STATICS_processStateObjects
		GEODE_AS_STATIC_FUNCTION(processStateObjects) 
	#endif

	#ifndef GEODE_STATICS_processTransformActions
		#define GEODE_STATICS_processTransformActions
		GEODE_AS_STATIC_FUNCTION(processTransformActions) 
	#endif

	#ifndef GEODE_STATICS_queueButton
		#define GEODE_STATICS_queueButton
		GEODE_AS_STATIC_FUNCTION(queueButton) 
	#endif

	#ifndef GEODE_STATICS_reAddToStickyGroup
		#define GEODE_STATICS_reAddToStickyGroup
		GEODE_AS_STATIC_FUNCTION(reAddToStickyGroup) 
	#endif

	#ifndef GEODE_STATICS_recordAction
		#define GEODE_STATICS_recordAction
		GEODE_AS_STATIC_FUNCTION(recordAction) 
	#endif

	#ifndef GEODE_STATICS_rectIntersectsCircle
		#define GEODE_STATICS_rectIntersectsCircle
		GEODE_AS_STATIC_FUNCTION(rectIntersectsCircle) 
	#endif

	#ifndef GEODE_STATICS_refreshCounterLabels
		#define GEODE_STATICS_refreshCounterLabels
		GEODE_AS_STATIC_FUNCTION(refreshCounterLabels) 
	#endif

	#ifndef GEODE_STATICS_refreshKeyframeAnims
		#define GEODE_STATICS_refreshKeyframeAnims
		GEODE_AS_STATIC_FUNCTION(refreshKeyframeAnims) 
	#endif

	#ifndef GEODE_STATICS_regenerateEnterEasingBuffers
		#define GEODE_STATICS_regenerateEnterEasingBuffers
		GEODE_AS_STATIC_FUNCTION(regenerateEnterEasingBuffers) 
	#endif

	#ifndef GEODE_STATICS_registerSpawnRemap
		#define GEODE_STATICS_registerSpawnRemap
		GEODE_AS_STATIC_FUNCTION(registerSpawnRemap) 
	#endif

	#ifndef GEODE_STATICS_registerStateObject
		#define GEODE_STATICS_registerStateObject
		GEODE_AS_STATIC_FUNCTION(registerStateObject) 
	#endif

	#ifndef GEODE_STATICS_removeBackground
		#define GEODE_STATICS_removeBackground
		GEODE_AS_STATIC_FUNCTION(removeBackground) 
	#endif

	#ifndef GEODE_STATICS_removeCustomEnterEffects
		#define GEODE_STATICS_removeCustomEnterEffects
		GEODE_AS_STATIC_FUNCTION(removeCustomEnterEffects) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroupParents
		#define GEODE_STATICS_removeFromGroupParents
		GEODE_AS_STATIC_FUNCTION(removeFromGroupParents) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroups
		#define GEODE_STATICS_removeFromGroups
		GEODE_AS_STATIC_FUNCTION(removeFromGroups) 
	#endif

	#ifndef GEODE_STATICS_removeFromStickyGroup
		#define GEODE_STATICS_removeFromStickyGroup
		GEODE_AS_STATIC_FUNCTION(removeFromStickyGroup) 
	#endif

	#ifndef GEODE_STATICS_removeGroundLayer
		#define GEODE_STATICS_removeGroundLayer
		GEODE_AS_STATIC_FUNCTION(removeGroundLayer) 
	#endif

	#ifndef GEODE_STATICS_removeGroupParent
		#define GEODE_STATICS_removeGroupParent
		GEODE_AS_STATIC_FUNCTION(removeGroupParent) 
	#endif

	#ifndef GEODE_STATICS_removeKeyframe
		#define GEODE_STATICS_removeKeyframe
		GEODE_AS_STATIC_FUNCTION(removeKeyframe) 
	#endif

	#ifndef GEODE_STATICS_removeMiddleground
		#define GEODE_STATICS_removeMiddleground
		GEODE_AS_STATIC_FUNCTION(removeMiddleground) 
	#endif

	#ifndef GEODE_STATICS_removeObjectFromSection
		#define GEODE_STATICS_removeObjectFromSection
		GEODE_AS_STATIC_FUNCTION(removeObjectFromSection) 
	#endif

	#ifndef GEODE_STATICS_removePlayer2
		#define GEODE_STATICS_removePlayer2
		GEODE_AS_STATIC_FUNCTION(removePlayer2) 
	#endif

	#ifndef GEODE_STATICS_removeTemporaryParticles
		#define GEODE_STATICS_removeTemporaryParticles
		GEODE_AS_STATIC_FUNCTION(removeTemporaryParticles) 
	#endif

	#ifndef GEODE_STATICS_reorderObjectSection
		#define GEODE_STATICS_reorderObjectSection
		GEODE_AS_STATIC_FUNCTION(reorderObjectSection) 
	#endif

	#ifndef GEODE_STATICS_reparentObject
		#define GEODE_STATICS_reparentObject
		GEODE_AS_STATIC_FUNCTION(reparentObject) 
	#endif

	#ifndef GEODE_STATICS_resetActiveEnterEffects
		#define GEODE_STATICS_resetActiveEnterEffects
		GEODE_AS_STATIC_FUNCTION(resetActiveEnterEffects) 
	#endif

	#ifndef GEODE_STATICS_resetAreaObjectValues
		#define GEODE_STATICS_resetAreaObjectValues
		GEODE_AS_STATIC_FUNCTION(resetAreaObjectValues) 
	#endif

	#ifndef GEODE_STATICS_resetAudio
		#define GEODE_STATICS_resetAudio
		GEODE_AS_STATIC_FUNCTION(resetAudio) 
	#endif

	#ifndef GEODE_STATICS_resetCamera
		#define GEODE_STATICS_resetCamera
		GEODE_AS_STATIC_FUNCTION(resetCamera) 
	#endif

	#ifndef GEODE_STATICS_resetGradientLayers
		#define GEODE_STATICS_resetGradientLayers
		GEODE_AS_STATIC_FUNCTION(resetGradientLayers) 
	#endif

	#ifndef GEODE_STATICS_resetGroupCounters
		#define GEODE_STATICS_resetGroupCounters
		GEODE_AS_STATIC_FUNCTION(resetGroupCounters) 
	#endif

	#ifndef GEODE_STATICS_resetLevelVariables
		#define GEODE_STATICS_resetLevelVariables
		GEODE_AS_STATIC_FUNCTION(resetLevelVariables) 
	#endif

	#ifndef GEODE_STATICS_resetMoveOptimizedValue
		#define GEODE_STATICS_resetMoveOptimizedValue
		GEODE_AS_STATIC_FUNCTION(resetMoveOptimizedValue) 
	#endif

	#ifndef GEODE_STATICS_resetPlayer
		#define GEODE_STATICS_resetPlayer
		GEODE_AS_STATIC_FUNCTION(resetPlayer) 
	#endif

	#ifndef GEODE_STATICS_resetSongTriggerValues
		#define GEODE_STATICS_resetSongTriggerValues
		GEODE_AS_STATIC_FUNCTION(resetSongTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_resetSpawnChannelIndex
		#define GEODE_STATICS_resetSpawnChannelIndex
		GEODE_AS_STATIC_FUNCTION(resetSpawnChannelIndex) 
	#endif

	#ifndef GEODE_STATICS_resetStaticCamera
		#define GEODE_STATICS_resetStaticCamera
		GEODE_AS_STATIC_FUNCTION(resetStaticCamera) 
	#endif

	#ifndef GEODE_STATICS_resetStoppedAreaObjects
		#define GEODE_STATICS_resetStoppedAreaObjects
		GEODE_AS_STATIC_FUNCTION(resetStoppedAreaObjects) 
	#endif

	#ifndef GEODE_STATICS_restoreAllUIObjects
		#define GEODE_STATICS_restoreAllUIObjects
		GEODE_AS_STATIC_FUNCTION(restoreAllUIObjects) 
	#endif

	#ifndef GEODE_STATICS_restoreDefaultGameplayOffsetX
		#define GEODE_STATICS_restoreDefaultGameplayOffsetX
		GEODE_AS_STATIC_FUNCTION(restoreDefaultGameplayOffsetX) 
	#endif

	#ifndef GEODE_STATICS_restoreDefaultGameplayOffsetY
		#define GEODE_STATICS_restoreDefaultGameplayOffsetY
		GEODE_AS_STATIC_FUNCTION(restoreDefaultGameplayOffsetY) 
	#endif

	#ifndef GEODE_STATICS_restoreRemap
		#define GEODE_STATICS_restoreRemap
		GEODE_AS_STATIC_FUNCTION(restoreRemap) 
	#endif

	#ifndef GEODE_STATICS_resumeAudio
		#define GEODE_STATICS_resumeAudio
		GEODE_AS_STATIC_FUNCTION(resumeAudio) 
	#endif

	#ifndef GEODE_STATICS_rotateAreaObjects
		#define GEODE_STATICS_rotateAreaObjects
		GEODE_AS_STATIC_FUNCTION(rotateAreaObjects) 
	#endif

	#ifndef GEODE_STATICS_rotateObject
		#define GEODE_STATICS_rotateObject
		GEODE_AS_STATIC_FUNCTION(rotateObject) 
	#endif

	#ifndef GEODE_STATICS_rotateObjects
		#define GEODE_STATICS_rotateObjects
		GEODE_AS_STATIC_FUNCTION(rotateObjects) 
	#endif

	#ifndef GEODE_STATICS_setGroupParent
		#define GEODE_STATICS_setGroupParent
		GEODE_AS_STATIC_FUNCTION(setGroupParent) 
	#endif

	#ifndef GEODE_STATICS_setStartPosObject
		#define GEODE_STATICS_setStartPosObject
		GEODE_AS_STATIC_FUNCTION(setStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_setupLayers
		#define GEODE_STATICS_setupLayers
		GEODE_AS_STATIC_FUNCTION(setupLayers) 
	#endif

	#ifndef GEODE_STATICS_setupLevelStart
		#define GEODE_STATICS_setupLevelStart
		GEODE_AS_STATIC_FUNCTION(setupLevelStart) 
	#endif

	#ifndef GEODE_STATICS_setupReplay
		#define GEODE_STATICS_setupReplay
		GEODE_AS_STATIC_FUNCTION(setupReplay) 
	#endif

	#ifndef GEODE_STATICS_shakeCamera
		#define GEODE_STATICS_shakeCamera
		GEODE_AS_STATIC_FUNCTION(shakeCamera) 
	#endif

	#ifndef GEODE_STATICS_shouldExitHackedLevel
		#define GEODE_STATICS_shouldExitHackedLevel
		GEODE_AS_STATIC_FUNCTION(shouldExitHackedLevel) 
	#endif

	#ifndef GEODE_STATICS_sortAllGroupsX
		#define GEODE_STATICS_sortAllGroupsX
		GEODE_AS_STATIC_FUNCTION(sortAllGroupsX) 
	#endif

	#ifndef GEODE_STATICS_sortGroups
		#define GEODE_STATICS_sortGroups
		GEODE_AS_STATIC_FUNCTION(sortGroups) 
	#endif

	#ifndef GEODE_STATICS_sortSectionVector
		#define GEODE_STATICS_sortSectionVector
		GEODE_AS_STATIC_FUNCTION(sortSectionVector) 
	#endif

	#ifndef GEODE_STATICS_sortStickyGroups
		#define GEODE_STATICS_sortStickyGroups
		GEODE_AS_STATIC_FUNCTION(sortStickyGroups) 
	#endif

	#ifndef GEODE_STATICS_spawnGroupTriggered
		#define GEODE_STATICS_spawnGroupTriggered
		GEODE_AS_STATIC_FUNCTION(spawnGroupTriggered) 
	#endif

	#ifndef GEODE_STATICS_spawnObjectsInOrder
		#define GEODE_STATICS_spawnObjectsInOrder
		GEODE_AS_STATIC_FUNCTION(spawnObjectsInOrder) 
	#endif

	#ifndef GEODE_STATICS_spawnParticle
		#define GEODE_STATICS_spawnParticle
		GEODE_AS_STATIC_FUNCTION(spawnParticle) 
	#endif

	#ifndef GEODE_STATICS_spawnParticleTrigger
		#define GEODE_STATICS_spawnParticleTrigger
		GEODE_AS_STATIC_FUNCTION(spawnParticleTrigger) 
	#endif

	#ifndef GEODE_STATICS_spawnPlayer2
		#define GEODE_STATICS_spawnPlayer2
		GEODE_AS_STATIC_FUNCTION(spawnPlayer2) 
	#endif

	#ifndef GEODE_STATICS_speedForShaderTarget
		#define GEODE_STATICS_speedForShaderTarget
		GEODE_AS_STATIC_FUNCTION(speedForShaderTarget) 
	#endif

	#ifndef GEODE_STATICS_staticObjectsInRect
		#define GEODE_STATICS_staticObjectsInRect
		GEODE_AS_STATIC_FUNCTION(staticObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_stopAllGroundActions
		#define GEODE_STATICS_stopAllGroundActions
		GEODE_AS_STATIC_FUNCTION(stopAllGroundActions) 
	#endif

	#ifndef GEODE_STATICS_stopCameraShake
		#define GEODE_STATICS_stopCameraShake
		GEODE_AS_STATIC_FUNCTION(stopCameraShake) 
	#endif

	#ifndef GEODE_STATICS_stopCustomEnterEffect
		#define GEODE_STATICS_stopCustomEnterEffect
		GEODE_AS_STATIC_FUNCTION(stopCustomEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_stopSFXTrigger
		#define GEODE_STATICS_stopSFXTrigger
		GEODE_AS_STATIC_FUNCTION(stopSFXTrigger) 
	#endif

	#ifndef GEODE_STATICS_swapBackground
		#define GEODE_STATICS_swapBackground
		GEODE_AS_STATIC_FUNCTION(swapBackground) 
	#endif

	#ifndef GEODE_STATICS_swapGround
		#define GEODE_STATICS_swapGround
		GEODE_AS_STATIC_FUNCTION(swapGround) 
	#endif

	#ifndef GEODE_STATICS_swapMiddleground
		#define GEODE_STATICS_swapMiddleground
		GEODE_AS_STATIC_FUNCTION(swapMiddleground) 
	#endif

	#ifndef GEODE_STATICS_switchToFlyMode
		#define GEODE_STATICS_switchToFlyMode
		GEODE_AS_STATIC_FUNCTION(switchToFlyMode) 
	#endif

	#ifndef GEODE_STATICS_switchToRobotMode
		#define GEODE_STATICS_switchToRobotMode
		GEODE_AS_STATIC_FUNCTION(switchToRobotMode) 
	#endif

	#ifndef GEODE_STATICS_switchToRollMode
		#define GEODE_STATICS_switchToRollMode
		GEODE_AS_STATIC_FUNCTION(switchToRollMode) 
	#endif

	#ifndef GEODE_STATICS_switchToSpiderMode
		#define GEODE_STATICS_switchToSpiderMode
		GEODE_AS_STATIC_FUNCTION(switchToSpiderMode) 
	#endif

	#ifndef GEODE_STATICS_syncBGTextures
		#define GEODE_STATICS_syncBGTextures
		GEODE_AS_STATIC_FUNCTION(syncBGTextures) 
	#endif

	#ifndef GEODE_STATICS_teleportPlayer
		#define GEODE_STATICS_teleportPlayer
		GEODE_AS_STATIC_FUNCTION(teleportPlayer) 
	#endif

	#ifndef GEODE_STATICS_testInstantCountTrigger
		#define GEODE_STATICS_testInstantCountTrigger
		GEODE_AS_STATIC_FUNCTION(testInstantCountTrigger) 
	#endif

	#ifndef GEODE_STATICS_toggleAudioVisualizer
		#define GEODE_STATICS_toggleAudioVisualizer
		GEODE_AS_STATIC_FUNCTION(toggleAudioVisualizer) 
	#endif

	#ifndef GEODE_STATICS_toggleDualMode
		#define GEODE_STATICS_toggleDualMode
		GEODE_AS_STATIC_FUNCTION(toggleDualMode) 
	#endif

	#ifndef GEODE_STATICS_toggleFlipped
		#define GEODE_STATICS_toggleFlipped
		GEODE_AS_STATIC_FUNCTION(toggleFlipped) 
	#endif

	#ifndef GEODE_STATICS_toggleGroup
		#define GEODE_STATICS_toggleGroup
		GEODE_AS_STATIC_FUNCTION(toggleGroup) 
	#endif

	#ifndef GEODE_STATICS_toggleLockPlayer
		#define GEODE_STATICS_toggleLockPlayer
		GEODE_AS_STATIC_FUNCTION(toggleLockPlayer) 
	#endif

	#ifndef GEODE_STATICS_togglePlayerStreakBlend
		#define GEODE_STATICS_togglePlayerStreakBlend
		GEODE_AS_STATIC_FUNCTION(togglePlayerStreakBlend) 
	#endif

	#ifndef GEODE_STATICS_togglePlayerVisibility
		#define GEODE_STATICS_togglePlayerVisibility
		GEODE_AS_STATIC_FUNCTION(togglePlayerVisibility) 
	#endif

	#ifndef GEODE_STATICS_transformAreaObjects
		#define GEODE_STATICS_transformAreaObjects
		GEODE_AS_STATIC_FUNCTION(transformAreaObjects) 
	#endif

	#ifndef GEODE_STATICS_triggerAdvancedFollowCommand
		#define GEODE_STATICS_triggerAdvancedFollowCommand
		GEODE_AS_STATIC_FUNCTION(triggerAdvancedFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerAdvancedFollowEditCommand
		#define GEODE_STATICS_triggerAdvancedFollowEditCommand
		GEODE_AS_STATIC_FUNCTION(triggerAdvancedFollowEditCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerAreaEffect
		#define GEODE_STATICS_triggerAreaEffect
		GEODE_AS_STATIC_FUNCTION(triggerAreaEffect) 
	#endif

	#ifndef GEODE_STATICS_triggerAreaEffectAnimation
		#define GEODE_STATICS_triggerAreaEffectAnimation
		GEODE_AS_STATIC_FUNCTION(triggerAreaEffectAnimation) 
	#endif

	#ifndef GEODE_STATICS_triggerDynamicMoveCommand
		#define GEODE_STATICS_triggerDynamicMoveCommand
		GEODE_AS_STATIC_FUNCTION(triggerDynamicMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerDynamicRotateCommand
		#define GEODE_STATICS_triggerDynamicRotateCommand
		GEODE_AS_STATIC_FUNCTION(triggerDynamicRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerGradientCommand
		#define GEODE_STATICS_triggerGradientCommand
		GEODE_AS_STATIC_FUNCTION(triggerGradientCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerGravityChange
		#define GEODE_STATICS_triggerGravityChange
		GEODE_AS_STATIC_FUNCTION(triggerGravityChange) 
	#endif

	#ifndef GEODE_STATICS_triggerMoveCommand
		#define GEODE_STATICS_triggerMoveCommand
		GEODE_AS_STATIC_FUNCTION(triggerMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerRotateCommand
		#define GEODE_STATICS_triggerRotateCommand
		GEODE_AS_STATIC_FUNCTION(triggerRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerShaderCommand
		#define GEODE_STATICS_triggerShaderCommand
		GEODE_AS_STATIC_FUNCTION(triggerShaderCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerTransformCommand
		#define GEODE_STATICS_triggerTransformCommand
		GEODE_AS_STATIC_FUNCTION(triggerTransformCommand) 
	#endif

	#ifndef GEODE_STATICS_tryGetGroupParent
		#define GEODE_STATICS_tryGetGroupParent
		GEODE_AS_STATIC_FUNCTION(tryGetGroupParent) 
	#endif

	#ifndef GEODE_STATICS_tryGetMainObject
		#define GEODE_STATICS_tryGetMainObject
		GEODE_AS_STATIC_FUNCTION(tryGetMainObject) 
	#endif

	#ifndef GEODE_STATICS_tryGetObject
		#define GEODE_STATICS_tryGetObject
		GEODE_AS_STATIC_FUNCTION(tryGetObject) 
	#endif

	#ifndef GEODE_STATICS_tryResumeAudio
		#define GEODE_STATICS_tryResumeAudio
		GEODE_AS_STATIC_FUNCTION(tryResumeAudio) 
	#endif

	#ifndef GEODE_STATICS_unclaimParticle
		#define GEODE_STATICS_unclaimParticle
		GEODE_AS_STATIC_FUNCTION(unclaimParticle) 
	#endif

	#ifndef GEODE_STATICS_ungroupStickyObjects
		#define GEODE_STATICS_ungroupStickyObjects
		GEODE_AS_STATIC_FUNCTION(ungroupStickyObjects) 
	#endif

	#ifndef GEODE_STATICS_unlinkAllEvents
		#define GEODE_STATICS_unlinkAllEvents
		GEODE_AS_STATIC_FUNCTION(unlinkAllEvents) 
	#endif

	#ifndef GEODE_STATICS_updateActiveEnterEffect
		#define GEODE_STATICS_updateActiveEnterEffect
		GEODE_AS_STATIC_FUNCTION(updateActiveEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_updateAllObjectSection
		#define GEODE_STATICS_updateAllObjectSection
		GEODE_AS_STATIC_FUNCTION(updateAllObjectSection) 
	#endif

	#ifndef GEODE_STATICS_updateAreaObjectLastValues
		#define GEODE_STATICS_updateAreaObjectLastValues
		GEODE_AS_STATIC_FUNCTION(updateAreaObjectLastValues) 
	#endif

	#ifndef GEODE_STATICS_updateAudioVisualizer
		#define GEODE_STATICS_updateAudioVisualizer
		GEODE_AS_STATIC_FUNCTION(updateAudioVisualizer) 
	#endif

	#ifndef GEODE_STATICS_updateBGArtSpeed
		#define GEODE_STATICS_updateBGArtSpeed
		GEODE_AS_STATIC_FUNCTION(updateBGArtSpeed) 
	#endif

	#ifndef GEODE_STATICS_updateCamera
		#define GEODE_STATICS_updateCamera
		GEODE_AS_STATIC_FUNCTION(updateCamera) 
	#endif

	#ifndef GEODE_STATICS_updateCameraBGArt
		#define GEODE_STATICS_updateCameraBGArt
		GEODE_AS_STATIC_FUNCTION(updateCameraBGArt) 
	#endif

	#ifndef GEODE_STATICS_updateCameraEdge
		#define GEODE_STATICS_updateCameraEdge
		GEODE_AS_STATIC_FUNCTION(updateCameraEdge) 
	#endif

	#ifndef GEODE_STATICS_updateCameraMode
		#define GEODE_STATICS_updateCameraMode
		GEODE_AS_STATIC_FUNCTION(updateCameraMode) 
	#endif

	#ifndef GEODE_STATICS_updateCameraOffsetX
		#define GEODE_STATICS_updateCameraOffsetX
		GEODE_AS_STATIC_FUNCTION(updateCameraOffsetX) 
	#endif

	#ifndef GEODE_STATICS_updateCameraOffsetY
		#define GEODE_STATICS_updateCameraOffsetY
		GEODE_AS_STATIC_FUNCTION(updateCameraOffsetY) 
	#endif

	#ifndef GEODE_STATICS_updateCollisionBlocks
		#define GEODE_STATICS_updateCollisionBlocks
		GEODE_AS_STATIC_FUNCTION(updateCollisionBlocks) 
	#endif

	#ifndef GEODE_STATICS_updateCounters
		#define GEODE_STATICS_updateCounters
		GEODE_AS_STATIC_FUNCTION(updateCounters) 
	#endif

	#ifndef GEODE_STATICS_updateDualGround
		#define GEODE_STATICS_updateDualGround
		GEODE_AS_STATIC_FUNCTION(updateDualGround) 
	#endif

	#ifndef GEODE_STATICS_updateEnterEffects
		#define GEODE_STATICS_updateEnterEffects
		GEODE_AS_STATIC_FUNCTION(updateEnterEffects) 
	#endif

	#ifndef GEODE_STATICS_updateExtendedCollision
		#define GEODE_STATICS_updateExtendedCollision
		GEODE_AS_STATIC_FUNCTION(updateExtendedCollision) 
	#endif

	#ifndef GEODE_STATICS_updateExtraGameLayers
		#define GEODE_STATICS_updateExtraGameLayers
		GEODE_AS_STATIC_FUNCTION(updateExtraGameLayers) 
	#endif

	#ifndef GEODE_STATICS_updateGameplayOffsetX
		#define GEODE_STATICS_updateGameplayOffsetX
		GEODE_AS_STATIC_FUNCTION(updateGameplayOffsetX) 
	#endif

	#ifndef GEODE_STATICS_updateGameplayOffsetY
		#define GEODE_STATICS_updateGameplayOffsetY
		GEODE_AS_STATIC_FUNCTION(updateGameplayOffsetY) 
	#endif

	#ifndef GEODE_STATICS_updateGradientLayers
		#define GEODE_STATICS_updateGradientLayers
		GEODE_AS_STATIC_FUNCTION(updateGradientLayers) 
	#endif

	#ifndef GEODE_STATICS_updateGroundShadows
		#define GEODE_STATICS_updateGroundShadows
		GEODE_AS_STATIC_FUNCTION(updateGroundShadows) 
	#endif

	#ifndef GEODE_STATICS_updateGuideArt
		#define GEODE_STATICS_updateGuideArt
		GEODE_AS_STATIC_FUNCTION(updateGuideArt) 
	#endif

	#ifndef GEODE_STATICS_updateInternalCamOffsetX
		#define GEODE_STATICS_updateInternalCamOffsetX
		GEODE_AS_STATIC_FUNCTION(updateInternalCamOffsetX) 
	#endif

	#ifndef GEODE_STATICS_updateInternalCamOffsetY
		#define GEODE_STATICS_updateInternalCamOffsetY
		GEODE_AS_STATIC_FUNCTION(updateInternalCamOffsetY) 
	#endif

	#ifndef GEODE_STATICS_updateKeyframeOrder
		#define GEODE_STATICS_updateKeyframeOrder
		GEODE_AS_STATIC_FUNCTION(updateKeyframeOrder) 
	#endif

	#ifndef GEODE_STATICS_updateLayerCapacity
		#define GEODE_STATICS_updateLayerCapacity
		GEODE_AS_STATIC_FUNCTION(updateLayerCapacity) 
	#endif

	#ifndef GEODE_STATICS_updateLegacyLayerCapacity
		#define GEODE_STATICS_updateLegacyLayerCapacity
		GEODE_AS_STATIC_FUNCTION(updateLegacyLayerCapacity) 
	#endif

	#ifndef GEODE_STATICS_updateLevelColors
		#define GEODE_STATICS_updateLevelColors
		GEODE_AS_STATIC_FUNCTION(updateLevelColors) 
	#endif

	#ifndef GEODE_STATICS_updateMaxGameplayY
		#define GEODE_STATICS_updateMaxGameplayY
		GEODE_AS_STATIC_FUNCTION(updateMaxGameplayY) 
	#endif

	#ifndef GEODE_STATICS_updateMGArtSpeed
		#define GEODE_STATICS_updateMGArtSpeed
		GEODE_AS_STATIC_FUNCTION(updateMGArtSpeed) 
	#endif

	#ifndef GEODE_STATICS_updateMGOffsetY
		#define GEODE_STATICS_updateMGOffsetY
		GEODE_AS_STATIC_FUNCTION(updateMGOffsetY) 
	#endif

	#ifndef GEODE_STATICS_updateOBB2
		#define GEODE_STATICS_updateOBB2
		GEODE_AS_STATIC_FUNCTION(updateOBB2) 
	#endif

	#ifndef GEODE_STATICS_updateParticles
		#define GEODE_STATICS_updateParticles
		GEODE_AS_STATIC_FUNCTION(updateParticles) 
	#endif

	#ifndef GEODE_STATICS_updatePlatformerTime
		#define GEODE_STATICS_updatePlatformerTime
		GEODE_AS_STATIC_FUNCTION(updatePlatformerTime) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerCollisionBlocks
		#define GEODE_STATICS_updatePlayerCollisionBlocks
		GEODE_AS_STATIC_FUNCTION(updatePlayerCollisionBlocks) 
	#endif

	#ifndef GEODE_STATICS_updateProximityVolumeEffects
		#define GEODE_STATICS_updateProximityVolumeEffects
		GEODE_AS_STATIC_FUNCTION(updateProximityVolumeEffects) 
	#endif

	#ifndef GEODE_STATICS_updateQueuedLabels
		#define GEODE_STATICS_updateQueuedLabels
		GEODE_AS_STATIC_FUNCTION(updateQueuedLabels) 
	#endif

	#ifndef GEODE_STATICS_updateReplay
		#define GEODE_STATICS_updateReplay
		GEODE_AS_STATIC_FUNCTION(updateReplay) 
	#endif

	#ifndef GEODE_STATICS_updateSavePositionObjects
		#define GEODE_STATICS_updateSavePositionObjects
		GEODE_AS_STATIC_FUNCTION(updateSavePositionObjects) 
	#endif

	#ifndef GEODE_STATICS_updateShaderLayer
		#define GEODE_STATICS_updateShaderLayer
		GEODE_AS_STATIC_FUNCTION(updateShaderLayer) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialGroupData
		#define GEODE_STATICS_updateSpecialGroupData
		GEODE_AS_STATIC_FUNCTION(updateSpecialGroupData) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialLabels
		#define GEODE_STATICS_updateSpecialLabels
		GEODE_AS_STATIC_FUNCTION(updateSpecialLabels) 
	#endif

	#ifndef GEODE_STATICS_updateStaticCameraPos
		#define GEODE_STATICS_updateStaticCameraPos
		GEODE_AS_STATIC_FUNCTION(updateStaticCameraPos) 
	#endif

	#ifndef GEODE_STATICS_updateStaticCameraPosToGroup
		#define GEODE_STATICS_updateStaticCameraPosToGroup
		GEODE_AS_STATIC_FUNCTION(updateStaticCameraPosToGroup) 
	#endif

	#ifndef GEODE_STATICS_updateTimeMod
		#define GEODE_STATICS_updateTimeMod
		GEODE_AS_STATIC_FUNCTION(updateTimeMod) 
	#endif

	#ifndef GEODE_STATICS_updateTimerLabels
		#define GEODE_STATICS_updateTimerLabels
		GEODE_AS_STATIC_FUNCTION(updateTimerLabels) 
	#endif

	#ifndef GEODE_STATICS_updateZoom
		#define GEODE_STATICS_updateZoom
		GEODE_AS_STATIC_FUNCTION(updateZoom) 
	#endif

	#ifndef GEODE_STATICS_visitWithColorFlash
		#define GEODE_STATICS_visitWithColorFlash
		GEODE_AS_STATIC_FUNCTION(visitWithColorFlash) 
	#endif

	#ifndef GEODE_STATICS_volumeForProximityEffect
		#define GEODE_STATICS_volumeForProximityEffect
		GEODE_AS_STATIC_FUNCTION(volumeForProximityEffect) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_postUpdate
		#define GEODE_STATICS_postUpdate
		GEODE_AS_STATIC_FUNCTION(postUpdate) 
	#endif

	#ifndef GEODE_STATICS_checkForEnd
		#define GEODE_STATICS_checkForEnd
		GEODE_AS_STATIC_FUNCTION(checkForEnd) 
	#endif

	#ifndef GEODE_STATICS_testTime
		#define GEODE_STATICS_testTime
		GEODE_AS_STATIC_FUNCTION(testTime) 
	#endif

	#ifndef GEODE_STATICS_updateVerifyDamage
		#define GEODE_STATICS_updateVerifyDamage
		GEODE_AS_STATIC_FUNCTION(updateVerifyDamage) 
	#endif

	#ifndef GEODE_STATICS_updateAttemptTime
		#define GEODE_STATICS_updateAttemptTime
		GEODE_AS_STATIC_FUNCTION(updateAttemptTime) 
	#endif

	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif

	#ifndef GEODE_STATICS_playerTookDamage
		#define GEODE_STATICS_playerTookDamage
		GEODE_AS_STATIC_FUNCTION(playerTookDamage) 
	#endif

	#ifndef GEODE_STATICS_opacityForObject
		#define GEODE_STATICS_opacityForObject
		GEODE_AS_STATIC_FUNCTION(opacityForObject) 
	#endif

	#ifndef GEODE_STATICS_addToSpeedObjects
		#define GEODE_STATICS_addToSpeedObjects
		GEODE_AS_STATIC_FUNCTION(addToSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_objectsCollided
		#define GEODE_STATICS_objectsCollided
		GEODE_AS_STATIC_FUNCTION(objectsCollided) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_toggleGroupTriggered
		#define GEODE_STATICS_toggleGroupTriggered
		GEODE_AS_STATIC_FUNCTION(toggleGroupTriggered) 
	#endif

	#ifndef GEODE_STATICS_spawnGroup
		#define GEODE_STATICS_spawnGroup
		GEODE_AS_STATIC_FUNCTION(spawnGroup) 
	#endif

	#ifndef GEODE_STATICS_spawnObject
		#define GEODE_STATICS_spawnObject
		GEODE_AS_STATIC_FUNCTION(spawnObject) 
	#endif

	#ifndef GEODE_STATICS_activateEndTrigger
		#define GEODE_STATICS_activateEndTrigger
		GEODE_AS_STATIC_FUNCTION(activateEndTrigger) 
	#endif

	#ifndef GEODE_STATICS_activatePlatformerEndTrigger
		#define GEODE_STATICS_activatePlatformerEndTrigger
		GEODE_AS_STATIC_FUNCTION(activatePlatformerEndTrigger) 
	#endif

	#ifndef GEODE_STATICS_toggleGlitter
		#define GEODE_STATICS_toggleGlitter
		GEODE_AS_STATIC_FUNCTION(toggleGlitter) 
	#endif

	#ifndef GEODE_STATICS_destroyPlayer
		#define GEODE_STATICS_destroyPlayer
		GEODE_AS_STATIC_FUNCTION(destroyPlayer) 
	#endif

	#ifndef GEODE_STATICS_updateDebugDraw
		#define GEODE_STATICS_updateDebugDraw
		GEODE_AS_STATIC_FUNCTION(updateDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_addToSection
		#define GEODE_STATICS_addToSection
		GEODE_AS_STATIC_FUNCTION(addToSection) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_updateObjectSection
		#define GEODE_STATICS_updateObjectSection
		GEODE_AS_STATIC_FUNCTION(updateObjectSection) 
	#endif

	#ifndef GEODE_STATICS_updateDisabledObjectsLastPos
		#define GEODE_STATICS_updateDisabledObjectsLastPos
		GEODE_AS_STATIC_FUNCTION(updateDisabledObjectsLastPos) 
	#endif

	#ifndef GEODE_STATICS_toggleGroundVisibility
		#define GEODE_STATICS_toggleGroundVisibility
		GEODE_AS_STATIC_FUNCTION(toggleGroundVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleMGVisibility
		#define GEODE_STATICS_toggleMGVisibility
		GEODE_AS_STATIC_FUNCTION(toggleMGVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleHideAttempts
		#define GEODE_STATICS_toggleHideAttempts
		GEODE_AS_STATIC_FUNCTION(toggleHideAttempts) 
	#endif

	#ifndef GEODE_STATICS_updateScreenRotation
		#define GEODE_STATICS_updateScreenRotation
		GEODE_AS_STATIC_FUNCTION(updateScreenRotation) 
	#endif

	#ifndef GEODE_STATICS_reverseDirection
		#define GEODE_STATICS_reverseDirection
		GEODE_AS_STATIC_FUNCTION(reverseDirection) 
	#endif

	#ifndef GEODE_STATICS_rotateGameplay
		#define GEODE_STATICS_rotateGameplay
		GEODE_AS_STATIC_FUNCTION(rotateGameplay) 
	#endif

	#ifndef GEODE_STATICS_didRotateGameplay
		#define GEODE_STATICS_didRotateGameplay
		GEODE_AS_STATIC_FUNCTION(didRotateGameplay) 
	#endif

	#ifndef GEODE_STATICS_updateTimeWarp
		#define GEODE_STATICS_updateTimeWarp
		GEODE_AS_STATIC_FUNCTION(updateTimeWarp) 
	#endif

	#ifndef GEODE_STATICS_applyTimeWarp
		#define GEODE_STATICS_applyTimeWarp
		GEODE_AS_STATIC_FUNCTION(applyTimeWarp) 
	#endif

	#ifndef GEODE_STATICS_playGravityEffect
		#define GEODE_STATICS_playGravityEffect
		GEODE_AS_STATIC_FUNCTION(playGravityEffect) 
	#endif

	#ifndef GEODE_STATICS_manualUpdateObjectColors
		#define GEODE_STATICS_manualUpdateObjectColors
		GEODE_AS_STATIC_FUNCTION(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_STATICS_createCustomParticle
		#define GEODE_STATICS_createCustomParticle
		GEODE_AS_STATIC_FUNCTION(createCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_claimCustomParticle
		#define GEODE_STATICS_claimCustomParticle
		GEODE_AS_STATIC_FUNCTION(claimCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_unclaimCustomParticle
		#define GEODE_STATICS_unclaimCustomParticle
		GEODE_AS_STATIC_FUNCTION(unclaimCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_checkpointActivated
		#define GEODE_STATICS_checkpointActivated
		GEODE_AS_STATIC_FUNCTION(checkpointActivated) 
	#endif

	#ifndef GEODE_STATICS_flipArt
		#define GEODE_STATICS_flipArt
		GEODE_AS_STATIC_FUNCTION(flipArt) 
	#endif

	#ifndef GEODE_STATICS_addKeyframe
		#define GEODE_STATICS_addKeyframe
		GEODE_AS_STATIC_FUNCTION(addKeyframe) 
	#endif

	#ifndef GEODE_STATICS_updateTimeLabel
		#define GEODE_STATICS_updateTimeLabel
		GEODE_AS_STATIC_FUNCTION(updateTimeLabel) 
	#endif

	#ifndef GEODE_STATICS_checkSnapshot
		#define GEODE_STATICS_checkSnapshot
		GEODE_AS_STATIC_FUNCTION(checkSnapshot) 
	#endif

	#ifndef GEODE_STATICS_toggleProgressbar
		#define GEODE_STATICS_toggleProgressbar
		GEODE_AS_STATIC_FUNCTION(toggleProgressbar) 
	#endif

	#ifndef GEODE_STATICS_toggleInfoLabel
		#define GEODE_STATICS_toggleInfoLabel
		GEODE_AS_STATIC_FUNCTION(toggleInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_removeAllCheckpoints
		#define GEODE_STATICS_removeAllCheckpoints
		GEODE_AS_STATIC_FUNCTION(removeAllCheckpoints) 
	#endif

	#ifndef GEODE_STATICS_toggleMusicInPractice
		#define GEODE_STATICS_toggleMusicInPractice
		GEODE_AS_STATIC_FUNCTION(toggleMusicInPractice) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJBaseGameLayer> : ModifyBase<ModifyDerive<Der, GJBaseGameLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJBaseGameLayer>>;
		using ModifyBase<ModifyDerive<Der, GJBaseGameLayer>>::ModifyBase;
		using Base = GJBaseGameLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x18ef50, Membercall, GJBaseGameLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c4370, Membercall, GJBaseGameLayer, activateSFXEditTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c4230, Membercall, GJBaseGameLayer, activateSFXTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c3df0, Membercall, GJBaseGameLayer, activateSongTrigger, SongTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b74c0, Membercall, GJBaseGameLayer, addObjectCounter, LabelGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c4a20, Membercall, GJBaseGameLayer, addProximityVolumeEffect, int, int, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a96a0, Membercall, GJBaseGameLayer, addToGroupParents, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8c80, Membercall, GJBaseGameLayer, addToGroups, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bd900, Membercall, GJBaseGameLayer, applyLevelSettings, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c45b0, Membercall, GJBaseGameLayer, applySFXEditTrigger, int, int, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c18c0, Membercall, GJBaseGameLayer, applyShake, cocos2d::CCPoint&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9cb0, Membercall, GJBaseGameLayer, assignNewStickyGroups, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19e670, Membercall, GJBaseGameLayer, bumpPlayer, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1960b0, Membercall, GJBaseGameLayer, calculateColorGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19e470, Membercall, GJBaseGameLayer, canBeActivatedByPlayer, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b310, Membercall, GJBaseGameLayer, checkCollisions, PlayerObject*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1390, Membercall, GJBaseGameLayer, checkSpawnObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c5590, Membercall, GJBaseGameLayer, clearActivatedAudioTriggers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c1b0, Membercall, GJBaseGameLayer, collisionCheckObjects, PlayerObject*, gd::vector<GameObject*>*, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b2c10, Membercall, GJBaseGameLayer, convertToClosestDirection, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x193890, Membercall, GJBaseGameLayer, createBackground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x193c60, Membercall, GJBaseGameLayer, createGroundLayer, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x193bc0, Membercall, GJBaseGameLayer, createMiddleground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b6bd0, Membercall, GJBaseGameLayer, createNewKeyframeAnim, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c2fb0, Membercall, GJBaseGameLayer, createParticle, int, char const*, int, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x193550, Membercall, GJBaseGameLayer, createPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19f1b0, Membercall, GJBaseGameLayer, createPlayerCollisionBlock, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197090, Membercall, GJBaseGameLayer, createTextLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19cf50, Membercall, GJBaseGameLayer, destroyObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a5f0, Membercall, GJBaseGameLayer, flipGravity, PlayerObject*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c8980, Membercall, GJBaseGameLayer, flipObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b5bf0, Membercall, GJBaseGameLayer, gameEventTriggered, GJGameEvent, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a3fc0, Membercall, GJBaseGameLayer, generateSpawnRemap, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9f10, Membercall, GJBaseGameLayer, generateTargetGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b5060, Membercall, GJBaseGameLayer, generateVisibilityGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19e590, Membercall, GJBaseGameLayer, getBumpMod, PlayerObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196ee0, Membercall, GJBaseGameLayer, getCapacityString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8f50, Membercall, GJBaseGameLayer, getGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c4ea0, Membercall, GJBaseGameLayer, getMinDistance, cocos2d::CCPoint, cocos2d::CCArray*, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9010, Membercall, GJBaseGameLayer, getOptimizedGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c2d70, Membercall, GJBaseGameLayer, getParticleKey, int, char const*, int, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1985c0, Membercall, GJBaseGameLayer, getPortalTarget, TeleportPortalObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9070, Membercall, GJBaseGameLayer, getSingleGroupObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8fb0, Membercall, GJBaseGameLayer, getStaticGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19e770, Membercall, GJBaseGameLayer, gravBumpPlayer, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9b20, Membercall, GJBaseGameLayer, groupStickyObjects, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b69f0, Membercall, GJBaseGameLayer, handleButton, bool, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19d580, Membercall, GJBaseGameLayer, hasUniqueCoin, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x194b40, Membercall, GJBaseGameLayer, increaseBatchNodeCapacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bd7b0, Membercall, GJBaseGameLayer, loadLevelSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8d10, Membercall, GJBaseGameLayer, loadStartPosObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8e80, Membercall, GJBaseGameLayer, loadUpToPosition, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b1fa0, Membercall, GJBaseGameLayer, moveObjects, cocos2d::CCArray*, double, double, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b4cd0, Membercall, GJBaseGameLayer, optimizeMoveGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c7c20, Membercall, GJBaseGameLayer, orderSpawnObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bb600, Membercall, GJBaseGameLayer, pauseAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19eca0, Membercall, GJBaseGameLayer, playerTouchedRing, PlayerObject*, RingObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19e530, Membercall, GJBaseGameLayer, playerWasTouchingObject, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19da70, Membercall, GJBaseGameLayer, playExitDualEffect, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ab2f0, Membercall, GJBaseGameLayer, positionUIObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a0220, Membercall, GJBaseGameLayer, prepareSavePositionObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b97e0, Membercall, GJBaseGameLayer, preUpdateVisibility, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c5960, Membercall, GJBaseGameLayer, processActivatedAudioTriggers, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b2740, Membercall, GJBaseGameLayer, processDynamicObjectActions, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19d2b0, Membercall, GJBaseGameLayer, processItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b1b90, Membercall, GJBaseGameLayer, processMoveActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1afce0, Membercall, GJBaseGameLayer, processMoveActionsStep, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b2400, Membercall, GJBaseGameLayer, processPlayerFollowActions, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1be520, Membercall, GJBaseGameLayer, processQueuedAudioTriggers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b5b40, Membercall, GJBaseGameLayer, processQueuedButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c3fe0, Membercall, GJBaseGameLayer, processSFXObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b5af0, Membercall, GJBaseGameLayer, queueButton, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9e40, Membercall, GJBaseGameLayer, reAddToStickyGroup, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b87a0, Membercall, GJBaseGameLayer, refreshCounterLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b6d70, Membercall, GJBaseGameLayer, refreshKeyframeAnims, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196be0, Membercall, GJBaseGameLayer, regenerateEnterEasingBuffers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9600, Membercall, GJBaseGameLayer, removeFromGroupParents, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8da0, Membercall, GJBaseGameLayer, removeFromGroups, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9da0, Membercall, GJBaseGameLayer, removeFromStickyGroup, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9550, Membercall, GJBaseGameLayer, removeGroupParent, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b6c90, Membercall, GJBaseGameLayer, removeKeyframe, KeyframeGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1abea0, Membercall, GJBaseGameLayer, removeObjectFromSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c3d30, Membercall, GJBaseGameLayer, removeTemporaryParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196350, Membercall, GJBaseGameLayer, resetActiveEnterEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c22b0, Membercall, GJBaseGameLayer, resetCamera, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bdb10, Membercall, GJBaseGameLayer, resetLevelVariables, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf30, Membercall, GJBaseGameLayer, resetSongTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c7e40, Membercall, GJBaseGameLayer, resetSpawnChannelIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bb660, Membercall, GJBaseGameLayer, resumeAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9460, Membercall, GJBaseGameLayer, setGroupParent, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x199e90, Membercall, GJBaseGameLayer, setStartPosObject, StartPosObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x191440, Membercall, GJBaseGameLayer, setupLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x199ed0, Membercall, GJBaseGameLayer, setupLevelStart, LevelSettingsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bd3d0, Membercall, GJBaseGameLayer, setupReplay, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1be5d0, Membercall, GJBaseGameLayer, shakeCamera, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1934a0, Membercall, GJBaseGameLayer, shouldExitHackedLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a90f0, Membercall, GJBaseGameLayer, sortGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ac070, Membercall, GJBaseGameLayer, sortSectionVector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a99e0, Membercall, GJBaseGameLayer, sortStickyGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c2b80, Membercall, GJBaseGameLayer, spawnParticle, char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19d970, Membercall, GJBaseGameLayer, spawnPlayer2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a6d0, Membercall, GJBaseGameLayer, switchToFlyMode, PlayerObject*, GameObject*, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a800, Membercall, GJBaseGameLayer, switchToRobotMode, PlayerObject*, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a9c0, Membercall, GJBaseGameLayer, switchToRollMode, PlayerObject*, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a8e0, Membercall, GJBaseGameLayer, switchToSpiderMode, PlayerObject*, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bda80, Membercall, GJBaseGameLayer, syncBGTextures, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ca4d0, Membercall, GJBaseGameLayer, toggleAudioVisualizer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19d6a0, Membercall, GJBaseGameLayer, toggleDualMode, GameObject*, bool, PlayerObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c87e0, Membercall, GJBaseGameLayer, toggleFlipped, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9340, Membercall, GJBaseGameLayer, tryGetMainObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9380, Membercall, GJBaseGameLayer, tryGetObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9c10, Membercall, GJBaseGameLayer, ungroupStickyObjects, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ca410, Membercall, GJBaseGameLayer, updateAudioVisualizer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1be670, Membercall, GJBaseGameLayer, updateCamera, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19aaa0, Membercall, GJBaseGameLayer, updateCameraMode, EffectGameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a57c0, Membercall, GJBaseGameLayer, updateGradientLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c8700, Membercall, GJBaseGameLayer, updateGuideArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b6ce0, Membercall, GJBaseGameLayer, updateKeyframeOrder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x194ca0, Membercall, GJBaseGameLayer, updateLayerCapacity, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x194490, Membercall, GJBaseGameLayer, updateLevelColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bd960, Membercall, GJBaseGameLayer, updateMaxGameplayY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bcd60, Membercall, GJBaseGameLayer, updatePlatformerTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a7820, Membercall, GJBaseGameLayer, updateShaderLayer, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196060, Membercall, GJBaseGameLayer, updateSpecialGroupData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bc9f0, Membercall, GJBaseGameLayer, updateSpecialLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c1cb0, Membercall, GJBaseGameLayer, updateStaticCameraPos, cocos2d::CCPoint, bool, bool, bool, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c4ae0, Membercall, GJBaseGameLayer, volumeForProximityEffect, SFXTriggerInstance&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bb780, Thiscall, GJBaseGameLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190290, Thiscall, GJBaseGameLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c8ea0, Thiscall, GJBaseGameLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19fac0, Thiscall, GJBaseGameLayer, objectsCollided, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8760, Thiscall, GJBaseGameLayer, updateColor, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1986f0, Thiscall, GJBaseGameLayer, updateDebugDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ab800, Thiscall, GJBaseGameLayer, addToSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8ce0, Thiscall, GJBaseGameLayer, addToGroup, GameObject*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8e00, Thiscall, GJBaseGameLayer, removeFromGroup, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1acd40, Thiscall, GJBaseGameLayer, updateObjectSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b9450, Thiscall, GJBaseGameLayer, updateScreenRotation, float, bool, bool, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19efb0, Thiscall, GJBaseGameLayer, reverseDirection, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19f010, Thiscall, GJBaseGameLayer, rotateGameplay, RotateGameplayGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dfda0, Thiscall, GJBaseGameLayer, updateTimeWarp, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dfda0, Thiscall, GJBaseGameLayer, updateTimeWarp, GameObject*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b9770, Thiscall, GJBaseGameLayer, applyTimeWarp, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c8a50, Thiscall, GJBaseGameLayer, checkpointActivated, CheckpointGameObject*)
		}
	};
}
