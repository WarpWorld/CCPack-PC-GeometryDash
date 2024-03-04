#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGameState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_controlTweenAction
		#define GEODE_STATICS_controlTweenAction
		GEODE_AS_STATIC_FUNCTION(controlTweenAction) 
	#endif

	#ifndef GEODE_STATICS_getGameObjectPhysics
		#define GEODE_STATICS_getGameObjectPhysics
		GEODE_AS_STATIC_FUNCTION(getGameObjectPhysics) 
	#endif

	#ifndef GEODE_STATICS_processStateTriggers
		#define GEODE_STATICS_processStateTriggers
		GEODE_AS_STATIC_FUNCTION(processStateTriggers) 
	#endif

	#ifndef GEODE_STATICS_stopTweenAction
		#define GEODE_STATICS_stopTweenAction
		GEODE_AS_STATIC_FUNCTION(stopTweenAction) 
	#endif

	#ifndef GEODE_STATICS_tweenValue
		#define GEODE_STATICS_tweenValue
		GEODE_AS_STATIC_FUNCTION(tweenValue) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

	#ifndef GEODE_STATICS_updateTweenActions
		#define GEODE_STATICS_updateTweenActions
		GEODE_AS_STATIC_FUNCTION(updateTweenActions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGameState> : ModifyBase<ModifyDerive<Der, GJGameState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGameState>>;
		using ModifyBase<ModifyDerive<Der, GJGameState>>::ModifyBase;
		using Base = GJGameState;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18e920, Membercall, GJGameState, tweenValue, float, float, int, float, int, float, int, int)
		}
	};
}
