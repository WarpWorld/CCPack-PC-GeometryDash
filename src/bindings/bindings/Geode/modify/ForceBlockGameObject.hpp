#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ForceBlockGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_calculateForceToTarget
		#define GEODE_STATICS_calculateForceToTarget
		GEODE_AS_STATIC_FUNCTION(calculateForceToTarget) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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
	struct ModifyDerive<Der, ForceBlockGameObject> : ModifyBase<ModifyDerive<Der, ForceBlockGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ForceBlockGameObject>>;
		using ModifyBase<ModifyDerive<Der, ForceBlockGameObject>>::ModifyBase;
		using Base = ForceBlockGameObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
