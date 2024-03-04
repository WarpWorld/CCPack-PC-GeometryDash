#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicBrowser.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onArtistFilters
		#define GEODE_STATICS_onArtistFilters
		GEODE_AS_STATIC_FUNCTION(onArtistFilters) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onPlaybackControl
		#define GEODE_STATICS_onPlaybackControl
		GEODE_AS_STATIC_FUNCTION(onPlaybackControl) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onTagFilters
		#define GEODE_STATICS_onTagFilters
		GEODE_AS_STATIC_FUNCTION(onTagFilters) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLibrary
		#define GEODE_STATICS_onUpdateLibrary
		GEODE_AS_STATIC_FUNCTION(onUpdateLibrary) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_setupSongControls
		#define GEODE_STATICS_setupSongControls
		GEODE_AS_STATIC_FUNCTION(setupSongControls) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_trySetupMusicBrowser
		#define GEODE_STATICS_trySetupMusicBrowser
		GEODE_AS_STATIC_FUNCTION(trySetupMusicBrowser) 
	#endif

	#ifndef GEODE_STATICS_updatePageLabel
		#define GEODE_STATICS_updatePageLabel
		GEODE_AS_STATIC_FUNCTION(updatePageLabel) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCellIdx
		#define GEODE_STATICS_getSelectedCellIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicBrowser> : ModifyBase<ModifyDerive<Der, MusicBrowser>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicBrowser>>;
		using ModifyBase<ModifyDerive<Der, MusicBrowser>>::ModifyBase;
		using Base = MusicBrowser;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27eb00, Optcall, MusicBrowser, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27eba0, Membercall, MusicBrowser, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27fd00, Membercall, MusicBrowser, setupList, MusicSearchResult*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f760, Membercall, MusicBrowser, setupSongControls, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27fad0, Membercall, MusicBrowser, trySetupMusicBrowser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x280340, Membercall, MusicBrowser, updatePageLabel, )
		}
	};
}
