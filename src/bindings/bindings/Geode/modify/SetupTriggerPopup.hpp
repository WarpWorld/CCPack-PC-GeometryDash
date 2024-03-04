#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addCloseButton
		#define GEODE_STATICS_addCloseButton
		GEODE_AS_STATIC_FUNCTION(addCloseButton) 
	#endif

	#ifndef GEODE_STATICS_addHelpButton
		#define GEODE_STATICS_addHelpButton
		GEODE_AS_STATIC_FUNCTION(addHelpButton) 
	#endif

	#ifndef GEODE_STATICS_addInfoLabel
		#define GEODE_STATICS_addInfoLabel
		GEODE_AS_STATIC_FUNCTION(addInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_addObjectsToGroup
		#define GEODE_STATICS_addObjectsToGroup
		GEODE_AS_STATIC_FUNCTION(addObjectsToGroup) 
	#endif

	#ifndef GEODE_STATICS_addObjectsToPage
		#define GEODE_STATICS_addObjectsToPage
		GEODE_AS_STATIC_FUNCTION(addObjectsToPage) 
	#endif

	#ifndef GEODE_STATICS_addObjectToGroup
		#define GEODE_STATICS_addObjectToGroup
		GEODE_AS_STATIC_FUNCTION(addObjectToGroup) 
	#endif

	#ifndef GEODE_STATICS_addObjectToPage
		#define GEODE_STATICS_addObjectToPage
		GEODE_AS_STATIC_FUNCTION(addObjectToPage) 
	#endif

	#ifndef GEODE_STATICS_addTitle
		#define GEODE_STATICS_addTitle
		GEODE_AS_STATIC_FUNCTION(addTitle) 
	#endif

	#ifndef GEODE_STATICS_closeInputNodes
		#define GEODE_STATICS_closeInputNodes
		GEODE_AS_STATIC_FUNCTION(closeInputNodes) 
	#endif

	#ifndef GEODE_STATICS_createCustomButton
		#define GEODE_STATICS_createCustomButton
		GEODE_AS_STATIC_FUNCTION(createCustomButton) 
	#endif

	#ifndef GEODE_STATICS_createCustomEasingControls
		#define GEODE_STATICS_createCustomEasingControls
		GEODE_AS_STATIC_FUNCTION(createCustomEasingControls) 
	#endif

	#ifndef GEODE_STATICS_createCustomToggleValueControl
		#define GEODE_STATICS_createCustomToggleValueControl
		GEODE_AS_STATIC_FUNCTION(createCustomToggleValueControl) 
	#endif

	#ifndef GEODE_STATICS_createEasingControls
		#define GEODE_STATICS_createEasingControls
		GEODE_AS_STATIC_FUNCTION(createEasingControls) 
	#endif

	#ifndef GEODE_STATICS_createMultiTriggerItems
		#define GEODE_STATICS_createMultiTriggerItems
		GEODE_AS_STATIC_FUNCTION(createMultiTriggerItems) 
	#endif

	#ifndef GEODE_STATICS_createMultiTriggerItemsCorner
		#define GEODE_STATICS_createMultiTriggerItemsCorner
		GEODE_AS_STATIC_FUNCTION(createMultiTriggerItemsCorner) 
	#endif

	#ifndef GEODE_STATICS_createMultiTriggerItemsDefault
		#define GEODE_STATICS_createMultiTriggerItemsDefault
		GEODE_AS_STATIC_FUNCTION(createMultiTriggerItemsDefault) 
	#endif

	#ifndef GEODE_STATICS_createMultiTriggerItemsDefaultHorizontal
		#define GEODE_STATICS_createMultiTriggerItemsDefaultHorizontal
		GEODE_AS_STATIC_FUNCTION(createMultiTriggerItemsDefaultHorizontal) 
	#endif

	#ifndef GEODE_STATICS_createMultiTriggerItemsDefaultVertical
		#define GEODE_STATICS_createMultiTriggerItemsDefaultVertical
		GEODE_AS_STATIC_FUNCTION(createMultiTriggerItemsDefaultVertical) 
	#endif

	#ifndef GEODE_STATICS_createPageButtons
		#define GEODE_STATICS_createPageButtons
		GEODE_AS_STATIC_FUNCTION(createPageButtons) 
	#endif

	#ifndef GEODE_STATICS_createPlusButton
		#define GEODE_STATICS_createPlusButton
		GEODE_AS_STATIC_FUNCTION(createPlusButton) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_createToggleValueControl
		#define GEODE_STATICS_createToggleValueControl
		GEODE_AS_STATIC_FUNCTION(createToggleValueControl) 
	#endif

	#ifndef GEODE_STATICS_createToggleValueControlAdvanced
		#define GEODE_STATICS_createToggleValueControlAdvanced
		GEODE_AS_STATIC_FUNCTION(createToggleValueControlAdvanced) 
	#endif

	#ifndef GEODE_STATICS_createValueControl
		#define GEODE_STATICS_createValueControl
		GEODE_AS_STATIC_FUNCTION(createValueControl) 
	#endif

	#ifndef GEODE_STATICS_createValueControlAdvanced
		#define GEODE_STATICS_createValueControlAdvanced
		GEODE_AS_STATIC_FUNCTION(createValueControlAdvanced) 
	#endif

	#ifndef GEODE_STATICS_createValueControlWArrows
		#define GEODE_STATICS_createValueControlWArrows
		GEODE_AS_STATIC_FUNCTION(createValueControlWArrows) 
	#endif

	#ifndef GEODE_STATICS_getGroupContainer
		#define GEODE_STATICS_getGroupContainer
		GEODE_AS_STATIC_FUNCTION(getGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_getMaxSliderValue
		#define GEODE_STATICS_getMaxSliderValue
		GEODE_AS_STATIC_FUNCTION(getMaxSliderValue) 
	#endif

	#ifndef GEODE_STATICS_getMinSliderValue
		#define GEODE_STATICS_getMinSliderValue
		GEODE_AS_STATIC_FUNCTION(getMinSliderValue) 
	#endif

	#ifndef GEODE_STATICS_getObjects
		#define GEODE_STATICS_getObjects
		GEODE_AS_STATIC_FUNCTION(getObjects) 
	#endif

	#ifndef GEODE_STATICS_getPageContainer
		#define GEODE_STATICS_getPageContainer
		GEODE_AS_STATIC_FUNCTION(getPageContainer) 
	#endif

	#ifndef GEODE_STATICS_getTriggerValue
		#define GEODE_STATICS_getTriggerValue
		GEODE_AS_STATIC_FUNCTION(getTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_getTruncatedValue
		#define GEODE_STATICS_getTruncatedValue
		GEODE_AS_STATIC_FUNCTION(getTruncatedValue) 
	#endif

	#ifndef GEODE_STATICS_getTruncatedValueByTag
		#define GEODE_STATICS_getTruncatedValueByTag
		GEODE_AS_STATIC_FUNCTION(getTruncatedValueByTag) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_hideAll
		#define GEODE_STATICS_hideAll
		GEODE_AS_STATIC_FUNCTION(hideAll) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCustomEaseArrow
		#define GEODE_STATICS_onCustomEaseArrow
		GEODE_AS_STATIC_FUNCTION(onCustomEaseArrow) 
	#endif

	#ifndef GEODE_STATICS_onCustomEaseArrowDown
		#define GEODE_STATICS_onCustomEaseArrowDown
		GEODE_AS_STATIC_FUNCTION(onCustomEaseArrowDown) 
	#endif

	#ifndef GEODE_STATICS_onCustomEaseArrowUp
		#define GEODE_STATICS_onCustomEaseArrowUp
		GEODE_AS_STATIC_FUNCTION(onCustomEaseArrowUp) 
	#endif

	#ifndef GEODE_STATICS_onCustomEaseRate
		#define GEODE_STATICS_onCustomEaseRate
		GEODE_AS_STATIC_FUNCTION(onCustomEaseRate) 
	#endif

	#ifndef GEODE_STATICS_onDisableValue
		#define GEODE_STATICS_onDisableValue
		GEODE_AS_STATIC_FUNCTION(onDisableValue) 
	#endif

	#ifndef GEODE_STATICS_onEase
		#define GEODE_STATICS_onEase
		GEODE_AS_STATIC_FUNCTION(onEase) 
	#endif

	#ifndef GEODE_STATICS_onEaseRate
		#define GEODE_STATICS_onEaseRate
		GEODE_AS_STATIC_FUNCTION(onEaseRate) 
	#endif

	#ifndef GEODE_STATICS_onMultiTrigger
		#define GEODE_STATICS_onMultiTrigger
		GEODE_AS_STATIC_FUNCTION(onMultiTrigger) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onSpawnedByTrigger
		#define GEODE_STATICS_onSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(onSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_onToggleTriggerValue
		#define GEODE_STATICS_onToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_onTouchTriggered
		#define GEODE_STATICS_onTouchTriggered
		GEODE_AS_STATIC_FUNCTION(onTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_postSetup
		#define GEODE_STATICS_postSetup
		GEODE_AS_STATIC_FUNCTION(postSetup) 
	#endif

	#ifndef GEODE_STATICS_preSetup
		#define GEODE_STATICS_preSetup
		GEODE_AS_STATIC_FUNCTION(preSetup) 
	#endif

	#ifndef GEODE_STATICS_refreshGroupVisibility
		#define GEODE_STATICS_refreshGroupVisibility
		GEODE_AS_STATIC_FUNCTION(refreshGroupVisibility) 
	#endif

	#ifndef GEODE_STATICS_removeObjectFromGroup
		#define GEODE_STATICS_removeObjectFromGroup
		GEODE_AS_STATIC_FUNCTION(removeObjectFromGroup) 
	#endif

	#ifndef GEODE_STATICS_removeObjectFromPage
		#define GEODE_STATICS_removeObjectFromPage
		GEODE_AS_STATIC_FUNCTION(removeObjectFromPage) 
	#endif

	#ifndef GEODE_STATICS_resetDisabledValues
		#define GEODE_STATICS_resetDisabledValues
		GEODE_AS_STATIC_FUNCTION(resetDisabledValues) 
	#endif

	#ifndef GEODE_STATICS_setMaxSliderValue
		#define GEODE_STATICS_setMaxSliderValue
		GEODE_AS_STATIC_FUNCTION(setMaxSliderValue) 
	#endif

	#ifndef GEODE_STATICS_setMinSliderValue
		#define GEODE_STATICS_setMinSliderValue
		GEODE_AS_STATIC_FUNCTION(setMinSliderValue) 
	#endif

	#ifndef GEODE_STATICS_shouldLimitValue
		#define GEODE_STATICS_shouldLimitValue
		GEODE_AS_STATIC_FUNCTION(shouldLimitValue) 
	#endif

	#ifndef GEODE_STATICS_toggleBG
		#define GEODE_STATICS_toggleBG
		GEODE_AS_STATIC_FUNCTION(toggleBG) 
	#endif

	#ifndef GEODE_STATICS_toggleCustomEaseRateVisibility
		#define GEODE_STATICS_toggleCustomEaseRateVisibility
		GEODE_AS_STATIC_FUNCTION(toggleCustomEaseRateVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleDisableButtons
		#define GEODE_STATICS_toggleDisableButtons
		GEODE_AS_STATIC_FUNCTION(toggleDisableButtons) 
	#endif

	#ifndef GEODE_STATICS_toggleEaseRateVisibility
		#define GEODE_STATICS_toggleEaseRateVisibility
		GEODE_AS_STATIC_FUNCTION(toggleEaseRateVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleLimitValue
		#define GEODE_STATICS_toggleLimitValue
		GEODE_AS_STATIC_FUNCTION(toggleLimitValue) 
	#endif

	#ifndef GEODE_STATICS_togglePageArrows
		#define GEODE_STATICS_togglePageArrows
		GEODE_AS_STATIC_FUNCTION(togglePageArrows) 
	#endif

	#ifndef GEODE_STATICS_triggerArrowChanged
		#define GEODE_STATICS_triggerArrowChanged
		GEODE_AS_STATIC_FUNCTION(triggerArrowChanged) 
	#endif

	#ifndef GEODE_STATICS_triggerArrowLeft
		#define GEODE_STATICS_triggerArrowLeft
		GEODE_AS_STATIC_FUNCTION(triggerArrowLeft) 
	#endif

	#ifndef GEODE_STATICS_triggerArrowRight
		#define GEODE_STATICS_triggerArrowRight
		GEODE_AS_STATIC_FUNCTION(triggerArrowRight) 
	#endif

	#ifndef GEODE_STATICS_triggerSliderChanged
		#define GEODE_STATICS_triggerSliderChanged
		GEODE_AS_STATIC_FUNCTION(triggerSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateCustomEaseLabel
		#define GEODE_STATICS_updateCustomEaseLabel
		GEODE_AS_STATIC_FUNCTION(updateCustomEaseLabel) 
	#endif

	#ifndef GEODE_STATICS_updateCustomEaseRateLabel
		#define GEODE_STATICS_updateCustomEaseRateLabel
		GEODE_AS_STATIC_FUNCTION(updateCustomEaseRateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateCustomToggleTrigger
		#define GEODE_STATICS_updateCustomToggleTrigger
		GEODE_AS_STATIC_FUNCTION(updateCustomToggleTrigger) 
	#endif

	#ifndef GEODE_STATICS_updateEaseLabel
		#define GEODE_STATICS_updateEaseLabel
		GEODE_AS_STATIC_FUNCTION(updateEaseLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEaseRateLabel
		#define GEODE_STATICS_updateEaseRateLabel
		GEODE_AS_STATIC_FUNCTION(updateEaseRateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel
		#define GEODE_STATICS_updateEditorLabel
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel) 
	#endif

	#ifndef GEODE_STATICS_updateInputNodeLabel
		#define GEODE_STATICS_updateInputNodeLabel
		GEODE_AS_STATIC_FUNCTION(updateInputNodeLabel) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateMultiTriggerBtn
		#define GEODE_STATICS_updateMultiTriggerBtn
		GEODE_AS_STATIC_FUNCTION(updateMultiTriggerBtn) 
	#endif

	#ifndef GEODE_STATICS_updateSlider
		#define GEODE_STATICS_updateSlider
		GEODE_AS_STATIC_FUNCTION(updateSlider) 
	#endif

	#ifndef GEODE_STATICS_updateSpawnedByTrigger
		#define GEODE_STATICS_updateSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(updateSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_updateTouchTriggered
		#define GEODE_STATICS_updateTouchTriggered
		GEODE_AS_STATIC_FUNCTION(updateTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_updateValue
		#define GEODE_STATICS_updateValue
		GEODE_AS_STATIC_FUNCTION(updateValue) 
	#endif

	#ifndef GEODE_STATICS_updateValueControls
		#define GEODE_STATICS_updateValueControls
		GEODE_AS_STATIC_FUNCTION(updateValueControls) 
	#endif

	#ifndef GEODE_STATICS_valueChanged
		#define GEODE_STATICS_valueChanged
		GEODE_AS_STATIC_FUNCTION(valueChanged) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_pageChanged
		#define GEODE_STATICS_pageChanged
		GEODE_AS_STATIC_FUNCTION(pageChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleGroup
		#define GEODE_STATICS_toggleGroup
		GEODE_AS_STATIC_FUNCTION(toggleGroup) 
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

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_updateInputValue
		#define GEODE_STATICS_updateInputValue
		GEODE_AS_STATIC_FUNCTION(updateInputValue) 
	#endif

	#ifndef GEODE_STATICS_sliderBegan
		#define GEODE_STATICS_sliderBegan
		GEODE_AS_STATIC_FUNCTION(sliderBegan) 
	#endif

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
	#endif

	#ifndef GEODE_STATICS_onPlusButton
		#define GEODE_STATICS_onPlusButton
		GEODE_AS_STATIC_FUNCTION(onPlusButton) 
	#endif

	#ifndef GEODE_STATICS_onCustomButton
		#define GEODE_STATICS_onCustomButton
		GEODE_AS_STATIC_FUNCTION(onCustomButton) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_updateInputNode
		#define GEODE_STATICS_updateInputNode
		GEODE_AS_STATIC_FUNCTION(updateInputNode) 
	#endif

	#ifndef GEODE_STATICS_updateToggleItem
		#define GEODE_STATICS_updateToggleItem
		GEODE_AS_STATIC_FUNCTION(updateToggleItem) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_triggerValueFromSliderValue
		#define GEODE_STATICS_triggerValueFromSliderValue
		GEODE_AS_STATIC_FUNCTION(triggerValueFromSliderValue) 
	#endif

	#ifndef GEODE_STATICS_triggerSliderValueFromValue
		#define GEODE_STATICS_triggerSliderValueFromValue
		GEODE_AS_STATIC_FUNCTION(triggerSliderValueFromValue) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_valuePopupClosed
		#define GEODE_STATICS_valuePopupClosed
		GEODE_AS_STATIC_FUNCTION(valuePopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTriggerPopup>>::ModifyBase;
		using Base = SetupTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36e210, Membercall, SetupTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*, float, float, int)
		}
	};
}
