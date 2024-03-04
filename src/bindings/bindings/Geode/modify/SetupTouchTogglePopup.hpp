#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTouchTogglePopup.hpp>
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

	#ifndef GEODE_STATICS_onControlMode
		#define GEODE_STATICS_onControlMode
		GEODE_AS_STATIC_FUNCTION(onControlMode) 
	#endif

	#ifndef GEODE_STATICS_onDualTouchMode
		#define GEODE_STATICS_onDualTouchMode
		GEODE_AS_STATIC_FUNCTION(onDualTouchMode) 
	#endif

	#ifndef GEODE_STATICS_onHoldMode
		#define GEODE_STATICS_onHoldMode
		GEODE_AS_STATIC_FUNCTION(onHoldMode) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onTouchMode
		#define GEODE_STATICS_onTouchMode
		GEODE_AS_STATIC_FUNCTION(onTouchMode) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
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
	struct ModifyDerive<Der, SetupTouchTogglePopup> : ModifyBase<ModifyDerive<Der, SetupTouchTogglePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTouchTogglePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTouchTogglePopup>>::ModifyBase;
		using Base = SetupTouchTogglePopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
