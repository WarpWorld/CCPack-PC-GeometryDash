#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)
    
private:
    [[deprecated("GameObject::addColorSprite not implemented")]]
    /**
     */
    TodoReturn addColorSprite(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addColorSpriteToParent not implemented")]]
    /**
     */
    TodoReturn addColorSpriteToParent(bool p0);
public:
    
private:
    [[deprecated("GameObject::addColorSpriteToSelf not implemented")]]
    /**
     */
    TodoReturn addColorSpriteToSelf();
public:
    
private:
    [[deprecated("GameObject::addCustomBlackChild not implemented")]]
    /**
     */
    TodoReturn addCustomBlackChild(gd::string p0, float p1, bool p2);
public:
    
private:
    [[deprecated("GameObject::addCustomChild not implemented")]]
    /**
     */
    TodoReturn addCustomChild(gd::string p0, cocos2d::CCPoint p1, int p2);
public:
    
private:
    [[deprecated("GameObject::addCustomColorChild not implemented")]]
    /**
     */
    TodoReturn addCustomColorChild(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addEmptyGlow not implemented")]]
    /**
     */
    TodoReturn addEmptyGlow();
public:
    
private:
    [[deprecated("GameObject::addGlow not implemented")]]
    /**
     */
    TodoReturn addGlow(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addInternalChild not implemented")]]
    /**
     */
    TodoReturn addInternalChild(cocos2d::CCSprite* p0, gd::string p1, cocos2d::CCPoint p2, int p3);
public:
    
private:
    [[deprecated("GameObject::addInternalCustomColorChild not implemented")]]
    /**
     */
    TodoReturn addInternalCustomColorChild(gd::string p0, cocos2d::CCPoint p1, int p2);
public:
    
private:
    [[deprecated("GameObject::addInternalGlowChild not implemented")]]
    /**
     */
    TodoReturn addInternalGlowChild(gd::string p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("GameObject::addNewSlope01 not implemented")]]
    /**
     */
    TodoReturn addNewSlope01(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope01Glow not implemented")]]
    /**
     */
    TodoReturn addNewSlope01Glow(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope02 not implemented")]]
    /**
     */
    TodoReturn addNewSlope02(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope02Glow not implemented")]]
    /**
     */
    TodoReturn addNewSlope02Glow(bool p0);
public:
    
private:
    [[deprecated("GameObject::addRotation not implemented")]]
    /**
     */
    TodoReturn addRotation(float p0, float p1);
public:
    
private:
    [[deprecated("GameObject::addRotation not implemented")]]
    /**
     */
    TodoReturn addRotation(float p0);
public:
    
private:
    [[deprecated("GameObject::addToColorGroup not implemented")]]
    /**
     */
    TodoReturn addToColorGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::addToCustomScaleX not implemented")]]
    /**
     */
    TodoReturn addToCustomScaleX(float p0);
public:
    
private:
    [[deprecated("GameObject::addToCustomScaleY not implemented")]]
    /**
     */
    TodoReturn addToCustomScaleY(float p0);
public:
    
private:
    [[deprecated("GameObject::addToOpacityGroup not implemented")]]
    /**
     */
    TodoReturn addToOpacityGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::addToTempOffset not implemented")]]
    /**
     */
    TodoReturn addToTempOffset(double p0, double p1);
public:
    
private:
    [[deprecated("GameObject::assignUniqueID not implemented")]]
    /**
     */
    TodoReturn assignUniqueID();
public:
    
private:
    [[deprecated("GameObject::belongsToGroup not implemented")]]
    /**
     */
    TodoReturn belongsToGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::calculateOrientedBox not implemented")]]
    /**
     */
    TodoReturn calculateOrientedBox();
public:
    
private:
    [[deprecated("GameObject::canChangeCustomColor not implemented")]]
    /**
     */
    TodoReturn canChangeCustomColor();
public:
    
private:
    [[deprecated("GameObject::canChangeMainColor not implemented")]]
    /**
     */
    TodoReturn canChangeMainColor();
public:
    
private:
    [[deprecated("GameObject::canChangeSecondaryColor not implemented")]]
    /**
     */
    TodoReturn canChangeSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::canRotateFree not implemented")]]
    /**
     */
    TodoReturn canRotateFree();
public:

    /**
     * @note[short] Windows: 0x142a50
     */
    TodoReturn colorForMode(int p0, bool p1);
    
private:
    [[deprecated("GameObject::commonInteractiveSetup not implemented")]]
    /**
     */
    TodoReturn commonInteractiveSetup();
public:

    /**
     * @note[short] Windows: 0x1310c0
     */
    TodoReturn commonSetup();

    /**
     * @note[short] Windows: 0x13d8f0
     */
    TodoReturn copyGroups(GameObject* p0);

    /**
     * @note[short] Windows: 0x13b790
     */
    TodoReturn createAndAddParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
    
private:
    [[deprecated("GameObject::createColorGroupContainer not implemented")]]
    /**
     */
    TodoReturn createColorGroupContainer(int p0);
public:
    
private:
    [[deprecated("GameObject::createGlow not implemented")]]
    /**
     */
    TodoReturn createGlow(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x13d790
     */
    void createGroupContainer(int p0);
    
private:
    [[deprecated("GameObject::createOpacityGroupContainer not implemented")]]
    /**
     */
    TodoReturn createOpacityGroupContainer(int p0);
public:
    
private:
    [[deprecated("GameObject::createSpriteColor not implemented")]]
    /**
     */
    TodoReturn createSpriteColor(int p0);
public:

    /**
     * @note[short] Windows: 0x130fc0
     */
    static GameObject* createWithFrame(char const* p0);

    /**
     * @note[short] Windows: 0x130330
     */
    static GameObject* createWithKey(int p0);
    
private:
    [[deprecated("GameObject::deselectObject not implemented")]]
    /**
     */
    void deselectObject();
public:
    
private:
    [[deprecated("GameObject::destroyObject not implemented")]]
    /**
     */
    TodoReturn destroyObject();
public:

    /**
     * @note[short] Windows: 0x13d3c0
     */
    TodoReturn determineSlopeDirection();
    
private:
    [[deprecated("GameObject::didScaleXChange not implemented")]]
    /**
     */
    TodoReturn didScaleXChange();
public:
    
private:
    [[deprecated("GameObject::didScaleYChange not implemented")]]
    /**
     */
    TodoReturn didScaleYChange();
public:
    
private:
    [[deprecated("GameObject::dirtifyObjectPos not implemented")]]
    /**
     */
    TodoReturn dirtifyObjectPos();
public:
    
private:
    [[deprecated("GameObject::dirtifyObjectRect not implemented")]]
    /**
     */
    TodoReturn dirtifyObjectRect();
public:
    
private:
    [[deprecated("GameObject::disableObject not implemented")]]
    /**
     */
    TodoReturn disableObject();
public:
    
private:
    [[deprecated("GameObject::dontCountTowardsLimit not implemented")]]
    /**
     */
    TodoReturn dontCountTowardsLimit();
public:
    
private:
    [[deprecated("GameObject::duplicateAttributes not implemented")]]
    /**
     */
    TodoReturn duplicateAttributes(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1424c0
     */
    TodoReturn duplicateColorMode(GameObject* p0);

    /**
     * @note[short] Windows: 0x1426f0
     */
    void duplicateValues(GameObject* p0);
    
private:
    [[deprecated("GameObject::editorColorForCustomMode not implemented")]]
    /**
     */
    TodoReturn editorColorForCustomMode(int p0);
public:
    
private:
    [[deprecated("GameObject::editorColorForMode not implemented")]]
    /**
     */
    TodoReturn editorColorForMode(int p0);
public:
    
private:
    [[deprecated("GameObject::fastRotateObject not implemented")]]
    /**
     */
    TodoReturn fastRotateObject(float p0);
public:

    /**
     * @note[short] Windows: 0x142d30
     */
    TodoReturn getActiveColorForMode(int p0, bool p1);
    
private:
    [[deprecated("GameObject::getBallFrame not implemented")]]
    /**
     */
    TodoReturn getBallFrame(int p0);
public:
    
private:
    [[deprecated("GameObject::getBoundingRect not implemented")]]
    /**
     */
    TodoReturn getBoundingRect();
public:
    
private:
    [[deprecated("GameObject::getBoxOffset not implemented")]]
    /**
     */
    TodoReturn getBoxOffset();
public:
    
private:
    [[deprecated("GameObject::getColorFrame not implemented")]]
    /**
     */
    TodoReturn getColorFrame(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::getColorIndex not implemented")]]
    /**
     */
    TodoReturn getColorIndex();
public:

    /**
     * @note[short] Windows: 0x13df90
     */
    TodoReturn getColorKey(bool p0, bool p1);
    
private:
    [[deprecated("GameObject::getCustomZLayer not implemented")]]
    /**
     */
    TodoReturn getCustomZLayer();
public:
    
private:
    [[deprecated("GameObject::getGlowFrame not implemented")]]
    /**
     */
    TodoReturn getGlowFrame(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::getGroupDisabled not implemented")]]
    /**
     */
    TodoReturn getGroupDisabled();
public:
    
private:
    [[deprecated("GameObject::getGroupID not implemented")]]
    /**
     */
    TodoReturn getGroupID(int p0);
public:
    
private:
    [[deprecated("GameObject::getGroupString not implemented")]]
    /**
     */
    TodoReturn getGroupString();
public:
    
private:
    [[deprecated("GameObject::getLastPosition not implemented")]]
    /**
     */
    TodoReturn getLastPosition();
public:
    
private:
    [[deprecated("GameObject::getMainColor not implemented")]]
    /**
     */
    TodoReturn getMainColor();
public:
    
private:
    [[deprecated("GameObject::getMainColorMode not implemented")]]
    /**
     */
    TodoReturn getMainColorMode();
public:
    
private:
    [[deprecated("GameObject::getObjectDirection not implemented")]]
    /**
     */
    TodoReturn getObjectDirection();
public:
    
private:
    [[deprecated("GameObject::getObjectRadius not implemented")]]
    /**
     */
    TodoReturn getObjectRadius();
public:
    
private:
    [[deprecated("GameObject::getObjectRectDirty not implemented")]]
    /**
     */
    TodoReturn getObjectRectDirty();
public:
    
private:
    [[deprecated("GameObject::getObjectRectPointer not implemented")]]
    /**
     */
    TodoReturn getObjectRectPointer();
public:
    
private:
    [[deprecated("GameObject::getObjectZLayer not implemented")]]
    /**
     */
    TodoReturn getObjectZLayer();
public:
    
private:
    [[deprecated("GameObject::getObjectZOrder not implemented")]]
    /**
     */
    TodoReturn getObjectZOrder();
public:
    
private:
    [[deprecated("GameObject::getOrientedRectDirty not implemented")]]
    /**
     */
    TodoReturn getOrientedRectDirty();
public:
    
private:
    [[deprecated("GameObject::getOuterObjectRect not implemented")]]
    /**
     */
    TodoReturn getOuterObjectRect();
public:
    
private:
    [[deprecated("GameObject::getParentMode not implemented")]]
    /**
     */
    TodoReturn getParentMode();
public:

    /**
     * @note[short] Windows: 0x142320
     */
    TodoReturn getRelativeSpriteColor(int p0);
    
private:
    [[deprecated("GameObject::getScalePosDelta not implemented")]]
    /**
     */
    TodoReturn getScalePosDelta();
public:
    
private:
    [[deprecated("GameObject::getSecondaryColor not implemented")]]
    /**
     */
    TodoReturn getSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::getSecondaryColorMode not implemented")]]
    /**
     */
    TodoReturn getSecondaryColorMode();
public:
    
private:
    [[deprecated("GameObject::getSlopeAngle not implemented")]]
    /**
     */
    TodoReturn getSlopeAngle();
public:
    
private:
    [[deprecated("GameObject::getStartPos not implemented")]]
    /**
     */
    TodoReturn getStartPos();
public:
    
private:
    [[deprecated("GameObject::getType not implemented")]]
    /**
     */
    TodoReturn getType();
public:
    
private:
    [[deprecated("GameObject::getUnmodifiedPosition not implemented")]]
    /**
     */
    TodoReturn getUnmodifiedPosition();
public:
    
private:
    [[deprecated("GameObject::groupColor not implemented")]]
    /**
     */
    TodoReturn groupColor(cocos2d::ccColor3B const& p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x13dd70
     */
    TodoReturn groupOpacityMod();
    
private:
    [[deprecated("GameObject::groupWasDisabled not implemented")]]
    /**
     */
    TodoReturn groupWasDisabled();
public:
    
private:
    [[deprecated("GameObject::groupWasEnabled not implemented")]]
    /**
     */
    TodoReturn groupWasEnabled();
public:
    
private:
    [[deprecated("GameObject::hasSecondaryColor not implemented")]]
    /**
     */
    TodoReturn hasSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::ignoreEditorDuration not implemented")]]
    /**
     */
    TodoReturn ignoreEditorDuration();
public:
    
private:
    [[deprecated("GameObject::ignoreEnter not implemented")]]
    /**
     */
    TodoReturn ignoreEnter();
public:
    
private:
    [[deprecated("GameObject::ignoreFade not implemented")]]
    /**
     */
    TodoReturn ignoreFade();
public:
    
private:
    [[deprecated("GameObject::init not implemented")]]
    /**
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("GameObject::isBasicEnterEffect not implemented")]]
    /**
     */
    bool isBasicEnterEffect(int p0);
public:
    
private:
    [[deprecated("GameObject::isBasicTrigger not implemented")]]
    /**
     */
    bool isBasicTrigger();
public:
    
private:
    [[deprecated("GameObject::isColorObject not implemented")]]
    /**
     */
    bool isColorObject();
public:
    
private:
    [[deprecated("GameObject::isColorTrigger not implemented")]]
    /**
     */
    bool isColorTrigger();
public:
    
private:
    [[deprecated("GameObject::isConfigurablePortal not implemented")]]
    /**
     */
    bool isConfigurablePortal();
public:
    
private:
    [[deprecated("GameObject::isEditorSpawnableTrigger not implemented")]]
    /**
     */
    bool isEditorSpawnableTrigger();
public:

    /**
     * @note[short] Windows: 0x142180
     */
    bool isFacingDown();
    
private:
    [[deprecated("GameObject::isFacingLeft not implemented")]]
    /**
     */
    bool isFacingLeft();
public:
    
private:
    [[deprecated("GameObject::isSettingsObject not implemented")]]
    /**
     */
    bool isSettingsObject();
public:
    
private:
    [[deprecated("GameObject::isSpawnableTrigger not implemented")]]
    /**
     */
    bool isSpawnableTrigger();
public:
    
private:
    [[deprecated("GameObject::isSpecialObject not implemented")]]
    /**
     */
    bool isSpecialObject();
public:

    /**
     * @note[short] Windows: 0x143970
     */
    bool isSpeedObject();
    
private:
    [[deprecated("GameObject::isStoppableTrigger not implemented")]]
    /**
     */
    bool isStoppableTrigger();
public:

    /**
     * @note[short] Windows: 0x142ea0
     */
    bool isTrigger();

    /**
     * @note[short] Windows: 0x13dc20
     */
    void loadGroupsFromString(gd::string p0);
    
private:
    [[deprecated("GameObject::makeInvisible not implemented")]]
    /**
     */
    TodoReturn makeInvisible();
public:

    /**
     * @note[short] Windows: 0x13e420
     */
    TodoReturn objectFromVector(gd::vector<gd::string>& p0, gd::vector<void*>& p1, GJBaseGameLayer* p2, bool p3);
    
private:
    [[deprecated("GameObject::opacityModForMode not implemented")]]
    /**
     */
    TodoReturn opacityModForMode(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::parentForZLayer not implemented")]]
    /**
     */
    TodoReturn parentForZLayer(int p0, bool p1, int p2);
public:
    
private:
    [[deprecated("GameObject::perspectiveColorFrame not implemented")]]
    /**
     */
    TodoReturn perspectiveColorFrame(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameObject::perspectiveFrame not implemented")]]
    /**
     */
    TodoReturn perspectiveFrame(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameObject::playDestroyObjectAnim not implemented")]]
    /**
     */
    TodoReturn playDestroyObjectAnim(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameObject::playPickupAnimation not implemented")]]
    /**
     */
    TodoReturn playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, float p10, float p11);
public:
    
private:
    [[deprecated("GameObject::playPickupAnimation not implemented")]]
    /**
     */
    TodoReturn playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4);
public:

    /**
     * @note[short] Windows: 0x13bf40
     */
    TodoReturn playShineEffect();
    
private:
    [[deprecated("GameObject::quickUpdatePosition not implemented")]]
    /**
     */
    TodoReturn quickUpdatePosition();
public:
    
private:
    [[deprecated("GameObject::quickUpdatePosition2 not implemented")]]
    /**
     */
    TodoReturn quickUpdatePosition2();
public:
    
private:
    [[deprecated("GameObject::removeColorSprite not implemented")]]
    /**
     */
    TodoReturn removeColorSprite();
public:
    
private:
    [[deprecated("GameObject::removeGlow not implemented")]]
    /**
     */
    TodoReturn removeGlow();
public:
    
private:
    [[deprecated("GameObject::reorderColorSprite not implemented")]]
    /**
     */
    TodoReturn reorderColorSprite();
public:
    
private:
    [[deprecated("GameObject::resetColorGroups not implemented")]]
    /**
     */
    TodoReturn resetColorGroups();
public:
    
private:
    [[deprecated("GameObject::resetGroupDisabled not implemented")]]
    /**
     */
    TodoReturn resetGroupDisabled();
public:
    
private:
    [[deprecated("GameObject::resetGroups not implemented")]]
    /**
     */
    TodoReturn resetGroups();
public:
    
private:
    [[deprecated("GameObject::resetMainColorMode not implemented")]]
    /**
     */
    TodoReturn resetMainColorMode();
public:
    
private:
    [[deprecated("GameObject::resetMID not implemented")]]
    /**
     */
    TodoReturn resetMID();
public:
    
private:
    [[deprecated("GameObject::resetMoveOffset not implemented")]]
    /**
     */
    TodoReturn resetMoveOffset();
public:
    
private:
    [[deprecated("GameObject::resetRScaleForced not implemented")]]
    /**
     */
    TodoReturn resetRScaleForced();
public:
    
private:
    [[deprecated("GameObject::resetSecondaryColorMode not implemented")]]
    /**
     */
    TodoReturn resetSecondaryColorMode();
public:
    
private:
    [[deprecated("GameObject::setAreaOpacity not implemented")]]
    /**
     */
    void setAreaOpacity(float p0, float p1, int p2);
public:
    
private:
    [[deprecated("GameObject::setCustomZLayer not implemented")]]
    /**
     */
    void setCustomZLayer(int p0);
public:
    
private:
    [[deprecated("GameObject::setDefaultMainColorMode not implemented")]]
    /**
     */
    void setDefaultMainColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setDefaultSecondaryColorMode not implemented")]]
    /**
     */
    void setDefaultSecondaryColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setGlowOpacity not implemented")]]
    /**
     */
    void setGlowOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::setLastPosition not implemented")]]
    /**
     */
    void setLastPosition(cocos2d::CCPoint const& p0);
public:
    
private:
    [[deprecated("GameObject::setMainColorMode not implemented")]]
    /**
     */
    void setMainColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setSecondaryColorMode not implemented")]]
    /**
     */
    void setSecondaryColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setupColorSprite not implemented")]]
    /**
     */
    TodoReturn setupColorSprite(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::setupPixelScale not implemented")]]
    /**
     */
    TodoReturn setupPixelScale();
public:
    
private:
    [[deprecated("GameObject::setupSpriteSize not implemented")]]
    /**
     */
    TodoReturn setupSpriteSize();
public:

    /**
     * @note[short] Windows: 0x133880
     */
    TodoReturn shouldBlendColor(GJSpriteColor* p0, bool p1);

    /**
     * @note[short] Windows: 0x139d10
     */
    TodoReturn shouldLockX();
    
private:
    [[deprecated("GameObject::shouldNotHideAnimFreeze not implemented")]]
    /**
     */
    TodoReturn shouldNotHideAnimFreeze();
public:
    
private:
    [[deprecated("GameObject::shouldShowPickupEffects not implemented")]]
    /**
     */
    TodoReturn shouldShowPickupEffects();
public:
    
private:
    [[deprecated("GameObject::slopeFloorTop not implemented")]]
    /**
     */
    TodoReturn slopeFloorTop();
public:
    
private:
    [[deprecated("GameObject::slopeWallLeft not implemented")]]
    /**
     */
    TodoReturn slopeWallLeft();
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     */
    TodoReturn slopeYPos(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     */
    TodoReturn slopeYPos(float p0);
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     */
    TodoReturn slopeYPos(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::spawnDefaultPickupParticle not implemented")]]
    /**
     */
    TodoReturn spawnDefaultPickupParticle(GJBaseGameLayer* p0);
public:

    /**
     * @note[short] Windows: 0x13cf30
     */
    TodoReturn updateBlendMode();
    
private:
    [[deprecated("GameObject::updateCustomColorType not implemented")]]
    /**
     */
    TodoReturn updateCustomColorType(short p0);
public:

    /**
     * @note[short] Windows: 0x13b290
     */
    TodoReturn updateCustomScaleX(float p0);

    /**
     * @note[short] Windows: 0x13b350
     */
    TodoReturn updateCustomScaleY(float p0);
    
private:
    [[deprecated("GameObject::updateHSVState not implemented")]]
    /**
     */
    TodoReturn updateHSVState();
public:

    /**
     * @note[short] Windows: 0x141fe0
     */
    TodoReturn updateIsOriented();
    
private:
    [[deprecated("GameObject::updateMainColorOnly not implemented")]]
    /**
     */
    TodoReturn updateMainColorOnly();
public:
    
private:
    [[deprecated("GameObject::updateMainOpacity not implemented")]]
    /**
     */
    TodoReturn updateMainOpacity();
public:

    /**
     * @note[short] Windows: 0x141b70
     */
    void updateObjectEditorColor();
    
private:
    [[deprecated("GameObject::updateSecondaryColorOnly not implemented")]]
    /**
     */
    TodoReturn updateSecondaryColorOnly();
public:
    
private:
    [[deprecated("GameObject::updateSecondaryOpacity not implemented")]]
    /**
     */
    TodoReturn updateSecondaryOpacity();
public:

    /**
     * @note[short] Windows: 0x133160
     */
    TodoReturn updateStartPos();
    
private:
    [[deprecated("GameObject::updateUnmodifiedPositions not implemented")]]
    /**
     */
    TodoReturn updateUnmodifiedPositions();
public:
    
private:
    [[deprecated("GameObject::usesFreezeAnimation not implemented")]]
    /**
     */
    TodoReturn usesFreezeAnimation();
public:
    
private:
    [[deprecated("GameObject::usesSpecialAnimation not implemented")]]
    /**
     */
    TodoReturn usesSpecialAnimation();
public:
    
private:
    [[deprecated("GameObject::update not implemented")]]
    /**
     */
    virtual void update(float p0);
public:

    /**
     * @note[short] Windows: 0x13af80
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] Windows: 0x13b010
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] Windows: 0x13b0a0
     */
    virtual void setScale(float p0);

    /**
     * @note[short] Windows: 0x13aa40
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Windows: 0x13b890
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] Windows: 0x13ac30
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] Windows: 0x13ad30
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] Windows: 0x13ae30
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] Windows: 0x13b490
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Windows: 0x131080
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] Windows: 0x141630
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Windows: 0x13af00
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] Windows: 0x13af40
     */
    virtual void setFlipY(bool p0);
    
private:
    [[deprecated("GameObject::firstSetup not implemented")]]
    /**
     */
    virtual TodoReturn firstSetup();
public:
    
private:
    [[deprecated("GameObject::customSetup not implemented")]]
    /**
     */
    virtual void customSetup();
public:
    
private:
    [[deprecated("GameObject::setupCustomSprites not implemented")]]
    /**
     */
    virtual TodoReturn setupCustomSprites(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x13cf90
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);
    
private:
    [[deprecated("GameObject::resetObject not implemented")]]
    /**
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("GameObject::triggerObject not implemented")]]
    /**
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("GameObject::activateObject not implemented")]]
    /**
     */
    virtual TodoReturn activateObject();
public:

    /**
     * @note[short] Windows: 0x133790
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] Windows: 0x13a500
     */
    virtual TodoReturn transferObjectRect(cocos2d::CCRect& p0);

    /**
     * @note[short] Windows: 0x13a570
     */
    virtual cocos2d::CCRect const& getObjectRect();

    /**
     * @note[short] Windows: 0x13a570
     */
    virtual cocos2d::CCRect getObjectRect(float p0, float p1);
    
private:
    [[deprecated("GameObject::getObjectRect2 not implemented")]]
    /**
     */
    virtual TodoReturn getObjectRect2(float p0, float p1);
public:
    
private:
    [[deprecated("GameObject::getObjectTextureRect not implemented")]]
    /**
     */
    virtual TodoReturn getObjectTextureRect();
public:
    
private:
    [[deprecated("GameObject::getRealPosition not implemented")]]
    /**
     */
    virtual cocos2d::CCPoint getRealPosition();
public:
    
private:
    [[deprecated("GameObject::setStartPos not implemented")]]
    /**
     */
    virtual void setStartPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GameObject::updateStartValues not implemented")]]
    /**
     */
    virtual TodoReturn updateStartValues();
public:
    
private:
    [[deprecated("GameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:

    /**
     * @note[short] Windows: 0x13f9a0
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    
private:
    [[deprecated("GameObject::claimParticle not implemented")]]
    /**
     */
    virtual TodoReturn claimParticle();
public:
    
private:
    [[deprecated("GameObject::unclaimParticle not implemented")]]
    /**
     */
    virtual TodoReturn unclaimParticle();
public:
    
private:
    [[deprecated("GameObject::particleWasActivated not implemented")]]
    /**
     */
    virtual TodoReturn particleWasActivated();
public:

    /**
     * @note[short] Windows: 0x13aee0
     */
    virtual bool isFlipX();

    /**
     * @note[short] Windows: 0x13aef0
     */
    virtual bool isFlipY();
    
private:
    [[deprecated("GameObject::setRScaleX not implemented")]]
    /**
     */
    virtual void setRScaleX(float p0);
public:
    
private:
    [[deprecated("GameObject::setRScaleY not implemented")]]
    /**
     */
    virtual void setRScaleY(float p0);
public:
    
private:
    [[deprecated("GameObject::setRScale not implemented")]]
    /**
     */
    virtual void setRScale(float p0);
public:
    
private:
    [[deprecated("GameObject::getRScaleX not implemented")]]
    /**
     */
    virtual TodoReturn getRScaleX();
public:
    
private:
    [[deprecated("GameObject::getRScaleY not implemented")]]
    /**
     */
    virtual TodoReturn getRScaleY();
public:
    
private:
    [[deprecated("GameObject::setRRotation not implemented")]]
    /**
     */
    virtual void setRRotation(float p0);
public:
    
private:
    [[deprecated("GameObject::triggerActivated not implemented")]]
    /**
     */
    virtual TodoReturn triggerActivated(float p0);
public:

    /**
     * @note[short] Windows: 0x141300
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
    
private:
    [[deprecated("GameObject::setGlowColor not implemented")]]
    /**
     */
    virtual void setGlowColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("GameObject::restoreObject not implemented")]]
    /**
     */
    virtual TodoReturn restoreObject();
public:
    
private:
    [[deprecated("GameObject::animationTriggered not implemented")]]
    /**
     */
    virtual TodoReturn animationTriggered();
public:

    /**
     * @note[short] Windows: 0x141690
     */
    virtual TodoReturn selectObject(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("GameObject::activatedByPlayer not implemented")]]
    /**
     */
    virtual TodoReturn activatedByPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("GameObject::hasBeenActivatedByPlayer not implemented")]]
    /**
     */
    virtual TodoReturn hasBeenActivatedByPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("GameObject::hasBeenActivated not implemented")]]
    /**
     */
    virtual TodoReturn hasBeenActivated();
public:
    
private:
    [[deprecated("GameObject::getOrientedBox not implemented")]]
    /**
     */
    virtual TodoReturn getOrientedBox();
public:
    
private:
    [[deprecated("GameObject::updateOrientedBox not implemented")]]
    /**
     */
    virtual TodoReturn updateOrientedBox();
public:
    
private:
    [[deprecated("GameObject::getObjectRotation not implemented")]]
    /**
     */
    virtual TodoReturn getObjectRotation();
public:
    
private:
    [[deprecated("GameObject::updateMainColor not implemented")]]
    /**
     */
    virtual TodoReturn updateMainColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("GameObject::updateSecondaryColor not implemented")]]
    /**
     */
    virtual TodoReturn updateSecondaryColor(cocos2d::ccColor3B const& p0);
public:

    /**
     * @note[short] Windows: 0x13d7f0
     */
    virtual void addToGroup(int p0);

    /**
     * @note[short] Windows: 0x13d870
     */
    virtual void removeFromGroup(int p0);
    
private:
    [[deprecated("GameObject::saveActiveColors not implemented")]]
    /**
     */
    virtual TodoReturn saveActiveColors();
public:
    
private:
    [[deprecated("GameObject::spawnXPosition not implemented")]]
    /**
     */
    virtual TodoReturn spawnXPosition();
public:
    
private:
    [[deprecated("GameObject::canAllowMultiActivate not implemented")]]
    /**
     */
    virtual TodoReturn canAllowMultiActivate();
public:
    
private:
    [[deprecated("GameObject::blendModeChanged not implemented")]]
    /**
     */
    virtual TodoReturn blendModeChanged();
public:
    
private:
    [[deprecated("GameObject::updateParticleColor not implemented")]]
    /**
     */
    virtual TodoReturn updateParticleColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("GameObject::updateParticleOpacity not implemented")]]
    /**
     */
    virtual TodoReturn updateParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::updateMainParticleOpacity not implemented")]]
    /**
     */
    virtual TodoReturn updateMainParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::updateSecondaryParticleOpacity not implemented")]]
    /**
     */
    virtual TodoReturn updateSecondaryParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::canReverse not implemented")]]
    /**
     */
    virtual TodoReturn canReverse();
public:
    
private:
    [[deprecated("GameObject::isSpecialSpawnObject not implemented")]]
    /**
     */
    virtual bool isSpecialSpawnObject();
public:
    
private:
    [[deprecated("GameObject::canBeOrdered not implemented")]]
    /**
     */
    virtual TodoReturn canBeOrdered();
public:
    
private:
    [[deprecated("GameObject::getObjectLabel not implemented")]]
    /**
     */
    virtual TodoReturn getObjectLabel();
public:
    
private:
    [[deprecated("GameObject::setObjectLabel not implemented")]]
    /**
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);
public:
    
private:
    [[deprecated("GameObject::shouldDrawEditorHitbox not implemented")]]
    /**
     */
    virtual TodoReturn shouldDrawEditorHitbox();
public:
    
private:
    [[deprecated("GameObject::getHasSyncedAnimation not implemented")]]
    /**
     */
    virtual TodoReturn getHasSyncedAnimation();
public:
    
private:
    [[deprecated("GameObject::getHasRotateAction not implemented")]]
    /**
     */
    virtual TodoReturn getHasRotateAction();
public:
    
private:
    [[deprecated("GameObject::canMultiActivate not implemented")]]
    /**
     */
    virtual TodoReturn canMultiActivate(bool p0);
public:
    
private:
    [[deprecated("GameObject::updateTextKerning not implemented")]]
    /**
     */
    virtual TodoReturn updateTextKerning(int p0);
public:
    
private:
    [[deprecated("GameObject::getTextKerning not implemented")]]
    /**
     */
    virtual TodoReturn getTextKerning();
public:
    
private:
    [[deprecated("GameObject::setObjectRectDirty not implemented")]]
    /**
     */
    virtual void setObjectRectDirty(bool p0);
public:
    
private:
    [[deprecated("GameObject::setOrientedRectDirty not implemented")]]
    /**
     */
    virtual void setOrientedRectDirty(bool p0);
public:
    
private:
    [[deprecated("GameObject::setType not implemented")]]
    /**
     */
    virtual void setType(GameObjectType p0);
public:
    GEODE_PAD(15);
    bool m_hasExtendedCollision;
    GEODE_PAD(19);
    int m_activeMainColorID;
    int m_activeDetailColorID;
    GEODE_PAD(76);
    cocos2d::CCSprite* m_glowSprite;
    GEODE_PAD(20);
    gd::string m_particleString;
    GEODE_PAD(1);
    bool m_particleUseObjectColor;
    GEODE_PAD(62);
    int m_linkedGroup;
    GEODE_PAD(12);
    cocos2d::CCSprite* m_colorSprite;
    GEODE_PAD(19);
    int m_uniqueID;
    GameObjectType m_objectType;
    GEODE_PAD(16);
    double m_realXPosition;
    double m_realYPosition;
    cocos2d::CCPoint m_startPosition;
    GEODE_PAD(1);
    bool m_hasNoAudioScale;
    GEODE_PAD(42);
    short m_enterChannel;
    short m_objectMaterial;
    GEODE_PAD(4);
    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    GEODE_PAD(8);
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    GEODE_PAD(22);
    int m_property53;
    GEODE_PAD(24);
    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    GEODE_PAD(10);
    ZLayer m_zLayer;
    int m_zOrder;
    GEODE_PAD(16);
    bool m_shouldUpdateColorSprite;
    GEODE_PAD(1);
    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    GEODE_PAD(8);
    bool m_isNoTouch;
    GEODE_PAD(9);
    cocos2d::CCPoint m_lastPosition;
    GEODE_PAD(27);
    bool m_isHighDetail;
    GEODE_PAD(17);
    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    GEODE_PAD(17);
    int m_property155;
    int m_property156;
    GEODE_PAD(18);
};
