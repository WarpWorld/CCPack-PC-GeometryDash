#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupShakePopup.hpp>
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

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateInterval
		#define GEODE_STATICS_updateInterval
		GEODE_AS_STATIC_FUNCTION(updateInterval) 
	#endif

	#ifndef GEODE_STATICS_updateIntervalLabel
		#define GEODE_STATICS_updateIntervalLabel
		GEODE_AS_STATIC_FUNCTION(updateIntervalLabel) 
	#endif

	#ifndef GEODE_STATICS_updateShake
		#define GEODE_STATICS_updateShake
		GEODE_AS_STATIC_FUNCTION(updateShake) 
	#endif

	#ifndef GEODE_STATICS_updateShakeLabel
		#define GEODE_STATICS_updateShakeLabel
		GEODE_AS_STATIC_FUNCTION(updateShakeLabel) 
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
	struct ModifyDerive<Der, SetupShakePopup> : ModifyBase<ModifyDerive<Der, SetupShakePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupShakePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupShakePopup>>::ModifyBase;
		using Base = SetupShakePopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
