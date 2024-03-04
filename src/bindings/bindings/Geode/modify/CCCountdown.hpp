#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCountdown.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_lapFinished
		#define GEODE_STATICS_lapFinished
		GEODE_AS_STATIC_FUNCTION(lapFinished) 
	#endif

	#ifndef GEODE_STATICS_startTimerWithSeconds
		#define GEODE_STATICS_startTimerWithSeconds
		GEODE_AS_STATIC_FUNCTION(startTimerWithSeconds) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCCountdown> : ModifyBase<ModifyDerive<Der, CCCountdown>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCCountdown>>;
		using ModifyBase<ModifyDerive<Der, CCCountdown>>::ModifyBase;
		using Base = CCCountdown;
        using Derived = Der;
		void apply() override {

		}
	};
}
