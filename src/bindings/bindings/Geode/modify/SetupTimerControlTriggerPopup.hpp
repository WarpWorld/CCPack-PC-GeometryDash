#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTimerControlTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupTimerControlTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupTimerControlTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTimerControlTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTimerControlTriggerPopup>>::ModifyBase;
		using Base = SetupTimerControlTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3617b0, Optcall, SetupTimerControlTriggerPopup, create, TimerTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x361860, Membercall, SetupTimerControlTriggerPopup, init, TimerTriggerGameObject*, cocos2d::CCArray*)
		}
	};
}
