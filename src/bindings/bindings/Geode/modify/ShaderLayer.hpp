#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShaderLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_objectPosToShaderPos
		#define GEODE_STATICS_objectPosToShaderPos
		GEODE_AS_STATIC_FUNCTION(objectPosToShaderPos) 
	#endif

	#ifndef GEODE_STATICS_performCalculations
		#define GEODE_STATICS_performCalculations
		GEODE_AS_STATIC_FUNCTION(performCalculations) 
	#endif

	#ifndef GEODE_STATICS_preBulgeShader
		#define GEODE_STATICS_preBulgeShader
		GEODE_AS_STATIC_FUNCTION(preBulgeShader) 
	#endif

	#ifndef GEODE_STATICS_preChromaticGlitchShader
		#define GEODE_STATICS_preChromaticGlitchShader
		GEODE_AS_STATIC_FUNCTION(preChromaticGlitchShader) 
	#endif

	#ifndef GEODE_STATICS_preChromaticShader
		#define GEODE_STATICS_preChromaticShader
		GEODE_AS_STATIC_FUNCTION(preChromaticShader) 
	#endif

	#ifndef GEODE_STATICS_preColorChangeShader
		#define GEODE_STATICS_preColorChangeShader
		GEODE_AS_STATIC_FUNCTION(preColorChangeShader) 
	#endif

	#ifndef GEODE_STATICS_preCommonShader
		#define GEODE_STATICS_preCommonShader
		GEODE_AS_STATIC_FUNCTION(preCommonShader) 
	#endif

	#ifndef GEODE_STATICS_preGlitchShader
		#define GEODE_STATICS_preGlitchShader
		GEODE_AS_STATIC_FUNCTION(preGlitchShader) 
	#endif

	#ifndef GEODE_STATICS_preGrayscaleShader
		#define GEODE_STATICS_preGrayscaleShader
		GEODE_AS_STATIC_FUNCTION(preGrayscaleShader) 
	#endif

	#ifndef GEODE_STATICS_preHueShiftShader
		#define GEODE_STATICS_preHueShiftShader
		GEODE_AS_STATIC_FUNCTION(preHueShiftShader) 
	#endif

	#ifndef GEODE_STATICS_preInvertColorShader
		#define GEODE_STATICS_preInvertColorShader
		GEODE_AS_STATIC_FUNCTION(preInvertColorShader) 
	#endif

	#ifndef GEODE_STATICS_preLensCircleShader
		#define GEODE_STATICS_preLensCircleShader
		GEODE_AS_STATIC_FUNCTION(preLensCircleShader) 
	#endif

	#ifndef GEODE_STATICS_preMotionBlurShader
		#define GEODE_STATICS_preMotionBlurShader
		GEODE_AS_STATIC_FUNCTION(preMotionBlurShader) 
	#endif

	#ifndef GEODE_STATICS_prepareTargetContainer
		#define GEODE_STATICS_prepareTargetContainer
		GEODE_AS_STATIC_FUNCTION(prepareTargetContainer) 
	#endif

	#ifndef GEODE_STATICS_prePinchShader
		#define GEODE_STATICS_prePinchShader
		GEODE_AS_STATIC_FUNCTION(prePinchShader) 
	#endif

	#ifndef GEODE_STATICS_prePixelateShader
		#define GEODE_STATICS_prePixelateShader
		GEODE_AS_STATIC_FUNCTION(prePixelateShader) 
	#endif

	#ifndef GEODE_STATICS_preRadialBlurShader
		#define GEODE_STATICS_preRadialBlurShader
		GEODE_AS_STATIC_FUNCTION(preRadialBlurShader) 
	#endif

	#ifndef GEODE_STATICS_preSepiaShader
		#define GEODE_STATICS_preSepiaShader
		GEODE_AS_STATIC_FUNCTION(preSepiaShader) 
	#endif

	#ifndef GEODE_STATICS_preShockLineShader
		#define GEODE_STATICS_preShockLineShader
		GEODE_AS_STATIC_FUNCTION(preShockLineShader) 
	#endif

	#ifndef GEODE_STATICS_preShockWaveShader
		#define GEODE_STATICS_preShockWaveShader
		GEODE_AS_STATIC_FUNCTION(preShockWaveShader) 
	#endif

	#ifndef GEODE_STATICS_preSplitScreenShader
		#define GEODE_STATICS_preSplitScreenShader
		GEODE_AS_STATIC_FUNCTION(preSplitScreenShader) 
	#endif

	#ifndef GEODE_STATICS_resetAllShaders
		#define GEODE_STATICS_resetAllShaders
		GEODE_AS_STATIC_FUNCTION(resetAllShaders) 
	#endif

	#ifndef GEODE_STATICS_resetTargetContainer
		#define GEODE_STATICS_resetTargetContainer
		GEODE_AS_STATIC_FUNCTION(resetTargetContainer) 
	#endif

	#ifndef GEODE_STATICS_setupBulgeShader
		#define GEODE_STATICS_setupBulgeShader
		GEODE_AS_STATIC_FUNCTION(setupBulgeShader) 
	#endif

	#ifndef GEODE_STATICS_setupChromaticGlitchUniforms
		#define GEODE_STATICS_setupChromaticGlitchUniforms
		GEODE_AS_STATIC_FUNCTION(setupChromaticGlitchUniforms) 
	#endif

	#ifndef GEODE_STATICS_setupChromaticUniforms
		#define GEODE_STATICS_setupChromaticUniforms
		GEODE_AS_STATIC_FUNCTION(setupChromaticUniforms) 
	#endif

	#ifndef GEODE_STATICS_setupColorChangeShader
		#define GEODE_STATICS_setupColorChangeShader
		GEODE_AS_STATIC_FUNCTION(setupColorChangeShader) 
	#endif

	#ifndef GEODE_STATICS_setupCommonUniforms
		#define GEODE_STATICS_setupCommonUniforms
		GEODE_AS_STATIC_FUNCTION(setupCommonUniforms) 
	#endif

	#ifndef GEODE_STATICS_setupGlitchUniforms
		#define GEODE_STATICS_setupGlitchUniforms
		GEODE_AS_STATIC_FUNCTION(setupGlitchUniforms) 
	#endif

	#ifndef GEODE_STATICS_setupGrayscaleShader
		#define GEODE_STATICS_setupGrayscaleShader
		GEODE_AS_STATIC_FUNCTION(setupGrayscaleShader) 
	#endif

	#ifndef GEODE_STATICS_setupHueShiftShader
		#define GEODE_STATICS_setupHueShiftShader
		GEODE_AS_STATIC_FUNCTION(setupHueShiftShader) 
	#endif

	#ifndef GEODE_STATICS_setupInvertColorShader
		#define GEODE_STATICS_setupInvertColorShader
		GEODE_AS_STATIC_FUNCTION(setupInvertColorShader) 
	#endif

	#ifndef GEODE_STATICS_setupLensCircleShader
		#define GEODE_STATICS_setupLensCircleShader
		GEODE_AS_STATIC_FUNCTION(setupLensCircleShader) 
	#endif

	#ifndef GEODE_STATICS_setupMotionBlurShader
		#define GEODE_STATICS_setupMotionBlurShader
		GEODE_AS_STATIC_FUNCTION(setupMotionBlurShader) 
	#endif

	#ifndef GEODE_STATICS_setupPinchShader
		#define GEODE_STATICS_setupPinchShader
		GEODE_AS_STATIC_FUNCTION(setupPinchShader) 
	#endif

	#ifndef GEODE_STATICS_setupRadialBlurShader
		#define GEODE_STATICS_setupRadialBlurShader
		GEODE_AS_STATIC_FUNCTION(setupRadialBlurShader) 
	#endif

	#ifndef GEODE_STATICS_setupSepiaShader
		#define GEODE_STATICS_setupSepiaShader
		GEODE_AS_STATIC_FUNCTION(setupSepiaShader) 
	#endif

	#ifndef GEODE_STATICS_setupShader
		#define GEODE_STATICS_setupShader
		GEODE_AS_STATIC_FUNCTION(setupShader) 
	#endif

	#ifndef GEODE_STATICS_setupShockLineUniforms
		#define GEODE_STATICS_setupShockLineUniforms
		GEODE_AS_STATIC_FUNCTION(setupShockLineUniforms) 
	#endif

	#ifndef GEODE_STATICS_setupShockWaveUniforms
		#define GEODE_STATICS_setupShockWaveUniforms
		GEODE_AS_STATIC_FUNCTION(setupShockWaveUniforms) 
	#endif

	#ifndef GEODE_STATICS_setupSplitScreenShader
		#define GEODE_STATICS_setupSplitScreenShader
		GEODE_AS_STATIC_FUNCTION(setupSplitScreenShader) 
	#endif

	#ifndef GEODE_STATICS_toggleAntiAlias
		#define GEODE_STATICS_toggleAntiAlias
		GEODE_AS_STATIC_FUNCTION(toggleAntiAlias) 
	#endif

	#ifndef GEODE_STATICS_triggerBulge
		#define GEODE_STATICS_triggerBulge
		GEODE_AS_STATIC_FUNCTION(triggerBulge) 
	#endif

	#ifndef GEODE_STATICS_triggerChromaticGlitch
		#define GEODE_STATICS_triggerChromaticGlitch
		GEODE_AS_STATIC_FUNCTION(triggerChromaticGlitch) 
	#endif

	#ifndef GEODE_STATICS_triggerChromaticX
		#define GEODE_STATICS_triggerChromaticX
		GEODE_AS_STATIC_FUNCTION(triggerChromaticX) 
	#endif

	#ifndef GEODE_STATICS_triggerChromaticY
		#define GEODE_STATICS_triggerChromaticY
		GEODE_AS_STATIC_FUNCTION(triggerChromaticY) 
	#endif

	#ifndef GEODE_STATICS_triggerColorChange
		#define GEODE_STATICS_triggerColorChange
		GEODE_AS_STATIC_FUNCTION(triggerColorChange) 
	#endif

	#ifndef GEODE_STATICS_triggerGlitch
		#define GEODE_STATICS_triggerGlitch
		GEODE_AS_STATIC_FUNCTION(triggerGlitch) 
	#endif

	#ifndef GEODE_STATICS_triggerGrayscale
		#define GEODE_STATICS_triggerGrayscale
		GEODE_AS_STATIC_FUNCTION(triggerGrayscale) 
	#endif

	#ifndef GEODE_STATICS_triggerHueShift
		#define GEODE_STATICS_triggerHueShift
		GEODE_AS_STATIC_FUNCTION(triggerHueShift) 
	#endif

	#ifndef GEODE_STATICS_triggerInvertColor
		#define GEODE_STATICS_triggerInvertColor
		GEODE_AS_STATIC_FUNCTION(triggerInvertColor) 
	#endif

	#ifndef GEODE_STATICS_triggerLensCircle
		#define GEODE_STATICS_triggerLensCircle
		GEODE_AS_STATIC_FUNCTION(triggerLensCircle) 
	#endif

	#ifndef GEODE_STATICS_triggerMotionBlurX
		#define GEODE_STATICS_triggerMotionBlurX
		GEODE_AS_STATIC_FUNCTION(triggerMotionBlurX) 
	#endif

	#ifndef GEODE_STATICS_triggerMotionBlurY
		#define GEODE_STATICS_triggerMotionBlurY
		GEODE_AS_STATIC_FUNCTION(triggerMotionBlurY) 
	#endif

	#ifndef GEODE_STATICS_triggerPinchX
		#define GEODE_STATICS_triggerPinchX
		GEODE_AS_STATIC_FUNCTION(triggerPinchX) 
	#endif

	#ifndef GEODE_STATICS_triggerPinchY
		#define GEODE_STATICS_triggerPinchY
		GEODE_AS_STATIC_FUNCTION(triggerPinchY) 
	#endif

	#ifndef GEODE_STATICS_triggerPixelateX
		#define GEODE_STATICS_triggerPixelateX
		GEODE_AS_STATIC_FUNCTION(triggerPixelateX) 
	#endif

	#ifndef GEODE_STATICS_triggerPixelateY
		#define GEODE_STATICS_triggerPixelateY
		GEODE_AS_STATIC_FUNCTION(triggerPixelateY) 
	#endif

	#ifndef GEODE_STATICS_triggerRadialBlur
		#define GEODE_STATICS_triggerRadialBlur
		GEODE_AS_STATIC_FUNCTION(triggerRadialBlur) 
	#endif

	#ifndef GEODE_STATICS_triggerSepia
		#define GEODE_STATICS_triggerSepia
		GEODE_AS_STATIC_FUNCTION(triggerSepia) 
	#endif

	#ifndef GEODE_STATICS_triggerShockLine
		#define GEODE_STATICS_triggerShockLine
		GEODE_AS_STATIC_FUNCTION(triggerShockLine) 
	#endif

	#ifndef GEODE_STATICS_triggerShockWave
		#define GEODE_STATICS_triggerShockWave
		GEODE_AS_STATIC_FUNCTION(triggerShockWave) 
	#endif

	#ifndef GEODE_STATICS_triggerSplitScreenCols
		#define GEODE_STATICS_triggerSplitScreenCols
		GEODE_AS_STATIC_FUNCTION(triggerSplitScreenCols) 
	#endif

	#ifndef GEODE_STATICS_triggerSplitScreenRows
		#define GEODE_STATICS_triggerSplitScreenRows
		GEODE_AS_STATIC_FUNCTION(triggerSplitScreenRows) 
	#endif

	#ifndef GEODE_STATICS_tweenValue
		#define GEODE_STATICS_tweenValue
		GEODE_AS_STATIC_FUNCTION(tweenValue) 
	#endif

	#ifndef GEODE_STATICS_tweenValueAuto
		#define GEODE_STATICS_tweenValueAuto
		GEODE_AS_STATIC_FUNCTION(tweenValueAuto) 
	#endif

	#ifndef GEODE_STATICS_updateEffectOffsets
		#define GEODE_STATICS_updateEffectOffsets
		GEODE_AS_STATIC_FUNCTION(updateEffectOffsets) 
	#endif

	#ifndef GEODE_STATICS_updateMotionBlurSpeedX
		#define GEODE_STATICS_updateMotionBlurSpeedX
		GEODE_AS_STATIC_FUNCTION(updateMotionBlurSpeedX) 
	#endif

	#ifndef GEODE_STATICS_updateMotionBlurSpeedY
		#define GEODE_STATICS_updateMotionBlurSpeedY
		GEODE_AS_STATIC_FUNCTION(updateMotionBlurSpeedY) 
	#endif

	#ifndef GEODE_STATICS_updateShockLineCenter
		#define GEODE_STATICS_updateShockLineCenter
		GEODE_AS_STATIC_FUNCTION(updateShockLineCenter) 
	#endif

	#ifndef GEODE_STATICS_updateShockWaveCenter
		#define GEODE_STATICS_updateShockWaveCenter
		GEODE_AS_STATIC_FUNCTION(updateShockWaveCenter) 
	#endif

	#ifndef GEODE_STATICS_updateZLayer
		#define GEODE_STATICS_updateZLayer
		GEODE_AS_STATIC_FUNCTION(updateZLayer) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShaderLayer> : ModifyBase<ModifyDerive<Der, ShaderLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShaderLayer>>;
		using ModifyBase<ModifyDerive<Der, ShaderLayer>>::ModifyBase;
		using Base = ShaderLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3836c0, Membercall, ShaderLayer, performCalculations, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x383810, Thiscall, ShaderLayer, visit, )
		}
	};
}
