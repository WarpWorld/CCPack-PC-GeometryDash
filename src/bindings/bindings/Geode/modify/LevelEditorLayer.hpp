#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelEditorLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activateTriggerEffect
		#define GEODE_STATICS_activateTriggerEffect
		GEODE_AS_STATIC_FUNCTION(activateTriggerEffect) 
	#endif

	#ifndef GEODE_STATICS_addDelayedSpawn
		#define GEODE_STATICS_addDelayedSpawn
		GEODE_AS_STATIC_FUNCTION(addDelayedSpawn) 
	#endif

	#ifndef GEODE_STATICS_addExclusionList
		#define GEODE_STATICS_addExclusionList
		GEODE_AS_STATIC_FUNCTION(addExclusionList) 
	#endif

	#ifndef GEODE_STATICS_addObjectFromVector
		#define GEODE_STATICS_addObjectFromVector
		GEODE_AS_STATIC_FUNCTION(addObjectFromVector) 
	#endif

	#ifndef GEODE_STATICS_addObjectsAtPosition
		#define GEODE_STATICS_addObjectsAtPosition
		GEODE_AS_STATIC_FUNCTION(addObjectsAtPosition) 
	#endif

	#ifndef GEODE_STATICS_addObjectsInRect
		#define GEODE_STATICS_addObjectsInRect
		GEODE_AS_STATIC_FUNCTION(addObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_addObjectToGroup
		#define GEODE_STATICS_addObjectToGroup
		GEODE_AS_STATIC_FUNCTION(addObjectToGroup) 
	#endif

	#ifndef GEODE_STATICS_addPlayer2Point
		#define GEODE_STATICS_addPlayer2Point
		GEODE_AS_STATIC_FUNCTION(addPlayer2Point) 
	#endif

	#ifndef GEODE_STATICS_addPlayerCollisionBlock
		#define GEODE_STATICS_addPlayerCollisionBlock
		GEODE_AS_STATIC_FUNCTION(addPlayerCollisionBlock) 
	#endif

	#ifndef GEODE_STATICS_addPlayerPoint
		#define GEODE_STATICS_addPlayerPoint
		GEODE_AS_STATIC_FUNCTION(addPlayerPoint) 
	#endif

	#ifndef GEODE_STATICS_addSpecial
		#define GEODE_STATICS_addSpecial
		GEODE_AS_STATIC_FUNCTION(addSpecial) 
	#endif

	#ifndef GEODE_STATICS_addToRedoList
		#define GEODE_STATICS_addToRedoList
		GEODE_AS_STATIC_FUNCTION(addToRedoList) 
	#endif

	#ifndef GEODE_STATICS_addTouchPoint
		#define GEODE_STATICS_addTouchPoint
		GEODE_AS_STATIC_FUNCTION(addTouchPoint) 
	#endif

	#ifndef GEODE_STATICS_addToUndoList
		#define GEODE_STATICS_addToUndoList
		GEODE_AS_STATIC_FUNCTION(addToUndoList) 
	#endif

	#ifndef GEODE_STATICS_applyAttributeState
		#define GEODE_STATICS_applyAttributeState
		GEODE_AS_STATIC_FUNCTION(applyAttributeState) 
	#endif

	#ifndef GEODE_STATICS_applyGroupState
		#define GEODE_STATICS_applyGroupState
		GEODE_AS_STATIC_FUNCTION(applyGroupState) 
	#endif

	#ifndef GEODE_STATICS_breakApartTextObject
		#define GEODE_STATICS_breakApartTextObject
		GEODE_AS_STATIC_FUNCTION(breakApartTextObject) 
	#endif

	#ifndef GEODE_STATICS_canPasteState
		#define GEODE_STATICS_canPasteState
		GEODE_AS_STATIC_FUNCTION(canPasteState) 
	#endif

	#ifndef GEODE_STATICS_clearPlayerPoints
		#define GEODE_STATICS_clearPlayerPoints
		GEODE_AS_STATIC_FUNCTION(clearPlayerPoints) 
	#endif

	#ifndef GEODE_STATICS_clearTouchPoints
		#define GEODE_STATICS_clearTouchPoints
		GEODE_AS_STATIC_FUNCTION(clearTouchPoints) 
	#endif

	#ifndef GEODE_STATICS_copyObjectState
		#define GEODE_STATICS_copyObjectState
		GEODE_AS_STATIC_FUNCTION(copyObjectState) 
	#endif

	#ifndef GEODE_STATICS_copyParticleState
		#define GEODE_STATICS_copyParticleState
		GEODE_AS_STATIC_FUNCTION(copyParticleState) 
	#endif

	#ifndef GEODE_STATICS_createObject
		#define GEODE_STATICS_createObject
		GEODE_AS_STATIC_FUNCTION(createObject) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFromSetup
		#define GEODE_STATICS_createObjectsFromSetup
		GEODE_AS_STATIC_FUNCTION(createObjectsFromSetup) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFromString
		#define GEODE_STATICS_createObjectsFromString
		GEODE_AS_STATIC_FUNCTION(createObjectsFromString) 
	#endif

	#ifndef GEODE_STATICS_dirtifyTriggers
		#define GEODE_STATICS_dirtifyTriggers
		GEODE_AS_STATIC_FUNCTION(dirtifyTriggers) 
	#endif

	#ifndef GEODE_STATICS_duplicateKeyframeAnimation
		#define GEODE_STATICS_duplicateKeyframeAnimation
		GEODE_AS_STATIC_FUNCTION(duplicateKeyframeAnimation) 
	#endif

	#ifndef GEODE_STATICS_fastUpdateDisabledGroups
		#define GEODE_STATICS_fastUpdateDisabledGroups
		GEODE_AS_STATIC_FUNCTION(fastUpdateDisabledGroups) 
	#endif

	#ifndef GEODE_STATICS_findGameObject
		#define GEODE_STATICS_findGameObject
		GEODE_AS_STATIC_FUNCTION(findGameObject) 
	#endif

	#ifndef GEODE_STATICS_findStartPosObject
		#define GEODE_STATICS_findStartPosObject
		GEODE_AS_STATIC_FUNCTION(findStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_forceShowSelectedObjects
		#define GEODE_STATICS_forceShowSelectedObjects
		GEODE_AS_STATIC_FUNCTION(forceShowSelectedObjects) 
	#endif

	#ifndef GEODE_STATICS_fullUpdateDisabledGroups
		#define GEODE_STATICS_fullUpdateDisabledGroups
		GEODE_AS_STATIC_FUNCTION(fullUpdateDisabledGroups) 
	#endif

	#ifndef GEODE_STATICS_getAllObjects
		#define GEODE_STATICS_getAllObjects
		GEODE_AS_STATIC_FUNCTION(getAllObjects) 
	#endif

	#ifndef GEODE_STATICS_getDelayedSpawnNode
		#define GEODE_STATICS_getDelayedSpawnNode
		GEODE_AS_STATIC_FUNCTION(getDelayedSpawnNode) 
	#endif

	#ifndef GEODE_STATICS_getGridPos
		#define GEODE_STATICS_getGridPos
		GEODE_AS_STATIC_FUNCTION(getGridPos) 
	#endif

	#ifndef GEODE_STATICS_getLastObjectX
		#define GEODE_STATICS_getLastObjectX
		GEODE_AS_STATIC_FUNCTION(getLastObjectX) 
	#endif

	#ifndef GEODE_STATICS_getLevelString
		#define GEODE_STATICS_getLevelString
		GEODE_AS_STATIC_FUNCTION(getLevelString) 
	#endif

	#ifndef GEODE_STATICS_getLockedLayers
		#define GEODE_STATICS_getLockedLayers
		GEODE_AS_STATIC_FUNCTION(getLockedLayers) 
	#endif

	#ifndef GEODE_STATICS_getNextColorChannel
		#define GEODE_STATICS_getNextColorChannel
		GEODE_AS_STATIC_FUNCTION(getNextColorChannel) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeAreaEffectID
		#define GEODE_STATICS_getNextFreeAreaEffectID
		GEODE_AS_STATIC_FUNCTION(getNextFreeAreaEffectID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeBlockID
		#define GEODE_STATICS_getNextFreeBlockID
		GEODE_AS_STATIC_FUNCTION(getNextFreeBlockID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeEditorLayer
		#define GEODE_STATICS_getNextFreeEditorLayer
		GEODE_AS_STATIC_FUNCTION(getNextFreeEditorLayer) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeEnterChannel
		#define GEODE_STATICS_getNextFreeEnterChannel
		GEODE_AS_STATIC_FUNCTION(getNextFreeEnterChannel) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeGradientID
		#define GEODE_STATICS_getNextFreeGradientID
		GEODE_AS_STATIC_FUNCTION(getNextFreeGradientID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeGroupID
		#define GEODE_STATICS_getNextFreeGroupID
		GEODE_AS_STATIC_FUNCTION(getNextFreeGroupID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeItemID
		#define GEODE_STATICS_getNextFreeItemID
		GEODE_AS_STATIC_FUNCTION(getNextFreeItemID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeOrderChannel
		#define GEODE_STATICS_getNextFreeOrderChannel
		GEODE_AS_STATIC_FUNCTION(getNextFreeOrderChannel) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeSFXGroupID
		#define GEODE_STATICS_getNextFreeSFXGroupID
		GEODE_AS_STATIC_FUNCTION(getNextFreeSFXGroupID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeSFXID
		#define GEODE_STATICS_getNextFreeSFXID
		GEODE_AS_STATIC_FUNCTION(getNextFreeSFXID) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect
		#define GEODE_STATICS_getObjectRect
		GEODE_AS_STATIC_FUNCTION(getObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getRelativeOffset
		#define GEODE_STATICS_getRelativeOffset
		GEODE_AS_STATIC_FUNCTION(getRelativeOffset) 
	#endif

	#ifndef GEODE_STATICS_getSavedEditorPosition
		#define GEODE_STATICS_getSavedEditorPosition
		GEODE_AS_STATIC_FUNCTION(getSavedEditorPosition) 
	#endif

	#ifndef GEODE_STATICS_getSavedEditorPositions
		#define GEODE_STATICS_getSavedEditorPositions
		GEODE_AS_STATIC_FUNCTION(getSavedEditorPositions) 
	#endif

	#ifndef GEODE_STATICS_getSectionCount
		#define GEODE_STATICS_getSectionCount
		GEODE_AS_STATIC_FUNCTION(getSectionCount) 
	#endif

	#ifndef GEODE_STATICS_getSelectedEditorOrder
		#define GEODE_STATICS_getSelectedEditorOrder
		GEODE_AS_STATIC_FUNCTION(getSelectedEditorOrder) 
	#endif

	#ifndef GEODE_STATICS_getSelectedEffectPos
		#define GEODE_STATICS_getSelectedEffectPos
		GEODE_AS_STATIC_FUNCTION(getSelectedEffectPos) 
	#endif

	#ifndef GEODE_STATICS_getSelectedOrderChannel
		#define GEODE_STATICS_getSelectedOrderChannel
		GEODE_AS_STATIC_FUNCTION(getSelectedOrderChannel) 
	#endif

	#ifndef GEODE_STATICS_getSFXIDs
		#define GEODE_STATICS_getSFXIDs
		GEODE_AS_STATIC_FUNCTION(getSFXIDs) 
	#endif

	#ifndef GEODE_STATICS_getSongIDs
		#define GEODE_STATICS_getSongIDs
		GEODE_AS_STATIC_FUNCTION(getSongIDs) 
	#endif

	#ifndef GEODE_STATICS_getTriggerGroup
		#define GEODE_STATICS_getTriggerGroup
		GEODE_AS_STATIC_FUNCTION(getTriggerGroup) 
	#endif

	#ifndef GEODE_STATICS_handleAction
		#define GEODE_STATICS_handleAction
		GEODE_AS_STATIC_FUNCTION(handleAction) 
	#endif

	#ifndef GEODE_STATICS_hasAction
		#define GEODE_STATICS_hasAction
		GEODE_AS_STATIC_FUNCTION(hasAction) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_objectAtPosition
		#define GEODE_STATICS_objectAtPosition
		GEODE_AS_STATIC_FUNCTION(objectAtPosition) 
	#endif

	#ifndef GEODE_STATICS_objectMoved
		#define GEODE_STATICS_objectMoved
		GEODE_AS_STATIC_FUNCTION(objectMoved) 
	#endif

	#ifndef GEODE_STATICS_objectsAtPosition
		#define GEODE_STATICS_objectsAtPosition
		GEODE_AS_STATIC_FUNCTION(objectsAtPosition) 
	#endif

	#ifndef GEODE_STATICS_objectsInRect
		#define GEODE_STATICS_objectsInRect
		GEODE_AS_STATIC_FUNCTION(objectsInRect) 
	#endif

	#ifndef GEODE_STATICS_onPausePlaytest
		#define GEODE_STATICS_onPausePlaytest
		GEODE_AS_STATIC_FUNCTION(onPausePlaytest) 
	#endif

	#ifndef GEODE_STATICS_onPlaytest
		#define GEODE_STATICS_onPlaytest
		GEODE_AS_STATIC_FUNCTION(onPlaytest) 
	#endif

	#ifndef GEODE_STATICS_onResumePlaytest
		#define GEODE_STATICS_onResumePlaytest
		GEODE_AS_STATIC_FUNCTION(onResumePlaytest) 
	#endif

	#ifndef GEODE_STATICS_onStopPlaytest
		#define GEODE_STATICS_onStopPlaytest
		GEODE_AS_STATIC_FUNCTION(onStopPlaytest) 
	#endif

	#ifndef GEODE_STATICS_pasteAttributeState
		#define GEODE_STATICS_pasteAttributeState
		GEODE_AS_STATIC_FUNCTION(pasteAttributeState) 
	#endif

	#ifndef GEODE_STATICS_pasteColorState
		#define GEODE_STATICS_pasteColorState
		GEODE_AS_STATIC_FUNCTION(pasteColorState) 
	#endif

	#ifndef GEODE_STATICS_pasteGroupState
		#define GEODE_STATICS_pasteGroupState
		GEODE_AS_STATIC_FUNCTION(pasteGroupState) 
	#endif

	#ifndef GEODE_STATICS_pasteParticleState
		#define GEODE_STATICS_pasteParticleState
		GEODE_AS_STATIC_FUNCTION(pasteParticleState) 
	#endif

	#ifndef GEODE_STATICS_processLoadedMoveActions
		#define GEODE_STATICS_processLoadedMoveActions
		GEODE_AS_STATIC_FUNCTION(processLoadedMoveActions) 
	#endif

	#ifndef GEODE_STATICS_quickUpdateAllPositions
		#define GEODE_STATICS_quickUpdateAllPositions
		GEODE_AS_STATIC_FUNCTION(quickUpdateAllPositions) 
	#endif

	#ifndef GEODE_STATICS_recreateGroups
		#define GEODE_STATICS_recreateGroups
		GEODE_AS_STATIC_FUNCTION(recreateGroups) 
	#endif

	#ifndef GEODE_STATICS_redoLastAction
		#define GEODE_STATICS_redoLastAction
		GEODE_AS_STATIC_FUNCTION(redoLastAction) 
	#endif

	#ifndef GEODE_STATICS_refreshSpecial
		#define GEODE_STATICS_refreshSpecial
		GEODE_AS_STATIC_FUNCTION(refreshSpecial) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjectsOfType
		#define GEODE_STATICS_removeAllObjectsOfType
		GEODE_AS_STATIC_FUNCTION(removeAllObjectsOfType) 
	#endif

	#ifndef GEODE_STATICS_removeObject
		#define GEODE_STATICS_removeObject
		GEODE_AS_STATIC_FUNCTION(removeObject) 
	#endif

	#ifndef GEODE_STATICS_removePlayerCollisionBlock
		#define GEODE_STATICS_removePlayerCollisionBlock
		GEODE_AS_STATIC_FUNCTION(removePlayerCollisionBlock) 
	#endif

	#ifndef GEODE_STATICS_removeSpecial
		#define GEODE_STATICS_removeSpecial
		GEODE_AS_STATIC_FUNCTION(removeSpecial) 
	#endif

	#ifndef GEODE_STATICS_resetDelayedSpawnNodes
		#define GEODE_STATICS_resetDelayedSpawnNodes
		GEODE_AS_STATIC_FUNCTION(resetDelayedSpawnNodes) 
	#endif

	#ifndef GEODE_STATICS_resetEffectTriggerOptim
		#define GEODE_STATICS_resetEffectTriggerOptim
		GEODE_AS_STATIC_FUNCTION(resetEffectTriggerOptim) 
	#endif

	#ifndef GEODE_STATICS_resetMovingObjects
		#define GEODE_STATICS_resetMovingObjects
		GEODE_AS_STATIC_FUNCTION(resetMovingObjects) 
	#endif

	#ifndef GEODE_STATICS_resetObjectVector
		#define GEODE_STATICS_resetObjectVector
		GEODE_AS_STATIC_FUNCTION(resetObjectVector) 
	#endif

	#ifndef GEODE_STATICS_resetPlayback
		#define GEODE_STATICS_resetPlayback
		GEODE_AS_STATIC_FUNCTION(resetPlayback) 
	#endif

	#ifndef GEODE_STATICS_resetToggledGroups
		#define GEODE_STATICS_resetToggledGroups
		GEODE_AS_STATIC_FUNCTION(resetToggledGroups) 
	#endif

	#ifndef GEODE_STATICS_resetToggledGroupsAndObjects
		#define GEODE_STATICS_resetToggledGroupsAndObjects
		GEODE_AS_STATIC_FUNCTION(resetToggledGroupsAndObjects) 
	#endif

	#ifndef GEODE_STATICS_resetUnusedColorChannels
		#define GEODE_STATICS_resetUnusedColorChannels
		GEODE_AS_STATIC_FUNCTION(resetUnusedColorChannels) 
	#endif

	#ifndef GEODE_STATICS_reverseKeyframeAnimationOrder
		#define GEODE_STATICS_reverseKeyframeAnimationOrder
		GEODE_AS_STATIC_FUNCTION(reverseKeyframeAnimationOrder) 
	#endif

	#ifndef GEODE_STATICS_reverseObjectChanged
		#define GEODE_STATICS_reverseObjectChanged
		GEODE_AS_STATIC_FUNCTION(reverseObjectChanged) 
	#endif

	#ifndef GEODE_STATICS_rotationForSlopeNearObject
		#define GEODE_STATICS_rotationForSlopeNearObject
		GEODE_AS_STATIC_FUNCTION(rotationForSlopeNearObject) 
	#endif

	#ifndef GEODE_STATICS_runColorEffect
		#define GEODE_STATICS_runColorEffect
		GEODE_AS_STATIC_FUNCTION(runColorEffect) 
	#endif

	#ifndef GEODE_STATICS_saveEditorPosition
		#define GEODE_STATICS_saveEditorPosition
		GEODE_AS_STATIC_FUNCTION(saveEditorPosition) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_setObjectCount
		#define GEODE_STATICS_setObjectCount
		GEODE_AS_STATIC_FUNCTION(setObjectCount) 
	#endif

	#ifndef GEODE_STATICS_shouldBlend
		#define GEODE_STATICS_shouldBlend
		GEODE_AS_STATIC_FUNCTION(shouldBlend) 
	#endif

	#ifndef GEODE_STATICS_sortBatchnodeChildren
		#define GEODE_STATICS_sortBatchnodeChildren
		GEODE_AS_STATIC_FUNCTION(sortBatchnodeChildren) 
	#endif

	#ifndef GEODE_STATICS_spawnGroupPreview
		#define GEODE_STATICS_spawnGroupPreview
		GEODE_AS_STATIC_FUNCTION(spawnGroupPreview) 
	#endif

	#ifndef GEODE_STATICS_stopPlayback
		#define GEODE_STATICS_stopPlayback
		GEODE_AS_STATIC_FUNCTION(stopPlayback) 
	#endif

	#ifndef GEODE_STATICS_stopTriggersInGroup
		#define GEODE_STATICS_stopTriggersInGroup
		GEODE_AS_STATIC_FUNCTION(stopTriggersInGroup) 
	#endif

	#ifndef GEODE_STATICS_timeObjectChanged
		#define GEODE_STATICS_timeObjectChanged
		GEODE_AS_STATIC_FUNCTION(timeObjectChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleBackground
		#define GEODE_STATICS_toggleBackground
		GEODE_AS_STATIC_FUNCTION(toggleBackground) 
	#endif

	#ifndef GEODE_STATICS_toggleGrid
		#define GEODE_STATICS_toggleGrid
		GEODE_AS_STATIC_FUNCTION(toggleGrid) 
	#endif

	#ifndef GEODE_STATICS_toggleGround
		#define GEODE_STATICS_toggleGround
		GEODE_AS_STATIC_FUNCTION(toggleGround) 
	#endif

	#ifndef GEODE_STATICS_toggleGroupPreview
		#define GEODE_STATICS_toggleGroupPreview
		GEODE_AS_STATIC_FUNCTION(toggleGroupPreview) 
	#endif

	#ifndef GEODE_STATICS_toggleLockActiveLayer
		#define GEODE_STATICS_toggleLockActiveLayer
		GEODE_AS_STATIC_FUNCTION(toggleLockActiveLayer) 
	#endif

	#ifndef GEODE_STATICS_transferDefaultColors
		#define GEODE_STATICS_transferDefaultColors
		GEODE_AS_STATIC_FUNCTION(transferDefaultColors) 
	#endif

	#ifndef GEODE_STATICS_triggerFollowCommand
		#define GEODE_STATICS_triggerFollowCommand
		GEODE_AS_STATIC_FUNCTION(triggerFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerPlayerFollowCommand
		#define GEODE_STATICS_triggerPlayerFollowCommand
		GEODE_AS_STATIC_FUNCTION(triggerPlayerFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerRotateCommand
		#define GEODE_STATICS_triggerRotateCommand
		GEODE_AS_STATIC_FUNCTION(triggerRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateSpeedObject
		#define GEODE_STATICS_tryUpdateSpeedObject
		GEODE_AS_STATIC_FUNCTION(tryUpdateSpeedObject) 
	#endif

	#ifndef GEODE_STATICS_typeExistsAtPosition
		#define GEODE_STATICS_typeExistsAtPosition
		GEODE_AS_STATIC_FUNCTION(typeExistsAtPosition) 
	#endif

	#ifndef GEODE_STATICS_undoLastAction
		#define GEODE_STATICS_undoLastAction
		GEODE_AS_STATIC_FUNCTION(undoLastAction) 
	#endif

	#ifndef GEODE_STATICS_unlockAllLayers
		#define GEODE_STATICS_unlockAllLayers
		GEODE_AS_STATIC_FUNCTION(unlockAllLayers) 
	#endif

	#ifndef GEODE_STATICS_updateAnimateOnTriggerObjects
		#define GEODE_STATICS_updateAnimateOnTriggerObjects
		GEODE_AS_STATIC_FUNCTION(updateAnimateOnTriggerObjects) 
	#endif

	#ifndef GEODE_STATICS_updateArt
		#define GEODE_STATICS_updateArt
		GEODE_AS_STATIC_FUNCTION(updateArt) 
	#endif

	#ifndef GEODE_STATICS_updateBlendValues
		#define GEODE_STATICS_updateBlendValues
		GEODE_AS_STATIC_FUNCTION(updateBlendValues) 
	#endif

	#ifndef GEODE_STATICS_updateEditor
		#define GEODE_STATICS_updateEditor
		GEODE_AS_STATIC_FUNCTION(updateEditor) 
	#endif

	#ifndef GEODE_STATICS_updateEditorMode
		#define GEODE_STATICS_updateEditorMode
		GEODE_AS_STATIC_FUNCTION(updateEditorMode) 
	#endif

	#ifndef GEODE_STATICS_updateGameObjects
		#define GEODE_STATICS_updateGameObjects
		GEODE_AS_STATIC_FUNCTION(updateGameObjects) 
	#endif

	#ifndef GEODE_STATICS_updateGridLayer
		#define GEODE_STATICS_updateGridLayer
		GEODE_AS_STATIC_FUNCTION(updateGridLayer) 
	#endif

	#ifndef GEODE_STATICS_updateGridLayerParent
		#define GEODE_STATICS_updateGridLayerParent
		GEODE_AS_STATIC_FUNCTION(updateGridLayerParent) 
	#endif

	#ifndef GEODE_STATICS_updateKeyframeObjects
		#define GEODE_STATICS_updateKeyframeObjects
		GEODE_AS_STATIC_FUNCTION(updateKeyframeObjects) 
	#endif

	#ifndef GEODE_STATICS_updateKeyframeVisibility
		#define GEODE_STATICS_updateKeyframeVisibility
		GEODE_AS_STATIC_FUNCTION(updateKeyframeVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateLevelFont
		#define GEODE_STATICS_updateLevelFont
		GEODE_AS_STATIC_FUNCTION(updateLevelFont) 
	#endif

	#ifndef GEODE_STATICS_updateObjectColors
		#define GEODE_STATICS_updateObjectColors
		GEODE_AS_STATIC_FUNCTION(updateObjectColors) 
	#endif

	#ifndef GEODE_STATICS_updateObjectLabel
		#define GEODE_STATICS_updateObjectLabel
		GEODE_AS_STATIC_FUNCTION(updateObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_updateOptions
		#define GEODE_STATICS_updateOptions
		GEODE_AS_STATIC_FUNCTION(updateOptions) 
	#endif

	#ifndef GEODE_STATICS_updatePreviewAnim
		#define GEODE_STATICS_updatePreviewAnim
		GEODE_AS_STATIC_FUNCTION(updatePreviewAnim) 
	#endif

	#ifndef GEODE_STATICS_updatePreviewParticle
		#define GEODE_STATICS_updatePreviewParticle
		GEODE_AS_STATIC_FUNCTION(updatePreviewParticle) 
	#endif

	#ifndef GEODE_STATICS_updatePreviewParticles
		#define GEODE_STATICS_updatePreviewParticles
		GEODE_AS_STATIC_FUNCTION(updatePreviewParticles) 
	#endif

	#ifndef GEODE_STATICS_updateToggledGroups
		#define GEODE_STATICS_updateToggledGroups
		GEODE_AS_STATIC_FUNCTION(updateToggledGroups) 
	#endif

	#ifndef GEODE_STATICS_validGroup
		#define GEODE_STATICS_validGroup
		GEODE_AS_STATIC_FUNCTION(validGroup) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_postUpdate
		#define GEODE_STATICS_postUpdate
		GEODE_AS_STATIC_FUNCTION(postUpdate) 
	#endif

	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif

	#ifndef GEODE_STATICS_playerTookDamage
		#define GEODE_STATICS_playerTookDamage
		GEODE_AS_STATIC_FUNCTION(playerTookDamage) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_updateDebugDraw
		#define GEODE_STATICS_updateDebugDraw
		GEODE_AS_STATIC_FUNCTION(updateDebugDraw) 
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

	#ifndef GEODE_STATICS_timeForPos
		#define GEODE_STATICS_timeForPos
		GEODE_AS_STATIC_FUNCTION(timeForPos) 
	#endif

	#ifndef GEODE_STATICS_posForTime
		#define GEODE_STATICS_posForTime
		GEODE_AS_STATIC_FUNCTION(posForTime) 
	#endif

	#ifndef GEODE_STATICS_resetSPTriggered
		#define GEODE_STATICS_resetSPTriggered
		GEODE_AS_STATIC_FUNCTION(resetSPTriggered) 
	#endif

	#ifndef GEODE_STATICS_didRotateGameplay
		#define GEODE_STATICS_didRotateGameplay
		GEODE_AS_STATIC_FUNCTION(didRotateGameplay) 
	#endif

	#ifndef GEODE_STATICS_manualUpdateObjectColors
		#define GEODE_STATICS_manualUpdateObjectColors
		GEODE_AS_STATIC_FUNCTION(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_STATICS_claimCustomParticle
		#define GEODE_STATICS_claimCustomParticle
		GEODE_AS_STATIC_FUNCTION(claimCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_unclaimCustomParticle
		#define GEODE_STATICS_unclaimCustomParticle
		GEODE_AS_STATIC_FUNCTION(unclaimCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_activatedAudioTrigger
		#define GEODE_STATICS_activatedAudioTrigger
		GEODE_AS_STATIC_FUNCTION(activatedAudioTrigger) 
	#endif

	#ifndef GEODE_STATICS_checkpointActivated
		#define GEODE_STATICS_checkpointActivated
		GEODE_AS_STATIC_FUNCTION(checkpointActivated) 
	#endif

	#ifndef GEODE_STATICS_addKeyframe
		#define GEODE_STATICS_addKeyframe
		GEODE_AS_STATIC_FUNCTION(addKeyframe) 
	#endif

	#ifndef GEODE_STATICS_levelSettingsUpdated
		#define GEODE_STATICS_levelSettingsUpdated
		GEODE_AS_STATIC_FUNCTION(levelSettingsUpdated) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelEditorLayer> : ModifyBase<ModifyDerive<Der, LevelEditorLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelEditorLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelEditorLayer>>::ModifyBase;
		using Base = LevelEditorLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2399c0, Optcall, LevelEditorLayer, create, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23ec50, Membercall, LevelEditorLayer, addSpecial, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2509d0, Membercall, LevelEditorLayer, addTouchPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2477f0, Membercall, LevelEditorLayer, copyObjectState, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23bf10, Membercall, LevelEditorLayer, createObject, int, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23b330, Membercall, LevelEditorLayer, createObjectsFromSetup, gd::string&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23b970, Membercall, LevelEditorLayer, createObjectsFromString, gd::string const&, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23d260, Membercall, LevelEditorLayer, findGameObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23db70, Membercall, LevelEditorLayer, getLevelString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241950, Membercall, LevelEditorLayer, getNextFreeEditorLayer, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241530, Membercall, LevelEditorLayer, getNextFreeGroupID, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241870, Membercall, LevelEditorLayer, getNextFreeOrderChannel, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23cb10, Membercall, LevelEditorLayer, getObjectRect, GameObject*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23d670, Membercall, LevelEditorLayer, handleAction, bool, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x239a70, Membercall, LevelEditorLayer, init, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23c610, Membercall, LevelEditorLayer, objectAtPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23f080, Membercall, LevelEditorLayer, objectMoved, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x246c70, Membercall, LevelEditorLayer, onPausePlaytest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2463a0, Membercall, LevelEditorLayer, onPlaytest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x246d60, Membercall, LevelEditorLayer, onResumePlaytest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x247940, Membercall, LevelEditorLayer, pasteAttributeState, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2478d0, Membercall, LevelEditorLayer, pasteColorState, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23d360, Membercall, LevelEditorLayer, removeAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23d2b0, Membercall, LevelEditorLayer, removeObject, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23f2f0, Membercall, LevelEditorLayer, removeSpecial, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x239980, Optcall, LevelEditorLayer, scene, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23e6a0, Membercall, LevelEditorLayer, toggleLockActiveLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23f600, Membercall, LevelEditorLayer, tryUpdateSpeedObject, EffectGameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23c100, Membercall, LevelEditorLayer, typeExistsAtPosition, int, cocos2d::CCPoint, bool, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2423a0, Membercall, LevelEditorLayer, updateEditorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2458c0, Membercall, LevelEditorLayer, updateLevelFont, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23e710, Optcall, LevelEditorLayer, updateObjectLabel, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23afa0, Membercall, LevelEditorLayer, updateOptions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x247c90, Membercall, LevelEditorLayer, updatePreviewAnim, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x247ec0, Membercall, LevelEditorLayer, updatePreviewParticle, ParticleGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x247e20, Membercall, LevelEditorLayer, updatePreviewParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2475d0, Thiscall, LevelEditorLayer, postUpdate, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23fa90, Thiscall, LevelEditorLayer, updateVisibility, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2460b0, Thiscall, LevelEditorLayer, didRotateGameplay, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23b2b0, Thiscall, LevelEditorLayer, levelSettingsUpdated, )
		}
	};
}
