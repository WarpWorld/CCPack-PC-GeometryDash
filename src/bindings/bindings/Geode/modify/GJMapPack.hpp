#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMapPack.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_completedMaps
		#define GEODE_STATICS_completedMaps
		GEODE_AS_STATIC_FUNCTION(completedMaps) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedMapPack
		#define GEODE_STATICS_hasCompletedMapPack
		GEODE_AS_STATIC_FUNCTION(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_STATICS_parsePackColors
		#define GEODE_STATICS_parsePackColors
		GEODE_AS_STATIC_FUNCTION(parsePackColors) 
	#endif

	#ifndef GEODE_STATICS_parsePackLevels
		#define GEODE_STATICS_parsePackLevels
		GEODE_AS_STATIC_FUNCTION(parsePackLevels) 
	#endif

	#ifndef GEODE_STATICS_totalMaps
		#define GEODE_STATICS_totalMaps
		GEODE_AS_STATIC_FUNCTION(totalMaps) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMapPack> : ModifyBase<ModifyDerive<Der, GJMapPack>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMapPack>>;
		using ModifyBase<ModifyDerive<Der, GJMapPack>>::ModifyBase;
		using Base = GJMapPack;
        using Derived = Der;
		void apply() override {

		}
	};
}
