#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameLevelOptionsLayer.hpp>
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

	#ifndef GEODE_STATICS_setupOptions
		#define GEODE_STATICS_setupOptions
		GEODE_AS_STATIC_FUNCTION(setupOptions) 
	#endif

	#ifndef GEODE_STATICS_didToggle
		#define GEODE_STATICS_didToggle
		GEODE_AS_STATIC_FUNCTION(didToggle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameLevelOptionsLayer> : ModifyBase<ModifyDerive<Der, GameLevelOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameLevelOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, GameLevelOptionsLayer>>::ModifyBase;
		using Base = GameLevelOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213d20, Thiscall, GameLevelOptionsLayer, setupOptions, )
		}
	};
}
