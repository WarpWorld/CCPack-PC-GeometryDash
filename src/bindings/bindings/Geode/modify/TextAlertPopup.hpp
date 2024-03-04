#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextAlertPopup.hpp>
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

	#ifndef GEODE_STATICS_setAlertPosition
		#define GEODE_STATICS_setAlertPosition
		GEODE_AS_STATIC_FUNCTION(setAlertPosition) 
	#endif

	#ifndef GEODE_STATICS_setLabelColor
		#define GEODE_STATICS_setLabelColor
		GEODE_AS_STATIC_FUNCTION(setLabelColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextAlertPopup> : ModifyBase<ModifyDerive<Der, TextAlertPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextAlertPopup>>;
		using ModifyBase<ModifyDerive<Der, TextAlertPopup>>::ModifyBase;
		using Base = TextAlertPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211c90, Optcall, TextAlertPopup, create, gd::string, float, float, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211de0, Membercall, TextAlertPopup, init, gd::string, float, float, int, gd::string)
		}
	};
}
