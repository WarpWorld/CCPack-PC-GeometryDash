#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAdvFollowEditPhysicsPopup.hpp>
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

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAdvFollowEditPhysicsPopup> : ModifyBase<ModifyDerive<Der, SetupAdvFollowEditPhysicsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAdvFollowEditPhysicsPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAdvFollowEditPhysicsPopup>>::ModifyBase;
		using Base = SetupAdvFollowEditPhysicsPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
