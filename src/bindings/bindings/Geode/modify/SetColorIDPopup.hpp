#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetColorIDPopup.hpp>
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

	#ifndef GEODE_STATICS_onSelectSpecialColor
		#define GEODE_STATICS_onSelectSpecialColor
		GEODE_AS_STATIC_FUNCTION(onSelectSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetColorIDPopup> : ModifyBase<ModifyDerive<Der, SetColorIDPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetColorIDPopup>>;
		using ModifyBase<ModifyDerive<Der, SetColorIDPopup>>::ModifyBase;
		using Base = SetColorIDPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
