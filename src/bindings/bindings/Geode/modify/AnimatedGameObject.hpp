#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AnimatedGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_animationForID
		#define GEODE_STATICS_animationForID
		GEODE_AS_STATIC_FUNCTION(animationForID) 
	#endif

	#ifndef GEODE_STATICS_getTweenTime
		#define GEODE_STATICS_getTweenTime
		GEODE_AS_STATIC_FUNCTION(getTweenTime) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_playAnimation
		#define GEODE_STATICS_playAnimation
		GEODE_AS_STATIC_FUNCTION(playAnimation) 
	#endif

	#ifndef GEODE_STATICS_setupAnimatedSize
		#define GEODE_STATICS_setupAnimatedSize
		GEODE_AS_STATIC_FUNCTION(setupAnimatedSize) 
	#endif

	#ifndef GEODE_STATICS_setupChildSprites
		#define GEODE_STATICS_setupChildSprites
		GEODE_AS_STATIC_FUNCTION(setupChildSprites) 
	#endif

	#ifndef GEODE_STATICS_updateChildSpriteColor
		#define GEODE_STATICS_updateChildSpriteColor
		GEODE_AS_STATIC_FUNCTION(updateChildSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_updateObjectAnimation
		#define GEODE_STATICS_updateObjectAnimation
		GEODE_AS_STATIC_FUNCTION(updateObjectAnimation) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setChildColor
		#define GEODE_STATICS_setChildColor
		GEODE_AS_STATIC_FUNCTION(setChildColor) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_activateObject
		#define GEODE_STATICS_activateObject
		GEODE_AS_STATIC_FUNCTION(activateObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateObject
		#define GEODE_STATICS_deactivateObject
		GEODE_AS_STATIC_FUNCTION(deactivateObject) 
	#endif

	#ifndef GEODE_STATICS_setObjectColor
		#define GEODE_STATICS_setObjectColor
		GEODE_AS_STATIC_FUNCTION(setObjectColor) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

	#ifndef GEODE_STATICS_displayFrameChanged
		#define GEODE_STATICS_displayFrameChanged
		GEODE_AS_STATIC_FUNCTION(displayFrameChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AnimatedGameObject> : ModifyBase<ModifyDerive<Der, AnimatedGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AnimatedGameObject>>;
		using ModifyBase<ModifyDerive<Der, AnimatedGameObject>>::ModifyBase;
		using Base = AnimatedGameObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
