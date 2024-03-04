#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJLocalLevelScoreCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromScore
		#define GEODE_STATICS_loadFromScore
		GEODE_AS_STATIC_FUNCTION(loadFromScore) 
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


	template<class Der>
	struct ModifyDerive<Der, GJLocalLevelScoreCell> : ModifyBase<ModifyDerive<Der, GJLocalLevelScoreCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJLocalLevelScoreCell>>;
		using ModifyBase<ModifyDerive<Der, GJLocalLevelScoreCell>>::ModifyBase;
		using Base = GJLocalLevelScoreCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x878f0, Membercall, GJLocalLevelScoreCell, loadFromScore, GJLocalScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x87b80, Membercall, GJLocalLevelScoreCell, updateBGColor, int)
		}
	};
}
