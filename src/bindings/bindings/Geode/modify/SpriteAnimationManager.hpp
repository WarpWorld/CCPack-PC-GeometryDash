#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpriteAnimationManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

	#ifndef GEODE_STATICS_callAnimationFinished
		#define GEODE_STATICS_callAnimationFinished
		GEODE_AS_STATIC_FUNCTION(callAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_createAnimations
		#define GEODE_STATICS_createAnimations
		GEODE_AS_STATIC_FUNCTION(createAnimations) 
	#endif

	#ifndef GEODE_STATICS_createWithOwner
		#define GEODE_STATICS_createWithOwner
		GEODE_AS_STATIC_FUNCTION(createWithOwner) 
	#endif

	#ifndef GEODE_STATICS_doCleanup
		#define GEODE_STATICS_doCleanup
		GEODE_AS_STATIC_FUNCTION(doCleanup) 
	#endif

	#ifndef GEODE_STATICS_executeAnimation
		#define GEODE_STATICS_executeAnimation
		GEODE_AS_STATIC_FUNCTION(executeAnimation) 
	#endif

	#ifndef GEODE_STATICS_finishAnimation
		#define GEODE_STATICS_finishAnimation
		GEODE_AS_STATIC_FUNCTION(finishAnimation) 
	#endif

	#ifndef GEODE_STATICS_getAnimType
		#define GEODE_STATICS_getAnimType
		GEODE_AS_STATIC_FUNCTION(getAnimType) 
	#endif

	#ifndef GEODE_STATICS_getPrio
		#define GEODE_STATICS_getPrio
		GEODE_AS_STATIC_FUNCTION(getPrio) 
	#endif

	#ifndef GEODE_STATICS_initWithOwner
		#define GEODE_STATICS_initWithOwner
		GEODE_AS_STATIC_FUNCTION(initWithOwner) 
	#endif

	#ifndef GEODE_STATICS_loadAnimations
		#define GEODE_STATICS_loadAnimations
		GEODE_AS_STATIC_FUNCTION(loadAnimations) 
	#endif

	#ifndef GEODE_STATICS_offsetCurrentAnimation
		#define GEODE_STATICS_offsetCurrentAnimation
		GEODE_AS_STATIC_FUNCTION(offsetCurrentAnimation) 
	#endif

	#ifndef GEODE_STATICS_overridePrio
		#define GEODE_STATICS_overridePrio
		GEODE_AS_STATIC_FUNCTION(overridePrio) 
	#endif

	#ifndef GEODE_STATICS_playSound
		#define GEODE_STATICS_playSound
		GEODE_AS_STATIC_FUNCTION(playSound) 
	#endif

	#ifndef GEODE_STATICS_playSoundForAnimation
		#define GEODE_STATICS_playSoundForAnimation
		GEODE_AS_STATIC_FUNCTION(playSoundForAnimation) 
	#endif

	#ifndef GEODE_STATICS_queueAnimation
		#define GEODE_STATICS_queueAnimation
		GEODE_AS_STATIC_FUNCTION(queueAnimation) 
	#endif

	#ifndef GEODE_STATICS_resetAnimState
		#define GEODE_STATICS_resetAnimState
		GEODE_AS_STATIC_FUNCTION(resetAnimState) 
	#endif

	#ifndef GEODE_STATICS_runAnimation
		#define GEODE_STATICS_runAnimation
		GEODE_AS_STATIC_FUNCTION(runAnimation) 
	#endif

	#ifndef GEODE_STATICS_runQueuedAnimation
		#define GEODE_STATICS_runQueuedAnimation
		GEODE_AS_STATIC_FUNCTION(runQueuedAnimation) 
	#endif

	#ifndef GEODE_STATICS_stopAnimations
		#define GEODE_STATICS_stopAnimations
		GEODE_AS_STATIC_FUNCTION(stopAnimations) 
	#endif

	#ifndef GEODE_STATICS_storeAnimation
		#define GEODE_STATICS_storeAnimation
		GEODE_AS_STATIC_FUNCTION(storeAnimation) 
	#endif

	#ifndef GEODE_STATICS_storeSoundForAnimation
		#define GEODE_STATICS_storeSoundForAnimation
		GEODE_AS_STATIC_FUNCTION(storeSoundForAnimation) 
	#endif

	#ifndef GEODE_STATICS_switchToFirstFrameOfAnimation
		#define GEODE_STATICS_switchToFirstFrameOfAnimation
		GEODE_AS_STATIC_FUNCTION(switchToFirstFrameOfAnimation) 
	#endif

	#ifndef GEODE_STATICS_updateAnimationSpeed
		#define GEODE_STATICS_updateAnimationSpeed
		GEODE_AS_STATIC_FUNCTION(updateAnimationSpeed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpriteAnimationManager> : ModifyBase<ModifyDerive<Der, SpriteAnimationManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpriteAnimationManager>>;
		using ModifyBase<ModifyDerive<Der, SpriteAnimationManager>>::ModifyBase;
		using Base = SpriteAnimationManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f480, Membercall, SpriteAnimationManager, executeAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f7e0, Membercall, SpriteAnimationManager, overridePrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f280, Membercall, SpriteAnimationManager, runAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4fa60, Membercall, SpriteAnimationManager, stopAnimations, )
		}
	};
}
