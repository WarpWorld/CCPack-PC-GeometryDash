#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomMusicCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomMusicCell> : ModifyBase<ModifyDerive<Der, CustomMusicCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomMusicCell>>;
		using ModifyBase<ModifyDerive<Der, CustomMusicCell>>::ModifyBase;
		using Base = CustomMusicCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x838a0, Membercall, CustomMusicCell, loadFromObject, SongInfoObject*)
		}
	};
}
