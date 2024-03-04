#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAudioTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addProxVolControls
		#define GEODE_STATICS_addProxVolControls
		GEODE_AS_STATIC_FUNCTION(addProxVolControls) 
	#endif

	#ifndef GEODE_STATICS_addTimeControls
		#define GEODE_STATICS_addTimeControls
		GEODE_AS_STATIC_FUNCTION(addTimeControls) 
	#endif

	#ifndef GEODE_STATICS_onProxMode
		#define GEODE_STATICS_onProxMode
		GEODE_AS_STATIC_FUNCTION(onProxMode) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialGroup
		#define GEODE_STATICS_updateSpecialGroup
		GEODE_AS_STATIC_FUNCTION(updateSpecialGroup) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAudioTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAudioTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAudioTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAudioTriggerPopup>>::ModifyBase;
		using Base = SetupAudioTriggerPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
