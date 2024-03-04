#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSettingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBGArt
		#define GEODE_STATICS_onBGArt
		GEODE_AS_STATIC_FUNCTION(onBGArt) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCol
		#define GEODE_STATICS_onCol
		GEODE_AS_STATIC_FUNCTION(onCol) 
	#endif

	#ifndef GEODE_STATICS_onDisable
		#define GEODE_STATICS_onDisable
		GEODE_AS_STATIC_FUNCTION(onDisable) 
	#endif

	#ifndef GEODE_STATICS_onFGArt
		#define GEODE_STATICS_onFGArt
		GEODE_AS_STATIC_FUNCTION(onFGArt) 
	#endif

	#ifndef GEODE_STATICS_onGameplayMode
		#define GEODE_STATICS_onGameplayMode
		GEODE_AS_STATIC_FUNCTION(onGameplayMode) 
	#endif

	#ifndef GEODE_STATICS_onGArt
		#define GEODE_STATICS_onGArt
		GEODE_AS_STATIC_FUNCTION(onGArt) 
	#endif

	#ifndef GEODE_STATICS_onLiveEdit
		#define GEODE_STATICS_onLiveEdit
		GEODE_AS_STATIC_FUNCTION(onLiveEdit) 
	#endif

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onOptionToggle
		#define GEODE_STATICS_onOptionToggle
		GEODE_AS_STATIC_FUNCTION(onOptionToggle) 
	#endif

	#ifndef GEODE_STATICS_onSelectFont
		#define GEODE_STATICS_onSelectFont
		GEODE_AS_STATIC_FUNCTION(onSelectFont) 
	#endif

	#ifndef GEODE_STATICS_onSelectMode
		#define GEODE_STATICS_onSelectMode
		GEODE_AS_STATIC_FUNCTION(onSelectMode) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpeed
		#define GEODE_STATICS_onSelectSpeed
		GEODE_AS_STATIC_FUNCTION(onSelectSpeed) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onShowPicker
		#define GEODE_STATICS_onShowPicker
		GEODE_AS_STATIC_FUNCTION(onShowPicker) 
	#endif

	#ifndef GEODE_STATICS_onSpeed
		#define GEODE_STATICS_onSpeed
		GEODE_AS_STATIC_FUNCTION(onSpeed) 
	#endif

	#ifndef GEODE_STATICS_showPicker
		#define GEODE_STATICS_showPicker
		GEODE_AS_STATIC_FUNCTION(showPicker) 
	#endif

	#ifndef GEODE_STATICS_updateColorSprite
		#define GEODE_STATICS_updateColorSprite
		GEODE_AS_STATIC_FUNCTION(updateColorSprite) 
	#endif

	#ifndef GEODE_STATICS_updateColorSprites
		#define GEODE_STATICS_updateColorSprites
		GEODE_AS_STATIC_FUNCTION(updateColorSprites) 
	#endif

	#ifndef GEODE_STATICS_updateGameplayModeButtons
		#define GEODE_STATICS_updateGameplayModeButtons
		GEODE_AS_STATIC_FUNCTION(updateGameplayModeButtons) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_selectArtClosed
		#define GEODE_STATICS_selectArtClosed
		GEODE_AS_STATIC_FUNCTION(selectArtClosed) 
	#endif

	#ifndef GEODE_STATICS_selectSettingClosed
		#define GEODE_STATICS_selectSettingClosed
		GEODE_AS_STATIC_FUNCTION(selectSettingClosed) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSettingsLayer> : ModifyBase<ModifyDerive<Der, LevelSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelSettingsLayer>>::ModifyBase;
		using Base = LevelSettingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26cd70, Optcall, LevelSettingsLayer, create, LevelSettingsObject*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26ce20, Membercall, LevelSettingsLayer, init, LevelSettingsObject*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26f870, Membercall, LevelSettingsLayer, updateColorSprite, ColorChannelSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26f810, Membercall, LevelSettingsLayer, updateColorSprites, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26f9f0, Thiscall, LevelSettingsLayer, selectArtClosed, SelectArtLayer*)
		}
	};
}
