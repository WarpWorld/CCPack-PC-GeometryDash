#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCollisionStateTriggerPopup.hpp>
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
	struct ModifyDerive<Der, SetupCollisionStateTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupCollisionStateTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCollisionStateTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCollisionStateTriggerPopup>>::ModifyBase;
		using Base = SetupCollisionStateTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32a940, Optcall, SetupCollisionStateTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32a9f0, Membercall, SetupCollisionStateTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
