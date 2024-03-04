#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSettingsObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_objectFromDict
		#define GEODE_STATICS_objectFromDict
		GEODE_AS_STATIC_FUNCTION(objectFromDict) 
	#endif

	#ifndef GEODE_STATICS_setupColorsFromLegacyMode
		#define GEODE_STATICS_setupColorsFromLegacyMode
		GEODE_AS_STATIC_FUNCTION(setupColorsFromLegacyMode) 
	#endif

	#ifndef GEODE_STATICS_shouldUseYSection
		#define GEODE_STATICS_shouldUseYSection
		GEODE_AS_STATIC_FUNCTION(shouldUseYSection) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSettingsObject> : ModifyBase<ModifyDerive<Der, LevelSettingsObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSettingsObject>>;
		using ModifyBase<ModifyDerive<Der, LevelSettingsObject>>::ModifyBase;
		using Base = LevelSettingsObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24d2f0, Optcall, LevelSettingsObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24d7f0, Membercall, LevelSettingsObject, getSaveString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24eb70, Optcall, LevelSettingsObject, objectFromDict, cocos2d::CCDictionary*)
		}
	};
}
