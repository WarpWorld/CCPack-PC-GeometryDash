#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupObjectTogglePopup.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupObjectTogglePopup> : ModifyBase<ModifyDerive<Der, SetupObjectTogglePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupObjectTogglePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupObjectTogglePopup>>::ModifyBase;
		using Base = SetupObjectTogglePopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
