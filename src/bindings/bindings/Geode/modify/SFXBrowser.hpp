#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXBrowser.hpp>
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

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCredits
		#define GEODE_STATICS_onCredits
		GEODE_AS_STATIC_FUNCTION(onCredits) 
	#endif

	#ifndef GEODE_STATICS_onExitFolder
		#define GEODE_STATICS_onExitFolder
		GEODE_AS_STATIC_FUNCTION(onExitFolder) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onSorting
		#define GEODE_STATICS_onSorting
		GEODE_AS_STATIC_FUNCTION(onSorting) 
	#endif

	#ifndef GEODE_STATICS_onToggleCompactMode
		#define GEODE_STATICS_onToggleCompactMode
		GEODE_AS_STATIC_FUNCTION(onToggleCompactMode) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLibrary
		#define GEODE_STATICS_onUpdateLibrary
		GEODE_AS_STATIC_FUNCTION(onUpdateLibrary) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_trySetupSFXBrowser
		#define GEODE_STATICS_trySetupSFXBrowser
		GEODE_AS_STATIC_FUNCTION(trySetupSFXBrowser) 
	#endif

	#ifndef GEODE_STATICS_updatePageLabel
		#define GEODE_STATICS_updatePageLabel
		GEODE_AS_STATIC_FUNCTION(updatePageLabel) 
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

	#ifndef GEODE_STATICS_sortSelectClosed
		#define GEODE_STATICS_sortSelectClosed
		GEODE_AS_STATIC_FUNCTION(sortSelectClosed) 
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

	#ifndef GEODE_STATICS_shouldSnapToSelected
		#define GEODE_STATICS_shouldSnapToSelected
		GEODE_AS_STATIC_FUNCTION(shouldSnapToSelected) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXBrowser> : ModifyBase<ModifyDerive<Der, SFXBrowser>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXBrowser>>;
		using ModifyBase<ModifyDerive<Der, SFXBrowser>>::ModifyBase;
		using Base = SFXBrowser;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378110, Optcall, SFXBrowser, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3781b0, Membercall, SFXBrowser, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379250, Membercall, SFXBrowser, setupList, SFXSearchResult*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379010, Membercall, SFXBrowser, trySetupSFXBrowser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379ea0, Membercall, SFXBrowser, updatePageLabel, )
		}
	};
}
