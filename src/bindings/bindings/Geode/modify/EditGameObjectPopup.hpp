#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditGameObjectPopup.hpp>
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
	struct ModifyDerive<Der, EditGameObjectPopup> : ModifyBase<ModifyDerive<Der, EditGameObjectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditGameObjectPopup>>;
		using ModifyBase<ModifyDerive<Der, EditGameObjectPopup>>::ModifyBase;
		using Base = EditGameObjectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20f5a0, Optcall, EditGameObjectPopup, create, EffectGameObject*, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20f650, Membercall, EditGameObjectPopup, init, EffectGameObject*, cocos2d::CCArray*, bool)
		}
	};
}
