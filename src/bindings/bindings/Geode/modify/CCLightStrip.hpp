#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCLightStrip.hpp>
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

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCLightStrip> : ModifyBase<ModifyDerive<Der, CCLightStrip>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCLightStrip>>;
		using ModifyBase<ModifyDerive<Der, CCLightStrip>>::ModifyBase;
		using Base = CCLightStrip;
        using Derived = Der;
		void apply() override {

		}
	};
}
