#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorPauseLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_doResetUnused
		#define GEODE_STATICS_doResetUnused
		GEODE_AS_STATIC_FUNCTION(doResetUnused) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAlignX
		#define GEODE_STATICS_onAlignX
		GEODE_AS_STATIC_FUNCTION(onAlignX) 
	#endif

	#ifndef GEODE_STATICS_onAlignY
		#define GEODE_STATICS_onAlignY
		GEODE_AS_STATIC_FUNCTION(onAlignY) 
	#endif

	#ifndef GEODE_STATICS_onBuildHelper
		#define GEODE_STATICS_onBuildHelper
		GEODE_AS_STATIC_FUNCTION(onBuildHelper) 
	#endif

	#ifndef GEODE_STATICS_onCopyWColor
		#define GEODE_STATICS_onCopyWColor
		GEODE_AS_STATIC_FUNCTION(onCopyWColor) 
	#endif

	#ifndef GEODE_STATICS_onCreateExtras
		#define GEODE_STATICS_onCreateExtras
		GEODE_AS_STATIC_FUNCTION(onCreateExtras) 
	#endif

	#ifndef GEODE_STATICS_onCreateLoop
		#define GEODE_STATICS_onCreateLoop
		GEODE_AS_STATIC_FUNCTION(onCreateLoop) 
	#endif

	#ifndef GEODE_STATICS_onCreateTemplate
		#define GEODE_STATICS_onCreateTemplate
		GEODE_AS_STATIC_FUNCTION(onCreateTemplate) 
	#endif

	#ifndef GEODE_STATICS_onExitEditor
		#define GEODE_STATICS_onExitEditor
		GEODE_AS_STATIC_FUNCTION(onExitEditor) 
	#endif

	#ifndef GEODE_STATICS_onExitNoSave
		#define GEODE_STATICS_onExitNoSave
		GEODE_AS_STATIC_FUNCTION(onExitNoSave) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onKeybindings
		#define GEODE_STATICS_onKeybindings
		GEODE_AS_STATIC_FUNCTION(onKeybindings) 
	#endif

	#ifndef GEODE_STATICS_onNewGroupX
		#define GEODE_STATICS_onNewGroupX
		GEODE_AS_STATIC_FUNCTION(onNewGroupX) 
	#endif

	#ifndef GEODE_STATICS_onNewGroupY
		#define GEODE_STATICS_onNewGroupY
		GEODE_AS_STATIC_FUNCTION(onNewGroupY) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onPasteWColor
		#define GEODE_STATICS_onPasteWColor
		GEODE_AS_STATIC_FUNCTION(onPasteWColor) 
	#endif

	#ifndef GEODE_STATICS_onReGroup
		#define GEODE_STATICS_onReGroup
		GEODE_AS_STATIC_FUNCTION(onReGroup) 
	#endif

	#ifndef GEODE_STATICS_onResetUnusedColors
		#define GEODE_STATICS_onResetUnusedColors
		GEODE_AS_STATIC_FUNCTION(onResetUnusedColors) 
	#endif

	#ifndef GEODE_STATICS_onResume
		#define GEODE_STATICS_onResume
		GEODE_AS_STATIC_FUNCTION(onResume) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndExit
		#define GEODE_STATICS_onSaveAndExit
		GEODE_AS_STATIC_FUNCTION(onSaveAndExit) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndPlay
		#define GEODE_STATICS_onSaveAndPlay
		GEODE_AS_STATIC_FUNCTION(onSaveAndPlay) 
	#endif

	#ifndef GEODE_STATICS_onSelectAll
		#define GEODE_STATICS_onSelectAll
		GEODE_AS_STATIC_FUNCTION(onSelectAll) 
	#endif

	#ifndef GEODE_STATICS_onSelectAllLeft
		#define GEODE_STATICS_onSelectAllLeft
		GEODE_AS_STATIC_FUNCTION(onSelectAllLeft) 
	#endif

	#ifndef GEODE_STATICS_onSelectAllRight
		#define GEODE_STATICS_onSelectAllRight
		GEODE_AS_STATIC_FUNCTION(onSelectAllRight) 
	#endif

	#ifndef GEODE_STATICS_onSong
		#define GEODE_STATICS_onSong
		GEODE_AS_STATIC_FUNCTION(onSong) 
	#endif

	#ifndef GEODE_STATICS_onUnlockAllLayers
		#define GEODE_STATICS_onUnlockAllLayers
		GEODE_AS_STATIC_FUNCTION(onUnlockAllLayers) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
	#endif

	#ifndef GEODE_STATICS_toggleDebugDraw
		#define GEODE_STATICS_toggleDebugDraw
		GEODE_AS_STATIC_FUNCTION(toggleDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorBackground
		#define GEODE_STATICS_toggleEditorBackground
		GEODE_AS_STATIC_FUNCTION(toggleEditorBackground) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorColorMode
		#define GEODE_STATICS_toggleEditorColorMode
		GEODE_AS_STATIC_FUNCTION(toggleEditorColorMode) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorGrid
		#define GEODE_STATICS_toggleEditorGrid
		GEODE_AS_STATIC_FUNCTION(toggleEditorGrid) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorGround
		#define GEODE_STATICS_toggleEditorGround
		GEODE_AS_STATIC_FUNCTION(toggleEditorGround) 
	#endif

	#ifndef GEODE_STATICS_toggleEffectDuration
		#define GEODE_STATICS_toggleEffectDuration
		GEODE_AS_STATIC_FUNCTION(toggleEffectDuration) 
	#endif

	#ifndef GEODE_STATICS_toggleEffectLines
		#define GEODE_STATICS_toggleEffectLines
		GEODE_AS_STATIC_FUNCTION(toggleEffectLines) 
	#endif

	#ifndef GEODE_STATICS_toggleFollowPlayer
		#define GEODE_STATICS_toggleFollowPlayer
		GEODE_AS_STATIC_FUNCTION(toggleFollowPlayer) 
	#endif

	#ifndef GEODE_STATICS_toggleGridOnTop
		#define GEODE_STATICS_toggleGridOnTop
		GEODE_AS_STATIC_FUNCTION(toggleGridOnTop) 
	#endif

	#ifndef GEODE_STATICS_toggleHideInvisible
		#define GEODE_STATICS_toggleHideInvisible
		GEODE_AS_STATIC_FUNCTION(toggleHideInvisible) 
	#endif

	#ifndef GEODE_STATICS_toggleIgnoreDamage
		#define GEODE_STATICS_toggleIgnoreDamage
		GEODE_AS_STATIC_FUNCTION(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_STATICS_togglePlaytestMusic
		#define GEODE_STATICS_togglePlaytestMusic
		GEODE_AS_STATIC_FUNCTION(togglePlaytestMusic) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewAnim
		#define GEODE_STATICS_togglePreviewAnim
		GEODE_AS_STATIC_FUNCTION(togglePreviewAnim) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewParticles
		#define GEODE_STATICS_togglePreviewParticles
		GEODE_AS_STATIC_FUNCTION(togglePreviewParticles) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewShaders
		#define GEODE_STATICS_togglePreviewShaders
		GEODE_AS_STATIC_FUNCTION(togglePreviewShaders) 
	#endif

	#ifndef GEODE_STATICS_toggleRecordOrder
		#define GEODE_STATICS_toggleRecordOrder
		GEODE_AS_STATIC_FUNCTION(toggleRecordOrder) 
	#endif

	#ifndef GEODE_STATICS_toggleSelectFilter
		#define GEODE_STATICS_toggleSelectFilter
		GEODE_AS_STATIC_FUNCTION(toggleSelectFilter) 
	#endif

	#ifndef GEODE_STATICS_toggleShowObjectInfo
		#define GEODE_STATICS_toggleShowObjectInfo
		GEODE_AS_STATIC_FUNCTION(toggleShowObjectInfo) 
	#endif

	#ifndef GEODE_STATICS_uncheckAllPortals
		#define GEODE_STATICS_uncheckAllPortals
		GEODE_AS_STATIC_FUNCTION(uncheckAllPortals) 
	#endif

	#ifndef GEODE_STATICS_updateSongButton
		#define GEODE_STATICS_updateSongButton
		GEODE_AS_STATIC_FUNCTION(updateSongButton) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorPauseLayer> : ModifyBase<ModifyDerive<Der, EditorPauseLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorPauseLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorPauseLayer>>::ModifyBase;
		using Base = EditorPauseLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ff80, Optcall, EditorPauseLayer, create, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x242150, Membercall, EditorPauseLayer, doResetUnused, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa0020, Membercall, EditorPauseLayer, init, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2ef0, Membercall, EditorPauseLayer, onExitEditor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2f50, Membercall, EditorPauseLayer, onExitNoSave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa1f30, Membercall, EditorPauseLayer, onResetUnusedColors, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2640, Membercall, EditorPauseLayer, onResume, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2e40, Membercall, EditorPauseLayer, onSave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2eb0, Membercall, EditorPauseLayer, onSaveAndExit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2c90, Membercall, EditorPauseLayer, onSaveAndPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa20e0, Membercall, EditorPauseLayer, onSelectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2100, Membercall, EditorPauseLayer, onSelectAllLeft, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa25a0, Membercall, EditorPauseLayer, onSong, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2cf0, Membercall, EditorPauseLayer, playStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa26c0, Membercall, EditorPauseLayer, saveLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa1e70, Membercall, EditorPauseLayer, uncheckAllPortals, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa25d0, Membercall, EditorPauseLayer, updateSongButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa3080, Thiscall, EditorPauseLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa0730, Thiscall, EditorPauseLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2fc0, Thiscall, EditorPauseLayer, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
