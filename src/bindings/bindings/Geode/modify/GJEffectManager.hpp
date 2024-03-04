#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJEffectManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activeColorForIndex
		#define GEODE_STATICS_activeColorForIndex
		GEODE_AS_STATIC_FUNCTION(activeColorForIndex) 
	#endif

	#ifndef GEODE_STATICS_activeOpacityForIndex
		#define GEODE_STATICS_activeOpacityForIndex
		GEODE_AS_STATIC_FUNCTION(activeOpacityForIndex) 
	#endif

	#ifndef GEODE_STATICS_addAllInheritedColorActions
		#define GEODE_STATICS_addAllInheritedColorActions
		GEODE_AS_STATIC_FUNCTION(addAllInheritedColorActions) 
	#endif

	#ifndef GEODE_STATICS_addCountToItem
		#define GEODE_STATICS_addCountToItem
		GEODE_AS_STATIC_FUNCTION(addCountToItem) 
	#endif

	#ifndef GEODE_STATICS_addMoveCalculation
		#define GEODE_STATICS_addMoveCalculation
		GEODE_AS_STATIC_FUNCTION(addMoveCalculation) 
	#endif

	#ifndef GEODE_STATICS_calculateBaseActiveColors
		#define GEODE_STATICS_calculateBaseActiveColors
		GEODE_AS_STATIC_FUNCTION(calculateBaseActiveColors) 
	#endif

	#ifndef GEODE_STATICS_calculateInheritedColor
		#define GEODE_STATICS_calculateInheritedColor
		GEODE_AS_STATIC_FUNCTION(calculateInheritedColor) 
	#endif

	#ifndef GEODE_STATICS_calculateLightBGColor
		#define GEODE_STATICS_calculateLightBGColor
		GEODE_AS_STATIC_FUNCTION(calculateLightBGColor) 
	#endif

	#ifndef GEODE_STATICS_checkCollision
		#define GEODE_STATICS_checkCollision
		GEODE_AS_STATIC_FUNCTION(checkCollision) 
	#endif

	#ifndef GEODE_STATICS_colorActionChanged
		#define GEODE_STATICS_colorActionChanged
		GEODE_AS_STATIC_FUNCTION(colorActionChanged) 
	#endif

	#ifndef GEODE_STATICS_colorExists
		#define GEODE_STATICS_colorExists
		GEODE_AS_STATIC_FUNCTION(colorExists) 
	#endif

	#ifndef GEODE_STATICS_colorForEffect
		#define GEODE_STATICS_colorForEffect
		GEODE_AS_STATIC_FUNCTION(colorForEffect) 
	#endif

	#ifndef GEODE_STATICS_colorForGroupID
		#define GEODE_STATICS_colorForGroupID
		GEODE_AS_STATIC_FUNCTION(colorForGroupID) 
	#endif

	#ifndef GEODE_STATICS_colorForIndex
		#define GEODE_STATICS_colorForIndex
		GEODE_AS_STATIC_FUNCTION(colorForIndex) 
	#endif

	#ifndef GEODE_STATICS_colorForPulseEffect
		#define GEODE_STATICS_colorForPulseEffect
		GEODE_AS_STATIC_FUNCTION(colorForPulseEffect) 
	#endif

	#ifndef GEODE_STATICS_controlActionsForControlID
		#define GEODE_STATICS_controlActionsForControlID
		GEODE_AS_STATIC_FUNCTION(controlActionsForControlID) 
	#endif

	#ifndef GEODE_STATICS_controlActionsForTrigger
		#define GEODE_STATICS_controlActionsForTrigger
		GEODE_AS_STATIC_FUNCTION(controlActionsForTrigger) 
	#endif

	#ifndef GEODE_STATICS_countForItem
		#define GEODE_STATICS_countForItem
		GEODE_AS_STATIC_FUNCTION(countForItem) 
	#endif

	#ifndef GEODE_STATICS_createFollowCommand
		#define GEODE_STATICS_createFollowCommand
		GEODE_AS_STATIC_FUNCTION(createFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_createKeyframeCommand
		#define GEODE_STATICS_createKeyframeCommand
		GEODE_AS_STATIC_FUNCTION(createKeyframeCommand) 
	#endif

	#ifndef GEODE_STATICS_createMoveCommand
		#define GEODE_STATICS_createMoveCommand
		GEODE_AS_STATIC_FUNCTION(createMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_createPlayerFollowCommand
		#define GEODE_STATICS_createPlayerFollowCommand
		GEODE_AS_STATIC_FUNCTION(createPlayerFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_createRotateCommand
		#define GEODE_STATICS_createRotateCommand
		GEODE_AS_STATIC_FUNCTION(createRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_createTransformCommand
		#define GEODE_STATICS_createTransformCommand
		GEODE_AS_STATIC_FUNCTION(createTransformCommand) 
	#endif

	#ifndef GEODE_STATICS_getAllColorActions
		#define GEODE_STATICS_getAllColorActions
		GEODE_AS_STATIC_FUNCTION(getAllColorActions) 
	#endif

	#ifndef GEODE_STATICS_getAllColorSprites
		#define GEODE_STATICS_getAllColorSprites
		GEODE_AS_STATIC_FUNCTION(getAllColorSprites) 
	#endif

	#ifndef GEODE_STATICS_getColorAction
		#define GEODE_STATICS_getColorAction
		GEODE_AS_STATIC_FUNCTION(getColorAction) 
	#endif

	#ifndef GEODE_STATICS_getColorSprite
		#define GEODE_STATICS_getColorSprite
		GEODE_AS_STATIC_FUNCTION(getColorSprite) 
	#endif

	#ifndef GEODE_STATICS_getLoadedMoveOffset
		#define GEODE_STATICS_getLoadedMoveOffset
		GEODE_AS_STATIC_FUNCTION(getLoadedMoveOffset) 
	#endif

	#ifndef GEODE_STATICS_getMixedColor
		#define GEODE_STATICS_getMixedColor
		GEODE_AS_STATIC_FUNCTION(getMixedColor) 
	#endif

	#ifndef GEODE_STATICS_getMoveCommandNode
		#define GEODE_STATICS_getMoveCommandNode
		GEODE_AS_STATIC_FUNCTION(getMoveCommandNode) 
	#endif

	#ifndef GEODE_STATICS_getMoveCommandObject
		#define GEODE_STATICS_getMoveCommandObject
		GEODE_AS_STATIC_FUNCTION(getMoveCommandObject) 
	#endif

	#ifndef GEODE_STATICS_getOpacityActionForGroup
		#define GEODE_STATICS_getOpacityActionForGroup
		GEODE_AS_STATIC_FUNCTION(getOpacityActionForGroup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getTempGroupCommand
		#define GEODE_STATICS_getTempGroupCommand
		GEODE_AS_STATIC_FUNCTION(getTempGroupCommand) 
	#endif

	#ifndef GEODE_STATICS_handleObjectCollision
		#define GEODE_STATICS_handleObjectCollision
		GEODE_AS_STATIC_FUNCTION(handleObjectCollision) 
	#endif

	#ifndef GEODE_STATICS_hasActiveDualTouch
		#define GEODE_STATICS_hasActiveDualTouch
		GEODE_AS_STATIC_FUNCTION(hasActiveDualTouch) 
	#endif

	#ifndef GEODE_STATICS_hasBeenTriggered
		#define GEODE_STATICS_hasBeenTriggered
		GEODE_AS_STATIC_FUNCTION(hasBeenTriggered) 
	#endif

	#ifndef GEODE_STATICS_hasPulseEffectForGroupID
		#define GEODE_STATICS_hasPulseEffectForGroupID
		GEODE_AS_STATIC_FUNCTION(hasPulseEffectForGroupID) 
	#endif

	#ifndef GEODE_STATICS_isGroupEnabled
		#define GEODE_STATICS_isGroupEnabled
		GEODE_AS_STATIC_FUNCTION(isGroupEnabled) 
	#endif

	#ifndef GEODE_STATICS_keyForGroupIDColor
		#define GEODE_STATICS_keyForGroupIDColor
		GEODE_AS_STATIC_FUNCTION(keyForGroupIDColor) 
	#endif

	#ifndef GEODE_STATICS_loadFromState
		#define GEODE_STATICS_loadFromState
		GEODE_AS_STATIC_FUNCTION(loadFromState) 
	#endif

	#ifndef GEODE_STATICS_objectsCollided
		#define GEODE_STATICS_objectsCollided
		GEODE_AS_STATIC_FUNCTION(objectsCollided) 
	#endif

	#ifndef GEODE_STATICS_opacityForIndex
		#define GEODE_STATICS_opacityForIndex
		GEODE_AS_STATIC_FUNCTION(opacityForIndex) 
	#endif

	#ifndef GEODE_STATICS_opacityModForGroup
		#define GEODE_STATICS_opacityModForGroup
		GEODE_AS_STATIC_FUNCTION(opacityModForGroup) 
	#endif

	#ifndef GEODE_STATICS_pauseTimer
		#define GEODE_STATICS_pauseTimer
		GEODE_AS_STATIC_FUNCTION(pauseTimer) 
	#endif

	#ifndef GEODE_STATICS_playerButton
		#define GEODE_STATICS_playerButton
		GEODE_AS_STATIC_FUNCTION(playerButton) 
	#endif

	#ifndef GEODE_STATICS_playerDied
		#define GEODE_STATICS_playerDied
		GEODE_AS_STATIC_FUNCTION(playerDied) 
	#endif

	#ifndef GEODE_STATICS_postCollisionCheck
		#define GEODE_STATICS_postCollisionCheck
		GEODE_AS_STATIC_FUNCTION(postCollisionCheck) 
	#endif

	#ifndef GEODE_STATICS_postMoveActions
		#define GEODE_STATICS_postMoveActions
		GEODE_AS_STATIC_FUNCTION(postMoveActions) 
	#endif

	#ifndef GEODE_STATICS_preCollisionCheck
		#define GEODE_STATICS_preCollisionCheck
		GEODE_AS_STATIC_FUNCTION(preCollisionCheck) 
	#endif

	#ifndef GEODE_STATICS_prepareMoveActions
		#define GEODE_STATICS_prepareMoveActions
		GEODE_AS_STATIC_FUNCTION(prepareMoveActions) 
	#endif

	#ifndef GEODE_STATICS_processColors
		#define GEODE_STATICS_processColors
		GEODE_AS_STATIC_FUNCTION(processColors) 
	#endif

	#ifndef GEODE_STATICS_processCopyColorPulseActions
		#define GEODE_STATICS_processCopyColorPulseActions
		GEODE_AS_STATIC_FUNCTION(processCopyColorPulseActions) 
	#endif

	#ifndef GEODE_STATICS_processInheritedColors
		#define GEODE_STATICS_processInheritedColors
		GEODE_AS_STATIC_FUNCTION(processInheritedColors) 
	#endif

	#ifndef GEODE_STATICS_processMoveCalculations
		#define GEODE_STATICS_processMoveCalculations
		GEODE_AS_STATIC_FUNCTION(processMoveCalculations) 
	#endif

	#ifndef GEODE_STATICS_processPulseActions
		#define GEODE_STATICS_processPulseActions
		GEODE_AS_STATIC_FUNCTION(processPulseActions) 
	#endif

	#ifndef GEODE_STATICS_registerCollisionTrigger
		#define GEODE_STATICS_registerCollisionTrigger
		GEODE_AS_STATIC_FUNCTION(registerCollisionTrigger) 
	#endif

	#ifndef GEODE_STATICS_registerRotationCommand
		#define GEODE_STATICS_registerRotationCommand
		GEODE_AS_STATIC_FUNCTION(registerRotationCommand) 
	#endif

	#ifndef GEODE_STATICS_removeAllPulseActions
		#define GEODE_STATICS_removeAllPulseActions
		GEODE_AS_STATIC_FUNCTION(removeAllPulseActions) 
	#endif

	#ifndef GEODE_STATICS_removeColorAction
		#define GEODE_STATICS_removeColorAction
		GEODE_AS_STATIC_FUNCTION(removeColorAction) 
	#endif

	#ifndef GEODE_STATICS_removePersistentFromAllItems
		#define GEODE_STATICS_removePersistentFromAllItems
		GEODE_AS_STATIC_FUNCTION(removePersistentFromAllItems) 
	#endif

	#ifndef GEODE_STATICS_removePersistentFromAllTimers
		#define GEODE_STATICS_removePersistentFromAllTimers
		GEODE_AS_STATIC_FUNCTION(removePersistentFromAllTimers) 
	#endif

	#ifndef GEODE_STATICS_removeTriggeredID
		#define GEODE_STATICS_removeTriggeredID
		GEODE_AS_STATIC_FUNCTION(removeTriggeredID) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resetEffects
		#define GEODE_STATICS_resetEffects
		GEODE_AS_STATIC_FUNCTION(resetEffects) 
	#endif

	#ifndef GEODE_STATICS_resetMoveActions
		#define GEODE_STATICS_resetMoveActions
		GEODE_AS_STATIC_FUNCTION(resetMoveActions) 
	#endif

	#ifndef GEODE_STATICS_resetTempGroupCommands
		#define GEODE_STATICS_resetTempGroupCommands
		GEODE_AS_STATIC_FUNCTION(resetTempGroupCommands) 
	#endif

	#ifndef GEODE_STATICS_resetToggledGroups
		#define GEODE_STATICS_resetToggledGroups
		GEODE_AS_STATIC_FUNCTION(resetToggledGroups) 
	#endif

	#ifndef GEODE_STATICS_resetTriggeredIDs
		#define GEODE_STATICS_resetTriggeredIDs
		GEODE_AS_STATIC_FUNCTION(resetTriggeredIDs) 
	#endif

	#ifndef GEODE_STATICS_resumeTimer
		#define GEODE_STATICS_resumeTimer
		GEODE_AS_STATIC_FUNCTION(resumeTimer) 
	#endif

	#ifndef GEODE_STATICS_runCountTrigger
		#define GEODE_STATICS_runCountTrigger
		GEODE_AS_STATIC_FUNCTION(runCountTrigger) 
	#endif

	#ifndef GEODE_STATICS_runDeathTrigger
		#define GEODE_STATICS_runDeathTrigger
		GEODE_AS_STATIC_FUNCTION(runDeathTrigger) 
	#endif

	#ifndef GEODE_STATICS_runOpacityActionOnGroup
		#define GEODE_STATICS_runOpacityActionOnGroup
		GEODE_AS_STATIC_FUNCTION(runOpacityActionOnGroup) 
	#endif

	#ifndef GEODE_STATICS_runPulseEffect
		#define GEODE_STATICS_runPulseEffect
		GEODE_AS_STATIC_FUNCTION(runPulseEffect) 
	#endif

	#ifndef GEODE_STATICS_runTimerTrigger
		#define GEODE_STATICS_runTimerTrigger
		GEODE_AS_STATIC_FUNCTION(runTimerTrigger) 
	#endif

	#ifndef GEODE_STATICS_runTouchTriggerCommand
		#define GEODE_STATICS_runTouchTriggerCommand
		GEODE_AS_STATIC_FUNCTION(runTouchTriggerCommand) 
	#endif

	#ifndef GEODE_STATICS_saveCompletedMove
		#define GEODE_STATICS_saveCompletedMove
		GEODE_AS_STATIC_FUNCTION(saveCompletedMove) 
	#endif

	#ifndef GEODE_STATICS_saveToState
		#define GEODE_STATICS_saveToState
		GEODE_AS_STATIC_FUNCTION(saveToState) 
	#endif

	#ifndef GEODE_STATICS_setColorAction
		#define GEODE_STATICS_setColorAction
		GEODE_AS_STATIC_FUNCTION(setColorAction) 
	#endif

	#ifndef GEODE_STATICS_setFollowing
		#define GEODE_STATICS_setFollowing
		GEODE_AS_STATIC_FUNCTION(setFollowing) 
	#endif

	#ifndef GEODE_STATICS_setupFromString
		#define GEODE_STATICS_setupFromString
		GEODE_AS_STATIC_FUNCTION(setupFromString) 
	#endif

	#ifndef GEODE_STATICS_shouldBlend
		#define GEODE_STATICS_shouldBlend
		GEODE_AS_STATIC_FUNCTION(shouldBlend) 
	#endif

	#ifndef GEODE_STATICS_spawnGroup
		#define GEODE_STATICS_spawnGroup
		GEODE_AS_STATIC_FUNCTION(spawnGroup) 
	#endif

	#ifndef GEODE_STATICS_spawnObject
		#define GEODE_STATICS_spawnObject
		GEODE_AS_STATIC_FUNCTION(spawnObject) 
	#endif

	#ifndef GEODE_STATICS_startTimer
		#define GEODE_STATICS_startTimer
		GEODE_AS_STATIC_FUNCTION(startTimer) 
	#endif

	#ifndef GEODE_STATICS_storeTriggeredID
		#define GEODE_STATICS_storeTriggeredID
		GEODE_AS_STATIC_FUNCTION(storeTriggeredID) 
	#endif

	#ifndef GEODE_STATICS_timeForItem
		#define GEODE_STATICS_timeForItem
		GEODE_AS_STATIC_FUNCTION(timeForItem) 
	#endif

	#ifndef GEODE_STATICS_timerExists
		#define GEODE_STATICS_timerExists
		GEODE_AS_STATIC_FUNCTION(timerExists) 
	#endif

	#ifndef GEODE_STATICS_toggleGroup
		#define GEODE_STATICS_toggleGroup
		GEODE_AS_STATIC_FUNCTION(toggleGroup) 
	#endif

	#ifndef GEODE_STATICS_toggleItemPersistent
		#define GEODE_STATICS_toggleItemPersistent
		GEODE_AS_STATIC_FUNCTION(toggleItemPersistent) 
	#endif

	#ifndef GEODE_STATICS_toggleTimerPersistent
		#define GEODE_STATICS_toggleTimerPersistent
		GEODE_AS_STATIC_FUNCTION(toggleTimerPersistent) 
	#endif

	#ifndef GEODE_STATICS_transferPersistentItems
		#define GEODE_STATICS_transferPersistentItems
		GEODE_AS_STATIC_FUNCTION(transferPersistentItems) 
	#endif

	#ifndef GEODE_STATICS_traverseInheritanceChain
		#define GEODE_STATICS_traverseInheritanceChain
		GEODE_AS_STATIC_FUNCTION(traverseInheritanceChain) 
	#endif

	#ifndef GEODE_STATICS_tryGetMoveCommandNode
		#define GEODE_STATICS_tryGetMoveCommandNode
		GEODE_AS_STATIC_FUNCTION(tryGetMoveCommandNode) 
	#endif

	#ifndef GEODE_STATICS_updateActiveOpacityEffects
		#define GEODE_STATICS_updateActiveOpacityEffects
		GEODE_AS_STATIC_FUNCTION(updateActiveOpacityEffects) 
	#endif

	#ifndef GEODE_STATICS_updateColorAction
		#define GEODE_STATICS_updateColorAction
		GEODE_AS_STATIC_FUNCTION(updateColorAction) 
	#endif

	#ifndef GEODE_STATICS_updateColorEffects
		#define GEODE_STATICS_updateColorEffects
		GEODE_AS_STATIC_FUNCTION(updateColorEffects) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updateCountForItem
		#define GEODE_STATICS_updateCountForItem
		GEODE_AS_STATIC_FUNCTION(updateCountForItem) 
	#endif

	#ifndef GEODE_STATICS_updateEffects
		#define GEODE_STATICS_updateEffects
		GEODE_AS_STATIC_FUNCTION(updateEffects) 
	#endif

	#ifndef GEODE_STATICS_updateOpacityAction
		#define GEODE_STATICS_updateOpacityAction
		GEODE_AS_STATIC_FUNCTION(updateOpacityAction) 
	#endif

	#ifndef GEODE_STATICS_updateOpacityEffects
		#define GEODE_STATICS_updateOpacityEffects
		GEODE_AS_STATIC_FUNCTION(updateOpacityEffects) 
	#endif

	#ifndef GEODE_STATICS_updatePulseEffects
		#define GEODE_STATICS_updatePulseEffects
		GEODE_AS_STATIC_FUNCTION(updatePulseEffects) 
	#endif

	#ifndef GEODE_STATICS_updateSpawnTriggers
		#define GEODE_STATICS_updateSpawnTriggers
		GEODE_AS_STATIC_FUNCTION(updateSpawnTriggers) 
	#endif

	#ifndef GEODE_STATICS_updateTimer
		#define GEODE_STATICS_updateTimer
		GEODE_AS_STATIC_FUNCTION(updateTimer) 
	#endif

	#ifndef GEODE_STATICS_updateTimers
		#define GEODE_STATICS_updateTimers
		GEODE_AS_STATIC_FUNCTION(updateTimers) 
	#endif

	#ifndef GEODE_STATICS_wasFollowing
		#define GEODE_STATICS_wasFollowing
		GEODE_AS_STATIC_FUNCTION(wasFollowing) 
	#endif

	#ifndef GEODE_STATICS_wouldCreateLoop
		#define GEODE_STATICS_wouldCreateLoop
		GEODE_AS_STATIC_FUNCTION(wouldCreateLoop) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJEffectManager> : ModifyBase<ModifyDerive<Der, GJEffectManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJEffectManager>>;
		using ModifyBase<ModifyDerive<Der, GJEffectManager>>::ModifyBase;
		using Base = GJEffectManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db2d0, Optcall, GJEffectManager, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db7b0, Membercall, GJEffectManager, activeColorForIndex, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db830, Membercall, GJEffectManager, calculateBaseActiveColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e3b10, Membercall, GJEffectManager, calculateLightBGColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e2010, Membercall, GJEffectManager, colorForPulseEffect, cocos2d::ccColor3B const&, PulseEffectAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dbe80, Membercall, GJEffectManager, getColorAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dbf00, Membercall, GJEffectManager, getColorSprite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e44a0, Membercall, GJEffectManager, loadFromState, EffectManagerState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dc3c0, Membercall, GJEffectManager, objectsCollided, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e29b0, Membercall, GJEffectManager, playerDied, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e1df0, Membercall, GJEffectManager, processCopyColorPulseActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db900, Membercall, GJEffectManager, processInheritedColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e1d30, Membercall, GJEffectManager, processPulseActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e42a0, Membercall, GJEffectManager, saveToState, EffectManagerState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dbb50, Membercall, GJEffectManager, traverseInheritanceChain, InheritanceNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dbe50, Membercall, GJEffectManager, wouldCreateLoop, InheritanceNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db370, Thiscall, GJEffectManager, init, )
		}
	};
}
