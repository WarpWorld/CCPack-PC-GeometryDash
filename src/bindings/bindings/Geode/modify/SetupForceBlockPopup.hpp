#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupForceBlockPopup.hpp>
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
	struct ModifyDerive<Der, SetupForceBlockPopup> : ModifyBase<ModifyDerive<Der, SetupForceBlockPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupForceBlockPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupForceBlockPopup>>::ModifyBase;
		using Base = SetupForceBlockPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
