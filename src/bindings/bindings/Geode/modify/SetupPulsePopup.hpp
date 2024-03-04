#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupPulsePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getColorValue
		#define GEODE_STATICS_getColorValue
		GEODE_AS_STATIC_FUNCTION(getColorValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onExclusive
		#define GEODE_STATICS_onExclusive
		GEODE_AS_STATIC_FUNCTION(onExclusive) 
	#endif

	#ifndef GEODE_STATICS_onGroupMainOnly
		#define GEODE_STATICS_onGroupMainOnly
		GEODE_AS_STATIC_FUNCTION(onGroupMainOnly) 
	#endif

	#ifndef GEODE_STATICS_onGroupSecondaryOnly
		#define GEODE_STATICS_onGroupSecondaryOnly
		GEODE_AS_STATIC_FUNCTION(onGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_STATICS_onHSVLegacyMode
		#define GEODE_STATICS_onHSVLegacyMode
		GEODE_AS_STATIC_FUNCTION(onHSVLegacyMode) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onSelectPulseMode
		#define GEODE_STATICS_onSelectPulseMode
		GEODE_AS_STATIC_FUNCTION(onSelectPulseMode) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpecialColor
		#define GEODE_STATICS_onSelectSpecialColor
		GEODE_AS_STATIC_FUNCTION(onSelectSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpecialTargetID
		#define GEODE_STATICS_onSelectSpecialTargetID
		GEODE_AS_STATIC_FUNCTION(onSelectSpecialTargetID) 
	#endif

	#ifndef GEODE_STATICS_onSelectTargetMode
		#define GEODE_STATICS_onSelectTargetMode
		GEODE_AS_STATIC_FUNCTION(onSelectTargetMode) 
	#endif

	#ifndef GEODE_STATICS_onUpdateCopyColor
		#define GEODE_STATICS_onUpdateCopyColor
		GEODE_AS_STATIC_FUNCTION(onUpdateCopyColor) 
	#endif

	#ifndef GEODE_STATICS_onUpdateCustomColor
		#define GEODE_STATICS_onUpdateCustomColor
		GEODE_AS_STATIC_FUNCTION(onUpdateCustomColor) 
	#endif

	#ifndef GEODE_STATICS_selectColor
		#define GEODE_STATICS_selectColor
		GEODE_AS_STATIC_FUNCTION(selectColor) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateColorLabels
		#define GEODE_STATICS_updateColorLabels
		GEODE_AS_STATIC_FUNCTION(updateColorLabels) 
	#endif

	#ifndef GEODE_STATICS_updateColorValue
		#define GEODE_STATICS_updateColorValue
		GEODE_AS_STATIC_FUNCTION(updateColorValue) 
	#endif

	#ifndef GEODE_STATICS_updateCopyColor
		#define GEODE_STATICS_updateCopyColor
		GEODE_AS_STATIC_FUNCTION(updateCopyColor) 
	#endif

	#ifndef GEODE_STATICS_updateCopyColorTextInputLabel
		#define GEODE_STATICS_updateCopyColorTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateCopyColorTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateFadeInLabel
		#define GEODE_STATICS_updateFadeInLabel
		GEODE_AS_STATIC_FUNCTION(updateFadeInLabel) 
	#endif

	#ifndef GEODE_STATICS_updateFadeInTime
		#define GEODE_STATICS_updateFadeInTime
		GEODE_AS_STATIC_FUNCTION(updateFadeInTime) 
	#endif

	#ifndef GEODE_STATICS_updateFadeOutLabel
		#define GEODE_STATICS_updateFadeOutLabel
		GEODE_AS_STATIC_FUNCTION(updateFadeOutLabel) 
	#endif

	#ifndef GEODE_STATICS_updateFadeOutTime
		#define GEODE_STATICS_updateFadeOutTime
		GEODE_AS_STATIC_FUNCTION(updateFadeOutTime) 
	#endif

	#ifndef GEODE_STATICS_updateGroupMainOnly
		#define GEODE_STATICS_updateGroupMainOnly
		GEODE_AS_STATIC_FUNCTION(updateGroupMainOnly) 
	#endif

	#ifndef GEODE_STATICS_updateGroupSecondaryOnly
		#define GEODE_STATICS_updateGroupSecondaryOnly
		GEODE_AS_STATIC_FUNCTION(updateGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_STATICS_updateHoldLabel
		#define GEODE_STATICS_updateHoldLabel
		GEODE_AS_STATIC_FUNCTION(updateHoldLabel) 
	#endif

	#ifndef GEODE_STATICS_updateHoldTime
		#define GEODE_STATICS_updateHoldTime
		GEODE_AS_STATIC_FUNCTION(updateHoldTime) 
	#endif

	#ifndef GEODE_STATICS_updateHSVValue
		#define GEODE_STATICS_updateHSVValue
		GEODE_AS_STATIC_FUNCTION(updateHSVValue) 
	#endif

	#ifndef GEODE_STATICS_updatePulseMode
		#define GEODE_STATICS_updatePulseMode
		GEODE_AS_STATIC_FUNCTION(updatePulseMode) 
	#endif

	#ifndef GEODE_STATICS_updatePulseTargetType
		#define GEODE_STATICS_updatePulseTargetType
		GEODE_AS_STATIC_FUNCTION(updatePulseTargetType) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
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

	#ifndef GEODE_STATICS_colorValueChanged
		#define GEODE_STATICS_colorValueChanged
		GEODE_AS_STATIC_FUNCTION(colorValueChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupPulsePopup> : ModifyBase<ModifyDerive<Der, SetupPulsePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupPulsePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupPulsePopup>>::ModifyBase;
		using Base = SetupPulsePopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
