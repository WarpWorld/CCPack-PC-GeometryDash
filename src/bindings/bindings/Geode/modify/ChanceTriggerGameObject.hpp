#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ChanceTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_editChanceObject
		#define GEODE_STATICS_editChanceObject
		GEODE_AS_STATIC_FUNCTION(editChanceObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_remapChanceObjects
		#define GEODE_STATICS_remapChanceObjects
		GEODE_AS_STATIC_FUNCTION(remapChanceObjects) 
	#endif

	#ifndef GEODE_STATICS_revertChanceRemap
		#define GEODE_STATICS_revertChanceRemap
		GEODE_AS_STATIC_FUNCTION(revertChanceRemap) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ChanceTriggerGameObject> : ModifyBase<ModifyDerive<Der, ChanceTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ChanceTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, ChanceTriggerGameObject>>::ModifyBase;
		using Base = ChanceTriggerGameObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
