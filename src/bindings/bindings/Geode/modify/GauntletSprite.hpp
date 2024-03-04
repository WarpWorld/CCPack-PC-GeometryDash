#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GauntletSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addLockedSprite
		#define GEODE_STATICS_addLockedSprite
		GEODE_AS_STATIC_FUNCTION(addLockedSprite) 
	#endif

	#ifndef GEODE_STATICS_addNormalSprite
		#define GEODE_STATICS_addNormalSprite
		GEODE_AS_STATIC_FUNCTION(addNormalSprite) 
	#endif

	#ifndef GEODE_STATICS_colorForType
		#define GEODE_STATICS_colorForType
		GEODE_AS_STATIC_FUNCTION(colorForType) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_luminanceForType
		#define GEODE_STATICS_luminanceForType
		GEODE_AS_STATIC_FUNCTION(luminanceForType) 
	#endif

	#ifndef GEODE_STATICS_toggleLockedSprite
		#define GEODE_STATICS_toggleLockedSprite
		GEODE_AS_STATIC_FUNCTION(toggleLockedSprite) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GauntletSprite> : ModifyBase<ModifyDerive<Der, GauntletSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GauntletSprite>>;
		using ModifyBase<ModifyDerive<Der, GauntletSprite>>::ModifyBase;
		using Base = GauntletSprite;
        using Derived = Der;
		void apply() override {

		}
	};
}
