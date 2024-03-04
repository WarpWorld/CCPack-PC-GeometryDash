#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EffectGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getTargetColorIndex
		#define GEODE_STATICS_getTargetColorIndex
		GEODE_AS_STATIC_FUNCTION(getTargetColorIndex) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_playTriggerEffect
		#define GEODE_STATICS_playTriggerEffect
		GEODE_AS_STATIC_FUNCTION(playTriggerEffect) 
	#endif

	#ifndef GEODE_STATICS_resetSpawnTrigger
		#define GEODE_STATICS_resetSpawnTrigger
		GEODE_AS_STATIC_FUNCTION(resetSpawnTrigger) 
	#endif

	#ifndef GEODE_STATICS_setTargetID
		#define GEODE_STATICS_setTargetID
		GEODE_AS_STATIC_FUNCTION(setTargetID) 
	#endif

	#ifndef GEODE_STATICS_setTargetID2
		#define GEODE_STATICS_setTargetID2
		GEODE_AS_STATIC_FUNCTION(setTargetID2) 
	#endif

	#ifndef GEODE_STATICS_triggerEffectFinished
		#define GEODE_STATICS_triggerEffectFinished
		GEODE_AS_STATIC_FUNCTION(triggerEffectFinished) 
	#endif

	#ifndef GEODE_STATICS_updateInteractiveHover
		#define GEODE_STATICS_updateInteractiveHover
		GEODE_AS_STATIC_FUNCTION(updateInteractiveHover) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialColor
		#define GEODE_STATICS_updateSpecialColor
		GEODE_AS_STATIC_FUNCTION(updateSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_updateSpeedModType
		#define GEODE_STATICS_updateSpeedModType
		GEODE_AS_STATIC_FUNCTION(updateSpeedModType) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_setRScaleX
		#define GEODE_STATICS_setRScaleX
		GEODE_AS_STATIC_FUNCTION(setRScaleX) 
	#endif

	#ifndef GEODE_STATICS_setRScaleY
		#define GEODE_STATICS_setRScaleY
		GEODE_AS_STATIC_FUNCTION(setRScaleY) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_spawnXPosition
		#define GEODE_STATICS_spawnXPosition
		GEODE_AS_STATIC_FUNCTION(spawnXPosition) 
	#endif

	#ifndef GEODE_STATICS_canReverse
		#define GEODE_STATICS_canReverse
		GEODE_AS_STATIC_FUNCTION(canReverse) 
	#endif

	#ifndef GEODE_STATICS_isSpecialSpawnObject
		#define GEODE_STATICS_isSpecialSpawnObject
		GEODE_AS_STATIC_FUNCTION(isSpecialSpawnObject) 
	#endif

	#ifndef GEODE_STATICS_canBeOrdered
		#define GEODE_STATICS_canBeOrdered
		GEODE_AS_STATIC_FUNCTION(canBeOrdered) 
	#endif

	#ifndef GEODE_STATICS_getObjectLabel
		#define GEODE_STATICS_getObjectLabel
		GEODE_AS_STATIC_FUNCTION(getObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_setObjectLabel
		#define GEODE_STATICS_setObjectLabel
		GEODE_AS_STATIC_FUNCTION(setObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_stateSensitiveOff
		#define GEODE_STATICS_stateSensitiveOff
		GEODE_AS_STATIC_FUNCTION(stateSensitiveOff) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EffectGameObject> : ModifyBase<ModifyDerive<Der, EffectGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EffectGameObject>>;
		using ModifyBase<ModifyDerive<Der, EffectGameObject>>::ModifyBase;
		using Base = EffectGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39c8b0, Optcall, EffectGameObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39c950, Membercall, EffectGameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39ca70, Membercall, EffectGameObject, playTriggerEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39cca0, Membercall, EffectGameObject, triggerEffectFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e750, Membercall, EffectGameObject, updateSpecialColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a1c10, Membercall, EffectGameObject, updateSpeedModType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e950, Thiscall, EffectGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39ccf0, Thiscall, EffectGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39eb70, Thiscall, EffectGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a1df0, Thiscall, EffectGameObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
