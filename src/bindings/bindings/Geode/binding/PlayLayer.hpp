#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJBaseGameLayer.hpp"
#include "CCCircleWaveDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"
#include "DialogDelegate.hpp"

class PlayLayer : public GJBaseGameLayer, public CCCircleWaveDelegate, public CurrencyRewardDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayLayer, GJBaseGameLayer)

    /**
     * @note[short] Windows: 0x2dc080
     */
    virtual  ~PlayLayer();

    /**
     * @note[short] Windows: 0x2dc3f0
     */
    static PlayLayer* create(GJGameLevel* level, bool useReplay, bool dontCreateObjects);

    /**
     * @note[short] Out of line
     */
    static PlayLayer* get();
    
private:
    [[deprecated("PlayLayer::addCircle not implemented")]]
    /**
     */
    TodoReturn addCircle(CCCircleWave* p0);
public:

    /**
     * @note[short] Windows: 0x2e19b0
     */
    TodoReturn addObject(GameObject* p0);
    
private:
    [[deprecated("PlayLayer::addToGroupOld not implemented")]]
    /**
     */
    TodoReturn addToGroupOld(GameObject* p0);
public:
    
private:
    [[deprecated("PlayLayer::applyCustomEnterEffect not implemented")]]
    /**
     */
    TodoReturn applyCustomEnterEffect(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("PlayLayer::applyEnterEffect not implemented")]]
    /**
     */
    TodoReturn applyEnterEffect(GameObject* p0, int p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x2eae60
     */
    bool canPauseGame();
    
private:
    [[deprecated("PlayLayer::checkpointWithID not implemented")]]
    /**
     */
    TodoReturn checkpointWithID(int p0);
public:
    
private:
    [[deprecated("PlayLayer::colorObject not implemented")]]
    /**
     */
    TodoReturn colorObject(int p0, cocos2d::ccColor3B p1);
public:
    
private:
    [[deprecated("PlayLayer::commitJumps not implemented")]]
    /**
     */
    TodoReturn commitJumps();
public:
    
private:
    [[deprecated("PlayLayer::compareStateSnapshot not implemented")]]
    /**
     */
    TodoReturn compareStateSnapshot();
public:

    /**
     * @note[short] Windows: 0x2e76e0
     */
    TodoReturn createCheckpoint();

    /**
     * @note[short] Windows: 0x2e1730
     */
    TodoReturn createObjectsFromSetupFinished();

    /**
     * @note[short] Windows: 0x2e9f20
     */
    TodoReturn delayedFullReset();

    /**
     * @note[short] Windows: 0x2ea080
     */
    TodoReturn delayedResetLevel();

    /**
     * @note[short] Windows: 0x2e9f80
     */
    TodoReturn fullReset();

    /**
     * @note[short] Out of line
     */
    float getCurrentPercent();

    /**
     * @note[short] Windows: 0x2e6680
     */
    int getCurrentPercentInt();
    
private:
    [[deprecated("PlayLayer::getEndPosition not implemented")]]
    /**
     */
    TodoReturn getEndPosition();
public:

    /**
     * @note[short] Windows: 0x2e8d40
     */
    TodoReturn getLastCheckpoint();
    
private:
    [[deprecated("PlayLayer::getRelativeMod not implemented")]]
    /**
     */
    TodoReturn getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("PlayLayer::getRelativeModNew not implemented")]]
    /**
     */
    TodoReturn getRelativeModNew(cocos2d::CCPoint p0, float p1, float p2, bool p3, bool p4);
public:
    
private:
    [[deprecated("PlayLayer::getTempMilliTime not implemented")]]
    /**
     */
    TodoReturn getTempMilliTime();
public:
    
private:
    [[deprecated("PlayLayer::gravityEffectFinished not implemented")]]
    /**
     */
    TodoReturn gravityEffectFinished();
public:

    /**
     * @note[short] Windows: 0x2eacd0
     */
    void incrementJumps();

    /**
     * @note[short] Windows: 0x2dc4a0
     */
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects);
    
private:
    [[deprecated("PlayLayer::isGameplayActive not implemented")]]
    /**
     */
    bool isGameplayActive();
public:

    /**
     * @note[short] Windows: 0x2ddb60
     */
    void levelComplete();
    
private:
    [[deprecated("PlayLayer::loadActiveSaveObjects not implemented")]]
    /**
     */
    TodoReturn loadActiveSaveObjects(gd::vector<SavedActiveObjectState>& p0, gd::vector<SavedSpecialObjectState>& p1);
public:

    /**
     * @note[short] Windows: 0x2e4e80
     */
    TodoReturn loadDefaultColors();
    
private:
    [[deprecated("PlayLayer::loadDynamicSaveObjects not implemented")]]
    /**
     */
    TodoReturn loadDynamicSaveObjects(gd::vector<SavedObjectStateRef>& p0);
public:

    /**
     * @note[short] Windows: 0x2e85e0
     */
    TodoReturn loadFromCheckpoint(CheckpointObject* p0);
    
private:
    [[deprecated("PlayLayer::loadLastCheckpoint not implemented")]]
    /**
     */
    TodoReturn loadLastCheckpoint();
public:

    /**
     * @note[short] Windows: 0x2e8550
     */
    TodoReturn markCheckpoint();

    /**
     * @note[short] Windows: 0x2eb480
     */
    void onQuit();

    /**
     * @note[short] Windows: 0x2e2530
     */
    TodoReturn optimizeColorGroups();

    /**
     * @note[short] Windows: 0x2e2790
     */
    TodoReturn optimizeOpacityGroups();

    /**
     * @note[short] Windows: 0x2eae80
     */
    TodoReturn pauseGame(bool p0);

    /**
     * @note[short] Windows: 0x2dfe00
     */
    TodoReturn playEndAnimationToPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0x2e05e0
     */
    TodoReturn playPlatformerEndAnimationToPos(cocos2d::CCPoint p0, bool p1);
    
private:
    [[deprecated("PlayLayer::playReplay not implemented")]]
    /**
     */
    TodoReturn playReplay(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x2e0c40
     */
    TodoReturn prepareCreateObjectsFromSetup(gd::string& p0);

    /**
     * @note[short] Windows: 0x2eb2b0
     */
    TodoReturn prepareMusic(bool p0);

    /**
     * @note[short] Windows: 0x2e0ed0
     */
    TodoReturn processCreateObjectsFromSetup();
    
private:
    [[deprecated("PlayLayer::processLoadedMoveActions not implemented")]]
    /**
     */
    TodoReturn processLoadedMoveActions();
public:
    
private:
    [[deprecated("PlayLayer::queueCheckpoint not implemented")]]
    /**
     */
    TodoReturn queueCheckpoint();
public:

    /**
     * @note[short] Windows: 0x2eb570
     */
    TodoReturn removeAllObjects();

    /**
     * @note[short] Windows: 0x2e8d70
     */
    TodoReturn removeCheckpoint(bool p0);
    
private:
    [[deprecated("PlayLayer::removeFromGroupOld not implemented")]]
    /**
     */
    TodoReturn removeFromGroupOld(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x2ea130
     */
    void resetLevel();

    /**
     * @note[short] Windows: 0x2ea090
     */
    TodoReturn resetLevelFromStart();

    /**
     * @note[short] Windows: 0x2eb100
     */
    TodoReturn resume();

    /**
     * @note[short] Windows: 0x2eafe0
     */
    TodoReturn resumeAndRestart(bool p0);

    /**
     * @note[short] Windows: 0x2e9c20
     */
    TodoReturn saveActiveSaveObjects(gd::vector<SavedActiveObjectState>& p0, gd::vector<SavedSpecialObjectState>& p1);

    /**
     * @note[short] Windows: 0x2e9780
     */
    TodoReturn saveDynamicSaveObjects(gd::vector<SavedObjectStateRef>& p0);

    /**
     * @note[short] Windows: 0x2e9b70
     */
    TodoReturn scanActiveSaveObjects();

    /**
     * @note[short] Windows: 0x2e8f80
     */
    TodoReturn scanDynamicSaveObjects();

    /**
     * @note[short] Windows: 0x2dc3a0
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool useReplay, bool dontCreateObjects);
    
private:
    [[deprecated("PlayLayer::screenFlipObject not implemented")]]
    /**
     */
    TodoReturn screenFlipObject(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x2db7c0
     */
    void setDamageVerifiedIdx(int p0);

    /**
     * @note[short] Windows: 0x2dce40
     */
    TodoReturn setupHasCompleted();
    
private:
    [[deprecated("PlayLayer::shouldBlend not implemented")]]
    /**
     */
    TodoReturn shouldBlend(int p0);
public:
    
private:
    [[deprecated("PlayLayer::showCompleteEffect not implemented")]]
    /**
     */
    TodoReturn showCompleteEffect();
public:

    /**
     * @note[short] Windows: 0x2de410
     */
    TodoReturn showCompleteText();
    
private:
    [[deprecated("PlayLayer::showEndLayer not implemented")]]
    /**
     */
    TodoReturn showEndLayer();
public:

    /**
     * @note[short] Windows: 0x2e6f90
     */
    TodoReturn showHint();

    /**
     * @note[short] Windows: 0x2dedc0
     */
    TodoReturn showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5);
    
private:
    [[deprecated("PlayLayer::showRetryLayer not implemented")]]
    /**
     */
    TodoReturn showRetryLayer();
public:
    
private:
    [[deprecated("PlayLayer::showTwoPlayerGuide not implemented")]]
    /**
     */
    TodoReturn showTwoPlayerGuide();
public:
    
private:
    [[deprecated("PlayLayer::spawnCircle not implemented")]]
    /**
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("PlayLayer::spawnFirework not implemented")]]
    /**
     */
    TodoReturn spawnFirework();
public:

    /**
     * @note[short] Windows: 0x2ddab0
     */
    TodoReturn startGame();

    /**
     * @note[short] Windows: 0x2ddaf0
     */
    TodoReturn startGameDelayed();

    /**
     * @note[short] Windows: 0x2eb3a0
     */
    TodoReturn startMusic();
    
private:
    [[deprecated("PlayLayer::startRecording not implemented")]]
    /**
     */
    TodoReturn startRecording();
public:
    
private:
    [[deprecated("PlayLayer::startRecordingDelayed not implemented")]]
    /**
     */
    TodoReturn startRecordingDelayed();
public:
    
private:
    [[deprecated("PlayLayer::stopRecording not implemented")]]
    /**
     */
    TodoReturn stopRecording();
public:

    /**
     * @note[short] Windows: 0x2e84a0
     */
    TodoReturn storeCheckpoint(CheckpointObject* p0);
    
private:
    [[deprecated("PlayLayer::takeStateSnapshot not implemented")]]
    /**
     */
    TodoReturn takeStateSnapshot();
public:
    
private:
    [[deprecated("PlayLayer::toggleBGEffectVisibility not implemented")]]
    /**
     */
    TodoReturn toggleBGEffectVisibility(bool p0);
public:
    
private:
    [[deprecated("PlayLayer::toggleGhostEffect not implemented")]]
    /**
     */
    TodoReturn toggleGhostEffect(int p0);
public:

    /**
     * @note[short] Windows: 0x2ead30
     */
    void togglePracticeMode(bool p0);
    
private:
    [[deprecated("PlayLayer::tryStartRecord not implemented")]]
    /**
     */
    TodoReturn tryStartRecord();
public:

    /**
     * @note[short] Windows: 0x2eab40
     */
    TodoReturn updateAttempts();

    /**
     * @note[short] Windows: 0x2e7130
     */
    TodoReturn updateEffectPositions();

    /**
     * @note[short] Windows: 0x2e5ad0
     */
    TodoReturn updateInfoLabel();
    
private:
    [[deprecated("PlayLayer::updateInvisibleBlock not implemented")]]
    /**
     */
    TodoReturn updateInvisibleBlock(GameObject* p0, float p1, float p2, float p3, float p4, cocos2d::ccColor3B const& p5);
public:

    /**
     * @note[short] Windows: 0x2e5440
     */
    void updateProgressbar();
    
private:
    [[deprecated("PlayLayer::updateScreenRotation not implemented")]]
    /**
     */
    TodoReturn updateScreenRotation(int p0, bool p1, bool p2, float p3, int p4, float p5, int p6, int p7);
public:

    /**
     * @note[short] Windows: 0x1b9700
     */
    TodoReturn updateTimeWarp(EffectGameObject* p0, float p1);

    /**
     * @note[short] Windows: 0x2eb700
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] Windows: 0x2eb730
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x2e7220
     */
    virtual TodoReturn postUpdate(float p0);

    /**
     * @note[short] Windows: 0x2e74d0
     */
    virtual TodoReturn checkForEnd();
    
private:
    [[deprecated("PlayLayer::testTime not implemented")]]
    /**
     */
    virtual TodoReturn testTime();
public:

    /**
     * @note[short] Windows: 0x2e75b0
     */
    virtual TodoReturn updateVerifyDamage();

    /**
     * @note[short] Windows: 0x2e7630
     */
    virtual TodoReturn updateAttemptTime(float p0);

    /**
     * @note[short] Windows: 0x2e2bf0
     */
    virtual TodoReturn updateVisibility(float p0);

    /**
     * @note[short] Windows: 0x2e3920
     */
    virtual TodoReturn opacityForObject(GameObject* p0);

    /**
     * @note[short] Windows: 0x2e50e0
     */
    virtual TodoReturn updateColor(cocos2d::ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
    
private:
    [[deprecated("PlayLayer::activateEndTrigger not implemented")]]
    /**
     */
    virtual TodoReturn activateEndTrigger(int p0, bool p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x2e04d0
     */
    virtual TodoReturn activatePlatformerEndTrigger(EndTriggerGameObject* p0, gd::vector<int> const& p1);

    /**
     * @note[short] Windows: 0x2e6630
     */
    virtual TodoReturn toggleGlitter(bool p0);

    /**
     * @note[short] Windows: 0x2e6730
     */
    virtual TodoReturn destroyPlayer(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] Windows: 0x2e64e0
     */
    virtual TodoReturn toggleGroundVisibility(bool p0);

    /**
     * @note[short] Windows: 0x2e6560
     */
    virtual TodoReturn toggleMGVisibility(bool p0);

    /**
     * @note[short] Windows: 0x2e65b0
     */
    virtual TodoReturn toggleHideAttempts(bool p0);

    /**
     * @note[short] Windows: 0x2e63e0
     */
    virtual TodoReturn timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);

    /**
     * @note[short] Windows: 0x2e6450
     */
    virtual TodoReturn posForTime(float p0);

    /**
     * @note[short] Windows: 0x2e64a0
     */
    virtual TodoReturn resetSPTriggered();
    
private:
    [[deprecated("PlayLayer::updateTimeWarp not implemented")]]
    /**
     */
    virtual TodoReturn updateTimeWarp(float p0);
public:
    
private:
    [[deprecated("PlayLayer::playGravityEffect not implemented")]]
    /**
     */
    virtual TodoReturn playGravityEffect(bool p0);
public:

    /**
     * @note[short] Windows: 0x2e3940
     */
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);

    /**
     * @note[short] Windows: 0x2e76c0
     */
    virtual TodoReturn checkpointActivated(CheckpointGameObject* p0);
    
private:
    [[deprecated("PlayLayer::flipArt not implemented")]]
    /**
     */
    virtual TodoReturn flipArt(bool p0);
public:

    /**
     * @note[short] Windows: 0x2e5670
     */
    virtual void updateTimeLabel(int p0, int p1, bool p2);
    
private:
    [[deprecated("PlayLayer::checkSnapshot not implemented")]]
    /**
     */
    virtual TodoReturn checkSnapshot();
public:
    
private:
    [[deprecated("PlayLayer::toggleProgressbar not implemented")]]
    /**
     */
    virtual TodoReturn toggleProgressbar();
public:
    
private:
    [[deprecated("PlayLayer::toggleInfoLabel not implemented")]]
    /**
     */
    virtual TodoReturn toggleInfoLabel();
public:
    
private:
    [[deprecated("PlayLayer::removeAllCheckpoints not implemented")]]
    /**
     */
    virtual TodoReturn removeAllCheckpoints();
public:
    
private:
    [[deprecated("PlayLayer::toggleMusicInPractice not implemented")]]
    /**
     */
    virtual TodoReturn toggleMusicInPractice();
public:
    
private:
    [[deprecated("PlayLayer::currencyWillExit not implemented")]]
    /**
     */
    virtual TodoReturn currencyWillExit(CurrencyRewardLayer* p0);
public:
    
private:
    [[deprecated("PlayLayer::circleWaveWillBeRemoved not implemented")]]
    /**
     */
    virtual TodoReturn circleWaveWillBeRemoved(CCCircleWave* p0);
public:

    /**
     * @note[short] Windows: 0x2e6f50
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
    GEODE_PAD(132);
    float m_unksomefloat;
    GEODE_PAD(68);
    cocos2d::CCSprite* m_progressBar;
    GEODE_PAD(92);
    bool m_endLayerStars;
    GEODE_PAD(184);
};
