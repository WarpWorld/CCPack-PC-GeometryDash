#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpawnTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addRemap
		#define GEODE_STATICS_addRemap
		GEODE_AS_STATIC_FUNCTION(addRemap) 
	#endif

	#ifndef GEODE_STATICS_changeRemap
		#define GEODE_STATICS_changeRemap
		GEODE_AS_STATIC_FUNCTION(changeRemap) 
	#endif

	#ifndef GEODE_STATICS_removeRemap
		#define GEODE_STATICS_removeRemap
		GEODE_AS_STATIC_FUNCTION(removeRemap) 
	#endif

	#ifndef GEODE_STATICS_updateRemapKeys
		#define GEODE_STATICS_updateRemapKeys
		GEODE_AS_STATIC_FUNCTION(updateRemapKeys) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
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
	struct ModifyDerive<Der, SpawnTriggerGameObject> : ModifyBase<ModifyDerive<Der, SpawnTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpawnTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, SpawnTriggerGameObject>>::ModifyBase;
		using Base = SpawnTriggerGameObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
