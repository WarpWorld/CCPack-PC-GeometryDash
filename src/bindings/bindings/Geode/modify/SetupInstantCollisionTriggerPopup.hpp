#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupInstantCollisionTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_updateSpecialNodes
		#define GEODE_STATICS_updateSpecialNodes
		GEODE_AS_STATIC_FUNCTION(updateSpecialNodes) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupInstantCollisionTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupInstantCollisionTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupInstantCollisionTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupInstantCollisionTriggerPopup>>::ModifyBase;
		using Base = SetupInstantCollisionTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32a2a0, Optcall, SetupInstantCollisionTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32a350, Membercall, SetupInstantCollisionTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
