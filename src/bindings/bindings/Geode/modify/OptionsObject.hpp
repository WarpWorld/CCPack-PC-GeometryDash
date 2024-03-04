#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OptionsObject.hpp>
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

	#ifndef GEODE_STATICS_toggleState
		#define GEODE_STATICS_toggleState
		GEODE_AS_STATIC_FUNCTION(toggleState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OptionsObject> : ModifyBase<ModifyDerive<Der, OptionsObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OptionsObject>>;
		using ModifyBase<ModifyDerive<Der, OptionsObject>>::ModifyBase;
		using Base = OptionsObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
