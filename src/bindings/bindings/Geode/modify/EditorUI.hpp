#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorUI.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activateRotationControl
		#define GEODE_STATICS_activateRotationControl
		GEODE_AS_STATIC_FUNCTION(activateRotationControl) 
	#endif

	#ifndef GEODE_STATICS_activateScaleControl
		#define GEODE_STATICS_activateScaleControl
		GEODE_AS_STATIC_FUNCTION(activateScaleControl) 
	#endif

	#ifndef GEODE_STATICS_activateTransformControl
		#define GEODE_STATICS_activateTransformControl
		GEODE_AS_STATIC_FUNCTION(activateTransformControl) 
	#endif

	#ifndef GEODE_STATICS_addObjectsToSmartTemplate
		#define GEODE_STATICS_addObjectsToSmartTemplate
		GEODE_AS_STATIC_FUNCTION(addObjectsToSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_addSnapPosition
		#define GEODE_STATICS_addSnapPosition
		GEODE_AS_STATIC_FUNCTION(addSnapPosition) 
	#endif

	#ifndef GEODE_STATICS_alignObjects
		#define GEODE_STATICS_alignObjects
		GEODE_AS_STATIC_FUNCTION(alignObjects) 
	#endif

	#ifndef GEODE_STATICS_applyOffset
		#define GEODE_STATICS_applyOffset
		GEODE_AS_STATIC_FUNCTION(applyOffset) 
	#endif

	#ifndef GEODE_STATICS_applySpecialOffset
		#define GEODE_STATICS_applySpecialOffset
		GEODE_AS_STATIC_FUNCTION(applySpecialOffset) 
	#endif

	#ifndef GEODE_STATICS_arrayContainsClass
		#define GEODE_STATICS_arrayContainsClass
		GEODE_AS_STATIC_FUNCTION(arrayContainsClass) 
	#endif

	#ifndef GEODE_STATICS_assignNewGroups
		#define GEODE_STATICS_assignNewGroups
		GEODE_AS_STATIC_FUNCTION(assignNewGroups) 
	#endif

	#ifndef GEODE_STATICS_canAllowMultiActivate
		#define GEODE_STATICS_canAllowMultiActivate
		GEODE_AS_STATIC_FUNCTION(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_canSelectObject
		#define GEODE_STATICS_canSelectObject
		GEODE_AS_STATIC_FUNCTION(canSelectObject) 
	#endif

	#ifndef GEODE_STATICS_centerCameraOnObject
		#define GEODE_STATICS_centerCameraOnObject
		GEODE_AS_STATIC_FUNCTION(centerCameraOnObject) 
	#endif

	#ifndef GEODE_STATICS_changeSelectedObjects
		#define GEODE_STATICS_changeSelectedObjects
		GEODE_AS_STATIC_FUNCTION(changeSelectedObjects) 
	#endif

	#ifndef GEODE_STATICS_checkDiffAfterTransformAnchor
		#define GEODE_STATICS_checkDiffAfterTransformAnchor
		GEODE_AS_STATIC_FUNCTION(checkDiffAfterTransformAnchor) 
	#endif

	#ifndef GEODE_STATICS_checkLiveColorSelect
		#define GEODE_STATICS_checkLiveColorSelect
		GEODE_AS_STATIC_FUNCTION(checkLiveColorSelect) 
	#endif

	#ifndef GEODE_STATICS_clickOnPosition
		#define GEODE_STATICS_clickOnPosition
		GEODE_AS_STATIC_FUNCTION(clickOnPosition) 
	#endif

	#ifndef GEODE_STATICS_closeLiveColorSelect
		#define GEODE_STATICS_closeLiveColorSelect
		GEODE_AS_STATIC_FUNCTION(closeLiveColorSelect) 
	#endif

	#ifndef GEODE_STATICS_closeLiveHSVSelect
		#define GEODE_STATICS_closeLiveHSVSelect
		GEODE_AS_STATIC_FUNCTION(closeLiveHSVSelect) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_constrainGameLayerPosition
		#define GEODE_STATICS_constrainGameLayerPosition
		GEODE_AS_STATIC_FUNCTION(constrainGameLayerPosition) 
	#endif

	#ifndef GEODE_STATICS_convertKeyBasedOnNeighbors
		#define GEODE_STATICS_convertKeyBasedOnNeighbors
		GEODE_AS_STATIC_FUNCTION(convertKeyBasedOnNeighbors) 
	#endif

	#ifndef GEODE_STATICS_convertToBaseKey
		#define GEODE_STATICS_convertToBaseKey
		GEODE_AS_STATIC_FUNCTION(convertToBaseKey) 
	#endif

	#ifndef GEODE_STATICS_copyObjects
		#define GEODE_STATICS_copyObjects
		GEODE_AS_STATIC_FUNCTION(copyObjects) 
	#endif

	#ifndef GEODE_STATICS_copyObjectsDetailed
		#define GEODE_STATICS_copyObjectsDetailed
		GEODE_AS_STATIC_FUNCTION(copyObjectsDetailed) 
	#endif

	#ifndef GEODE_STATICS_createCustomItems
		#define GEODE_STATICS_createCustomItems
		GEODE_AS_STATIC_FUNCTION(createCustomItems) 
	#endif

	#ifndef GEODE_STATICS_createEdgeForObject
		#define GEODE_STATICS_createEdgeForObject
		GEODE_AS_STATIC_FUNCTION(createEdgeForObject) 
	#endif

	#ifndef GEODE_STATICS_createExtraObject
		#define GEODE_STATICS_createExtraObject
		GEODE_AS_STATIC_FUNCTION(createExtraObject) 
	#endif

	#ifndef GEODE_STATICS_createExtras
		#define GEODE_STATICS_createExtras
		GEODE_AS_STATIC_FUNCTION(createExtras) 
	#endif

	#ifndef GEODE_STATICS_createExtrasForObject
		#define GEODE_STATICS_createExtrasForObject
		GEODE_AS_STATIC_FUNCTION(createExtrasForObject) 
	#endif

	#ifndef GEODE_STATICS_createGlow
		#define GEODE_STATICS_createGlow
		GEODE_AS_STATIC_FUNCTION(createGlow) 
	#endif

	#ifndef GEODE_STATICS_createLoop
		#define GEODE_STATICS_createLoop
		GEODE_AS_STATIC_FUNCTION(createLoop) 
	#endif

	#ifndef GEODE_STATICS_createMoveMenu
		#define GEODE_STATICS_createMoveMenu
		GEODE_AS_STATIC_FUNCTION(createMoveMenu) 
	#endif

	#ifndef GEODE_STATICS_createNewKeyframeAnim
		#define GEODE_STATICS_createNewKeyframeAnim
		GEODE_AS_STATIC_FUNCTION(createNewKeyframeAnim) 
	#endif

	#ifndef GEODE_STATICS_createObject
		#define GEODE_STATICS_createObject
		GEODE_AS_STATIC_FUNCTION(createObject) 
	#endif

	#ifndef GEODE_STATICS_createOutlines
		#define GEODE_STATICS_createOutlines
		GEODE_AS_STATIC_FUNCTION(createOutlines) 
	#endif

	#ifndef GEODE_STATICS_createPrefab
		#define GEODE_STATICS_createPrefab
		GEODE_AS_STATIC_FUNCTION(createPrefab) 
	#endif

	#ifndef GEODE_STATICS_createRockBases
		#define GEODE_STATICS_createRockBases
		GEODE_AS_STATIC_FUNCTION(createRockBases) 
	#endif

	#ifndef GEODE_STATICS_createRockEdges
		#define GEODE_STATICS_createRockEdges
		GEODE_AS_STATIC_FUNCTION(createRockEdges) 
	#endif

	#ifndef GEODE_STATICS_createSmartObjectsFromTemplate
		#define GEODE_STATICS_createSmartObjectsFromTemplate
		GEODE_AS_STATIC_FUNCTION(createSmartObjectsFromTemplate) 
	#endif

	#ifndef GEODE_STATICS_createSmartObjectsFromType
		#define GEODE_STATICS_createSmartObjectsFromType
		GEODE_AS_STATIC_FUNCTION(createSmartObjectsFromType) 
	#endif

	#ifndef GEODE_STATICS_createUndoObject
		#define GEODE_STATICS_createUndoObject
		GEODE_AS_STATIC_FUNCTION(createUndoObject) 
	#endif

	#ifndef GEODE_STATICS_createUndoSelectObject
		#define GEODE_STATICS_createUndoSelectObject
		GEODE_AS_STATIC_FUNCTION(createUndoSelectObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateRotationControl
		#define GEODE_STATICS_deactivateRotationControl
		GEODE_AS_STATIC_FUNCTION(deactivateRotationControl) 
	#endif

	#ifndef GEODE_STATICS_deactivateScaleControl
		#define GEODE_STATICS_deactivateScaleControl
		GEODE_AS_STATIC_FUNCTION(deactivateScaleControl) 
	#endif

	#ifndef GEODE_STATICS_deactivateTransformControl
		#define GEODE_STATICS_deactivateTransformControl
		GEODE_AS_STATIC_FUNCTION(deactivateTransformControl) 
	#endif

	#ifndef GEODE_STATICS_deleteObject
		#define GEODE_STATICS_deleteObject
		GEODE_AS_STATIC_FUNCTION(deleteObject) 
	#endif

	#ifndef GEODE_STATICS_deleteSmartBlocksFromObjects
		#define GEODE_STATICS_deleteSmartBlocksFromObjects
		GEODE_AS_STATIC_FUNCTION(deleteSmartBlocksFromObjects) 
	#endif

	#ifndef GEODE_STATICS_deleteTypeFromObjects
		#define GEODE_STATICS_deleteTypeFromObjects
		GEODE_AS_STATIC_FUNCTION(deleteTypeFromObjects) 
	#endif

	#ifndef GEODE_STATICS_deselectAll
		#define GEODE_STATICS_deselectAll
		GEODE_AS_STATIC_FUNCTION(deselectAll) 
	#endif

	#ifndef GEODE_STATICS_deselectObject
		#define GEODE_STATICS_deselectObject
		GEODE_AS_STATIC_FUNCTION(deselectObject) 
	#endif

	#ifndef GEODE_STATICS_deselectObjectsColor
		#define GEODE_STATICS_deselectObjectsColor
		GEODE_AS_STATIC_FUNCTION(deselectObjectsColor) 
	#endif

	#ifndef GEODE_STATICS_deselectTargetPortals
		#define GEODE_STATICS_deselectTargetPortals
		GEODE_AS_STATIC_FUNCTION(deselectTargetPortals) 
	#endif

	#ifndef GEODE_STATICS_disableButton
		#define GEODE_STATICS_disableButton
		GEODE_AS_STATIC_FUNCTION(disableButton) 
	#endif

	#ifndef GEODE_STATICS_doCopyObjects
		#define GEODE_STATICS_doCopyObjects
		GEODE_AS_STATIC_FUNCTION(doCopyObjects) 
	#endif

	#ifndef GEODE_STATICS_doPasteInPlace
		#define GEODE_STATICS_doPasteInPlace
		GEODE_AS_STATIC_FUNCTION(doPasteInPlace) 
	#endif

	#ifndef GEODE_STATICS_doPasteObjects
		#define GEODE_STATICS_doPasteObjects
		GEODE_AS_STATIC_FUNCTION(doPasteObjects) 
	#endif

	#ifndef GEODE_STATICS_dynamicGroupUpdate
		#define GEODE_STATICS_dynamicGroupUpdate
		GEODE_AS_STATIC_FUNCTION(dynamicGroupUpdate) 
	#endif

	#ifndef GEODE_STATICS_edgeForObject
		#define GEODE_STATICS_edgeForObject
		GEODE_AS_STATIC_FUNCTION(edgeForObject) 
	#endif

	#ifndef GEODE_STATICS_editButton2Usable
		#define GEODE_STATICS_editButton2Usable
		GEODE_AS_STATIC_FUNCTION(editButton2Usable) 
	#endif

	#ifndef GEODE_STATICS_editButtonUsable
		#define GEODE_STATICS_editButtonUsable
		GEODE_AS_STATIC_FUNCTION(editButtonUsable) 
	#endif

	#ifndef GEODE_STATICS_editColor
		#define GEODE_STATICS_editColor
		GEODE_AS_STATIC_FUNCTION(editColor) 
	#endif

	#ifndef GEODE_STATICS_editColorButtonUsable
		#define GEODE_STATICS_editColorButtonUsable
		GEODE_AS_STATIC_FUNCTION(editColorButtonUsable) 
	#endif

	#ifndef GEODE_STATICS_editGroup
		#define GEODE_STATICS_editGroup
		GEODE_AS_STATIC_FUNCTION(editGroup) 
	#endif

	#ifndef GEODE_STATICS_editHSV
		#define GEODE_STATICS_editHSV
		GEODE_AS_STATIC_FUNCTION(editHSV) 
	#endif

	#ifndef GEODE_STATICS_editObject
		#define GEODE_STATICS_editObject
		GEODE_AS_STATIC_FUNCTION(editObject) 
	#endif

	#ifndef GEODE_STATICS_editObject2
		#define GEODE_STATICS_editObject2
		GEODE_AS_STATIC_FUNCTION(editObject2) 
	#endif

	#ifndef GEODE_STATICS_editObject3
		#define GEODE_STATICS_editObject3
		GEODE_AS_STATIC_FUNCTION(editObject3) 
	#endif

	#ifndef GEODE_STATICS_editObjectSpecial
		#define GEODE_STATICS_editObjectSpecial
		GEODE_AS_STATIC_FUNCTION(editObjectSpecial) 
	#endif

	#ifndef GEODE_STATICS_editorLayerForArray
		#define GEODE_STATICS_editorLayerForArray
		GEODE_AS_STATIC_FUNCTION(editorLayerForArray) 
	#endif

	#ifndef GEODE_STATICS_enableButton
		#define GEODE_STATICS_enableButton
		GEODE_AS_STATIC_FUNCTION(enableButton) 
	#endif

	#ifndef GEODE_STATICS_findAndSelectObject
		#define GEODE_STATICS_findAndSelectObject
		GEODE_AS_STATIC_FUNCTION(findAndSelectObject) 
	#endif

	#ifndef GEODE_STATICS_findSnapObject
		#define GEODE_STATICS_findSnapObject
		GEODE_AS_STATIC_FUNCTION(findSnapObject) 
	#endif

	#ifndef GEODE_STATICS_findTriggerTest
		#define GEODE_STATICS_findTriggerTest
		GEODE_AS_STATIC_FUNCTION(findTriggerTest) 
	#endif

	#ifndef GEODE_STATICS_flipObjectsX
		#define GEODE_STATICS_flipObjectsX
		GEODE_AS_STATIC_FUNCTION(flipObjectsX) 
	#endif

	#ifndef GEODE_STATICS_flipObjectsY
		#define GEODE_STATICS_flipObjectsY
		GEODE_AS_STATIC_FUNCTION(flipObjectsY) 
	#endif

	#ifndef GEODE_STATICS_getButton
		#define GEODE_STATICS_getButton
		GEODE_AS_STATIC_FUNCTION(getButton) 
	#endif

	#ifndef GEODE_STATICS_getCreateBtn
		#define GEODE_STATICS_getCreateBtn
		GEODE_AS_STATIC_FUNCTION(getCreateBtn) 
	#endif

	#ifndef GEODE_STATICS_getCreateMenuItemButton
		#define GEODE_STATICS_getCreateMenuItemButton
		GEODE_AS_STATIC_FUNCTION(getCreateMenuItemButton) 
	#endif

	#ifndef GEODE_STATICS_getCycledObject
		#define GEODE_STATICS_getCycledObject
		GEODE_AS_STATIC_FUNCTION(getCycledObject) 
	#endif

	#ifndef GEODE_STATICS_getEditColorTargets
		#define GEODE_STATICS_getEditColorTargets
		GEODE_AS_STATIC_FUNCTION(getEditColorTargets) 
	#endif

	#ifndef GEODE_STATICS_getGridSnappedPos
		#define GEODE_STATICS_getGridSnappedPos
		GEODE_AS_STATIC_FUNCTION(getGridSnappedPos) 
	#endif

	#ifndef GEODE_STATICS_getGroupCenter
		#define GEODE_STATICS_getGroupCenter
		GEODE_AS_STATIC_FUNCTION(getGroupCenter) 
	#endif

	#ifndef GEODE_STATICS_getGroupInfo
		#define GEODE_STATICS_getGroupInfo
		GEODE_AS_STATIC_FUNCTION(getGroupInfo) 
	#endif

	#ifndef GEODE_STATICS_getLimitedPosition
		#define GEODE_STATICS_getLimitedPosition
		GEODE_AS_STATIC_FUNCTION(getLimitedPosition) 
	#endif

	#ifndef GEODE_STATICS_getModeBtn
		#define GEODE_STATICS_getModeBtn
		GEODE_AS_STATIC_FUNCTION(getModeBtn) 
	#endif

	#ifndef GEODE_STATICS_getNeighbor
		#define GEODE_STATICS_getNeighbor
		GEODE_AS_STATIC_FUNCTION(getNeighbor) 
	#endif

	#ifndef GEODE_STATICS_getRandomStartKey
		#define GEODE_STATICS_getRandomStartKey
		GEODE_AS_STATIC_FUNCTION(getRandomStartKey) 
	#endif

	#ifndef GEODE_STATICS_getRelativeOffset
		#define GEODE_STATICS_getRelativeOffset
		GEODE_AS_STATIC_FUNCTION(getRelativeOffset) 
	#endif

	#ifndef GEODE_STATICS_getSelectedObjects
		#define GEODE_STATICS_getSelectedObjects
		GEODE_AS_STATIC_FUNCTION(getSelectedObjects) 
	#endif

	#ifndef GEODE_STATICS_getSimpleButton
		#define GEODE_STATICS_getSimpleButton
		GEODE_AS_STATIC_FUNCTION(getSimpleButton) 
	#endif

	#ifndef GEODE_STATICS_getSmartNeighbor
		#define GEODE_STATICS_getSmartNeighbor
		GEODE_AS_STATIC_FUNCTION(getSmartNeighbor) 
	#endif

	#ifndef GEODE_STATICS_getSmartObjectKey
		#define GEODE_STATICS_getSmartObjectKey
		GEODE_AS_STATIC_FUNCTION(getSmartObjectKey) 
	#endif

	#ifndef GEODE_STATICS_getSnapAngle
		#define GEODE_STATICS_getSnapAngle
		GEODE_AS_STATIC_FUNCTION(getSnapAngle) 
	#endif

	#ifndef GEODE_STATICS_getSpriteButton
		#define GEODE_STATICS_getSpriteButton
		GEODE_AS_STATIC_FUNCTION(getSpriteButton) 
	#endif

	#ifndef GEODE_STATICS_getTouchPoint
		#define GEODE_STATICS_getTouchPoint
		GEODE_AS_STATIC_FUNCTION(getTouchPoint) 
	#endif

	#ifndef GEODE_STATICS_getTransformState
		#define GEODE_STATICS_getTransformState
		GEODE_AS_STATIC_FUNCTION(getTransformState) 
	#endif

	#ifndef GEODE_STATICS_getXMin
		#define GEODE_STATICS_getXMin
		GEODE_AS_STATIC_FUNCTION(getXMin) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isLiveColorSelectTrigger
		#define GEODE_STATICS_isLiveColorSelectTrigger
		GEODE_AS_STATIC_FUNCTION(isLiveColorSelectTrigger) 
	#endif

	#ifndef GEODE_STATICS_isSpecialSnapObject
		#define GEODE_STATICS_isSpecialSnapObject
		GEODE_AS_STATIC_FUNCTION(isSpecialSnapObject) 
	#endif

	#ifndef GEODE_STATICS_liveEditColorUsable
		#define GEODE_STATICS_liveEditColorUsable
		GEODE_AS_STATIC_FUNCTION(liveEditColorUsable) 
	#endif

	#ifndef GEODE_STATICS_menuItemFromObjectString
		#define GEODE_STATICS_menuItemFromObjectString
		GEODE_AS_STATIC_FUNCTION(menuItemFromObjectString) 
	#endif

	#ifndef GEODE_STATICS_moveForCommand
		#define GEODE_STATICS_moveForCommand
		GEODE_AS_STATIC_FUNCTION(moveForCommand) 
	#endif

	#ifndef GEODE_STATICS_moveGamelayer
		#define GEODE_STATICS_moveGamelayer
		GEODE_AS_STATIC_FUNCTION(moveGamelayer) 
	#endif

	#ifndef GEODE_STATICS_moveObject
		#define GEODE_STATICS_moveObject
		GEODE_AS_STATIC_FUNCTION(moveObject) 
	#endif

	#ifndef GEODE_STATICS_moveObjectCall
		#define GEODE_STATICS_moveObjectCall
		GEODE_AS_STATIC_FUNCTION(moveObjectCall) 
	#endif

	#ifndef GEODE_STATICS_offsetForKey
		#define GEODE_STATICS_offsetForKey
		GEODE_AS_STATIC_FUNCTION(offsetForKey) 
	#endif

	#ifndef GEODE_STATICS_onAssignNewGroupID
		#define GEODE_STATICS_onAssignNewGroupID
		GEODE_AS_STATIC_FUNCTION(onAssignNewGroupID) 
	#endif

	#ifndef GEODE_STATICS_onColorFilter
		#define GEODE_STATICS_onColorFilter
		GEODE_AS_STATIC_FUNCTION(onColorFilter) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onCopyState
		#define GEODE_STATICS_onCopyState
		GEODE_AS_STATIC_FUNCTION(onCopyState) 
	#endif

	#ifndef GEODE_STATICS_onCreate
		#define GEODE_STATICS_onCreate
		GEODE_AS_STATIC_FUNCTION(onCreate) 
	#endif

	#ifndef GEODE_STATICS_onCreateButton
		#define GEODE_STATICS_onCreateButton
		GEODE_AS_STATIC_FUNCTION(onCreateButton) 
	#endif

	#ifndef GEODE_STATICS_onCreateObject
		#define GEODE_STATICS_onCreateObject
		GEODE_AS_STATIC_FUNCTION(onCreateObject) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onDeleteAll
		#define GEODE_STATICS_onDeleteAll
		GEODE_AS_STATIC_FUNCTION(onDeleteAll) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCustomItem
		#define GEODE_STATICS_onDeleteCustomItem
		GEODE_AS_STATIC_FUNCTION(onDeleteCustomItem) 
	#endif

	#ifndef GEODE_STATICS_onDeleteInfo
		#define GEODE_STATICS_onDeleteInfo
		GEODE_AS_STATIC_FUNCTION(onDeleteInfo) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelectedType
		#define GEODE_STATICS_onDeleteSelectedType
		GEODE_AS_STATIC_FUNCTION(onDeleteSelectedType) 
	#endif

	#ifndef GEODE_STATICS_onDeleteStartPos
		#define GEODE_STATICS_onDeleteStartPos
		GEODE_AS_STATIC_FUNCTION(onDeleteStartPos) 
	#endif

	#ifndef GEODE_STATICS_onDeselectAll
		#define GEODE_STATICS_onDeselectAll
		GEODE_AS_STATIC_FUNCTION(onDeselectAll) 
	#endif

	#ifndef GEODE_STATICS_onDuplicate
		#define GEODE_STATICS_onDuplicate
		GEODE_AS_STATIC_FUNCTION(onDuplicate) 
	#endif

	#ifndef GEODE_STATICS_onEditColor
		#define GEODE_STATICS_onEditColor
		GEODE_AS_STATIC_FUNCTION(onEditColor) 
	#endif

	#ifndef GEODE_STATICS_onFindObject
		#define GEODE_STATICS_onFindObject
		GEODE_AS_STATIC_FUNCTION(onFindObject) 
	#endif

	#ifndef GEODE_STATICS_onGoToBaseLayer
		#define GEODE_STATICS_onGoToBaseLayer
		GEODE_AS_STATIC_FUNCTION(onGoToBaseLayer) 
	#endif

	#ifndef GEODE_STATICS_onGoToLayer
		#define GEODE_STATICS_onGoToLayer
		GEODE_AS_STATIC_FUNCTION(onGoToLayer) 
	#endif

	#ifndef GEODE_STATICS_onGroupDown
		#define GEODE_STATICS_onGroupDown
		GEODE_AS_STATIC_FUNCTION(onGroupDown) 
	#endif

	#ifndef GEODE_STATICS_onGroupIDFilter
		#define GEODE_STATICS_onGroupIDFilter
		GEODE_AS_STATIC_FUNCTION(onGroupIDFilter) 
	#endif

	#ifndef GEODE_STATICS_onGroupSticky
		#define GEODE_STATICS_onGroupSticky
		GEODE_AS_STATIC_FUNCTION(onGroupSticky) 
	#endif

	#ifndef GEODE_STATICS_onGroupUp
		#define GEODE_STATICS_onGroupUp
		GEODE_AS_STATIC_FUNCTION(onGroupUp) 
	#endif

	#ifndef GEODE_STATICS_onLockLayer
		#define GEODE_STATICS_onLockLayer
		GEODE_AS_STATIC_FUNCTION(onLockLayer) 
	#endif

	#ifndef GEODE_STATICS_onNewCustomItem
		#define GEODE_STATICS_onNewCustomItem
		GEODE_AS_STATIC_FUNCTION(onNewCustomItem) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onPasteColor
		#define GEODE_STATICS_onPasteColor
		GEODE_AS_STATIC_FUNCTION(onPasteColor) 
	#endif

	#ifndef GEODE_STATICS_onPasteInPlace
		#define GEODE_STATICS_onPasteInPlace
		GEODE_AS_STATIC_FUNCTION(onPasteInPlace) 
	#endif

	#ifndef GEODE_STATICS_onPasteState
		#define GEODE_STATICS_onPasteState
		GEODE_AS_STATIC_FUNCTION(onPasteState) 
	#endif

	#ifndef GEODE_STATICS_onPause
		#define GEODE_STATICS_onPause
		GEODE_AS_STATIC_FUNCTION(onPause) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_onPlaytest
		#define GEODE_STATICS_onPlaytest
		GEODE_AS_STATIC_FUNCTION(onPlaytest) 
	#endif

	#ifndef GEODE_STATICS_onResetSpecialFilter
		#define GEODE_STATICS_onResetSpecialFilter
		GEODE_AS_STATIC_FUNCTION(onResetSpecialFilter) 
	#endif

	#ifndef GEODE_STATICS_onSelectBuildTab
		#define GEODE_STATICS_onSelectBuildTab
		GEODE_AS_STATIC_FUNCTION(onSelectBuildTab) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onStopPlaytest
		#define GEODE_STATICS_onStopPlaytest
		GEODE_AS_STATIC_FUNCTION(onStopPlaytest) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDChange
		#define GEODE_STATICS_onTargetIDChange
		GEODE_AS_STATIC_FUNCTION(onTargetIDChange) 
	#endif

	#ifndef GEODE_STATICS_onToggleGuide
		#define GEODE_STATICS_onToggleGuide
		GEODE_AS_STATIC_FUNCTION(onToggleGuide) 
	#endif

	#ifndef GEODE_STATICS_onToggleSelectedOrder
		#define GEODE_STATICS_onToggleSelectedOrder
		GEODE_AS_STATIC_FUNCTION(onToggleSelectedOrder) 
	#endif

	#ifndef GEODE_STATICS_onUngroupSticky
		#define GEODE_STATICS_onUngroupSticky
		GEODE_AS_STATIC_FUNCTION(onUngroupSticky) 
	#endif

	#ifndef GEODE_STATICS_onUpdateDeleteFilter
		#define GEODE_STATICS_onUpdateDeleteFilter
		GEODE_AS_STATIC_FUNCTION(onUpdateDeleteFilter) 
	#endif

	#ifndef GEODE_STATICS_orderDownCustomItem
		#define GEODE_STATICS_orderDownCustomItem
		GEODE_AS_STATIC_FUNCTION(orderDownCustomItem) 
	#endif

	#ifndef GEODE_STATICS_orderUpCustomItem
		#define GEODE_STATICS_orderUpCustomItem
		GEODE_AS_STATIC_FUNCTION(orderUpCustomItem) 
	#endif

	#ifndef GEODE_STATICS_pasteObjects
		#define GEODE_STATICS_pasteObjects
		GEODE_AS_STATIC_FUNCTION(pasteObjects) 
	#endif

	#ifndef GEODE_STATICS_playCircleAnim
		#define GEODE_STATICS_playCircleAnim
		GEODE_AS_STATIC_FUNCTION(playCircleAnim) 
	#endif

	#ifndef GEODE_STATICS_playerTouchBegan
		#define GEODE_STATICS_playerTouchBegan
		GEODE_AS_STATIC_FUNCTION(playerTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_playerTouchEnded
		#define GEODE_STATICS_playerTouchEnded
		GEODE_AS_STATIC_FUNCTION(playerTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_playtestStopped
		#define GEODE_STATICS_playtestStopped
		GEODE_AS_STATIC_FUNCTION(playtestStopped) 
	#endif

	#ifndef GEODE_STATICS_positionIsInSnapped
		#define GEODE_STATICS_positionIsInSnapped
		GEODE_AS_STATIC_FUNCTION(positionIsInSnapped) 
	#endif

	#ifndef GEODE_STATICS_positionWithoutOffset
		#define GEODE_STATICS_positionWithoutOffset
		GEODE_AS_STATIC_FUNCTION(positionWithoutOffset) 
	#endif

	#ifndef GEODE_STATICS_processSelectObjects
		#define GEODE_STATICS_processSelectObjects
		GEODE_AS_STATIC_FUNCTION(processSelectObjects) 
	#endif

	#ifndef GEODE_STATICS_processSmartObjectsFromType
		#define GEODE_STATICS_processSmartObjectsFromType
		GEODE_AS_STATIC_FUNCTION(processSmartObjectsFromType) 
	#endif

	#ifndef GEODE_STATICS_recreateButtonTabs
		#define GEODE_STATICS_recreateButtonTabs
		GEODE_AS_STATIC_FUNCTION(recreateButtonTabs) 
	#endif

	#ifndef GEODE_STATICS_redoLastAction
		#define GEODE_STATICS_redoLastAction
		GEODE_AS_STATIC_FUNCTION(redoLastAction) 
	#endif

	#ifndef GEODE_STATICS_reloadCustomItems
		#define GEODE_STATICS_reloadCustomItems
		GEODE_AS_STATIC_FUNCTION(reloadCustomItems) 
	#endif

	#ifndef GEODE_STATICS_removeOffset
		#define GEODE_STATICS_removeOffset
		GEODE_AS_STATIC_FUNCTION(removeOffset) 
	#endif

	#ifndef GEODE_STATICS_replaceGroupID
		#define GEODE_STATICS_replaceGroupID
		GEODE_AS_STATIC_FUNCTION(replaceGroupID) 
	#endif

	#ifndef GEODE_STATICS_repositionObjectsToCenter
		#define GEODE_STATICS_repositionObjectsToCenter
		GEODE_AS_STATIC_FUNCTION(repositionObjectsToCenter) 
	#endif

	#ifndef GEODE_STATICS_resetObjectEditorValues
		#define GEODE_STATICS_resetObjectEditorValues
		GEODE_AS_STATIC_FUNCTION(resetObjectEditorValues) 
	#endif

	#ifndef GEODE_STATICS_resetSelectedObjectsColor
		#define GEODE_STATICS_resetSelectedObjectsColor
		GEODE_AS_STATIC_FUNCTION(resetSelectedObjectsColor) 
	#endif

	#ifndef GEODE_STATICS_resetUI
		#define GEODE_STATICS_resetUI
		GEODE_AS_STATIC_FUNCTION(resetUI) 
	#endif

	#ifndef GEODE_STATICS_rotateObjects
		#define GEODE_STATICS_rotateObjects
		GEODE_AS_STATIC_FUNCTION(rotateObjects) 
	#endif

	#ifndef GEODE_STATICS_rotationforCommand
		#define GEODE_STATICS_rotationforCommand
		GEODE_AS_STATIC_FUNCTION(rotationforCommand) 
	#endif

	#ifndef GEODE_STATICS_scaleObjects
		#define GEODE_STATICS_scaleObjects
		GEODE_AS_STATIC_FUNCTION(scaleObjects) 
	#endif

	#ifndef GEODE_STATICS_selectAll
		#define GEODE_STATICS_selectAll
		GEODE_AS_STATIC_FUNCTION(selectAll) 
	#endif

	#ifndef GEODE_STATICS_selectAllWithDirection
		#define GEODE_STATICS_selectAllWithDirection
		GEODE_AS_STATIC_FUNCTION(selectAllWithDirection) 
	#endif

	#ifndef GEODE_STATICS_selectBuildTab
		#define GEODE_STATICS_selectBuildTab
		GEODE_AS_STATIC_FUNCTION(selectBuildTab) 
	#endif

	#ifndef GEODE_STATICS_selectObject
		#define GEODE_STATICS_selectObject
		GEODE_AS_STATIC_FUNCTION(selectObject) 
	#endif

	#ifndef GEODE_STATICS_selectObjects
		#define GEODE_STATICS_selectObjects
		GEODE_AS_STATIC_FUNCTION(selectObjects) 
	#endif

	#ifndef GEODE_STATICS_selectObjectsInRect
		#define GEODE_STATICS_selectObjectsInRect
		GEODE_AS_STATIC_FUNCTION(selectObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_setupCreateMenu
		#define GEODE_STATICS_setupCreateMenu
		GEODE_AS_STATIC_FUNCTION(setupCreateMenu) 
	#endif

	#ifndef GEODE_STATICS_setupDeleteMenu
		#define GEODE_STATICS_setupDeleteMenu
		GEODE_AS_STATIC_FUNCTION(setupDeleteMenu) 
	#endif

	#ifndef GEODE_STATICS_setupEditMenu
		#define GEODE_STATICS_setupEditMenu
		GEODE_AS_STATIC_FUNCTION(setupEditMenu) 
	#endif

	#ifndef GEODE_STATICS_setupTransformControl
		#define GEODE_STATICS_setupTransformControl
		GEODE_AS_STATIC_FUNCTION(setupTransformControl) 
	#endif

	#ifndef GEODE_STATICS_shouldDeleteObject
		#define GEODE_STATICS_shouldDeleteObject
		GEODE_AS_STATIC_FUNCTION(shouldDeleteObject) 
	#endif

	#ifndef GEODE_STATICS_shouldSnap
		#define GEODE_STATICS_shouldSnap
		GEODE_AS_STATIC_FUNCTION(shouldSnap) 
	#endif

	#ifndef GEODE_STATICS_showDeleteConfirmation
		#define GEODE_STATICS_showDeleteConfirmation
		GEODE_AS_STATIC_FUNCTION(showDeleteConfirmation) 
	#endif

	#ifndef GEODE_STATICS_showLiveColorSelectForMode
		#define GEODE_STATICS_showLiveColorSelectForMode
		GEODE_AS_STATIC_FUNCTION(showLiveColorSelectForMode) 
	#endif

	#ifndef GEODE_STATICS_showLiveColorSelectForModeSpecial
		#define GEODE_STATICS_showLiveColorSelectForModeSpecial
		GEODE_AS_STATIC_FUNCTION(showLiveColorSelectForModeSpecial) 
	#endif

	#ifndef GEODE_STATICS_showMaxBasicError
		#define GEODE_STATICS_showMaxBasicError
		GEODE_AS_STATIC_FUNCTION(showMaxBasicError) 
	#endif

	#ifndef GEODE_STATICS_showMaxCoinError
		#define GEODE_STATICS_showMaxCoinError
		GEODE_AS_STATIC_FUNCTION(showMaxCoinError) 
	#endif

	#ifndef GEODE_STATICS_showMaxError
		#define GEODE_STATICS_showMaxError
		GEODE_AS_STATIC_FUNCTION(showMaxError) 
	#endif

	#ifndef GEODE_STATICS_showUI
		#define GEODE_STATICS_showUI
		GEODE_AS_STATIC_FUNCTION(showUI) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_smartTypeForKey
		#define GEODE_STATICS_smartTypeForKey
		GEODE_AS_STATIC_FUNCTION(smartTypeForKey) 
	#endif

	#ifndef GEODE_STATICS_spriteFromObjectString
		#define GEODE_STATICS_spriteFromObjectString
		GEODE_AS_STATIC_FUNCTION(spriteFromObjectString) 
	#endif

	#ifndef GEODE_STATICS_toggleDuplicateButton
		#define GEODE_STATICS_toggleDuplicateButton
		GEODE_AS_STATIC_FUNCTION(toggleDuplicateButton) 
	#endif

	#ifndef GEODE_STATICS_toggleEditObjectButton
		#define GEODE_STATICS_toggleEditObjectButton
		GEODE_AS_STATIC_FUNCTION(toggleEditObjectButton) 
	#endif

	#ifndef GEODE_STATICS_toggleEnableRotate
		#define GEODE_STATICS_toggleEnableRotate
		GEODE_AS_STATIC_FUNCTION(toggleEnableRotate) 
	#endif

	#ifndef GEODE_STATICS_toggleFreeMove
		#define GEODE_STATICS_toggleFreeMove
		GEODE_AS_STATIC_FUNCTION(toggleFreeMove) 
	#endif

	#ifndef GEODE_STATICS_toggleLockUI
		#define GEODE_STATICS_toggleLockUI
		GEODE_AS_STATIC_FUNCTION(toggleLockUI) 
	#endif

	#ifndef GEODE_STATICS_toggleMode
		#define GEODE_STATICS_toggleMode
		GEODE_AS_STATIC_FUNCTION(toggleMode) 
	#endif

	#ifndef GEODE_STATICS_toggleObjectInfoLabel
		#define GEODE_STATICS_toggleObjectInfoLabel
		GEODE_AS_STATIC_FUNCTION(toggleObjectInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_toggleSnap
		#define GEODE_STATICS_toggleSnap
		GEODE_AS_STATIC_FUNCTION(toggleSnap) 
	#endif

	#ifndef GEODE_STATICS_toggleSpecialEditButtons
		#define GEODE_STATICS_toggleSpecialEditButtons
		GEODE_AS_STATIC_FUNCTION(toggleSpecialEditButtons) 
	#endif

	#ifndef GEODE_STATICS_toggleStickyControls
		#define GEODE_STATICS_toggleStickyControls
		GEODE_AS_STATIC_FUNCTION(toggleStickyControls) 
	#endif

	#ifndef GEODE_STATICS_toggleSwipe
		#define GEODE_STATICS_toggleSwipe
		GEODE_AS_STATIC_FUNCTION(toggleSwipe) 
	#endif

	#ifndef GEODE_STATICS_transformObject
		#define GEODE_STATICS_transformObject
		GEODE_AS_STATIC_FUNCTION(transformObject) 
	#endif

	#ifndef GEODE_STATICS_transformObjectCall
		#define GEODE_STATICS_transformObjectCall
		GEODE_AS_STATIC_FUNCTION(transformObjectCall) 
	#endif

	#ifndef GEODE_STATICS_transformObjects
		#define GEODE_STATICS_transformObjects
		GEODE_AS_STATIC_FUNCTION(transformObjects) 
	#endif

	#ifndef GEODE_STATICS_transformObjectsActive
		#define GEODE_STATICS_transformObjectsActive
		GEODE_AS_STATIC_FUNCTION(transformObjectsActive) 
	#endif

	#ifndef GEODE_STATICS_transformObjectsReset
		#define GEODE_STATICS_transformObjectsReset
		GEODE_AS_STATIC_FUNCTION(transformObjectsReset) 
	#endif

	#ifndef GEODE_STATICS_triggerSwipeMode
		#define GEODE_STATICS_triggerSwipeMode
		GEODE_AS_STATIC_FUNCTION(triggerSwipeMode) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateTimeMarkers
		#define GEODE_STATICS_tryUpdateTimeMarkers
		GEODE_AS_STATIC_FUNCTION(tryUpdateTimeMarkers) 
	#endif

	#ifndef GEODE_STATICS_undoLastAction
		#define GEODE_STATICS_undoLastAction
		GEODE_AS_STATIC_FUNCTION(undoLastAction) 
	#endif

	#ifndef GEODE_STATICS_updateButtons
		#define GEODE_STATICS_updateButtons
		GEODE_AS_STATIC_FUNCTION(updateButtons) 
	#endif

	#ifndef GEODE_STATICS_updateCreateMenu
		#define GEODE_STATICS_updateCreateMenu
		GEODE_AS_STATIC_FUNCTION(updateCreateMenu) 
	#endif

	#ifndef GEODE_STATICS_updateDeleteButtons
		#define GEODE_STATICS_updateDeleteButtons
		GEODE_AS_STATIC_FUNCTION(updateDeleteButtons) 
	#endif

	#ifndef GEODE_STATICS_updateDeleteMenu
		#define GEODE_STATICS_updateDeleteMenu
		GEODE_AS_STATIC_FUNCTION(updateDeleteMenu) 
	#endif

	#ifndef GEODE_STATICS_updateEditButtonColor
		#define GEODE_STATICS_updateEditButtonColor
		GEODE_AS_STATIC_FUNCTION(updateEditButtonColor) 
	#endif

	#ifndef GEODE_STATICS_updateEditColorButton
		#define GEODE_STATICS_updateEditColorButton
		GEODE_AS_STATIC_FUNCTION(updateEditColorButton) 
	#endif

	#ifndef GEODE_STATICS_updateEditMenu
		#define GEODE_STATICS_updateEditMenu
		GEODE_AS_STATIC_FUNCTION(updateEditMenu) 
	#endif

	#ifndef GEODE_STATICS_updateGridNodeSize
		#define GEODE_STATICS_updateGridNodeSize
		GEODE_AS_STATIC_FUNCTION(updateGridNodeSize) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDBtn2
		#define GEODE_STATICS_updateGroupIDBtn2
		GEODE_AS_STATIC_FUNCTION(updateGroupIDBtn2) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDLabel
		#define GEODE_STATICS_updateGroupIDLabel
		GEODE_AS_STATIC_FUNCTION(updateGroupIDLabel) 
	#endif

	#ifndef GEODE_STATICS_updateObjectInfoLabel
		#define GEODE_STATICS_updateObjectInfoLabel
		GEODE_AS_STATIC_FUNCTION(updateObjectInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_updatePlaybackBtn
		#define GEODE_STATICS_updatePlaybackBtn
		GEODE_AS_STATIC_FUNCTION(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_STATICS_updateSlider
		#define GEODE_STATICS_updateSlider
		GEODE_AS_STATIC_FUNCTION(updateSlider) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialUIElements
		#define GEODE_STATICS_updateSpecialUIElements
		GEODE_AS_STATIC_FUNCTION(updateSpecialUIElements) 
	#endif

	#ifndef GEODE_STATICS_updateZoom
		#define GEODE_STATICS_updateZoom
		GEODE_AS_STATIC_FUNCTION(updateZoom) 
	#endif

	#ifndef GEODE_STATICS_valueFromXPos
		#define GEODE_STATICS_valueFromXPos
		GEODE_AS_STATIC_FUNCTION(valueFromXPos) 
	#endif

	#ifndef GEODE_STATICS_xPosFromValue
		#define GEODE_STATICS_xPosFromValue
		GEODE_AS_STATIC_FUNCTION(xPosFromValue) 
	#endif

	#ifndef GEODE_STATICS_zoomGameLayer
		#define GEODE_STATICS_zoomGameLayer
		GEODE_AS_STATIC_FUNCTION(zoomGameLayer) 
	#endif

	#ifndef GEODE_STATICS_zoomIn
		#define GEODE_STATICS_zoomIn
		GEODE_AS_STATIC_FUNCTION(zoomIn) 
	#endif

	#ifndef GEODE_STATICS_zoomOut
		#define GEODE_STATICS_zoomOut
		GEODE_AS_STATIC_FUNCTION(zoomOut) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_getUI
		#define GEODE_STATICS_getUI
		GEODE_AS_STATIC_FUNCTION(getUI) 
	#endif

	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_updateTransformControl
		#define GEODE_STATICS_updateTransformControl
		GEODE_AS_STATIC_FUNCTION(updateTransformControl) 
	#endif

	#ifndef GEODE_STATICS_transformChangeBegin
		#define GEODE_STATICS_transformChangeBegin
		GEODE_AS_STATIC_FUNCTION(transformChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_transformChangeEnded
		#define GEODE_STATICS_transformChangeEnded
		GEODE_AS_STATIC_FUNCTION(transformChangeEnded) 
	#endif

	#ifndef GEODE_STATICS_getTransformNode
		#define GEODE_STATICS_getTransformNode
		GEODE_AS_STATIC_FUNCTION(getTransformNode) 
	#endif

	#ifndef GEODE_STATICS_transformScaleXChanged
		#define GEODE_STATICS_transformScaleXChanged
		GEODE_AS_STATIC_FUNCTION(transformScaleXChanged) 
	#endif

	#ifndef GEODE_STATICS_transformScaleYChanged
		#define GEODE_STATICS_transformScaleYChanged
		GEODE_AS_STATIC_FUNCTION(transformScaleYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformScaleXYChanged
		#define GEODE_STATICS_transformScaleXYChanged
		GEODE_AS_STATIC_FUNCTION(transformScaleXYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformSkewXChanged
		#define GEODE_STATICS_transformSkewXChanged
		GEODE_AS_STATIC_FUNCTION(transformSkewXChanged) 
	#endif

	#ifndef GEODE_STATICS_transformSkewYChanged
		#define GEODE_STATICS_transformSkewYChanged
		GEODE_AS_STATIC_FUNCTION(transformSkewYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformRotationXChanged
		#define GEODE_STATICS_transformRotationXChanged
		GEODE_AS_STATIC_FUNCTION(transformRotationXChanged) 
	#endif

	#ifndef GEODE_STATICS_transformRotationYChanged
		#define GEODE_STATICS_transformRotationYChanged
		GEODE_AS_STATIC_FUNCTION(transformRotationYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformRotationChanged
		#define GEODE_STATICS_transformRotationChanged
		GEODE_AS_STATIC_FUNCTION(transformRotationChanged) 
	#endif

	#ifndef GEODE_STATICS_transformResetRotation
		#define GEODE_STATICS_transformResetRotation
		GEODE_AS_STATIC_FUNCTION(transformResetRotation) 
	#endif

	#ifndef GEODE_STATICS_transformRestoreRotation
		#define GEODE_STATICS_transformRestoreRotation
		GEODE_AS_STATIC_FUNCTION(transformRestoreRotation) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

	#ifndef GEODE_STATICS_scrollWheel
		#define GEODE_STATICS_scrollWheel
		GEODE_AS_STATIC_FUNCTION(scrollWheel) 
	#endif

	#ifndef GEODE_STATICS_angleChangeBegin
		#define GEODE_STATICS_angleChangeBegin
		GEODE_AS_STATIC_FUNCTION(angleChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_angleChangeEnded
		#define GEODE_STATICS_angleChangeEnded
		GEODE_AS_STATIC_FUNCTION(angleChangeEnded) 
	#endif

	#ifndef GEODE_STATICS_angleChanged
		#define GEODE_STATICS_angleChanged
		GEODE_AS_STATIC_FUNCTION(angleChanged) 
	#endif

	#ifndef GEODE_STATICS_updateScaleControl
		#define GEODE_STATICS_updateScaleControl
		GEODE_AS_STATIC_FUNCTION(updateScaleControl) 
	#endif

	#ifndef GEODE_STATICS_anchorPointMoved
		#define GEODE_STATICS_anchorPointMoved
		GEODE_AS_STATIC_FUNCTION(anchorPointMoved) 
	#endif

	#ifndef GEODE_STATICS_scaleChangeBegin
		#define GEODE_STATICS_scaleChangeBegin
		GEODE_AS_STATIC_FUNCTION(scaleChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_scaleChangeEnded
		#define GEODE_STATICS_scaleChangeEnded
		GEODE_AS_STATIC_FUNCTION(scaleChangeEnded) 
	#endif

	#ifndef GEODE_STATICS_scaleXChanged
		#define GEODE_STATICS_scaleXChanged
		GEODE_AS_STATIC_FUNCTION(scaleXChanged) 
	#endif

	#ifndef GEODE_STATICS_scaleYChanged
		#define GEODE_STATICS_scaleYChanged
		GEODE_AS_STATIC_FUNCTION(scaleYChanged) 
	#endif

	#ifndef GEODE_STATICS_scaleXYChanged
		#define GEODE_STATICS_scaleXYChanged
		GEODE_AS_STATIC_FUNCTION(scaleXYChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorUI> : ModifyBase<ModifyDerive<Der, EditorUI>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorUI>>;
		using ModifyBase<ModifyDerive<Der, EditorUI>>::ModifyBase;
		using Base = EditorUI;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd83d0, Membercall, EditorUI, activateRotationControl, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc130, Membercall, EditorUI, activateScaleControl, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7d70, Membercall, EditorUI, applyOffset, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc89c0, Membercall, EditorUI, canSelectObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa950, Membercall, EditorUI, centerCameraOnObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc8b70, Membercall, EditorUI, checkLiveColorSelect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6870, Membercall, EditorUI, clickOnPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4550, Membercall, EditorUI, closeLiveColorSelect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd46d0, Membercall, EditorUI, closeLiveHSVSelect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7df0, Membercall, EditorUI, constrainGameLayerPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7df0, Membercall, EditorUI, constrainGameLayerPosition, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca970, Membercall, EditorUI, copyObjects, cocos2d::CCArray*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8570, Membercall, EditorUI, createCustomItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd1be0, Membercall, EditorUI, createMoveMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc86a0, Membercall, EditorUI, createObject, int, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9320, Membercall, EditorUI, createUndoObject, UndoCommand, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9470, Membercall, EditorUI, createUndoSelectObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc2d0, Membercall, EditorUI, deactivateScaleControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc800, Membercall, EditorUI, deactivateTransformControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa120, Membercall, EditorUI, deleteObject, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9600, Membercall, EditorUI, deselectAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc94f0, Membercall, EditorUI, deselectObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9540, Membercall, EditorUI, deselectObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa480, Membercall, EditorUI, deselectTargetPortals, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcaf10, Membercall, EditorUI, doCopyObjects, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcb090, Membercall, EditorUI, doPasteObjects, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd13a0, Membercall, EditorUI, editButton2Usable, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd0cc0, Membercall, EditorUI, editButtonUsable, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4110, Membercall, EditorUI, editColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd3d50, Membercall, EditorUI, editColorButtonUsable, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4720, Membercall, EditorUI, editGroup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd45a0, Membercall, EditorUI, editHSV, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd2840, Membercall, EditorUI, editObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd36b0, Membercall, EditorUI, editObject2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd36c0, Membercall, EditorUI, editObjectSpecial, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcbda0, Membercall, EditorUI, editorLayerForArray, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa870, Membercall, EditorUI, findAndSelectObject, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd5c20, Membercall, EditorUI, flipObjectsX, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd5e50, Membercall, EditorUI, flipObjectsY, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc78a0, Membercall, EditorUI, getCreateBtn, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8aa0, Membercall, EditorUI, getGridSnappedPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8140, Membercall, EditorUI, getGroupCenter, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4ff0, Membercall, EditorUI, getLimitedPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc92a0, Membercall, EditorUI, getSelectedObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23c490, Membercall, EditorUI, getSnapAngle, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6c00, Membercall, EditorUI, getSpriteButton, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8010, Membercall, EditorUI, getXMin, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa4260, Membercall, EditorUI, init, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdd6e0, Membercall, EditorUI, isSpecialSnapObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4a20, Membercall, EditorUI, moveForCommand, EditCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa7070, Membercall, EditorUI, moveGamelayer, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4f10, Membercall, EditorUI, moveObject, GameObject*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4d40, Membercall, EditorUI, moveObjectCall, EditCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb460, Membercall, EditorUI, offsetForKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcaf00, Membercall, EditorUI, onCopy, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcbcd0, Membercall, EditorUI, onCopyState, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7ee0, Membercall, EditorUI, onCreate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7d50, Membercall, EditorUI, onCreateButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7fc0, Membercall, EditorUI, onCreateObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa9b50, Membercall, EditorUI, onDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa1a0, Membercall, EditorUI, onDeleteSelected, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa5f0, Membercall, EditorUI, onDeleteSelectedType, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc95c0, Membercall, EditorUI, onDeselectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca7d0, Membercall, EditorUI, onDuplicate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd3eb0, Membercall, EditorUI, onEditColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcbec0, Membercall, EditorUI, onGoToBaseLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcbe10, Membercall, EditorUI, onGoToLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd47a0, Membercall, EditorUI, onGroupDown, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca5c0, Membercall, EditorUI, onGroupSticky, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4780, Membercall, EditorUI, onGroupUp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd48f0, Membercall, EditorUI, onLockLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa81c0, Membercall, EditorUI, onNewCustomItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcb080, Membercall, EditorUI, onPaste, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcbd50, Membercall, EditorUI, onPasteColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcbd00, Membercall, EditorUI, onPasteState, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6130, Membercall, EditorUI, onPause, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9d20, Membercall, EditorUI, onPlayback, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca090, Membercall, EditorUI, onPlaytest, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcbee0, Membercall, EditorUI, onSelectBuildTab, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa60e0, Membercall, EditorUI, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca200, Membercall, EditorUI, onStopPlaytest, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca600, Membercall, EditorUI, onUngroupSticky, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaabe0, Membercall, EditorUI, onUpdateDeleteFilter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcb240, Membercall, EditorUI, pasteObjects, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca240, Membercall, EditorUI, playtestStopped, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc8720, Membercall, EditorUI, positionIsInSnapped, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8a60, Membercall, EditorUI, recreateButtonTabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9ba0, Membercall, EditorUI, redoLastAction, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8a10, Membercall, EditorUI, reloadCustomItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7cf0, Membercall, EditorUI, removeOffset, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcbc50, Membercall, EditorUI, repositionObjectsToCenter, cocos2d::CCArray*, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcca80, Membercall, EditorUI, resetObjectEditorValues, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4990, Membercall, EditorUI, resetSelectedObjectsColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8b10, Membercall, EditorUI, resetUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6080, Membercall, EditorUI, rotateObjects, cocos2d::CCArray*, float, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd64b0, Membercall, EditorUI, scaleObjects, cocos2d::CCArray*, float, float, cocos2d::CCPoint, ObjectScaleType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9750, Membercall, EditorUI, selectAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9890, Membercall, EditorUI, selectAllWithDirection, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcbf00, Membercall, EditorUI, selectBuildTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc8aa0, Membercall, EditorUI, selectObject, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc8d40, Membercall, EditorUI, selectObjects, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab240, Membercall, EditorUI, setupCreateMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8cc0, Membercall, EditorUI, setupDeleteMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca6c0, Membercall, EditorUI, showMaxBasicError, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca750, Membercall, EditorUI, showMaxCoinError, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca640, Membercall, EditorUI, showMaxError, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9c10, Membercall, EditorUI, showUI, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6cd0, Membercall, EditorUI, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd1680, Membercall, EditorUI, toggleEditObjectButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc8900, Membercall, EditorUI, toggleEnableRotate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc8810, Membercall, EditorUI, toggleFreeMove, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8c20, Membercall, EditorUI, toggleMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc8880, Membercall, EditorUI, toggleSnap, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6080, Membercall, EditorUI, toggleStickyControls, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc87a0, Membercall, EditorUI, toggleSwipe, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd5780, Membercall, EditorUI, transformObject, GameObject*, EditCommand, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd5360, Membercall, EditorUI, transformObjectCall, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd5380, Membercall, EditorUI, transformObjectCall, EditCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6e40, Membercall, EditorUI, transformObjects, cocos2d::CCArray*, cocos2d::CCPoint, float, float, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6d20, Membercall, EditorUI, transformObjectsActive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6da0, Membercall, EditorUI, transformObjectsReset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9b40, Membercall, EditorUI, undoLastAction, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6310, Membercall, EditorUI, updateButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7d90, Membercall, EditorUI, updateCreateMenu, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc030, Membercall, EditorUI, updateEditButtonColor, int, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd0c90, Membercall, EditorUI, updateEditMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6f20, Membercall, EditorUI, updateGridNodeSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd47d0, Membercall, EditorUI, updateGroupIDLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa70d0, Membercall, EditorUI, updateObjectInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9f80, Membercall, EditorUI, updatePlaybackBtn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6ed0, Membercall, EditorUI, updateSlider, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca3d0, Membercall, EditorUI, updateZoom, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6e20, Membercall, EditorUI, valueFromXPos, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca2f0, Membercall, EditorUI, zoomIn, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca360, Membercall, EditorUI, zoomOut, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd80f0, Thiscall, EditorUI, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8be0, Thiscall, EditorUI, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9160, Thiscall, EditorUI, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9730, Thiscall, EditorUI, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c830, Thiscall, EditorUI, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc020, Thiscall, EditorUI, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xda300, Thiscall, EditorUI, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa3aa0, Thiscall, EditorUI, getUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa700, Thiscall, EditorUI, setIDPopupClosed, SetIDPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa650, Thiscall, EditorUI, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc870, Thiscall, EditorUI, updateTransformControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xccc50, Thiscall, EditorUI, transformChangeBegin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa3ab0, Thiscall, EditorUI, getTransformNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6ba0, Thiscall, EditorUI, transformScaleXChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6bc0, Thiscall, EditorUI, transformScaleYChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6be0, Thiscall, EditorUI, transformScaleXYChanged, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6c10, Thiscall, EditorUI, transformSkewXChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6c30, Thiscall, EditorUI, transformSkewYChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6c50, Thiscall, EditorUI, transformRotationXChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6c70, Thiscall, EditorUI, transformRotationYChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6c90, Thiscall, EditorUI, transformRotationChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6cc0, Thiscall, EditorUI, transformResetRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6cf0, Thiscall, EditorUI, transformRestoreRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca080, Thiscall, EditorUI, songStateChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4930, Thiscall, EditorUI, colorSelectClosed, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb210, Thiscall, EditorUI, keyUp, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb260, Thiscall, EditorUI, scrollWheel, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd84d0, Thiscall, EditorUI, angleChangeBegin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x95c0, Thiscall, EditorUI, angleChangeEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd84e0, Thiscall, EditorUI, angleChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc380, Thiscall, EditorUI, updateScaleControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xccc60, Thiscall, EditorUI, anchorPointMoved, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc4b0, Thiscall, EditorUI, scaleChangeBegin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc4c0, Thiscall, EditorUI, scaleXChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc540, Thiscall, EditorUI, scaleYChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc5c0, Thiscall, EditorUI, scaleXYChanged, float, float)
		}
	};
}
