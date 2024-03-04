#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getSFXRefID
		#define GEODE_STATICS_getSFXRefID
		GEODE_AS_STATIC_FUNCTION(getSFXRefID) 
	#endif

	#ifndef GEODE_STATICS_getUniqueSFXID
		#define GEODE_STATICS_getUniqueSFXID
		GEODE_AS_STATIC_FUNCTION(getUniqueSFXID) 
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
	struct ModifyDerive<Der, SFXTriggerGameObject> : ModifyBase<ModifyDerive<Der, SFXTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, SFXTriggerGameObject>>::ModifyBase;
		using Base = SFXTriggerGameObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
