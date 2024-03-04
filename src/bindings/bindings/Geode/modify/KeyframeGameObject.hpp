#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeyframeGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_updateShadowObjects
		#define GEODE_STATICS_updateShadowObjects
		GEODE_AS_STATIC_FUNCTION(updateShadowObjects) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
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
	struct ModifyDerive<Der, KeyframeGameObject> : ModifyBase<ModifyDerive<Der, KeyframeGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeyframeGameObject>>;
		using ModifyBase<ModifyDerive<Der, KeyframeGameObject>>::ModifyBase;
		using Base = KeyframeGameObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
