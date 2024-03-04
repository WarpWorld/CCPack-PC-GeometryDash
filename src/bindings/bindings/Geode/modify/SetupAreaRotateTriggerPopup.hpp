#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaRotateTriggerPopup.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, SetupAreaRotateTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaRotateTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaRotateTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaRotateTriggerPopup>>::ModifyBase;
		using Base = SetupAreaRotateTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x320c00, Optcall, SetupAreaRotateTriggerPopup, create, EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x320cb0, Membercall, SetupAreaRotateTriggerPopup, init, EnterEffectObject*, cocos2d::CCArray*)
		}
	};
}
