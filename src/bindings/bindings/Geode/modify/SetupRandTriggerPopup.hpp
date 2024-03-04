#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupRandTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_onTargetID2Arrow
		#define GEODE_STATICS_onTargetID2Arrow
		GEODE_AS_STATIC_FUNCTION(onTargetID2Arrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateChance
		#define GEODE_STATICS_updateChance
		GEODE_AS_STATIC_FUNCTION(updateChance) 
	#endif

	#ifndef GEODE_STATICS_updateChanceLabel
		#define GEODE_STATICS_updateChanceLabel
		GEODE_AS_STATIC_FUNCTION(updateChanceLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID2
		#define GEODE_STATICS_updateTargetID2
		GEODE_AS_STATIC_FUNCTION(updateTargetID2) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel2
		#define GEODE_STATICS_updateTextInputLabel2
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel2) 
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
	struct ModifyDerive<Der, SetupRandTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupRandTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupRandTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupRandTriggerPopup>>::ModifyBase;
		using Base = SetupRandTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x348530, Optcall, SetupRandTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3485e0, Membercall, SetupRandTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
