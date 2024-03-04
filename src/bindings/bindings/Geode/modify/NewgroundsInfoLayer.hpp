#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NewgroundsInfoLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onArtists
		#define GEODE_STATICS_onArtists
		GEODE_AS_STATIC_FUNCTION(onArtists) 
	#endif

	#ifndef GEODE_STATICS_onChanges
		#define GEODE_STATICS_onChanges
		GEODE_AS_STATIC_FUNCTION(onChanges) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onGuidelines
		#define GEODE_STATICS_onGuidelines
		GEODE_AS_STATIC_FUNCTION(onGuidelines) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNewgrounds
		#define GEODE_STATICS_onNewgrounds
		GEODE_AS_STATIC_FUNCTION(onNewgrounds) 
	#endif

	#ifndef GEODE_STATICS_onSupporter
		#define GEODE_STATICS_onSupporter
		GEODE_AS_STATIC_FUNCTION(onSupporter) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NewgroundsInfoLayer> : ModifyBase<ModifyDerive<Der, NewgroundsInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NewgroundsInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, NewgroundsInfoLayer>>::ModifyBase;
		using Base = NewgroundsInfoLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
