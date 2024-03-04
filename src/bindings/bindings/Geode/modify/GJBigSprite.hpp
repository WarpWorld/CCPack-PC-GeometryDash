#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJBigSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingSpriteAsync
		#define GEODE_STATICS_finishedLoadingSpriteAsync
		GEODE_AS_STATIC_FUNCTION(finishedLoadingSpriteAsync) 
	#endif

	#ifndef GEODE_STATICS_loadSpriteAsync
		#define GEODE_STATICS_loadSpriteAsync
		GEODE_AS_STATIC_FUNCTION(loadSpriteAsync) 
	#endif

	#ifndef GEODE_STATICS_unloadAll
		#define GEODE_STATICS_unloadAll
		GEODE_AS_STATIC_FUNCTION(unloadAll) 
	#endif

	#ifndef GEODE_STATICS_unloadSprite
		#define GEODE_STATICS_unloadSprite
		GEODE_AS_STATIC_FUNCTION(unloadSprite) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteVisibility
		#define GEODE_STATICS_updateSpriteVisibility
		GEODE_AS_STATIC_FUNCTION(updateSpriteVisibility) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJBigSprite> : ModifyBase<ModifyDerive<Der, GJBigSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJBigSprite>>;
		using ModifyBase<ModifyDerive<Der, GJBigSprite>>::ModifyBase;
		using Base = GJBigSprite;
        using Derived = Der;
		void apply() override {

		}
	};
}
