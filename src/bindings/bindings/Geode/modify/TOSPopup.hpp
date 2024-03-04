#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TOSPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onPrivacy
		#define GEODE_STATICS_onPrivacy
		GEODE_AS_STATIC_FUNCTION(onPrivacy) 
	#endif

	#ifndef GEODE_STATICS_onTOS
		#define GEODE_STATICS_onTOS
		GEODE_AS_STATIC_FUNCTION(onTOS) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TOSPopup> : ModifyBase<ModifyDerive<Der, TOSPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TOSPopup>>;
		using ModifyBase<ModifyDerive<Der, TOSPopup>>::ModifyBase;
		using Base = TOSPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2122e0, Thiscall, TOSPopup, init, )
		}
	};
}
