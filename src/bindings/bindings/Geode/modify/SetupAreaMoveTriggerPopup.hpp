#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaMoveTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addAreaDefaultControls
		#define GEODE_STATICS_addAreaDefaultControls
		GEODE_AS_STATIC_FUNCTION(addAreaDefaultControls) 
	#endif

	#ifndef GEODE_STATICS_getModeValues
		#define GEODE_STATICS_getModeValues
		GEODE_AS_STATIC_FUNCTION(getModeValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeEffectID
		#define GEODE_STATICS_onNextFreeEffectID
		GEODE_AS_STATIC_FUNCTION(onNextFreeEffectID) 
	#endif

	#ifndef GEODE_STATICS_onSpecialTarget
		#define GEODE_STATICS_onSpecialTarget
		GEODE_AS_STATIC_FUNCTION(onSpecialTarget) 
	#endif

	#ifndef GEODE_STATICS_updateEnterTargetIDState
		#define GEODE_STATICS_updateEnterTargetIDState
		GEODE_AS_STATIC_FUNCTION(updateEnterTargetIDState) 
	#endif

	#ifndef GEODE_STATICS_updateInputValue
		#define GEODE_STATICS_updateInputValue
		GEODE_AS_STATIC_FUNCTION(updateInputValue) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
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


	template<class Der>
	struct ModifyDerive<Der, SetupAreaMoveTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaMoveTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaMoveTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaMoveTriggerPopup>>::ModifyBase;
		using Base = SetupAreaMoveTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e580, Optcall, SetupAreaMoveTriggerPopup, create, EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e630, Membercall, SetupAreaMoveTriggerPopup, init, EnterEffectObject*, cocos2d::CCArray*)
		}
	};
}
