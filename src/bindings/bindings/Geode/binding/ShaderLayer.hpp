#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ShaderLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ShaderLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ShaderLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("ShaderLayer::create not implemented")]]
    /**
     */
    static ShaderLayer* create();
public:
    
private:
    [[deprecated("ShaderLayer::objectPosToShaderPos not implemented")]]
    /**
     */
    TodoReturn objectPosToShaderPos(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] Windows: 0x3836c0
     */
    TodoReturn performCalculations();
    
private:
    [[deprecated("ShaderLayer::preBulgeShader not implemented")]]
    /**
     */
    TodoReturn preBulgeShader();
public:
    
private:
    [[deprecated("ShaderLayer::preChromaticGlitchShader not implemented")]]
    /**
     */
    TodoReturn preChromaticGlitchShader();
public:
    
private:
    [[deprecated("ShaderLayer::preChromaticShader not implemented")]]
    /**
     */
    TodoReturn preChromaticShader();
public:
    
private:
    [[deprecated("ShaderLayer::preColorChangeShader not implemented")]]
    /**
     */
    TodoReturn preColorChangeShader();
public:
    
private:
    [[deprecated("ShaderLayer::preCommonShader not implemented")]]
    /**
     */
    TodoReturn preCommonShader();
public:
    
private:
    [[deprecated("ShaderLayer::preGlitchShader not implemented")]]
    /**
     */
    TodoReturn preGlitchShader();
public:
    
private:
    [[deprecated("ShaderLayer::preGrayscaleShader not implemented")]]
    /**
     */
    TodoReturn preGrayscaleShader();
public:
    
private:
    [[deprecated("ShaderLayer::preHueShiftShader not implemented")]]
    /**
     */
    TodoReturn preHueShiftShader();
public:
    
private:
    [[deprecated("ShaderLayer::preInvertColorShader not implemented")]]
    /**
     */
    TodoReturn preInvertColorShader();
public:
    
private:
    [[deprecated("ShaderLayer::preLensCircleShader not implemented")]]
    /**
     */
    TodoReturn preLensCircleShader();
public:
    
private:
    [[deprecated("ShaderLayer::preMotionBlurShader not implemented")]]
    /**
     */
    TodoReturn preMotionBlurShader();
public:
    
private:
    [[deprecated("ShaderLayer::prepareTargetContainer not implemented")]]
    /**
     */
    TodoReturn prepareTargetContainer();
public:
    
private:
    [[deprecated("ShaderLayer::prePinchShader not implemented")]]
    /**
     */
    TodoReturn prePinchShader();
public:
    
private:
    [[deprecated("ShaderLayer::prePixelateShader not implemented")]]
    /**
     */
    TodoReturn prePixelateShader();
public:
    
private:
    [[deprecated("ShaderLayer::preRadialBlurShader not implemented")]]
    /**
     */
    TodoReturn preRadialBlurShader();
public:
    
private:
    [[deprecated("ShaderLayer::preSepiaShader not implemented")]]
    /**
     */
    TodoReturn preSepiaShader();
public:
    
private:
    [[deprecated("ShaderLayer::preShockLineShader not implemented")]]
    /**
     */
    TodoReturn preShockLineShader();
public:
    
private:
    [[deprecated("ShaderLayer::preShockWaveShader not implemented")]]
    /**
     */
    TodoReturn preShockWaveShader();
public:
    
private:
    [[deprecated("ShaderLayer::preSplitScreenShader not implemented")]]
    /**
     */
    TodoReturn preSplitScreenShader();
public:
    
private:
    [[deprecated("ShaderLayer::resetAllShaders not implemented")]]
    /**
     */
    TodoReturn resetAllShaders();
public:
    
private:
    [[deprecated("ShaderLayer::resetTargetContainer not implemented")]]
    /**
     */
    TodoReturn resetTargetContainer();
public:
    
private:
    [[deprecated("ShaderLayer::setupBulgeShader not implemented")]]
    /**
     */
    TodoReturn setupBulgeShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupChromaticGlitchUniforms not implemented")]]
    /**
     */
    TodoReturn setupChromaticGlitchUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupChromaticUniforms not implemented")]]
    /**
     */
    TodoReturn setupChromaticUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupColorChangeShader not implemented")]]
    /**
     */
    TodoReturn setupColorChangeShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupCommonUniforms not implemented")]]
    /**
     */
    TodoReturn setupCommonUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupGlitchUniforms not implemented")]]
    /**
     */
    TodoReturn setupGlitchUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupGrayscaleShader not implemented")]]
    /**
     */
    TodoReturn setupGrayscaleShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupHueShiftShader not implemented")]]
    /**
     */
    TodoReturn setupHueShiftShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupInvertColorShader not implemented")]]
    /**
     */
    TodoReturn setupInvertColorShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupLensCircleShader not implemented")]]
    /**
     */
    TodoReturn setupLensCircleShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupMotionBlurShader not implemented")]]
    /**
     */
    TodoReturn setupMotionBlurShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupPinchShader not implemented")]]
    /**
     */
    TodoReturn setupPinchShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupRadialBlurShader not implemented")]]
    /**
     */
    TodoReturn setupRadialBlurShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupSepiaShader not implemented")]]
    /**
     */
    TodoReturn setupSepiaShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupShader not implemented")]]
    /**
     */
    TodoReturn setupShader(bool p0);
public:
    
private:
    [[deprecated("ShaderLayer::setupShockLineUniforms not implemented")]]
    /**
     */
    TodoReturn setupShockLineUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupShockWaveUniforms not implemented")]]
    /**
     */
    TodoReturn setupShockWaveUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupSplitScreenShader not implemented")]]
    /**
     */
    TodoReturn setupSplitScreenShader();
public:
    
private:
    [[deprecated("ShaderLayer::toggleAntiAlias not implemented")]]
    /**
     */
    TodoReturn toggleAntiAlias(bool p0);
public:
    
private:
    [[deprecated("ShaderLayer::triggerBulge not implemented")]]
    /**
     */
    TodoReturn triggerBulge(float p0, float p1, float p2, float p3, float p4, int p5, int p6, float p7, bool p8);
public:
    
private:
    [[deprecated("ShaderLayer::triggerChromaticGlitch not implemented")]]
    /**
     */
    TodoReturn triggerChromaticGlitch(bool p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int p8, float p9, bool p10, bool p11);
public:
    
private:
    [[deprecated("ShaderLayer::triggerChromaticX not implemented")]]
    /**
     */
    TodoReturn triggerChromaticX(float p0, float p1, int p2, float p3, bool p4);
public:
    
private:
    [[deprecated("ShaderLayer::triggerChromaticY not implemented")]]
    /**
     */
    TodoReturn triggerChromaticY(float p0, float p1, int p2, float p3, bool p4);
public:
    
private:
    [[deprecated("ShaderLayer::triggerColorChange not implemented")]]
    /**
     */
    TodoReturn triggerColorChange(float p0, float p1, float p2, float p3, float p4, float p5, float p6, int p7, float p8);
public:
    
private:
    [[deprecated("ShaderLayer::triggerGlitch not implemented")]]
    /**
     */
    TodoReturn triggerGlitch(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7);
public:
    
private:
    [[deprecated("ShaderLayer::triggerGrayscale not implemented")]]
    /**
     */
    TodoReturn triggerGrayscale(float p0, float p1, bool p2, int p3, int p4, float p5);
public:
    
private:
    [[deprecated("ShaderLayer::triggerHueShift not implemented")]]
    /**
     */
    TodoReturn triggerHueShift(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::triggerInvertColor not implemented")]]
    /**
     */
    TodoReturn triggerInvertColor(float p0, float p1, float p2, float p3, float p4, bool p5, bool p6, bool p7, int p8, float p9);
public:
    
private:
    [[deprecated("ShaderLayer::triggerLensCircle not implemented")]]
    /**
     */
    TodoReturn triggerLensCircle(float p0, float p1, float p2, float p3, int p4, int p5, float p6, float p7, int p8, float p9, bool p10);
public:
    
private:
    [[deprecated("ShaderLayer::triggerMotionBlurX not implemented")]]
    /**
     */
    TodoReturn triggerMotionBlurX(float p0, float p1, float p2, float p3, int p4, float p5, bool p6, int p7, int p8, float p9, bool p10, bool p11);
public:
    
private:
    [[deprecated("ShaderLayer::triggerMotionBlurY not implemented")]]
    /**
     */
    TodoReturn triggerMotionBlurY(float p0, float p1, float p2, float p3, int p4, float p5, bool p6, int p7, int p8, float p9, bool p10, bool p11);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPinchX not implemented")]]
    /**
     */
    TodoReturn triggerPinchX(float p0, float p1, float p2, float p3, float p4, bool p5, int p6, int p7, float p8, bool p9);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPinchY not implemented")]]
    /**
     */
    TodoReturn triggerPinchY(float p0, float p1, float p2, float p3, float p4, bool p5, int p6, int p7, float p8, bool p9);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPixelateX not implemented")]]
    /**
     */
    TodoReturn triggerPixelateX(float p0, float p1, bool p2, bool p3, int p4, float p5, bool p6);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPixelateY not implemented")]]
    /**
     */
    TodoReturn triggerPixelateY(float p0, float p1, bool p2, bool p3, int p4, float p5, bool p6);
public:
    
private:
    [[deprecated("ShaderLayer::triggerRadialBlur not implemented")]]
    /**
     */
    TodoReturn triggerRadialBlur(float p0, float p1, float p2, float p3, int p4, float p5, float p6, bool p7, int p8, int p9, float p10, bool p11);
public:
    
private:
    [[deprecated("ShaderLayer::triggerSepia not implemented")]]
    /**
     */
    TodoReturn triggerSepia(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::triggerShockLine not implemented")]]
    /**
     */
    TodoReturn triggerShockLine(float p0, float p1, bool p2, bool p3, bool p4, bool p5, float p6, float p7, float p8, float p9, float p10, float p11, int p12, bool p13, bool p14, bool p15, float p16, bool p17, float p18, int p19, float p20);
public:
    
private:
    [[deprecated("ShaderLayer::triggerShockWave not implemented")]]
    /**
     */
    TodoReturn triggerShockWave(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, float p8, float p9, float p10, int p11, bool p12, bool p13, bool p14, float p15, float p16, bool p17, float p18, int p19, float p20);
public:
    
private:
    [[deprecated("ShaderLayer::triggerSplitScreenCols not implemented")]]
    /**
     */
    TodoReturn triggerSplitScreenCols(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::triggerSplitScreenRows not implemented")]]
    /**
     */
    TodoReturn triggerSplitScreenRows(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::tweenValue not implemented")]]
    /**
     */
    TodoReturn tweenValue(float p0, float p1, int p2, float p3, int p4, float p5);
public:
    
private:
    [[deprecated("ShaderLayer::tweenValueAuto not implemented")]]
    /**
     */
    TodoReturn tweenValueAuto(float p0, int p1, float p2, int p3, float p4);
public:
    
private:
    [[deprecated("ShaderLayer::updateEffectOffsets not implemented")]]
    /**
     */
    TodoReturn updateEffectOffsets(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("ShaderLayer::updateMotionBlurSpeedX not implemented")]]
    /**
     */
    TodoReturn updateMotionBlurSpeedX(float p0, float p1);
public:
    
private:
    [[deprecated("ShaderLayer::updateMotionBlurSpeedY not implemented")]]
    /**
     */
    TodoReturn updateMotionBlurSpeedY(float p0, float p1);
public:
    
private:
    [[deprecated("ShaderLayer::updateShockLineCenter not implemented")]]
    /**
     */
    TodoReturn updateShockLineCenter(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("ShaderLayer::updateShockWaveCenter not implemented")]]
    /**
     */
    TodoReturn updateShockWaveCenter(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("ShaderLayer::updateZLayer not implemented")]]
    /**
     */
    TodoReturn updateZLayer(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("ShaderLayer::update not implemented")]]
    /**
     */
    virtual void update(float p0);
public:
    
private:
    [[deprecated("ShaderLayer::init not implemented")]]
    /**
     */
    virtual bool init();
public:

    /**
     * @note[short] Windows: 0x383810
     */
    virtual void visit();
};
