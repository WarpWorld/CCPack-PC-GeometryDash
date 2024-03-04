#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpecialAnimGameObject.hpp>
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

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_updateMainColor
		#define GEODE_STATICS_updateMainColor
		GEODE_AS_STATIC_FUNCTION(updateMainColor) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryColor
		#define GEODE_STATICS_updateSecondaryColor
		GEODE_AS_STATIC_FUNCTION(updateSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_updateSyncedAnimation
		#define GEODE_STATICS_updateSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(updateSyncedAnimation) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpecialAnimGameObject> : ModifyBase<ModifyDerive<Der, SpecialAnimGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpecialAnimGameObject>>;
		using ModifyBase<ModifyDerive<Der, SpecialAnimGameObject>>::ModifyBase;
		using Base = SpecialAnimGameObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
