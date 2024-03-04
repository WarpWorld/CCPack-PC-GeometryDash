#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BitmapFontCache.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedFontCache
		#define GEODE_STATICS_sharedFontCache
		GEODE_AS_STATIC_FUNCTION(sharedFontCache) 
	#endif

	#ifndef GEODE_STATICS_fontWithConfigFile
		#define GEODE_STATICS_fontWithConfigFile
		GEODE_AS_STATIC_FUNCTION(fontWithConfigFile) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_purgeSharedFontCache
		#define GEODE_STATICS_purgeSharedFontCache
		GEODE_AS_STATIC_FUNCTION(purgeSharedFontCache) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BitmapFontCache> : ModifyBase<ModifyDerive<Der, BitmapFontCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BitmapFontCache>>;
		using ModifyBase<ModifyDerive<Der, BitmapFontCache>>::ModifyBase;
		using Base = BitmapFontCache;
        using Derived = Der;
		void apply() override {

		}
	};
}
