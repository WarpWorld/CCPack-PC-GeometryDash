#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSpawnParticlePopup.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, SetupSpawnParticlePopup> : ModifyBase<ModifyDerive<Der, SetupSpawnParticlePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSpawnParticlePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSpawnParticlePopup>>::ModifyBase;
		using Base = SetupSpawnParticlePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366430, Optcall, SetupSpawnParticlePopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3664e0, Membercall, SetupSpawnParticlePopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
