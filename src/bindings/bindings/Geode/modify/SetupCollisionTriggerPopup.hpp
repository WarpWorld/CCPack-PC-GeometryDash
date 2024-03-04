#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCollisionTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_onActivateOnExit
		#define GEODE_STATICS_onActivateOnExit
		GEODE_AS_STATIC_FUNCTION(onActivateOnExit) 
	#endif

	#ifndef GEODE_STATICS_onEnableGroup
		#define GEODE_STATICS_onEnableGroup
		GEODE_AS_STATIC_FUNCTION(onEnableGroup) 
	#endif

	#ifndef GEODE_STATICS_onItemID2Arrow
		#define GEODE_STATICS_onItemID2Arrow
		GEODE_AS_STATIC_FUNCTION(onItemID2Arrow) 
	#endif

	#ifndef GEODE_STATICS_onItemIDArrow
		#define GEODE_STATICS_onItemIDArrow
		GEODE_AS_STATIC_FUNCTION(onItemIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetP1
		#define GEODE_STATICS_onTargetP1
		GEODE_AS_STATIC_FUNCTION(onTargetP1) 
	#endif

	#ifndef GEODE_STATICS_onTargetP2
		#define GEODE_STATICS_onTargetP2
		GEODE_AS_STATIC_FUNCTION(onTargetP2) 
	#endif

	#ifndef GEODE_STATICS_onTargetPP
		#define GEODE_STATICS_onTargetPP
		GEODE_AS_STATIC_FUNCTION(onTargetPP) 
	#endif

	#ifndef GEODE_STATICS_updateItemID
		#define GEODE_STATICS_updateItemID
		GEODE_AS_STATIC_FUNCTION(updateItemID) 
	#endif

	#ifndef GEODE_STATICS_updateItemID2
		#define GEODE_STATICS_updateItemID2
		GEODE_AS_STATIC_FUNCTION(updateItemID2) 
	#endif

	#ifndef GEODE_STATICS_updateItemID2InputLabel
		#define GEODE_STATICS_updateItemID2InputLabel
		GEODE_AS_STATIC_FUNCTION(updateItemID2InputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateItemIDInputLabel
		#define GEODE_STATICS_updateItemIDInputLabel
		GEODE_AS_STATIC_FUNCTION(updateItemIDInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTargetIDInputLabel
		#define GEODE_STATICS_updateTargetIDInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTargetIDInputLabel) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupCollisionTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupCollisionTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCollisionTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCollisionTriggerPopup>>::ModifyBase;
		using Base = SetupCollisionTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x328a90, Optcall, SetupCollisionTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x328b40, Membercall, SetupCollisionTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
