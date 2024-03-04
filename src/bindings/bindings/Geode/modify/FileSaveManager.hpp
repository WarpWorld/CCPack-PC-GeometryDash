#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FileSaveManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_getStoreData
		#define GEODE_STATICS_getStoreData
		GEODE_AS_STATIC_FUNCTION(getStoreData) 
	#endif

	#ifndef GEODE_STATICS_loadDataFromFile
		#define GEODE_STATICS_loadDataFromFile
		GEODE_AS_STATIC_FUNCTION(loadDataFromFile) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FileSaveManager> : ModifyBase<ModifyDerive<Der, FileSaveManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FileSaveManager>>;
		using ModifyBase<ModifyDerive<Der, FileSaveManager>>::ModifyBase;
		using Base = FileSaveManager;
        using Derived = Der;
		void apply() override {

		}
	};
}
