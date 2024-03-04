#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSFXDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sfxObjectSelected
		#define GEODE_STATICS_sfxObjectSelected
		GEODE_AS_STATIC_FUNCTION(sfxObjectSelected) 
	#endif

	#ifndef GEODE_STATICS_getActiveSFXID
		#define GEODE_STATICS_getActiveSFXID
		GEODE_AS_STATIC_FUNCTION(getActiveSFXID) 
	#endif

	#ifndef GEODE_STATICS_overridePlaySFX
		#define GEODE_STATICS_overridePlaySFX
		GEODE_AS_STATIC_FUNCTION(overridePlaySFX) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSFXDelegate> : ModifyBase<ModifyDerive<Der, CustomSFXDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSFXDelegate>>;
		using ModifyBase<ModifyDerive<Der, CustomSFXDelegate>>::ModifyBase;
		using Base = CustomSFXDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
