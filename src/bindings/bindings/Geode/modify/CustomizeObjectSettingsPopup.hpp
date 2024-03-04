#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomizeObjectSettingsPopup.hpp>
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

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomizeObjectSettingsPopup> : ModifyBase<ModifyDerive<Der, CustomizeObjectSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomizeObjectSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, CustomizeObjectSettingsPopup>>::ModifyBase;
		using Base = CustomizeObjectSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7a340, Optcall, CustomizeObjectSettingsPopup, create, GameObject*, cocos2d::CCArray*, CustomizeObjectLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7a3f0, Membercall, CustomizeObjectSettingsPopup, init, GameObject*, cocos2d::CCArray*, CustomizeObjectLayer*)
		}
	};
}
