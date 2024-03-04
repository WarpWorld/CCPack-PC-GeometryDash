#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MapPackCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromMapPack
		#define GEODE_STATICS_loadFromMapPack
		GEODE_AS_STATIC_FUNCTION(loadFromMapPack) 
	#endif

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_playCompleteEffect
		#define GEODE_STATICS_playCompleteEffect
		GEODE_AS_STATIC_FUNCTION(playCompleteEffect) 
	#endif

	#ifndef GEODE_STATICS_reloadCell
		#define GEODE_STATICS_reloadCell
		GEODE_AS_STATIC_FUNCTION(reloadCell) 
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
	struct ModifyDerive<Der, MapPackCell> : ModifyBase<ModifyDerive<Der, MapPackCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MapPackCell>>;
		using ModifyBase<ModifyDerive<Der, MapPackCell>>::ModifyBase;
		using Base = MapPackCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x812a0, Membercall, MapPackCell, loadFromMapPack, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81cf0, Membercall, MapPackCell, onClick, cocos2d::CCObject*)
		}
	};
}
