#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_shouldReload
		#define GEODE_STATICS_shouldReload
		GEODE_AS_STATIC_FUNCTION(shouldReload) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_songIDChanged
		#define GEODE_STATICS_songIDChanged
		GEODE_AS_STATIC_FUNCTION(songIDChanged) 
	#endif

	#ifndef GEODE_STATICS_getActiveSongID
		#define GEODE_STATICS_getActiveSongID
		GEODE_AS_STATIC_FUNCTION(getActiveSongID) 
	#endif

	#ifndef GEODE_STATICS_getSongFileName
		#define GEODE_STATICS_getSongFileName
		GEODE_AS_STATIC_FUNCTION(getSongFileName) 
	#endif

	#ifndef GEODE_STATICS_getLevelSettings
		#define GEODE_STATICS_getLevelSettings
		GEODE_AS_STATIC_FUNCTION(getLevelSettings) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongCell> : ModifyBase<ModifyDerive<Der, CustomSongCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongCell>>;
		using ModifyBase<ModifyDerive<Der, CustomSongCell>>::ModifyBase;
		using Base = CustomSongCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x831a0, Membercall, CustomSongCell, loadFromObject, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x833a0, Membercall, CustomSongCell, updateBGColor, int)
		}
	};
}
