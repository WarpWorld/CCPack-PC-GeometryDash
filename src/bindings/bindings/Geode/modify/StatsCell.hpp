#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/StatsCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getTitleFromKey
		#define GEODE_STATICS_getTitleFromKey
		GEODE_AS_STATIC_FUNCTION(getTitleFromKey) 
	#endif

	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
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
	struct ModifyDerive<Der, StatsCell> : ModifyBase<ModifyDerive<Der, StatsCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, StatsCell>>;
		using ModifyBase<ModifyDerive<Der, StatsCell>>::ModifyBase;
		using Base = StatsCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82230, Membercall, StatsCell, loadFromObject, StatsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d560, Membercall, StatsCell, updateBGColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d5b0, Thiscall, StatsCell, draw, )
		}
	};
}
