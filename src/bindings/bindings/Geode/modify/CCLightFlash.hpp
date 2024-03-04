#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCLightFlash.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_cleanupFlash
		#define GEODE_STATICS_cleanupFlash
		GEODE_AS_STATIC_FUNCTION(cleanupFlash) 
	#endif

	#ifndef GEODE_STATICS_fadeAndRemove
		#define GEODE_STATICS_fadeAndRemove
		GEODE_AS_STATIC_FUNCTION(fadeAndRemove) 
	#endif

	#ifndef GEODE_STATICS_playEffect
		#define GEODE_STATICS_playEffect
		GEODE_AS_STATIC_FUNCTION(playEffect) 
	#endif

	#ifndef GEODE_STATICS_removeLights
		#define GEODE_STATICS_removeLights
		GEODE_AS_STATIC_FUNCTION(removeLights) 
	#endif

	#ifndef GEODE_STATICS_showFlash
		#define GEODE_STATICS_showFlash
		GEODE_AS_STATIC_FUNCTION(showFlash) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCLightFlash> : ModifyBase<ModifyDerive<Der, CCLightFlash>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCLightFlash>>;
		using ModifyBase<ModifyDerive<Der, CCLightFlash>>::ModifyBase;
		using Base = CCLightFlash;
        using Derived = Der;
		void apply() override {

		}
	};
}
