#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupResetTriggerPopup.hpp>
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
	struct ModifyDerive<Der, SetupResetTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupResetTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupResetTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupResetTriggerPopup>>::ModifyBase;
		using Base = SetupResetTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x367a20, Optcall, SetupResetTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x367ad0, Membercall, SetupResetTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
