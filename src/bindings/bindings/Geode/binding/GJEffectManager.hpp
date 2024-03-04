#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJEffectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJEffectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJEffectManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x1db2d0
     */
    static GJEffectManager* create();

    /**
     * @note[short] Windows: 0x1db7b0
     */
    TodoReturn activeColorForIndex(int p0);
    
private:
    [[deprecated("GJEffectManager::activeOpacityForIndex not implemented")]]
    /**
     */
    TodoReturn activeOpacityForIndex(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::addAllInheritedColorActions not implemented")]]
    /**
     */
    TodoReturn addAllInheritedColorActions(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GJEffectManager::addCountToItem not implemented")]]
    /**
     */
    TodoReturn addCountToItem(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::addMoveCalculation not implemented")]]
    /**
     */
    TodoReturn addMoveCalculation(CCMoveCNode* p0, cocos2d::CCPoint p1, GameObject* p2);
public:

    /**
     * @note[short] Windows: 0x1db830
     */
    TodoReturn calculateBaseActiveColors();
    
private:
    [[deprecated("GJEffectManager::calculateInheritedColor not implemented")]]
    /**
     */
    TodoReturn calculateInheritedColor(int p0, ColorAction* p1);
public:

    /**
     * @note[short] Windows: 0x1e3b10
     */
    TodoReturn calculateLightBGColor(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("GJEffectManager::checkCollision not implemented")]]
    /**
     */
    TodoReturn checkCollision(int const& p0, int const& p1);
public:
    
private:
    [[deprecated("GJEffectManager::colorActionChanged not implemented")]]
    /**
     */
    TodoReturn colorActionChanged(ColorAction* p0);
public:
    
private:
    [[deprecated("GJEffectManager::colorExists not implemented")]]
    /**
     */
    TodoReturn colorExists(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::colorForEffect not implemented")]]
    /**
     */
    TodoReturn colorForEffect(cocos2d::ccColor3B p0, cocos2d::ccHSVValue p1);
public:
    
private:
    [[deprecated("GJEffectManager::colorForGroupID not implemented")]]
    /**
     */
    TodoReturn colorForGroupID(int p0, cocos2d::ccColor3B const& p1, bool p2);
public:
    
private:
    [[deprecated("GJEffectManager::colorForIndex not implemented")]]
    /**
     */
    TodoReturn colorForIndex(int p0);
public:

    /**
     * @note[short] Windows: 0x1e2010
     */
    TodoReturn colorForPulseEffect(cocos2d::ccColor3B const& p0, PulseEffectAction* p1);
    
private:
    [[deprecated("GJEffectManager::controlActionsForControlID not implemented")]]
    /**
     */
    TodoReturn controlActionsForControlID(int p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJEffectManager::controlActionsForTrigger not implemented")]]
    /**
     */
    TodoReturn controlActionsForTrigger(EffectGameObject* p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJEffectManager::countForItem not implemented")]]
    /**
     */
    TodoReturn countForItem(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::createFollowCommand not implemented")]]
    /**
     */
    TodoReturn createFollowCommand(float p0, float p1, float p2, int p3, int p4, int p5, int p6);
public:
    
private:
    [[deprecated("GJEffectManager::createKeyframeCommand not implemented")]]
    /**
     */
    TodoReturn createKeyframeCommand(int p0, cocos2d::CCArray* p1, GameObject* p2, int p3, int p4, bool p5, float p6, float p7, float p8, float p9, float p10, float p11, gd::vector<int> const& p12);
public:
    
private:
    [[deprecated("GJEffectManager::createMoveCommand not implemented")]]
    /**
     */
    TodoReturn createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, bool p7, bool p8, float p9, float p10, int p11, int p12);
public:
    
private:
    [[deprecated("GJEffectManager::createPlayerFollowCommand not implemented")]]
    /**
     */
    TodoReturn createPlayerFollowCommand(float p0, float p1, int p2, float p3, float p4, int p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::createRotateCommand not implemented")]]
    /**
     */
    TodoReturn createRotateCommand(float p0, float p1, int p2, int p3, int p4, float p5, bool p6, bool p7, bool p8, int p9, int p10);
public:
    
private:
    [[deprecated("GJEffectManager::createTransformCommand not implemented")]]
    /**
     */
    TodoReturn createTransformCommand(double p0, double p1, double p2, double p3, bool p4, float p5, int p6, int p7, int p8, float p9, bool p10, bool p11, int p12, int p13);
public:
    
private:
    [[deprecated("GJEffectManager::getAllColorActions not implemented")]]
    /**
     */
    TodoReturn getAllColorActions();
public:
    
private:
    [[deprecated("GJEffectManager::getAllColorSprites not implemented")]]
    /**
     */
    TodoReturn getAllColorSprites();
public:

    /**
     * @note[short] Windows: 0x1dbe80
     */
    ColorAction* getColorAction(int p0);

    /**
     * @note[short] Windows: 0x1dbf00
     */
    ColorActionSprite* getColorSprite(int p0);
    
private:
    [[deprecated("GJEffectManager::getLoadedMoveOffset not implemented")]]
    /**
     */
    TodoReturn getLoadedMoveOffset(gd::unordered_map<int, std::pair<double, double>>& p0);
public:
    
private:
    [[deprecated("GJEffectManager::getMixedColor not implemented")]]
    /**
     */
    TodoReturn getMixedColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);
public:
    
private:
    [[deprecated("GJEffectManager::getMoveCommandNode not implemented")]]
    /**
     */
    TodoReturn getMoveCommandNode(GroupCommandObject2* p0);
public:
    
private:
    [[deprecated("GJEffectManager::getMoveCommandObject not implemented")]]
    /**
     */
    TodoReturn getMoveCommandObject();
public:
    
private:
    [[deprecated("GJEffectManager::getOpacityActionForGroup not implemented")]]
    /**
     */
    TodoReturn getOpacityActionForGroup(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::getSaveString not implemented")]]
    /**
     */
    TodoReturn getSaveString();
public:
    
private:
    [[deprecated("GJEffectManager::getTempGroupCommand not implemented")]]
    /**
     */
    TodoReturn getTempGroupCommand();
public:
    
private:
    [[deprecated("GJEffectManager::handleObjectCollision not implemented")]]
    /**
     */
    TodoReturn handleObjectCollision(bool p0, int p1, int p2);
public:
    
private:
    [[deprecated("GJEffectManager::hasActiveDualTouch not implemented")]]
    /**
     */
    TodoReturn hasActiveDualTouch();
public:
    
private:
    [[deprecated("GJEffectManager::hasBeenTriggered not implemented")]]
    /**
     */
    TodoReturn hasBeenTriggered(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::hasPulseEffectForGroupID not implemented")]]
    /**
     */
    TodoReturn hasPulseEffectForGroupID(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::isGroupEnabled not implemented")]]
    /**
     */
    bool isGroupEnabled(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::keyForGroupIDColor not implemented")]]
    /**
     */
    TodoReturn keyForGroupIDColor(int p0, cocos2d::ccColor3B const& p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x1e44a0
     */
    void loadFromState(EffectManagerState& p0);

    /**
     * @note[short] Windows: 0x1dc3c0
     */
    TodoReturn objectsCollided(int p0, int p1);
    
private:
    [[deprecated("GJEffectManager::opacityForIndex not implemented")]]
    /**
     */
    TodoReturn opacityForIndex(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::opacityModForGroup not implemented")]]
    /**
     */
    TodoReturn opacityModForGroup(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::pauseTimer not implemented")]]
    /**
     */
    TodoReturn pauseTimer(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::playerButton not implemented")]]
    /**
     */
    TodoReturn playerButton(bool p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x1e29b0
     */
    TodoReturn playerDied();
    
private:
    [[deprecated("GJEffectManager::postCollisionCheck not implemented")]]
    /**
     */
    TodoReturn postCollisionCheck();
public:
    
private:
    [[deprecated("GJEffectManager::postMoveActions not implemented")]]
    /**
     */
    TodoReturn postMoveActions();
public:
    
private:
    [[deprecated("GJEffectManager::preCollisionCheck not implemented")]]
    /**
     */
    TodoReturn preCollisionCheck();
public:
    
private:
    [[deprecated("GJEffectManager::prepareMoveActions not implemented")]]
    /**
     */
    TodoReturn prepareMoveActions(float p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::processColors not implemented")]]
    /**
     */
    TodoReturn processColors();
public:

    /**
     * @note[short] Windows: 0x1e1df0
     */
    TodoReturn processCopyColorPulseActions();

    /**
     * @note[short] Windows: 0x1db900
     */
    TodoReturn processInheritedColors();
    
private:
    [[deprecated("GJEffectManager::processMoveCalculations not implemented")]]
    /**
     */
    TodoReturn processMoveCalculations();
public:

    /**
     * @note[short] Windows: 0x1e1d30
     */
    TodoReturn processPulseActions();
    
private:
    [[deprecated("GJEffectManager::registerCollisionTrigger not implemented")]]
    /**
     */
    TodoReturn registerCollisionTrigger(int p0, int p1, int p2, bool p3, bool p4, gd::vector<int> const& p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::registerRotationCommand not implemented")]]
    /**
     */
    TodoReturn registerRotationCommand(GroupCommandObject2* p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::removeAllPulseActions not implemented")]]
    /**
     */
    TodoReturn removeAllPulseActions();
public:
    
private:
    [[deprecated("GJEffectManager::removeColorAction not implemented")]]
    /**
     */
    TodoReturn removeColorAction(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::removePersistentFromAllItems not implemented")]]
    /**
     */
    TodoReturn removePersistentFromAllItems();
public:
    
private:
    [[deprecated("GJEffectManager::removePersistentFromAllTimers not implemented")]]
    /**
     */
    TodoReturn removePersistentFromAllTimers();
public:
    
private:
    [[deprecated("GJEffectManager::removeTriggeredID not implemented")]]
    /**
     */
    TodoReturn removeTriggeredID(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::reset not implemented")]]
    /**
     */
    TodoReturn reset();
public:
    
private:
    [[deprecated("GJEffectManager::resetEffects not implemented")]]
    /**
     */
    TodoReturn resetEffects();
public:
    
private:
    [[deprecated("GJEffectManager::resetMoveActions not implemented")]]
    /**
     */
    TodoReturn resetMoveActions();
public:
    
private:
    [[deprecated("GJEffectManager::resetTempGroupCommands not implemented")]]
    /**
     */
    TodoReturn resetTempGroupCommands(bool p0);
public:
    
private:
    [[deprecated("GJEffectManager::resetToggledGroups not implemented")]]
    /**
     */
    TodoReturn resetToggledGroups();
public:
    
private:
    [[deprecated("GJEffectManager::resetTriggeredIDs not implemented")]]
    /**
     */
    TodoReturn resetTriggeredIDs();
public:
    
private:
    [[deprecated("GJEffectManager::resumeTimer not implemented")]]
    /**
     */
    TodoReturn resumeTimer(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::runCountTrigger not implemented")]]
    /**
     */
    TodoReturn runCountTrigger(int p0, int p1, bool p2, int p3, bool p4, gd::vector<int> const& p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::runDeathTrigger not implemented")]]
    /**
     */
    TodoReturn runDeathTrigger(int p0, bool p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJEffectManager::runOpacityActionOnGroup not implemented")]]
    /**
     */
    TodoReturn runOpacityActionOnGroup(int p0, float p1, float p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJEffectManager::runPulseEffect not implemented")]]
    /**
     */
    TodoReturn runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::ccColor3B p6, cocos2d::ccHSVValue p7, int p8, bool p9, bool p10, bool p11, bool p12, int p13, int p14);
public:
    
private:
    [[deprecated("GJEffectManager::runTimerTrigger not implemented")]]
    /**
     */
    TodoReturn runTimerTrigger(int p0, double p1, bool p2, int p3, gd::vector<int> const& p4, int p5, int p6);
public:
    
private:
    [[deprecated("GJEffectManager::runTouchTriggerCommand not implemented")]]
    /**
     */
    TodoReturn runTouchTriggerCommand(int p0, bool p1, TouchTriggerType p2, TouchTriggerControl p3, bool p4, gd::vector<int> const& p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::saveCompletedMove not implemented")]]
    /**
     */
    TodoReturn saveCompletedMove(int p0, double p1, double p2);
public:

    /**
     * @note[short] Windows: 0x1e42a0
     */
    TodoReturn saveToState(EffectManagerState& p0);
    
private:
    [[deprecated("GJEffectManager::setColorAction not implemented")]]
    /**
     */
    void setColorAction(ColorAction* p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::setFollowing not implemented")]]
    /**
     */
    void setFollowing(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GJEffectManager::setupFromString not implemented")]]
    /**
     */
    TodoReturn setupFromString(gd::string p0);
public:
    
private:
    [[deprecated("GJEffectManager::shouldBlend not implemented")]]
    /**
     */
    TodoReturn shouldBlend(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::spawnGroup not implemented")]]
    /**
     */
    TodoReturn spawnGroup(int p0, float p1, bool p2, gd::vector<int> const& p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJEffectManager::spawnObject not implemented")]]
    /**
     */
    TodoReturn spawnObject(GameObject* p0, float p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJEffectManager::startTimer not implemented")]]
    /**
     */
    TodoReturn startTimer(int p0, double p1, double p2, bool p3, bool p4, bool p5, float p6, bool p7, int p8, gd::vector<int> const& p9, int p10, int p11);
public:
    
private:
    [[deprecated("GJEffectManager::storeTriggeredID not implemented")]]
    /**
     */
    TodoReturn storeTriggeredID(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::timeForItem not implemented")]]
    /**
     */
    TodoReturn timeForItem(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::timerExists not implemented")]]
    /**
     */
    TodoReturn timerExists(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::toggleGroup not implemented")]]
    /**
     */
    TodoReturn toggleGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::toggleItemPersistent not implemented")]]
    /**
     */
    TodoReturn toggleItemPersistent(int p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::toggleTimerPersistent not implemented")]]
    /**
     */
    TodoReturn toggleTimerPersistent(int p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::transferPersistentItems not implemented")]]
    /**
     */
    TodoReturn transferPersistentItems();
public:

    /**
     * @note[short] Windows: 0x1dbb50
     */
    TodoReturn traverseInheritanceChain(InheritanceNode* p0);
    
private:
    [[deprecated("GJEffectManager::tryGetMoveCommandNode not implemented")]]
    /**
     */
    TodoReturn tryGetMoveCommandNode(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateActiveOpacityEffects not implemented")]]
    /**
     */
    TodoReturn updateActiveOpacityEffects();
public:
    
private:
    [[deprecated("GJEffectManager::updateColorAction not implemented")]]
    /**
     */
    TodoReturn updateColorAction(ColorAction* p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateColorEffects not implemented")]]
    /**
     */
    TodoReturn updateColorEffects(float p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateColors not implemented")]]
    /**
     */
    TodoReturn updateColors(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);
public:
    
private:
    [[deprecated("GJEffectManager::updateCountForItem not implemented")]]
    /**
     */
    TodoReturn updateCountForItem(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::updateEffects not implemented")]]
    /**
     */
    TodoReturn updateEffects(float p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateOpacityAction not implemented")]]
    /**
     */
    TodoReturn updateOpacityAction(OpacityEffectAction* p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateOpacityEffects not implemented")]]
    /**
     */
    TodoReturn updateOpacityEffects(float p0);
public:
    
private:
    [[deprecated("GJEffectManager::updatePulseEffects not implemented")]]
    /**
     */
    TodoReturn updatePulseEffects(float p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateSpawnTriggers not implemented")]]
    /**
     */
    TodoReturn updateSpawnTriggers(float p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateTimer not implemented")]]
    /**
     */
    TodoReturn updateTimer(int p0, double p1);
public:
    
private:
    [[deprecated("GJEffectManager::updateTimers not implemented")]]
    /**
     */
    TodoReturn updateTimers(float p0, float p1);
public:
    
private:
    [[deprecated("GJEffectManager::wasFollowing not implemented")]]
    /**
     */
    TodoReturn wasFollowing(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x1dbe50
     */
    TodoReturn wouldCreateLoop(InheritanceNode* p0, int p1);

    /**
     * @note[short] Windows: 0x1db370
     */
    virtual bool init();
};
