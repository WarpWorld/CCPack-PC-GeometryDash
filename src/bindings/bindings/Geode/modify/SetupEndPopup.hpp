#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupEndPopup.hpp>
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

	#ifndef GEODE_STATICS_onLockY
		#define GEODE_STATICS_onLockY
		GEODE_AS_STATIC_FUNCTION(onLockY) 
	#endif

	#ifndef GEODE_STATICS_onMultiActivate
		#define GEODE_STATICS_onMultiActivate
		GEODE_AS_STATIC_FUNCTION(onMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_onReversed
		#define GEODE_STATICS_onReversed
		GEODE_AS_STATIC_FUNCTION(onReversed) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
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

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupEndPopup> : ModifyBase<ModifyDerive<Der, SetupEndPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupEndPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupEndPopup>>::ModifyBase;
		using Base = SetupEndPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
