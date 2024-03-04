#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupMGTrigger.hpp>
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

	#ifndef GEODE_STATICS_onEasing
		#define GEODE_STATICS_onEasing
		GEODE_AS_STATIC_FUNCTION(onEasing) 
	#endif

	#ifndef GEODE_STATICS_onEasingRate
		#define GEODE_STATICS_onEasingRate
		GEODE_AS_STATIC_FUNCTION(onEasingRate) 
	#endif

	#ifndef GEODE_STATICS_posFromSliderValue
		#define GEODE_STATICS_posFromSliderValue
		GEODE_AS_STATIC_FUNCTION(posFromSliderValue) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderValueFromPos
		#define GEODE_STATICS_sliderValueFromPos
		GEODE_AS_STATIC_FUNCTION(sliderValueFromPos) 
	#endif

	#ifndef GEODE_STATICS_sliderYChanged
		#define GEODE_STATICS_sliderYChanged
		GEODE_AS_STATIC_FUNCTION(sliderYChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleEasingRateVisibility
		#define GEODE_STATICS_toggleEasingRateVisibility
		GEODE_AS_STATIC_FUNCTION(toggleEasingRateVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEasingLabel
		#define GEODE_STATICS_updateEasingLabel
		GEODE_AS_STATIC_FUNCTION(updateEasingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEasingRateLabel
		#define GEODE_STATICS_updateEasingRateLabel
		GEODE_AS_STATIC_FUNCTION(updateEasingRateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandEasing
		#define GEODE_STATICS_updateMoveCommandEasing
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandEasing) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandEasingRate
		#define GEODE_STATICS_updateMoveCommandEasingRate
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandEasingRate) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandPosY
		#define GEODE_STATICS_updateMoveCommandPosY
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandPosY) 
	#endif

	#ifndef GEODE_STATICS_updateValueYLabel
		#define GEODE_STATICS_updateValueYLabel
		GEODE_AS_STATIC_FUNCTION(updateValueYLabel) 
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

	#ifndef GEODE_STATICS_valuePopupClosed
		#define GEODE_STATICS_valuePopupClosed
		GEODE_AS_STATIC_FUNCTION(valuePopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupMGTrigger> : ModifyBase<ModifyDerive<Der, SetupMGTrigger>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupMGTrigger>>;
		using ModifyBase<ModifyDerive<Der, SetupMGTrigger>>::ModifyBase;
		using Base = SetupMGTrigger;
        using Derived = Der;
		void apply() override {

		}
	};
}
