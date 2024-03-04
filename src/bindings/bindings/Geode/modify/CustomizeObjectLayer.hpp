#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomizeObjectLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_getActiveMode
		#define GEODE_STATICS_getActiveMode
		GEODE_AS_STATIC_FUNCTION(getActiveMode) 
	#endif

	#ifndef GEODE_STATICS_getButtonByTag
		#define GEODE_STATICS_getButtonByTag
		GEODE_AS_STATIC_FUNCTION(getButtonByTag) 
	#endif

	#ifndef GEODE_STATICS_getHSV
		#define GEODE_STATICS_getHSV
		GEODE_AS_STATIC_FUNCTION(getHSV) 
	#endif

	#ifndef GEODE_STATICS_highlightSelected
		#define GEODE_STATICS_highlightSelected
		GEODE_AS_STATIC_FUNCTION(highlightSelected) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBreakApart
		#define GEODE_STATICS_onBreakApart
		GEODE_AS_STATIC_FUNCTION(onBreakApart) 
	#endif

	#ifndef GEODE_STATICS_onBrowse
		#define GEODE_STATICS_onBrowse
		GEODE_AS_STATIC_FUNCTION(onBrowse) 
	#endif

	#ifndef GEODE_STATICS_onClear
		#define GEODE_STATICS_onClear
		GEODE_AS_STATIC_FUNCTION(onClear) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onEditColor
		#define GEODE_STATICS_onEditColor
		GEODE_AS_STATIC_FUNCTION(onEditColor) 
	#endif

	#ifndef GEODE_STATICS_onHSV
		#define GEODE_STATICS_onHSV
		GEODE_AS_STATIC_FUNCTION(onHSV) 
	#endif

	#ifndef GEODE_STATICS_onLiveEdit
		#define GEODE_STATICS_onLiveEdit
		GEODE_AS_STATIC_FUNCTION(onLiveEdit) 
	#endif

	#ifndef GEODE_STATICS_onNextColorChannel
		#define GEODE_STATICS_onNextColorChannel
		GEODE_AS_STATIC_FUNCTION(onNextColorChannel) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onSelectColor
		#define GEODE_STATICS_onSelectColor
		GEODE_AS_STATIC_FUNCTION(onSelectColor) 
	#endif

	#ifndef GEODE_STATICS_onSelectMode
		#define GEODE_STATICS_onSelectMode
		GEODE_AS_STATIC_FUNCTION(onSelectMode) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onUpdateCustomColor
		#define GEODE_STATICS_onUpdateCustomColor
		GEODE_AS_STATIC_FUNCTION(onUpdateCustomColor) 
	#endif

	#ifndef GEODE_STATICS_recreateLayer
		#define GEODE_STATICS_recreateLayer
		GEODE_AS_STATIC_FUNCTION(recreateLayer) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleVisible
		#define GEODE_STATICS_toggleVisible
		GEODE_AS_STATIC_FUNCTION(toggleVisible) 
	#endif

	#ifndef GEODE_STATICS_updateChannelLabel
		#define GEODE_STATICS_updateChannelLabel
		GEODE_AS_STATIC_FUNCTION(updateChannelLabel) 
	#endif

	#ifndef GEODE_STATICS_updateColorSprite
		#define GEODE_STATICS_updateColorSprite
		GEODE_AS_STATIC_FUNCTION(updateColorSprite) 
	#endif

	#ifndef GEODE_STATICS_updateCurrentSelection
		#define GEODE_STATICS_updateCurrentSelection
		GEODE_AS_STATIC_FUNCTION(updateCurrentSelection) 
	#endif

	#ifndef GEODE_STATICS_updateCustomColorLabels
		#define GEODE_STATICS_updateCustomColorLabels
		GEODE_AS_STATIC_FUNCTION(updateCustomColorLabels) 
	#endif

	#ifndef GEODE_STATICS_updateHSVButtons
		#define GEODE_STATICS_updateHSVButtons
		GEODE_AS_STATIC_FUNCTION(updateHSVButtons) 
	#endif

	#ifndef GEODE_STATICS_updateKerningLabel
		#define GEODE_STATICS_updateKerningLabel
		GEODE_AS_STATIC_FUNCTION(updateKerningLabel) 
	#endif

	#ifndef GEODE_STATICS_updateSelected
		#define GEODE_STATICS_updateSelected
		GEODE_AS_STATIC_FUNCTION(updateSelected) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_hsvPopupClosed
		#define GEODE_STATICS_hsvPopupClosed
		GEODE_AS_STATIC_FUNCTION(hsvPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_colorSetupClosed
		#define GEODE_STATICS_colorSetupClosed
		GEODE_AS_STATIC_FUNCTION(colorSetupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomizeObjectLayer> : ModifyBase<ModifyDerive<Der, CustomizeObjectLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomizeObjectLayer>>;
		using ModifyBase<ModifyDerive<Der, CustomizeObjectLayer>>::ModifyBase;
		using Base = CustomizeObjectLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x763f0, Optcall, CustomizeObjectLayer, create, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79a00, Membercall, CustomizeObjectLayer, getActiveMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7a1b0, Membercall, CustomizeObjectLayer, highlightSelected, ButtonSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x764a0, Membercall, CustomizeObjectLayer, init, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7a2a0, Membercall, CustomizeObjectLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79fa0, Membercall, CustomizeObjectLayer, onSelectColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79550, Membercall, CustomizeObjectLayer, onSelectMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79af0, Membercall, CustomizeObjectLayer, onUpdateCustomColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x78930, Membercall, CustomizeObjectLayer, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79780, Membercall, CustomizeObjectLayer, toggleVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79720, Membercall, CustomizeObjectLayer, updateChannelLabel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x78d40, Membercall, CustomizeObjectLayer, updateColorSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79ec0, Membercall, CustomizeObjectLayer, updateCustomColorLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79050, Membercall, CustomizeObjectLayer, updateHSVButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x787e0, Membercall, CustomizeObjectLayer, updateKerningLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7a040, Membercall, CustomizeObjectLayer, updateSelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79cf0, Thiscall, CustomizeObjectLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x78e60, Thiscall, CustomizeObjectLayer, colorSelectClosed, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x78c30, Thiscall, CustomizeObjectLayer, colorSetupClosed, int)
		}
	};
}
