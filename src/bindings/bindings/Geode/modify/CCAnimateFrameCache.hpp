#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCAnimateFrameCache.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedSpriteFrameCache
		#define GEODE_STATICS_sharedSpriteFrameCache
		GEODE_AS_STATIC_FUNCTION(sharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_STATICS_addCustomSpriteFramesWithFile
		#define GEODE_STATICS_addCustomSpriteFramesWithFile
		GEODE_AS_STATIC_FUNCTION(addCustomSpriteFramesWithFile) 
	#endif

	#ifndef GEODE_STATICS_addDict
		#define GEODE_STATICS_addDict
		GEODE_AS_STATIC_FUNCTION(addDict) 
	#endif

	#ifndef GEODE_STATICS_addSpriteFramesWithFile
		#define GEODE_STATICS_addSpriteFramesWithFile
		GEODE_AS_STATIC_FUNCTION(addSpriteFramesWithFile) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_purgeSharedSpriteFrameCache
		#define GEODE_STATICS_purgeSharedSpriteFrameCache
		GEODE_AS_STATIC_FUNCTION(purgeSharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFrames
		#define GEODE_STATICS_removeSpriteFrames
		GEODE_AS_STATIC_FUNCTION(removeSpriteFrames) 
	#endif

	#ifndef GEODE_STATICS_spriteFrameByName
		#define GEODE_STATICS_spriteFrameByName
		GEODE_AS_STATIC_FUNCTION(spriteFrameByName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCAnimateFrameCache> : ModifyBase<ModifyDerive<Der, CCAnimateFrameCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCAnimateFrameCache>>;
		using ModifyBase<ModifyDerive<Der, CCAnimateFrameCache>>::ModifyBase;
		using Base = CCAnimateFrameCache;
        using Derived = Der;
		void apply() override {

		}
	};
}
