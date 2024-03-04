#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupInstantCountPopup.hpp>
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

	#ifndef GEODE_STATICS_onCountType
		#define GEODE_STATICS_onCountType
		GEODE_AS_STATIC_FUNCTION(onCountType) 
	#endif

	#ifndef GEODE_STATICS_onEnableGroup
		#define GEODE_STATICS_onEnableGroup
		GEODE_AS_STATIC_FUNCTION(onEnableGroup) 
	#endif

	#ifndef GEODE_STATICS_onTargetCountArrow
		#define GEODE_STATICS_onTargetCountArrow
		GEODE_AS_STATIC_FUNCTION(onTargetCountArrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetID2Arrow
		#define GEODE_STATICS_onTargetID2Arrow
		GEODE_AS_STATIC_FUNCTION(onTargetID2Arrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_updateCountTextInputLabel
		#define GEODE_STATICS_updateCountTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateCountTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateItemID
		#define GEODE_STATICS_updateItemID
		GEODE_AS_STATIC_FUNCTION(updateItemID) 
	#endif

	#ifndef GEODE_STATICS_updateItemIDInputLabel
		#define GEODE_STATICS_updateItemIDInputLabel
		GEODE_AS_STATIC_FUNCTION(updateItemIDInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTargetCount
		#define GEODE_STATICS_updateTargetCount
		GEODE_AS_STATIC_FUNCTION(updateTargetCount) 
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
	struct ModifyDerive<Der, SetupInstantCountPopup> : ModifyBase<ModifyDerive<Der, SetupInstantCountPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupInstantCountPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupInstantCountPopup>>::ModifyBase;
		using Base = SetupInstantCountPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
