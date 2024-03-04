#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupPersistentItemTriggerPopup.hpp>
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
	struct ModifyDerive<Der, SetupPersistentItemTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupPersistentItemTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupPersistentItemTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupPersistentItemTriggerPopup>>::ModifyBase;
		using Base = SetupPersistentItemTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36b630, Optcall, SetupPersistentItemTriggerPopup, create, ItemTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36b6e0, Membercall, SetupPersistentItemTriggerPopup, init, ItemTriggerGameObject*, cocos2d::CCArray*)
		}
	};
}
