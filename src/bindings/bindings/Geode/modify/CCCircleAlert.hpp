#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCircleAlert.hpp>
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
	struct ModifyDerive<Der, CCCircleAlert> : ModifyBase<ModifyDerive<Der, CCCircleAlert>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCCircleAlert>>;
		using ModifyBase<ModifyDerive<Der, CCCircleAlert>>::ModifyBase;
		using Base = CCCircleAlert;
        using Derived = Der;
		void apply() override {

		}
	};
}
