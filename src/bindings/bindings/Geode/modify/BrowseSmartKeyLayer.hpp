#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BrowseSmartKeyLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addChanceToSelected
		#define GEODE_STATICS_addChanceToSelected
		GEODE_AS_STATIC_FUNCTION(addChanceToSelected) 
	#endif

	#ifndef GEODE_STATICS_createTemplateObjects
		#define GEODE_STATICS_createTemplateObjects
		GEODE_AS_STATIC_FUNCTION(createTemplateObjects) 
	#endif

	#ifndef GEODE_STATICS_deletedSelectedItems
		#define GEODE_STATICS_deletedSelectedItems
		GEODE_AS_STATIC_FUNCTION(deletedSelectedItems) 
	#endif

	#ifndef GEODE_STATICS_getAllSelectedBlocks
		#define GEODE_STATICS_getAllSelectedBlocks
		GEODE_AS_STATIC_FUNCTION(getAllSelectedBlocks) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onButton
		#define GEODE_STATICS_onButton
		GEODE_AS_STATIC_FUNCTION(onButton) 
	#endif

	#ifndef GEODE_STATICS_onPrefabObject
		#define GEODE_STATICS_onPrefabObject
		GEODE_AS_STATIC_FUNCTION(onPrefabObject) 
	#endif

	#ifndef GEODE_STATICS_updateChanceValues
		#define GEODE_STATICS_updateChanceValues
		GEODE_AS_STATIC_FUNCTION(updateChanceValues) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BrowseSmartKeyLayer> : ModifyBase<ModifyDerive<Der, BrowseSmartKeyLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BrowseSmartKeyLayer>>;
		using ModifyBase<ModifyDerive<Der, BrowseSmartKeyLayer>>::ModifyBase;
		using Base = BrowseSmartKeyLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
