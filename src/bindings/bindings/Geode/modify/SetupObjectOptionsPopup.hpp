#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupObjectOptionsPopup.hpp>
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

	#ifndef GEODE_STATICS_onAlwaysHide
		#define GEODE_STATICS_onAlwaysHide
		GEODE_AS_STATIC_FUNCTION(onAlwaysHide) 
	#endif

	#ifndef GEODE_STATICS_onApplyScaleStick
		#define GEODE_STATICS_onApplyScaleStick
		GEODE_AS_STATIC_FUNCTION(onApplyScaleStick) 
	#endif

	#ifndef GEODE_STATICS_onCenterEffect
		#define GEODE_STATICS_onCenterEffect
		GEODE_AS_STATIC_FUNCTION(onCenterEffect) 
	#endif

	#ifndef GEODE_STATICS_onDisableGlow
		#define GEODE_STATICS_onDisableGlow
		GEODE_AS_STATIC_FUNCTION(onDisableGlow) 
	#endif

	#ifndef GEODE_STATICS_onDisableObject
		#define GEODE_STATICS_onDisableObject
		GEODE_AS_STATIC_FUNCTION(onDisableObject) 
	#endif

	#ifndef GEODE_STATICS_onDontBoost
		#define GEODE_STATICS_onDontBoost
		GEODE_AS_STATIC_FUNCTION(onDontBoost) 
	#endif

	#ifndef GEODE_STATICS_onDontBoostX
		#define GEODE_STATICS_onDontBoostX
		GEODE_AS_STATIC_FUNCTION(onDontBoostX) 
	#endif

	#ifndef GEODE_STATICS_onDontEnter
		#define GEODE_STATICS_onDontEnter
		GEODE_AS_STATIC_FUNCTION(onDontEnter) 
	#endif

	#ifndef GEODE_STATICS_onDontFade
		#define GEODE_STATICS_onDontFade
		GEODE_AS_STATIC_FUNCTION(onDontFade) 
	#endif

	#ifndef GEODE_STATICS_onExtendedCollision
		#define GEODE_STATICS_onExtendedCollision
		GEODE_AS_STATIC_FUNCTION(onExtendedCollision) 
	#endif

	#ifndef GEODE_STATICS_onExtraSticky
		#define GEODE_STATICS_onExtraSticky
		GEODE_AS_STATIC_FUNCTION(onExtraSticky) 
	#endif

	#ifndef GEODE_STATICS_onGripSlope
		#define GEODE_STATICS_onGripSlope
		GEODE_AS_STATIC_FUNCTION(onGripSlope) 
	#endif

	#ifndef GEODE_STATICS_onHideEffects
		#define GEODE_STATICS_onHideEffects
		GEODE_AS_STATIC_FUNCTION(onHideEffects) 
	#endif

	#ifndef GEODE_STATICS_onHighDetail
		#define GEODE_STATICS_onHighDetail
		GEODE_AS_STATIC_FUNCTION(onHighDetail) 
	#endif

	#ifndef GEODE_STATICS_onIceBlock
		#define GEODE_STATICS_onIceBlock
		GEODE_AS_STATIC_FUNCTION(onIceBlock) 
	#endif

	#ifndef GEODE_STATICS_onNoAudioScale
		#define GEODE_STATICS_onNoAudioScale
		GEODE_AS_STATIC_FUNCTION(onNoAudioScale) 
	#endif

	#ifndef GEODE_STATICS_onNonStickX
		#define GEODE_STATICS_onNonStickX
		GEODE_AS_STATIC_FUNCTION(onNonStickX) 
	#endif

	#ifndef GEODE_STATICS_onNonStickY
		#define GEODE_STATICS_onNonStickY
		GEODE_AS_STATIC_FUNCTION(onNonStickY) 
	#endif

	#ifndef GEODE_STATICS_onNoParticle
		#define GEODE_STATICS_onNoParticle
		GEODE_AS_STATIC_FUNCTION(onNoParticle) 
	#endif

	#ifndef GEODE_STATICS_onPassable
		#define GEODE_STATICS_onPassable
		GEODE_AS_STATIC_FUNCTION(onPassable) 
	#endif

	#ifndef GEODE_STATICS_onReverse
		#define GEODE_STATICS_onReverse
		GEODE_AS_STATIC_FUNCTION(onReverse) 
	#endif

	#ifndef GEODE_STATICS_onSinglePlayerTouch
		#define GEODE_STATICS_onSinglePlayerTouch
		GEODE_AS_STATIC_FUNCTION(onSinglePlayerTouch) 
	#endif

	#ifndef GEODE_STATICS_onToggleAreaParent
		#define GEODE_STATICS_onToggleAreaParent
		GEODE_AS_STATIC_FUNCTION(onToggleAreaParent) 
	#endif

	#ifndef GEODE_STATICS_onToggleGroupParent
		#define GEODE_STATICS_onToggleGroupParent
		GEODE_AS_STATIC_FUNCTION(onToggleGroupParent) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupObjectOptionsPopup> : ModifyBase<ModifyDerive<Der, SetupObjectOptionsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupObjectOptionsPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupObjectOptionsPopup>>::ModifyBase;
		using Base = SetupObjectOptionsPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
