#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorSelectPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_closeColorSelect
		#define GEODE_STATICS_closeColorSelect
		GEODE_AS_STATIC_FUNCTION(closeColorSelect) 
	#endif

	#ifndef GEODE_STATICS_colorToHex
		#define GEODE_STATICS_colorToHex
		GEODE_AS_STATIC_FUNCTION(colorToHex) 
	#endif

	#ifndef GEODE_STATICS_getColorValue
		#define GEODE_STATICS_getColorValue
		GEODE_AS_STATIC_FUNCTION(getColorValue) 
	#endif

	#ifndef GEODE_STATICS_hexToColor
		#define GEODE_STATICS_hexToColor
		GEODE_AS_STATIC_FUNCTION(hexToColor) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onCopyOpacity
		#define GEODE_STATICS_onCopyOpacity
		GEODE_AS_STATIC_FUNCTION(onCopyOpacity) 
	#endif

	#ifndef GEODE_STATICS_onDefault
		#define GEODE_STATICS_onDefault
		GEODE_AS_STATIC_FUNCTION(onDefault) 
	#endif

	#ifndef GEODE_STATICS_onHSVLegacyMode
		#define GEODE_STATICS_onHSVLegacyMode
		GEODE_AS_STATIC_FUNCTION(onHSVLegacyMode) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onPlayerColor1
		#define GEODE_STATICS_onPlayerColor1
		GEODE_AS_STATIC_FUNCTION(onPlayerColor1) 
	#endif

	#ifndef GEODE_STATICS_onPlayerColor2
		#define GEODE_STATICS_onPlayerColor2
		GEODE_AS_STATIC_FUNCTION(onPlayerColor2) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpecialColor
		#define GEODE_STATICS_onSelectSpecialColor
		GEODE_AS_STATIC_FUNCTION(onSelectSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_onTintGround
		#define GEODE_STATICS_onTintGround
		GEODE_AS_STATIC_FUNCTION(onTintGround) 
	#endif

	#ifndef GEODE_STATICS_onToggleHSVMode
		#define GEODE_STATICS_onToggleHSVMode
		GEODE_AS_STATIC_FUNCTION(onToggleHSVMode) 
	#endif

	#ifndef GEODE_STATICS_onToggleTintMode
		#define GEODE_STATICS_onToggleTintMode
		GEODE_AS_STATIC_FUNCTION(onToggleTintMode) 
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

	#ifndef GEODE_STATICS_updateCustomColorIdx
		#define GEODE_STATICS_updateCustomColorIdx
		GEODE_AS_STATIC_FUNCTION(updateCustomColorIdx) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateHSVMode
		#define GEODE_STATICS_updateHSVMode
		GEODE_AS_STATIC_FUNCTION(updateHSVMode) 
	#endif

	#ifndef GEODE_STATICS_updateHSVValue
		#define GEODE_STATICS_updateHSVValue
		GEODE_AS_STATIC_FUNCTION(updateHSVValue) 
	#endif

	#ifndef GEODE_STATICS_updateOpacity
		#define GEODE_STATICS_updateOpacity
		GEODE_AS_STATIC_FUNCTION(updateOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateOpacityLabel
		#define GEODE_STATICS_updateOpacityLabel
		GEODE_AS_STATIC_FUNCTION(updateOpacityLabel) 
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

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_colorValueChanged
		#define GEODE_STATICS_colorValueChanged
		GEODE_AS_STATIC_FUNCTION(colorValueChanged) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorSelectPopup> : ModifyBase<ModifyDerive<Der, ColorSelectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorSelectPopup>>;
		using ModifyBase<ModifyDerive<Der, ColorSelectPopup>>::ModifyBase;
		using Base = ColorSelectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x63a10, Optcall, ColorSelectPopup, create, EffectGameObject*, cocos2d::CCArray*, ColorAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66b30, Membercall, ColorSelectPopup, closeColorSelect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x63ac0, Membercall, ColorSelectPopup, init, EffectGameObject*, cocos2d::CCArray*, ColorAction*)
		}
	};
}
