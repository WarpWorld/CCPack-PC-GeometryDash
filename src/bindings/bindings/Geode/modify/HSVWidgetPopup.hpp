#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HSVWidgetPopup.hpp>
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, HSVWidgetPopup> : ModifyBase<ModifyDerive<Der, HSVWidgetPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HSVWidgetPopup>>;
		using ModifyBase<ModifyDerive<Der, HSVWidgetPopup>>::ModifyBase;
		using Base = HSVWidgetPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
