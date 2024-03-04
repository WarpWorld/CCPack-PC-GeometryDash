#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCURLObject.hpp>
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
	struct ModifyDerive<Der, CCURLObject> : ModifyBase<ModifyDerive<Der, CCURLObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCURLObject>>;
		using ModifyBase<ModifyDerive<Der, CCURLObject>>::ModifyBase;
		using Base = CCURLObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
