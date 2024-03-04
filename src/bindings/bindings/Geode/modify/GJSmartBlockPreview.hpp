#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSmartBlockPreview.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addChance
		#define GEODE_STATICS_addChance
		GEODE_AS_STATIC_FUNCTION(addChance) 
	#endif

	#ifndef GEODE_STATICS_addCount
		#define GEODE_STATICS_addCount
		GEODE_AS_STATIC_FUNCTION(addCount) 
	#endif

	#ifndef GEODE_STATICS_addPreview
		#define GEODE_STATICS_addPreview
		GEODE_AS_STATIC_FUNCTION(addPreview) 
	#endif

	#ifndef GEODE_STATICS_addTemplateGuide
		#define GEODE_STATICS_addTemplateGuide
		GEODE_AS_STATIC_FUNCTION(addTemplateGuide) 
	#endif

	#ifndef GEODE_STATICS_createInfoLabel
		#define GEODE_STATICS_createInfoLabel
		GEODE_AS_STATIC_FUNCTION(createInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_toggleSelectItem
		#define GEODE_STATICS_toggleSelectItem
		GEODE_AS_STATIC_FUNCTION(toggleSelectItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSmartBlockPreview> : ModifyBase<ModifyDerive<Der, GJSmartBlockPreview>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSmartBlockPreview>>;
		using ModifyBase<ModifyDerive<Der, GJSmartBlockPreview>>::ModifyBase;
		using Base = GJSmartBlockPreview;
        using Derived = Der;
		void apply() override {

		}
	};
}
