#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupOptionsTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addOption
		#define GEODE_STATICS_addOption
		GEODE_AS_STATIC_FUNCTION(addOption) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupOptionsTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupOptionsTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupOptionsTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupOptionsTriggerPopup>>::ModifyBase;
		using Base = SetupOptionsTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x340390, Optcall, SetupOptionsTriggerPopup, create, GameOptionsTrigger*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x340440, Membercall, SetupOptionsTriggerPopup, init, GameOptionsTrigger*, cocos2d::CCArray*)
		}
	};
}
