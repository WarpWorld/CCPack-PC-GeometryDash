#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameEffectsManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addParticleEffect
		#define GEODE_STATICS_addParticleEffect
		GEODE_AS_STATIC_FUNCTION(addParticleEffect) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_scaleParticle
		#define GEODE_STATICS_scaleParticle
		GEODE_AS_STATIC_FUNCTION(scaleParticle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameEffectsManager> : ModifyBase<ModifyDerive<Der, GameEffectsManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameEffectsManager>>;
		using ModifyBase<ModifyDerive<Der, GameEffectsManager>>::ModifyBase;
		using Base = GameEffectsManager;
        using Derived = Der;
		void apply() override {

		}
	};
}
