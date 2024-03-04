#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupRotateCommandPopup.hpp>
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

	#ifndef GEODE_STATICS_onInfiniteDuration
		#define GEODE_STATICS_onInfiniteDuration
		GEODE_AS_STATIC_FUNCTION(onInfiniteDuration) 
	#endif

	#ifndef GEODE_STATICS_updateControlVisibility
		#define GEODE_STATICS_updateControlVisibility
		GEODE_AS_STATIC_FUNCTION(updateControlVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateInputNode
		#define GEODE_STATICS_updateInputNode
		GEODE_AS_STATIC_FUNCTION(updateInputNode) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_triggerValueFromSliderValue
		#define GEODE_STATICS_triggerValueFromSliderValue
		GEODE_AS_STATIC_FUNCTION(triggerValueFromSliderValue) 
	#endif

	#ifndef GEODE_STATICS_triggerSliderValueFromValue
		#define GEODE_STATICS_triggerSliderValueFromValue
		GEODE_AS_STATIC_FUNCTION(triggerSliderValueFromValue) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupRotateCommandPopup> : ModifyBase<ModifyDerive<Der, SetupRotateCommandPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupRotateCommandPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupRotateCommandPopup>>::ModifyBase;
		using Base = SetupRotateCommandPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2188f0, Optcall, SetupRotateCommandPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2189a0, Membercall, SetupRotateCommandPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
