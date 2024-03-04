#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupShaderEffectPopup.hpp>
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

	#ifndef GEODE_STATICS_onResetColors
		#define GEODE_STATICS_onResetColors
		GEODE_AS_STATIC_FUNCTION(onResetColors) 
	#endif

	#ifndef GEODE_STATICS_onZLayer
		#define GEODE_STATICS_onZLayer
		GEODE_AS_STATIC_FUNCTION(onZLayer) 
	#endif

	#ifndef GEODE_STATICS_setupBulge
		#define GEODE_STATICS_setupBulge
		GEODE_AS_STATIC_FUNCTION(setupBulge) 
	#endif

	#ifndef GEODE_STATICS_setupChromatic
		#define GEODE_STATICS_setupChromatic
		GEODE_AS_STATIC_FUNCTION(setupChromatic) 
	#endif

	#ifndef GEODE_STATICS_setupChromaticGlitch
		#define GEODE_STATICS_setupChromaticGlitch
		GEODE_AS_STATIC_FUNCTION(setupChromaticGlitch) 
	#endif

	#ifndef GEODE_STATICS_setupColorChange
		#define GEODE_STATICS_setupColorChange
		GEODE_AS_STATIC_FUNCTION(setupColorChange) 
	#endif

	#ifndef GEODE_STATICS_setupGlitch
		#define GEODE_STATICS_setupGlitch
		GEODE_AS_STATIC_FUNCTION(setupGlitch) 
	#endif

	#ifndef GEODE_STATICS_setupGrayscale
		#define GEODE_STATICS_setupGrayscale
		GEODE_AS_STATIC_FUNCTION(setupGrayscale) 
	#endif

	#ifndef GEODE_STATICS_setupHueShift
		#define GEODE_STATICS_setupHueShift
		GEODE_AS_STATIC_FUNCTION(setupHueShift) 
	#endif

	#ifndef GEODE_STATICS_setupInvertColor
		#define GEODE_STATICS_setupInvertColor
		GEODE_AS_STATIC_FUNCTION(setupInvertColor) 
	#endif

	#ifndef GEODE_STATICS_setupLensCircle
		#define GEODE_STATICS_setupLensCircle
		GEODE_AS_STATIC_FUNCTION(setupLensCircle) 
	#endif

	#ifndef GEODE_STATICS_setupMotionBlur
		#define GEODE_STATICS_setupMotionBlur
		GEODE_AS_STATIC_FUNCTION(setupMotionBlur) 
	#endif

	#ifndef GEODE_STATICS_setupPinch
		#define GEODE_STATICS_setupPinch
		GEODE_AS_STATIC_FUNCTION(setupPinch) 
	#endif

	#ifndef GEODE_STATICS_setupPixelate
		#define GEODE_STATICS_setupPixelate
		GEODE_AS_STATIC_FUNCTION(setupPixelate) 
	#endif

	#ifndef GEODE_STATICS_setupRadialBlur
		#define GEODE_STATICS_setupRadialBlur
		GEODE_AS_STATIC_FUNCTION(setupRadialBlur) 
	#endif

	#ifndef GEODE_STATICS_setupSepia
		#define GEODE_STATICS_setupSepia
		GEODE_AS_STATIC_FUNCTION(setupSepia) 
	#endif

	#ifndef GEODE_STATICS_setupShaderTrigger
		#define GEODE_STATICS_setupShaderTrigger
		GEODE_AS_STATIC_FUNCTION(setupShaderTrigger) 
	#endif

	#ifndef GEODE_STATICS_setupShockLine
		#define GEODE_STATICS_setupShockLine
		GEODE_AS_STATIC_FUNCTION(setupShockLine) 
	#endif

	#ifndef GEODE_STATICS_setupShockWave
		#define GEODE_STATICS_setupShockWave
		GEODE_AS_STATIC_FUNCTION(setupShockWave) 
	#endif

	#ifndef GEODE_STATICS_setupSplitScreen
		#define GEODE_STATICS_setupSplitScreen
		GEODE_AS_STATIC_FUNCTION(setupSplitScreen) 
	#endif

	#ifndef GEODE_STATICS_updateZLayerButtons
		#define GEODE_STATICS_updateZLayerButtons
		GEODE_AS_STATIC_FUNCTION(updateZLayerButtons) 
	#endif

	#ifndef GEODE_STATICS_zLayerToString
		#define GEODE_STATICS_zLayerToString
		GEODE_AS_STATIC_FUNCTION(zLayerToString) 
	#endif

	#ifndef GEODE_STATICS_toggleGroup
		#define GEODE_STATICS_toggleGroup
		GEODE_AS_STATIC_FUNCTION(toggleGroup) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupShaderEffectPopup> : ModifyBase<ModifyDerive<Der, SetupShaderEffectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupShaderEffectPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupShaderEffectPopup>>::ModifyBase;
		using Base = SetupShaderEffectPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
