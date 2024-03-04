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
#include "ColorSelectDelegate.hpp"
#include "SliderDelegate.hpp"

class CreateParticlePopup : public FLAlertLayer, public TextInputDelegate, public ColorSelectDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "CreateParticlePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateParticlePopup, FLAlertLayer)
    
private:
    [[deprecated("CreateParticlePopup::create not implemented")]]
    /**
     */
    static CreateParticlePopup* create(gd::string p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::create not implemented")]]
    /**
     */
    static CreateParticlePopup* create(ParticleGameObject* p0, cocos2d::CCArray* p1, gd::string p2);
public:
    
private:
    [[deprecated("CreateParticlePopup::create not implemented")]]
    /**
     */
    static CreateParticlePopup* create(ParticleGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("CreateParticlePopup::centerAlignParticle not implemented")]]
    /**
     */
    TodoReturn centerAlignParticle(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::createParticleSlider not implemented")]]
    /**
     */
    TodoReturn createParticleSlider(gjParticleValue p0, int p1, bool p2, cocos2d::CCPoint p3, cocos2d::CCArray* p4);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPage not implemented")]]
    /**
     */
    TodoReturn getPage(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageButton not implemented")]]
    /**
     */
    TodoReturn getPageButton(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageContainer not implemented")]]
    /**
     */
    TodoReturn getPageContainer(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageInputNodes not implemented")]]
    /**
     */
    TodoReturn getPageInputNodes(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageMenu not implemented")]]
    /**
     */
    TodoReturn getPageMenu(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageSliders not implemented")]]
    /**
     */
    TodoReturn getPageSliders(int p0);
public:

    /**
     * @note[short] Windows: 0x338190
     */
    bool init(ParticleGameObject* p0, cocos2d::CCArray* p1, gd::string p2);
    
private:
    [[deprecated("CreateParticlePopup::maxSliderValueForType not implemented")]]
    /**
     */
    TodoReturn maxSliderValueForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::minSliderValueForType not implemented")]]
    /**
     */
    TodoReturn minSliderValueForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::onAnimateActiveOnly not implemented")]]
    /**
     */
    void onAnimateActiveOnly(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onAnimateOnTrigger not implemented")]]
    /**
     */
    void onAnimateOnTrigger(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onCalcEmission not implemented")]]
    /**
     */
    void onCalcEmission(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x33f5b0
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreateParticlePopup::onCopySettings not implemented")]]
    /**
     */
    void onCopySettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDuplicateColor not implemented")]]
    /**
     */
    void onDuplicateColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDurationForever not implemented")]]
    /**
     */
    void onDurationForever(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDynamicColor not implemented")]]
    /**
     */
    void onDynamicColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDynamicRotation not implemented")]]
    /**
     */
    void onDynamicRotation(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onEmitterMode not implemented")]]
    /**
     */
    void onEmitterMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onEndRGBVarSync not implemented")]]
    /**
     */
    void onEndRGBVarSync(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onMaxEmission not implemented")]]
    /**
     */
    void onMaxEmission(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onMode not implemented")]]
    /**
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onOrderSensitive not implemented")]]
    /**
     */
    void onOrderSensitive(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onPage not implemented")]]
    /**
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onPasteSettings not implemented")]]
    /**
     */
    void onPasteSettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onPosType not implemented")]]
    /**
     */
    void onPosType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onQuickStart not implemented")]]
    /**
     */
    void onQuickStart(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onSelectColor not implemented")]]
    /**
     */
    void onSelectColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onSelectParticleTexture not implemented")]]
    /**
     */
    void onSelectParticleTexture(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onStartRGBVarSync not implemented")]]
    /**
     */
    void onStartRGBVarSync(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleBlending not implemented")]]
    /**
     */
    void onToggleBlending(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartRadiusEqualToEnd not implemented")]]
    /**
     */
    void onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartRotationIsDir not implemented")]]
    /**
     */
    void onToggleStartRotationIsDir(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartSizeEqualToEnd not implemented")]]
    /**
     */
    void onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartSpinEqualToEnd not implemented")]]
    /**
     */
    void onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onUniformColor not implemented")]]
    /**
     */
    void onUniformColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::particleValueIsInt not implemented")]]
    /**
     */
    TodoReturn particleValueIsInt(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::sliderChanged not implemented")]]
    /**
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::titleForParticleValue not implemented")]]
    /**
     */
    TodoReturn titleForParticleValue(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::toggleGravityMode not implemented")]]
    /**
     */
    TodoReturn toggleGravityMode(bool p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateColorSprite not implemented")]]
    /**
     */
    TodoReturn updateColorSprite(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateInputNodeStringForType not implemented")]]
    /**
     */
    TodoReturn updateInputNodeStringForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateParticleValueForType not implemented")]]
    /**
     */
    TodoReturn updateParticleValueForType(float p0, gjParticleValue p1, cocos2d::CCParticleSystemQuad* p2);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateSliderForType not implemented")]]
    /**
     */
    TodoReturn updateSliderForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::valueForParticleValue not implemented")]]
    /**
     */
    TodoReturn valueForParticleValue(gjParticleValue p0);
public:

    /**
     * @note[short] Windows: 0x33f540
     */
    void willClose();
    
private:
    [[deprecated("CreateParticlePopup::update not implemented")]]
    /**
     */
    virtual void update(float p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::ccTouchBegan not implemented")]]
    /**
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateParticlePopup::ccTouchMoved not implemented")]]
    /**
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateParticlePopup::ccTouchEnded not implemented")]]
    /**
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateParticlePopup::ccTouchCancelled not implemented")]]
    /**
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] Windows: 0x33f6c0
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("CreateParticlePopup::sliderBegan not implemented")]]
    /**
     */
    virtual TodoReturn sliderBegan(Slider* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::sliderEnded not implemented")]]
    /**
     */
    virtual TodoReturn sliderEnded(Slider* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::colorSelectClosed not implemented")]]
    /**
     */
    virtual TodoReturn colorSelectClosed(cocos2d::CCNode* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::textInputShouldOffset not implemented")]]
    /**
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("CreateParticlePopup::textInputReturn not implemented")]]
    /**
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::textInputClosed not implemented")]]
    /**
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::textChanged not implemented")]]
    /**
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
