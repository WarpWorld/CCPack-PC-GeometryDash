#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAdvFollowRetargetPopup.hpp>
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

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAdvFollowRetargetPopup> : ModifyBase<ModifyDerive<Der, SetupAdvFollowRetargetPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAdvFollowRetargetPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAdvFollowRetargetPopup>>::ModifyBase;
		using Base = SetupAdvFollowRetargetPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
