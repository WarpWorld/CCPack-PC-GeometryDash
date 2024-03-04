#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EnterEffectObject.hpp>
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

	#ifndef GEODE_STATICS_resetEnterAnimValues
		#define GEODE_STATICS_resetEnterAnimValues
		GEODE_AS_STATIC_FUNCTION(resetEnterAnimValues) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EnterEffectObject> : ModifyBase<ModifyDerive<Der, EnterEffectObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EnterEffectObject>>;
		using ModifyBase<ModifyDerive<Der, EnterEffectObject>>::ModifyBase;
		using Base = EnterEffectObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
