#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MultiTriggerPopup.hpp>
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
	struct ModifyDerive<Der, MultiTriggerPopup> : ModifyBase<ModifyDerive<Der, MultiTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MultiTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, MultiTriggerPopup>>::ModifyBase;
		using Base = MultiTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366f20, Optcall, MultiTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366fd0, Membercall, MultiTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
