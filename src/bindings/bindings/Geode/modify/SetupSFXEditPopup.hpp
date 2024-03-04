#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSFXEditPopup.hpp>
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
	struct ModifyDerive<Der, SetupSFXEditPopup> : ModifyBase<ModifyDerive<Der, SetupSFXEditPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSFXEditPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSFXEditPopup>>::ModifyBase;
		using Base = SetupSFXEditPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
