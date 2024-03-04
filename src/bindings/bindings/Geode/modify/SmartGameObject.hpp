#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SmartGameObject.hpp>
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

	#ifndef GEODE_STATICS_updateSmartFrame
		#define GEODE_STATICS_updateSmartFrame
		GEODE_AS_STATIC_FUNCTION(updateSmartFrame) 
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
	struct ModifyDerive<Der, SmartGameObject> : ModifyBase<ModifyDerive<Der, SmartGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SmartGameObject>>;
		using ModifyBase<ModifyDerive<Der, SmartGameObject>>::ModifyBase;
		using Base = SmartGameObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
