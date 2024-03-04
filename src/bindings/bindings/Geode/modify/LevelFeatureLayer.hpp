#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelFeatureLayer.hpp>
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

	#ifndef GEODE_STATICS_onDown
		#define GEODE_STATICS_onDown
		GEODE_AS_STATIC_FUNCTION(onDown) 
	#endif

	#ifndef GEODE_STATICS_onDown2
		#define GEODE_STATICS_onDown2
		GEODE_AS_STATIC_FUNCTION(onDown2) 
	#endif

	#ifndef GEODE_STATICS_onRemoveValues
		#define GEODE_STATICS_onRemoveValues
		GEODE_AS_STATIC_FUNCTION(onRemoveValues) 
	#endif

	#ifndef GEODE_STATICS_onSetEpicOnly
		#define GEODE_STATICS_onSetEpicOnly
		GEODE_AS_STATIC_FUNCTION(onSetEpicOnly) 
	#endif

	#ifndef GEODE_STATICS_onSetFeatured
		#define GEODE_STATICS_onSetFeatured
		GEODE_AS_STATIC_FUNCTION(onSetFeatured) 
	#endif

	#ifndef GEODE_STATICS_onToggleEpic
		#define GEODE_STATICS_onToggleEpic
		GEODE_AS_STATIC_FUNCTION(onToggleEpic) 
	#endif

	#ifndef GEODE_STATICS_onUp
		#define GEODE_STATICS_onUp
		GEODE_AS_STATIC_FUNCTION(onUp) 
	#endif

	#ifndef GEODE_STATICS_onUp2
		#define GEODE_STATICS_onUp2
		GEODE_AS_STATIC_FUNCTION(onUp2) 
	#endif

	#ifndef GEODE_STATICS_updateStars
		#define GEODE_STATICS_updateStars
		GEODE_AS_STATIC_FUNCTION(updateStars) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelFeatureLayer> : ModifyBase<ModifyDerive<Der, LevelFeatureLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelFeatureLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelFeatureLayer>>::ModifyBase;
		using Base = LevelFeatureLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
