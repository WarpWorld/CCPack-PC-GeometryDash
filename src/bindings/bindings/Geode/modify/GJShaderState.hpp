#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJShaderState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_stopTweenAction
		#define GEODE_STATICS_stopTweenAction
		GEODE_AS_STATIC_FUNCTION(stopTweenAction) 
	#endif

	#ifndef GEODE_STATICS_timesyncShaderAction
		#define GEODE_STATICS_timesyncShaderAction
		GEODE_AS_STATIC_FUNCTION(timesyncShaderAction) 
	#endif

	#ifndef GEODE_STATICS_timesyncShaderActions
		#define GEODE_STATICS_timesyncShaderActions
		GEODE_AS_STATIC_FUNCTION(timesyncShaderActions) 
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
	struct ModifyDerive<Der, GJShaderState> : ModifyBase<ModifyDerive<Der, GJShaderState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJShaderState>>;
		using ModifyBase<ModifyDerive<Der, GJShaderState>>::ModifyBase;
		using Base = GJShaderState;
        using Derived = Der;
		void apply() override {

		}
	};
}
