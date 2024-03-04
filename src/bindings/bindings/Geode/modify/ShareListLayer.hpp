#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShareListLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onShare
		#define GEODE_STATICS_onShare
		GEODE_AS_STATIC_FUNCTION(onShare) 
	#endif

	#ifndef GEODE_STATICS_onUnlisted
		#define GEODE_STATICS_onUnlisted
		GEODE_AS_STATIC_FUNCTION(onUnlisted) 
	#endif

	#ifndef GEODE_STATICS_updateUnlistedF
		#define GEODE_STATICS_updateUnlistedF
		GEODE_AS_STATIC_FUNCTION(updateUnlistedF) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShareListLayer> : ModifyBase<ModifyDerive<Der, ShareListLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShareListLayer>>;
		using ModifyBase<ModifyDerive<Der, ShareListLayer>>::ModifyBase;
		using Base = ShareListLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
