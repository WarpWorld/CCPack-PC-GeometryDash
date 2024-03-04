#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCAnimatedSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_cleanupSprite
		#define GEODE_STATICS_cleanupSprite
		GEODE_AS_STATIC_FUNCTION(cleanupSprite) 
	#endif

	#ifndef GEODE_STATICS_createWithType
		#define GEODE_STATICS_createWithType
		GEODE_AS_STATIC_FUNCTION(createWithType) 
	#endif

	#ifndef GEODE_STATICS_initWithType
		#define GEODE_STATICS_initWithType
		GEODE_AS_STATIC_FUNCTION(initWithType) 
	#endif

	#ifndef GEODE_STATICS_loadType
		#define GEODE_STATICS_loadType
		GEODE_AS_STATIC_FUNCTION(loadType) 
	#endif

	#ifndef GEODE_STATICS_runAnimation
		#define GEODE_STATICS_runAnimation
		GEODE_AS_STATIC_FUNCTION(runAnimation) 
	#endif

	#ifndef GEODE_STATICS_runAnimationForced
		#define GEODE_STATICS_runAnimationForced
		GEODE_AS_STATIC_FUNCTION(runAnimationForced) 
	#endif

	#ifndef GEODE_STATICS_stopTween
		#define GEODE_STATICS_stopTween
		GEODE_AS_STATIC_FUNCTION(stopTween) 
	#endif

	#ifndef GEODE_STATICS_switchToMode
		#define GEODE_STATICS_switchToMode
		GEODE_AS_STATIC_FUNCTION(switchToMode) 
	#endif

	#ifndef GEODE_STATICS_tweenToAnimation
		#define GEODE_STATICS_tweenToAnimation
		GEODE_AS_STATIC_FUNCTION(tweenToAnimation) 
	#endif

	#ifndef GEODE_STATICS_tweenToAnimationFinished
		#define GEODE_STATICS_tweenToAnimationFinished
		GEODE_AS_STATIC_FUNCTION(tweenToAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_willPlayAnimation
		#define GEODE_STATICS_willPlayAnimation
		GEODE_AS_STATIC_FUNCTION(willPlayAnimation) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

	#ifndef GEODE_STATICS_animationFinishedO
		#define GEODE_STATICS_animationFinishedO
		GEODE_AS_STATIC_FUNCTION(animationFinishedO) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCAnimatedSprite> : ModifyBase<ModifyDerive<Der, CCAnimatedSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCAnimatedSprite>>;
		using ModifyBase<ModifyDerive<Der, CCAnimatedSprite>>::ModifyBase;
		using Base = CCAnimatedSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21440, Membercall, CCAnimatedSprite, cleanupSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20c80, Membercall, CCAnimatedSprite, createWithType, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20d20, Membercall, CCAnimatedSprite, initWithType, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ec0, Membercall, CCAnimatedSprite, loadType, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21640, Membercall, CCAnimatedSprite, runAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216c0, Membercall, CCAnimatedSprite, runAnimationForced, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x214f0, Membercall, CCAnimatedSprite, switchToMode, spriteMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21750, Membercall, CCAnimatedSprite, tweenToAnimation, gd::string, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x219c0, Membercall, CCAnimatedSprite, tweenToAnimationFinished, )
		}
	};
}
