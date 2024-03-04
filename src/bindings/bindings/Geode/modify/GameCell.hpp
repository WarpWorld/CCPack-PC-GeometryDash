#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromString
		#define GEODE_STATICS_loadFromString
		GEODE_AS_STATIC_FUNCTION(loadFromString) 
	#endif

	#ifndef GEODE_STATICS_onTouch
		#define GEODE_STATICS_onTouch
		GEODE_AS_STATIC_FUNCTION(onTouch) 
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
	struct ModifyDerive<Der, GameCell> : ModifyBase<ModifyDerive<Der, GameCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameCell>>;
		using ModifyBase<ModifyDerive<Der, GameCell>>::ModifyBase;
		using Base = GameCell;
        using Derived = Der;
		void apply() override {

		}
	};
}
