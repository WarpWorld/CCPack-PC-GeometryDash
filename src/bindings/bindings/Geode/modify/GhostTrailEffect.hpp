#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GhostTrailEffect.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_doBlendAdditive
		#define GEODE_STATICS_doBlendAdditive
		GEODE_AS_STATIC_FUNCTION(doBlendAdditive) 
	#endif

	#ifndef GEODE_STATICS_runWithTarget
		#define GEODE_STATICS_runWithTarget
		GEODE_AS_STATIC_FUNCTION(runWithTarget) 
	#endif

	#ifndef GEODE_STATICS_stopTrail
		#define GEODE_STATICS_stopTrail
		GEODE_AS_STATIC_FUNCTION(stopTrail) 
	#endif

	#ifndef GEODE_STATICS_trailSnapshot
		#define GEODE_STATICS_trailSnapshot
		GEODE_AS_STATIC_FUNCTION(trailSnapshot) 
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
	struct ModifyDerive<Der, GhostTrailEffect> : ModifyBase<ModifyDerive<Der, GhostTrailEffect>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GhostTrailEffect>>;
		using ModifyBase<ModifyDerive<Der, GhostTrailEffect>>::ModifyBase;
		using Base = GhostTrailEffect;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46b20, Optcall, GhostTrailEffect, create, )
		}
	};
}
