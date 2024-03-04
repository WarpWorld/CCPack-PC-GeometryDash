#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupEnterTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_onEnterType
		#define GEODE_STATICS_onEnterType
		GEODE_AS_STATIC_FUNCTION(onEnterType) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupEnterTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupEnterTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupEnterTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupEnterTriggerPopup>>::ModifyBase;
		using Base = SetupEnterTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x205930, Optcall, SetupEnterTriggerPopup, create, EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2059e0, Membercall, SetupEnterTriggerPopup, init, EnterEffectObject*, cocos2d::CCArray*)
		}
	};
}
