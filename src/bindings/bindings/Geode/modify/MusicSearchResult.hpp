#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicSearchResult.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_applyArtistFilters
		#define GEODE_STATICS_applyArtistFilters
		GEODE_AS_STATIC_FUNCTION(applyArtistFilters) 
	#endif

	#ifndef GEODE_STATICS_applyTagFilters
		#define GEODE_STATICS_applyTagFilters
		GEODE_AS_STATIC_FUNCTION(applyTagFilters) 
	#endif

	#ifndef GEODE_STATICS_createArtistFilterObjects
		#define GEODE_STATICS_createArtistFilterObjects
		GEODE_AS_STATIC_FUNCTION(createArtistFilterObjects) 
	#endif

	#ifndef GEODE_STATICS_createTagFilterObjects
		#define GEODE_STATICS_createTagFilterObjects
		GEODE_AS_STATIC_FUNCTION(createTagFilterObjects) 
	#endif

	#ifndef GEODE_STATICS_getFilesMatchingSearch
		#define GEODE_STATICS_getFilesMatchingSearch
		GEODE_AS_STATIC_FUNCTION(getFilesMatchingSearch) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateFutureCount
		#define GEODE_STATICS_updateFutureCount
		GEODE_AS_STATIC_FUNCTION(updateFutureCount) 
	#endif

	#ifndef GEODE_STATICS_updateObjects
		#define GEODE_STATICS_updateObjects
		GEODE_AS_STATIC_FUNCTION(updateObjects) 
	#endif

	#ifndef GEODE_STATICS_stateChanged
		#define GEODE_STATICS_stateChanged
		GEODE_AS_STATIC_FUNCTION(stateChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicSearchResult> : ModifyBase<ModifyDerive<Der, MusicSearchResult>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicSearchResult>>;
		using ModifyBase<ModifyDerive<Der, MusicSearchResult>>::ModifyBase;
		using Base = MusicSearchResult;
        using Derived = Der;
		void apply() override {

		}
	};
}
