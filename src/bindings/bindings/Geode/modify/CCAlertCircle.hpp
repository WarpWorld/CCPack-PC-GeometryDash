#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCAlertCircle.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, CCAlertCircle> : ModifyBase<ModifyDerive<Der, CCAlertCircle>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCAlertCircle>>;
		using ModifyBase<ModifyDerive<Der, CCAlertCircle>>::ModifyBase;
		using Base = CCAlertCircle;
        using Derived = Der;
		void apply() override {

		}
	};
}
