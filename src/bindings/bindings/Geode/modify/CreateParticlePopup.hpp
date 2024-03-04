#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreateParticlePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_centerAlignParticle
		#define GEODE_STATICS_centerAlignParticle
		GEODE_AS_STATIC_FUNCTION(centerAlignParticle) 
	#endif

	#ifndef GEODE_STATICS_createParticleSlider
		#define GEODE_STATICS_createParticleSlider
		GEODE_AS_STATIC_FUNCTION(createParticleSlider) 
	#endif

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_getPageButton
		#define GEODE_STATICS_getPageButton
		GEODE_AS_STATIC_FUNCTION(getPageButton) 
	#endif

	#ifndef GEODE_STATICS_getPageContainer
		#define GEODE_STATICS_getPageContainer
		GEODE_AS_STATIC_FUNCTION(getPageContainer) 
	#endif

	#ifndef GEODE_STATICS_getPageInputNodes
		#define GEODE_STATICS_getPageInputNodes
		GEODE_AS_STATIC_FUNCTION(getPageInputNodes) 
	#endif

	#ifndef GEODE_STATICS_getPageMenu
		#define GEODE_STATICS_getPageMenu
		GEODE_AS_STATIC_FUNCTION(getPageMenu) 
	#endif

	#ifndef GEODE_STATICS_getPageSliders
		#define GEODE_STATICS_getPageSliders
		GEODE_AS_STATIC_FUNCTION(getPageSliders) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_maxSliderValueForType
		#define GEODE_STATICS_maxSliderValueForType
		GEODE_AS_STATIC_FUNCTION(maxSliderValueForType) 
	#endif

	#ifndef GEODE_STATICS_minSliderValueForType
		#define GEODE_STATICS_minSliderValueForType
		GEODE_AS_STATIC_FUNCTION(minSliderValueForType) 
	#endif

	#ifndef GEODE_STATICS_onAnimateActiveOnly
		#define GEODE_STATICS_onAnimateActiveOnly
		GEODE_AS_STATIC_FUNCTION(onAnimateActiveOnly) 
	#endif

	#ifndef GEODE_STATICS_onAnimateOnTrigger
		#define GEODE_STATICS_onAnimateOnTrigger
		GEODE_AS_STATIC_FUNCTION(onAnimateOnTrigger) 
	#endif

	#ifndef GEODE_STATICS_onCalcEmission
		#define GEODE_STATICS_onCalcEmission
		GEODE_AS_STATIC_FUNCTION(onCalcEmission) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCopySettings
		#define GEODE_STATICS_onCopySettings
		GEODE_AS_STATIC_FUNCTION(onCopySettings) 
	#endif

	#ifndef GEODE_STATICS_onDuplicateColor
		#define GEODE_STATICS_onDuplicateColor
		GEODE_AS_STATIC_FUNCTION(onDuplicateColor) 
	#endif

	#ifndef GEODE_STATICS_onDurationForever
		#define GEODE_STATICS_onDurationForever
		GEODE_AS_STATIC_FUNCTION(onDurationForever) 
	#endif

	#ifndef GEODE_STATICS_onDynamicColor
		#define GEODE_STATICS_onDynamicColor
		GEODE_AS_STATIC_FUNCTION(onDynamicColor) 
	#endif

	#ifndef GEODE_STATICS_onDynamicRotation
		#define GEODE_STATICS_onDynamicRotation
		GEODE_AS_STATIC_FUNCTION(onDynamicRotation) 
	#endif

	#ifndef GEODE_STATICS_onEmitterMode
		#define GEODE_STATICS_onEmitterMode
		GEODE_AS_STATIC_FUNCTION(onEmitterMode) 
	#endif

	#ifndef GEODE_STATICS_onEndRGBVarSync
		#define GEODE_STATICS_onEndRGBVarSync
		GEODE_AS_STATIC_FUNCTION(onEndRGBVarSync) 
	#endif

	#ifndef GEODE_STATICS_onMaxEmission
		#define GEODE_STATICS_onMaxEmission
		GEODE_AS_STATIC_FUNCTION(onMaxEmission) 
	#endif

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onOrderSensitive
		#define GEODE_STATICS_onOrderSensitive
		GEODE_AS_STATIC_FUNCTION(onOrderSensitive) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onPasteSettings
		#define GEODE_STATICS_onPasteSettings
		GEODE_AS_STATIC_FUNCTION(onPasteSettings) 
	#endif

	#ifndef GEODE_STATICS_onPosType
		#define GEODE_STATICS_onPosType
		GEODE_AS_STATIC_FUNCTION(onPosType) 
	#endif

	#ifndef GEODE_STATICS_onQuickStart
		#define GEODE_STATICS_onQuickStart
		GEODE_AS_STATIC_FUNCTION(onQuickStart) 
	#endif

	#ifndef GEODE_STATICS_onSelectColor
		#define GEODE_STATICS_onSelectColor
		GEODE_AS_STATIC_FUNCTION(onSelectColor) 
	#endif

	#ifndef GEODE_STATICS_onSelectParticleTexture
		#define GEODE_STATICS_onSelectParticleTexture
		GEODE_AS_STATIC_FUNCTION(onSelectParticleTexture) 
	#endif

	#ifndef GEODE_STATICS_onStartRGBVarSync
		#define GEODE_STATICS_onStartRGBVarSync
		GEODE_AS_STATIC_FUNCTION(onStartRGBVarSync) 
	#endif

	#ifndef GEODE_STATICS_onToggleBlending
		#define GEODE_STATICS_onToggleBlending
		GEODE_AS_STATIC_FUNCTION(onToggleBlending) 
	#endif

	#ifndef GEODE_STATICS_onToggleStartRadiusEqualToEnd
		#define GEODE_STATICS_onToggleStartRadiusEqualToEnd
		GEODE_AS_STATIC_FUNCTION(onToggleStartRadiusEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_onToggleStartRotationIsDir
		#define GEODE_STATICS_onToggleStartRotationIsDir
		GEODE_AS_STATIC_FUNCTION(onToggleStartRotationIsDir) 
	#endif

	#ifndef GEODE_STATICS_onToggleStartSizeEqualToEnd
		#define GEODE_STATICS_onToggleStartSizeEqualToEnd
		GEODE_AS_STATIC_FUNCTION(onToggleStartSizeEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_onToggleStartSpinEqualToEnd
		#define GEODE_STATICS_onToggleStartSpinEqualToEnd
		GEODE_AS_STATIC_FUNCTION(onToggleStartSpinEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_onUniformColor
		#define GEODE_STATICS_onUniformColor
		GEODE_AS_STATIC_FUNCTION(onUniformColor) 
	#endif

	#ifndef GEODE_STATICS_particleValueIsInt
		#define GEODE_STATICS_particleValueIsInt
		GEODE_AS_STATIC_FUNCTION(particleValueIsInt) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_titleForParticleValue
		#define GEODE_STATICS_titleForParticleValue
		GEODE_AS_STATIC_FUNCTION(titleForParticleValue) 
	#endif

	#ifndef GEODE_STATICS_toggleGravityMode
		#define GEODE_STATICS_toggleGravityMode
		GEODE_AS_STATIC_FUNCTION(toggleGravityMode) 
	#endif

	#ifndef GEODE_STATICS_updateColorSprite
		#define GEODE_STATICS_updateColorSprite
		GEODE_AS_STATIC_FUNCTION(updateColorSprite) 
	#endif

	#ifndef GEODE_STATICS_updateInputNodeStringForType
		#define GEODE_STATICS_updateInputNodeStringForType
		GEODE_AS_STATIC_FUNCTION(updateInputNodeStringForType) 
	#endif

	#ifndef GEODE_STATICS_updateParticleValueForType
		#define GEODE_STATICS_updateParticleValueForType
		GEODE_AS_STATIC_FUNCTION(updateParticleValueForType) 
	#endif

	#ifndef GEODE_STATICS_updateSliderForType
		#define GEODE_STATICS_updateSliderForType
		GEODE_AS_STATIC_FUNCTION(updateSliderForType) 
	#endif

	#ifndef GEODE_STATICS_valueForParticleValue
		#define GEODE_STATICS_valueForParticleValue
		GEODE_AS_STATIC_FUNCTION(valueForParticleValue) 
	#endif

	#ifndef GEODE_STATICS_willClose
		#define GEODE_STATICS_willClose
		GEODE_AS_STATIC_FUNCTION(willClose) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_sliderBegan
		#define GEODE_STATICS_sliderBegan
		GEODE_AS_STATIC_FUNCTION(sliderBegan) 
	#endif

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
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
	struct ModifyDerive<Der, CreateParticlePopup> : ModifyBase<ModifyDerive<Der, CreateParticlePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreateParticlePopup>>;
		using ModifyBase<ModifyDerive<Der, CreateParticlePopup>>::ModifyBase;
		using Base = CreateParticlePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x338190, Membercall, CreateParticlePopup, init, ParticleGameObject*, cocos2d::CCArray*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f5b0, Membercall, CreateParticlePopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f540, Membercall, CreateParticlePopup, willClose, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f6c0, Thiscall, CreateParticlePopup, keyBackClicked, )
		}
	};
}
