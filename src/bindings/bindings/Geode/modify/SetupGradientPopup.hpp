#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupGradientPopup.hpp>
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

	#ifndef GEODE_STATICS_onBlending
		#define GEODE_STATICS_onBlending
		GEODE_AS_STATIC_FUNCTION(onBlending) 
	#endif

	#ifndef GEODE_STATICS_onZLayer
		#define GEODE_STATICS_onZLayer
		GEODE_AS_STATIC_FUNCTION(onZLayer) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateBlending
		#define GEODE_STATICS_updateBlending
		GEODE_AS_STATIC_FUNCTION(updateBlending) 
	#endif

	#ifndef GEODE_STATICS_updateBlendingLabel
		#define GEODE_STATICS_updateBlendingLabel
		GEODE_AS_STATIC_FUNCTION(updateBlendingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateGradientLabels
		#define GEODE_STATICS_updateGradientLabels
		GEODE_AS_STATIC_FUNCTION(updateGradientLabels) 
	#endif

	#ifndef GEODE_STATICS_updateZLayerButtons
		#define GEODE_STATICS_updateZLayerButtons
		GEODE_AS_STATIC_FUNCTION(updateZLayerButtons) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onPlusButton
		#define GEODE_STATICS_onPlusButton
		GEODE_AS_STATIC_FUNCTION(onPlusButton) 
	#endif

	#ifndef GEODE_STATICS_updateToggleItem
		#define GEODE_STATICS_updateToggleItem
		GEODE_AS_STATIC_FUNCTION(updateToggleItem) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupGradientPopup> : ModifyBase<ModifyDerive<Der, SetupGradientPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupGradientPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupGradientPopup>>::ModifyBase;
		using Base = SetupGradientPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
