#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaTransformTriggerPopup.hpp>
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
	struct ModifyDerive<Der, SetupAreaTransformTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaTransformTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaTransformTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaTransformTriggerPopup>>::ModifyBase;
		using Base = SetupAreaTransformTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3205e0, Optcall, SetupAreaTransformTriggerPopup, create, EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x320690, Membercall, SetupAreaTransformTriggerPopup, init, EnterEffectObject*, cocos2d::CCArray*)
		}
	};
}
