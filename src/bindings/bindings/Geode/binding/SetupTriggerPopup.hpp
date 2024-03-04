#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"
#include "ConfigureValuePopupDelegate.hpp"
#include "SliderDelegate.hpp"

class SetupTriggerPopup : public FLAlertLayer, public TextInputDelegate, public ConfigureValuePopupDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTriggerPopup, FLAlertLayer)
    
private:
    [[deprecated("SetupTriggerPopup::create not implemented")]]
    /**
     */
    static SetupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4);
public:
    
private:
    [[deprecated("SetupTriggerPopup::create not implemented")]]
    /**
     */
    static SetupTriggerPopup* create(float p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addCloseButton not implemented")]]
    /**
     */
    TodoReturn addCloseButton(gd::string p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addHelpButton not implemented")]]
    /**
     */
    TodoReturn addHelpButton(gd::string p0, gd::string p1, float p2);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addInfoLabel not implemented")]]
    /**
     */
    TodoReturn addInfoLabel(gd::string p0, float p1, cocos2d::CCPoint p2, int p3, int p4);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectsToGroup not implemented")]]
    /**
     */
    TodoReturn addObjectsToGroup(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectsToPage not implemented")]]
    /**
     */
    TodoReturn addObjectsToPage(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectToGroup not implemented")]]
    /**
     */
    TodoReturn addObjectToGroup(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectToPage not implemented")]]
    /**
     */
    TodoReturn addObjectToPage(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addTitle not implemented")]]
    /**
     */
    TodoReturn addTitle(gd::string p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::closeInputNodes not implemented")]]
    /**
     */
    TodoReturn closeInputNodes();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createCustomButton not implemented")]]
    /**
     */
    TodoReturn createCustomButton(int p0, gd::string p1, gd::string p2, cocos2d::CCPoint p3, float p4, float p5, bool p6, int p7, int p8);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createCustomEasingControls not implemented")]]
    /**
     */
    TodoReturn createCustomEasingControls(gd::string p0, cocos2d::CCPoint p1, float p2, int p3, int p4, int p5, int p6);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createCustomToggleValueControl not implemented")]]
    /**
     */
    TodoReturn createCustomToggleValueControl(int p0, bool p1, bool p2, gd::string p3, cocos2d::CCPoint p4, bool p5, int p6, int p7);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createEasingControls not implemented")]]
    /**
     */
    TodoReturn createEasingControls(cocos2d::CCPoint p0, float p1, int p2, int p3);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItems not implemented")]]
    /**
     */
    TodoReturn createMultiTriggerItems(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsCorner not implemented")]]
    /**
     */
    TodoReturn createMultiTriggerItemsCorner();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsDefault not implemented")]]
    /**
     */
    TodoReturn createMultiTriggerItemsDefault();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsDefaultHorizontal not implemented")]]
    /**
     */
    TodoReturn createMultiTriggerItemsDefaultHorizontal();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsDefaultVertical not implemented")]]
    /**
     */
    TodoReturn createMultiTriggerItemsDefaultVertical();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createPageButtons not implemented")]]
    /**
     */
    TodoReturn createPageButtons(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createPlusButton not implemented")]]
    /**
     */
    TodoReturn createPlusButton(int p0, cocos2d::CCPoint p1, float p2, gd::string p3, int p4, int p5);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createToggleButton not implemented")]]
    /**
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCPoint p3);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createToggleValueControl not implemented")]]
    /**
     */
    TodoReturn createToggleValueControl(int p0, gd::string p1, cocos2d::CCPoint p2, bool p3, int p4, int p5, float p6);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createToggleValueControlAdvanced not implemented")]]
    /**
     */
    TodoReturn createToggleValueControlAdvanced(int p0, gd::string p1, cocos2d::CCPoint p2, bool p3, int p4, int p5, float p6, float p7, float p8, cocos2d::CCPoint p9);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createValueControl not implemented")]]
    /**
     */
    TodoReturn createValueControl(int p0, gd::string p1, cocos2d::CCPoint p2, float p3, float p4, float p5);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createValueControlAdvanced not implemented")]]
    /**
     */
    TodoReturn createValueControlAdvanced(int p0, gd::string p1, cocos2d::CCPoint p2, float p3, bool p4, InputValueType p5, int p6, bool p7, float p8, float p9, int p10, int p11, GJInputStyle p12, int p13, bool p14);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createValueControlWArrows not implemented")]]
    /**
     */
    TodoReturn createValueControlWArrows(int p0, gd::string p1, cocos2d::CCPoint p2, float p3);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getGroupContainer not implemented")]]
    /**
     */
    TodoReturn getGroupContainer(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getMaxSliderValue not implemented")]]
    /**
     */
    TodoReturn getMaxSliderValue(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getMinSliderValue not implemented")]]
    /**
     */
    TodoReturn getMinSliderValue(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getObjects not implemented")]]
    /**
     */
    TodoReturn getObjects();
public:
    
private:
    [[deprecated("SetupTriggerPopup::getPageContainer not implemented")]]
    /**
     */
    TodoReturn getPageContainer(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getTriggerValue not implemented")]]
    /**
     */
    TodoReturn getTriggerValue(int p0, GameObject* p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getTruncatedValue not implemented")]]
    /**
     */
    TodoReturn getTruncatedValue(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getTruncatedValueByTag not implemented")]]
    /**
     */
    TodoReturn getTruncatedValueByTag(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::goToPage not implemented")]]
    /**
     */
    TodoReturn goToPage(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::hideAll not implemented")]]
    /**
     */
    TodoReturn hideAll();
public:

    /**
     * @note[short] Windows: 0x36e210
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4);
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseArrow not implemented")]]
    /**
     */
    TodoReturn onCustomEaseArrow(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseArrowDown not implemented")]]
    /**
     */
    void onCustomEaseArrowDown(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseArrowUp not implemented")]]
    /**
     */
    void onCustomEaseArrowUp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseRate not implemented")]]
    /**
     */
    void onCustomEaseRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onDisableValue not implemented")]]
    /**
     */
    void onDisableValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onEase not implemented")]]
    /**
     */
    void onEase(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onEaseRate not implemented")]]
    /**
     */
    void onEaseRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onMultiTrigger not implemented")]]
    /**
     */
    void onMultiTrigger(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onPage not implemented")]]
    /**
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onSpawnedByTrigger not implemented")]]
    /**
     */
    void onSpawnedByTrigger(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onToggleTriggerValue not implemented")]]
    /**
     */
    void onToggleTriggerValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onTouchTriggered not implemented")]]
    /**
     */
    void onTouchTriggered(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::postSetup not implemented")]]
    /**
     */
    TodoReturn postSetup();
public:
    
private:
    [[deprecated("SetupTriggerPopup::preSetup not implemented")]]
    /**
     */
    TodoReturn preSetup();
public:
    
private:
    [[deprecated("SetupTriggerPopup::refreshGroupVisibility not implemented")]]
    /**
     */
    TodoReturn refreshGroupVisibility();
public:
    
private:
    [[deprecated("SetupTriggerPopup::removeObjectFromGroup not implemented")]]
    /**
     */
    TodoReturn removeObjectFromGroup(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::removeObjectFromPage not implemented")]]
    /**
     */
    TodoReturn removeObjectFromPage(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::resetDisabledValues not implemented")]]
    /**
     */
    TodoReturn resetDisabledValues();
public:
    
private:
    [[deprecated("SetupTriggerPopup::setMaxSliderValue not implemented")]]
    /**
     */
    void setMaxSliderValue(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::setMinSliderValue not implemented")]]
    /**
     */
    void setMinSliderValue(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::shouldLimitValue not implemented")]]
    /**
     */
    TodoReturn shouldLimitValue(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleBG not implemented")]]
    /**
     */
    TodoReturn toggleBG(bool p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleCustomEaseRateVisibility not implemented")]]
    /**
     */
    TodoReturn toggleCustomEaseRateVisibility(int p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleDisableButtons not implemented")]]
    /**
     */
    TodoReturn toggleDisableButtons(bool p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleEaseRateVisibility not implemented")]]
    /**
     */
    TodoReturn toggleEaseRateVisibility();
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleLimitValue not implemented")]]
    /**
     */
    TodoReturn toggleLimitValue(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::togglePageArrows not implemented")]]
    /**
     */
    TodoReturn togglePageArrows(bool p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerArrowChanged not implemented")]]
    /**
     */
    TodoReturn triggerArrowChanged(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerArrowLeft not implemented")]]
    /**
     */
    TodoReturn triggerArrowLeft(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerArrowRight not implemented")]]
    /**
     */
    TodoReturn triggerArrowRight(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerSliderChanged not implemented")]]
    /**
     */
    TodoReturn triggerSliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateCustomEaseLabel not implemented")]]
    /**
     */
    TodoReturn updateCustomEaseLabel(int p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateCustomEaseRateLabel not implemented")]]
    /**
     */
    TodoReturn updateCustomEaseRateLabel(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateCustomToggleTrigger not implemented")]]
    /**
     */
    TodoReturn updateCustomToggleTrigger(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateEaseLabel not implemented")]]
    /**
     */
    TodoReturn updateEaseLabel();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateEaseRateLabel not implemented")]]
    /**
     */
    TodoReturn updateEaseRateLabel();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateEditorLabel not implemented")]]
    /**
     */
    TodoReturn updateEditorLabel();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateInputNodeLabel not implemented")]]
    /**
     */
    TodoReturn updateInputNodeLabel(int p0, gd::string p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateLabel not implemented")]]
    /**
     */
    TodoReturn updateLabel(int p0, gd::string p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateMultiTriggerBtn not implemented")]]
    /**
     */
    TodoReturn updateMultiTriggerBtn();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateSlider not implemented")]]
    /**
     */
    TodoReturn updateSlider(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateSlider not implemented")]]
    /**
     */
    TodoReturn updateSlider(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateSpawnedByTrigger not implemented")]]
    /**
     */
    TodoReturn updateSpawnedByTrigger();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateTouchTriggered not implemented")]]
    /**
     */
    TodoReturn updateTouchTriggered();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateValue not implemented")]]
    /**
     */
    TodoReturn updateValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateValueControls not implemented")]]
    /**
     */
    TodoReturn updateValueControls(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::valueChanged not implemented")]]
    /**
     */
    TodoReturn valueChanged(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SetupTriggerPopup::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("SetupTriggerPopup::pageChanged not implemented")]]
    /**
     */
    virtual TodoReturn pageChanged();
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleGroup not implemented")]]
    /**
     */
    virtual TodoReturn toggleGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::determineStartValues not implemented")]]
    /**
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupTriggerPopup::onClose not implemented")]]
    /**
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::textInputShouldOffset not implemented")]]
    /**
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::textInputReturn not implemented")]]
    /**
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateInputValue not implemented")]]
    /**
     */
    virtual TodoReturn updateInputValue(int p0, float& p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::sliderBegan not implemented")]]
    /**
     */
    virtual TodoReturn sliderBegan(Slider* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::sliderEnded not implemented")]]
    /**
     */
    virtual TodoReturn sliderEnded(Slider* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onPlusButton not implemented")]]
    /**
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomButton not implemented")]]
    /**
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateDefaultTriggerValues not implemented")]]
    /**
     */
    virtual TodoReturn updateDefaultTriggerValues();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateInputNode not implemented")]]
    /**
     */
    virtual TodoReturn updateInputNode(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateToggleItem not implemented")]]
    /**
     */
    virtual TodoReturn updateToggleItem(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::valueDidChange not implemented")]]
    /**
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getValue not implemented")]]
    /**
     */
    virtual TodoReturn getValue(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerValueFromSliderValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerSliderValueFromValue not implemented")]]
    /**
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::valuePopupClosed not implemented")]]
    /**
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
public:
};
