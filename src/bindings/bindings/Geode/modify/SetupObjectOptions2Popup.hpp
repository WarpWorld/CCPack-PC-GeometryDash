#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupObjectOptions2Popup.hpp>
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

	#ifndef GEODE_STATICS_onPlusButton
		#define GEODE_STATICS_onPlusButton
		GEODE_AS_STATIC_FUNCTION(onPlusButton) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupObjectOptions2Popup> : ModifyBase<ModifyDerive<Der, SetupObjectOptions2Popup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupObjectOptions2Popup>>;
		using ModifyBase<ModifyDerive<Der, SetupObjectOptions2Popup>>::ModifyBase;
		using Base = SetupObjectOptions2Popup;
        using Derived = Der;
		void apply() override {

		}
	};
}
