#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DungeonBarsSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_animateOutBars
		#define GEODE_STATICS_animateOutBars
		GEODE_AS_STATIC_FUNCTION(animateOutBars) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DungeonBarsSprite> : ModifyBase<ModifyDerive<Der, DungeonBarsSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DungeonBarsSprite>>;
		using ModifyBase<ModifyDerive<Der, DungeonBarsSprite>>::ModifyBase;
		using Base = DungeonBarsSprite;
        using Derived = Der;
		void apply() override {

		}
	};
}
