#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetLevelOrderPopup.hpp>
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

	#ifndef GEODE_STATICS_onOrderButton
		#define GEODE_STATICS_onOrderButton
		GEODE_AS_STATIC_FUNCTION(onOrderButton) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetLevelOrderPopup> : ModifyBase<ModifyDerive<Der, SetLevelOrderPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetLevelOrderPopup>>;
		using ModifyBase<ModifyDerive<Der, SetLevelOrderPopup>>::ModifyBase;
		using Base = SetLevelOrderPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
