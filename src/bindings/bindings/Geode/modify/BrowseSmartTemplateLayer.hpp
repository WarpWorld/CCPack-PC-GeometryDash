#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BrowseSmartTemplateLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addObjectToPage
		#define GEODE_STATICS_addObjectToPage
		GEODE_AS_STATIC_FUNCTION(addObjectToPage) 
	#endif

	#ifndef GEODE_STATICS_addPrefabMenuItem
		#define GEODE_STATICS_addPrefabMenuItem
		GEODE_AS_STATIC_FUNCTION(addPrefabMenuItem) 
	#endif

	#ifndef GEODE_STATICS_baseSetup
		#define GEODE_STATICS_baseSetup
		GEODE_AS_STATIC_FUNCTION(baseSetup) 
	#endif

	#ifndef GEODE_STATICS_createDots
		#define GEODE_STATICS_createDots
		GEODE_AS_STATIC_FUNCTION(createDots) 
	#endif

	#ifndef GEODE_STATICS_createPrefab
		#define GEODE_STATICS_createPrefab
		GEODE_AS_STATIC_FUNCTION(createPrefab) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onTemplateObject
		#define GEODE_STATICS_onTemplateObject
		GEODE_AS_STATIC_FUNCTION(onTemplateObject) 
	#endif

	#ifndef GEODE_STATICS_updateDots
		#define GEODE_STATICS_updateDots
		GEODE_AS_STATIC_FUNCTION(updateDots) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BrowseSmartTemplateLayer> : ModifyBase<ModifyDerive<Der, BrowseSmartTemplateLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BrowseSmartTemplateLayer>>;
		using ModifyBase<ModifyDerive<Der, BrowseSmartTemplateLayer>>::ModifyBase;
		using Base = BrowseSmartTemplateLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
