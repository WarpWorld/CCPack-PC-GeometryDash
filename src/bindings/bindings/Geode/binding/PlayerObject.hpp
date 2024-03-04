#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"

class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerObject, GameObject)

    /**
     * @note[short] Windows: 0x2c2410
     */
    static PlayerObject* create(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);

    /**
     * @note[short] Windows: 0x2d89c0
     */
    TodoReturn activateStreak();

    /**
     * @note[short] Windows: 0x2c3b10
     */
    TodoReturn addAllParticles();
    
private:
    [[deprecated("PlayerObject::addToTouchedRings not implemented")]]
    /**
     */
    TodoReturn addToTouchedRings(RingObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::addToYVelocity not implemented")]]
    /**
     */
    TodoReturn addToYVelocity(double p0, int p1);
public:

    /**
     * @note[short] Windows: 0x2c7820
     */
    TodoReturn animatePlatformerJump(float p0);

    /**
     * @note[short] Windows: 0x2d8820
     */
    TodoReturn boostPlayer(float p0);

    /**
     * @note[short] Windows: 0x2d80b0
     */
    TodoReturn bumpPlayer(float p0, int p1, bool p2, GameObject* p3);
    
private:
    [[deprecated("PlayerObject::buttonDown not implemented")]]
    /**
     */
    TodoReturn buttonDown(PlayerButton p0);
public:
    
private:
    [[deprecated("PlayerObject::canStickToGround not implemented")]]
    /**
     */
    TodoReturn canStickToGround();
public:
    
private:
    [[deprecated("PlayerObject::checkSnapJumpToObject not implemented")]]
    /**
     */
    TodoReturn checkSnapJumpToObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::collidedWithObject not implemented")]]
    /**
     */
    TodoReturn collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
public:
    
private:
    [[deprecated("PlayerObject::collidedWithObject not implemented")]]
    /**
     */
    TodoReturn collidedWithObject(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::collidedWithObjectInternal not implemented")]]
    /**
     */
    TodoReturn collidedWithObjectInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
public:
    
private:
    [[deprecated("PlayerObject::collidedWithSlope not implemented")]]
    /**
     */
    TodoReturn collidedWithSlope(float p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("PlayerObject::collidedWithSlopeInternal not implemented")]]
    /**
     */
    TodoReturn collidedWithSlopeInternal(float p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("PlayerObject::convertToClosestRotation not implemented")]]
    /**
     */
    TodoReturn convertToClosestRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::copyAttributes not implemented")]]
    /**
     */
    TodoReturn copyAttributes(PlayerObject* p0);
public:

    /**
     * @note[short] Windows: 0x2d2320
     */
    void createFadeOutDartStreak();

    /**
     * @note[short] Windows: 0x2c35e0
     */
    TodoReturn createRobot(int p0);

    /**
     * @note[short] Windows: 0x2c3870
     */
    TodoReturn createSpider(int p0);
    
private:
    [[deprecated("PlayerObject::deactivateParticle not implemented")]]
    /**
     */
    TodoReturn deactivateParticle();
public:
    
private:
    [[deprecated("PlayerObject::deactivateStreak not implemented")]]
    /**
     */
    TodoReturn deactivateStreak(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::destroyFromHitHead not implemented")]]
    /**
     */
    TodoReturn destroyFromHitHead();
public:
    
private:
    [[deprecated("PlayerObject::didHitHead not implemented")]]
    /**
     */
    TodoReturn didHitHead();
public:

    /**
     * @note[short] Out of line
     */
    void disableCustomGlowColor();
    
private:
    [[deprecated("PlayerObject::disablePlayerControls not implemented")]]
    /**
     */
    TodoReturn disablePlayerControls();
public:
    
private:
    [[deprecated("PlayerObject::disableSwingFire not implemented")]]
    /**
     */
    TodoReturn disableSwingFire();
public:

    /**
     * @note[short] Windows: 0x2d2210
     */
    TodoReturn doReversePlayer(bool p0);

    /**
     * @note[short] Out of line
     */
    void enableCustomGlowColor(cocos2d::_ccColor3B const& color);
    
private:
    [[deprecated("PlayerObject::enablePlayerControls not implemented")]]
    /**
     */
    TodoReturn enablePlayerControls();
public:
    
private:
    [[deprecated("PlayerObject::exitPlatformerAnimateJump not implemented")]]
    /**
     */
    TodoReturn exitPlatformerAnimateJump();
public:

    /**
     * @note[short] Windows: 0x2d8ab0
     */
    TodoReturn fadeOutStreak2(float p0);

    /**
     * @note[short] Windows: 0x2d1080
     */
    void flashPlayer(float p0, float p1, cocos2d::ccColor3B mainColor, cocos2d::ccColor3B secondColor);

    /**
     * @note[short] Windows: 0x2d36e0
     */
    TodoReturn flipGravity(bool p0, bool p1);
    
private:
    [[deprecated("PlayerObject::flipMod not implemented")]]
    /**
     */
    TodoReturn flipMod();
public:
    
private:
    [[deprecated("PlayerObject::gameEventTriggered not implemented")]]
    /**
     */
    TodoReturn gameEventTriggered(int p0, int p1);
public:
    
private:
    [[deprecated("PlayerObject::getActiveMode not implemented")]]
    /**
     */
    TodoReturn getActiveMode();
public:
    
private:
    [[deprecated("PlayerObject::getCurrentXVelocity not implemented")]]
    /**
     */
    TodoReturn getCurrentXVelocity();
public:

    /**
     * @note[short] Windows: 0x2c9d30
     */
    TodoReturn getModifiedSlopeYVel();
    
private:
    [[deprecated("PlayerObject::getOldPosition not implemented")]]
    /**
     */
    TodoReturn getOldPosition(float p0);
public:

    /**
     * @note[short] Windows: 0x2d90e0
     */
    cocos2d::ccColor3B getSecondColor();
    
private:
    [[deprecated("PlayerObject::getYVelocity not implemented")]]
    /**
     */
    TodoReturn getYVelocity();
public:
    
private:
    [[deprecated("PlayerObject::gravityDown not implemented")]]
    /**
     */
    TodoReturn gravityDown();
public:
    
private:
    [[deprecated("PlayerObject::gravityUp not implemented")]]
    /**
     */
    TodoReturn gravityUp();
public:
    
private:
    [[deprecated("PlayerObject::handlePlayerCommand not implemented")]]
    /**
     */
    TodoReturn handlePlayerCommand(int p0);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedCollisionInternal not implemented")]]
    /**
     */
    TodoReturn handleRotatedCollisionInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedObjectCollision not implemented")]]
    /**
     */
    TodoReturn handleRotatedObjectCollision(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedSlopeCollision not implemented")]]
    /**
     */
    TodoReturn handleRotatedSlopeCollision(float p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("PlayerObject::hardFlipGravity not implemented")]]
    /**
     */
    TodoReturn hardFlipGravity();
public:
    
private:
    [[deprecated("PlayerObject::hitGround not implemented")]]
    /**
     */
    TodoReturn hitGround(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("PlayerObject::hitGroundNoJump not implemented")]]
    /**
     */
    TodoReturn hitGroundNoJump(GameObject* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x2c77f0
     */
    TodoReturn incrementJumps();

    /**
     * @note[short] Windows: 0x2c24c0
     */
    bool init(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);

    /**
     * @note[short] Windows: 0x2c9cd0
     */
    bool isBoostValid(float p0);

    /**
     * @note[short] Windows: 0x2d3a20
     */
    bool isFlying();
    
private:
    [[deprecated("PlayerObject::isInBasicMode not implemented")]]
    /**
     */
    bool isInBasicMode();
public:

    /**
     * @note[short] Windows: 0x2d5780
     */
    bool isInNormalMode();
    
private:
    [[deprecated("PlayerObject::isSafeFlip not implemented")]]
    /**
     */
    bool isSafeFlip(float p0);
public:
    
private:
    [[deprecated("PlayerObject::isSafeHeadTest not implemented")]]
    /**
     */
    bool isSafeHeadTest();
public:
    
private:
    [[deprecated("PlayerObject::isSafeMode not implemented")]]
    /**
     */
    bool isSafeMode(float p0);
public:
    
private:
    [[deprecated("PlayerObject::isSafeSpiderFlip not implemented")]]
    /**
     */
    bool isSafeSpiderFlip(float p0);
public:
    
private:
    [[deprecated("PlayerObject::levelFlipFinished not implemented")]]
    /**
     */
    TodoReturn levelFlipFinished();
public:

    /**
     * @note[short] Windows: 0x2d4880
     */
    TodoReturn levelFlipping();
    
private:
    [[deprecated("PlayerObject::levelWillFlip not implemented")]]
    /**
     */
    TodoReturn levelWillFlip();
public:

    /**
     * @note[short] Windows: 0x2d9e60
     */
    void loadFromCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] Windows: 0x2d7d40
     */
    TodoReturn lockPlayer();
    
private:
    [[deprecated("PlayerObject::logValues not implemented")]]
    /**
     */
    TodoReturn logValues();
public:
    
private:
    [[deprecated("PlayerObject::modeDidChange not implemented")]]
    /**
     */
    TodoReturn modeDidChange();
public:
    
private:
    [[deprecated("PlayerObject::performSlideCheck not implemented")]]
    /**
     */
    TodoReturn performSlideCheck();
public:

    /**
     * @note[short] Windows: 0x2d9110
     */
    TodoReturn placeStreakPoint();

    /**
     * @note[short] Windows: 0x2d8380
     */
    TodoReturn playBumpEffect(int p0, GameObject* p1);
    
private:
    [[deprecated("PlayerObject::playBurstEffect not implemented")]]
    /**
     */
    TodoReturn playBurstEffect();
public:
    
private:
    [[deprecated("PlayerObject::playCompleteEffect not implemented")]]
    /**
     */
    TodoReturn playCompleteEffect(bool p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x2ba470
     */
    TodoReturn playDeathEffect();
    
private:
    [[deprecated("PlayerObject::playDynamicSpiderRun not implemented")]]
    /**
     */
    TodoReturn playDynamicSpiderRun();
public:

    /**
     * @note[short] Windows: 0x2d1b30
     */
    TodoReturn playerDestroyed(bool p0);
    
private:
    [[deprecated("PlayerObject::playerIsFalling not implemented")]]
    /**
     */
    TodoReturn playerIsFalling(float p0);
public:
    
private:
    [[deprecated("PlayerObject::playerIsFallingBugged not implemented")]]
    /**
     */
    TodoReturn playerIsFallingBugged();
public:
    
private:
    [[deprecated("PlayerObject::playerIsMovingUp not implemented")]]
    /**
     */
    TodoReturn playerIsMovingUp();
public:
    
private:
    [[deprecated("PlayerObject::playerTeleported not implemented")]]
    /**
     */
    TodoReturn playerTeleported();
public:
    
private:
    [[deprecated("PlayerObject::playingEndEffect not implemented")]]
    /**
     */
    TodoReturn playingEndEffect();
public:
    
private:
    [[deprecated("PlayerObject::playSpawnEffect not implemented")]]
    /**
     */
    TodoReturn playSpawnEffect();
public:

    /**
     * @note[short] Windows: 0x2cf5b0
     */
    void playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to);

    /**
     * @note[short] Windows: 0x2c82f0
     */
    TodoReturn postCollision(float p0);

    /**
     * @note[short] Windows: 0x2c81b0
     */
    TodoReturn preCollision();
    
private:
    [[deprecated("PlayerObject::preSlopeCollision not implemented")]]
    /**
     */
    TodoReturn preSlopeCollision(float p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x2d81b0
     */
    TodoReturn propellPlayer(float p0, bool p1, int p2);

    /**
     * @note[short] Windows: 0x2d1d30
     */
    TodoReturn pushButton(PlayerButton p0);
    
private:
    [[deprecated("PlayerObject::pushDown not implemented")]]
    /**
     */
    TodoReturn pushDown();
public:
    
private:
    [[deprecated("PlayerObject::pushPlayer not implemented")]]
    /**
     */
    TodoReturn pushPlayer(float p0);
public:

    /**
     * @note[short] Windows: 0x2cfbb0
     */
    TodoReturn redirectDash(float p0);
    
private:
    [[deprecated("PlayerObject::redirectPlayerForce not implemented")]]
    /**
     */
    TodoReturn redirectPlayerForce(float p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("PlayerObject::releaseAllButtons not implemented")]]
    /**
     */
    TodoReturn releaseAllButtons();
public:

    /**
     * @note[short] Windows: 0x2d1f70
     */
    TodoReturn releaseButton(PlayerButton p0);
    
private:
    [[deprecated("PlayerObject::removeAllParticles not implemented")]]
    /**
     */
    TodoReturn removeAllParticles();
public:

    /**
     * @note[short] Windows: 0x2da1c0
     */
    TodoReturn removePendingCheckpoint();
    
private:
    [[deprecated("PlayerObject::removePlacedCheckpoint not implemented")]]
    /**
     */
    TodoReturn removePlacedCheckpoint();
public:
    
private:
    [[deprecated("PlayerObject::resetAllParticles not implemented")]]
    /**
     */
    TodoReturn resetAllParticles();
public:
    
private:
    [[deprecated("PlayerObject::resetCollisionLog not implemented")]]
    /**
     */
    TodoReturn resetCollisionLog(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::resetCollisionValues not implemented")]]
    /**
     */
    TodoReturn resetCollisionValues();
public:

    /**
     * @note[short] Windows: 0x2d45b0
     */
    void resetPlayerIcon();
    
private:
    [[deprecated("PlayerObject::resetStateVariables not implemented")]]
    /**
     */
    TodoReturn resetStateVariables();
public:

    /**
     * @note[short] Windows: 0x2c6540
     */
    TodoReturn resetStreak();
    
private:
    [[deprecated("PlayerObject::resetTouchedRings not implemented")]]
    /**
     */
    TodoReturn resetTouchedRings();
public:
    
private:
    [[deprecated("PlayerObject::reverseMod not implemented")]]
    /**
     */
    TodoReturn reverseMod();
public:

    /**
     * @note[short] Windows: 0x2d2130
     */
    TodoReturn reversePlayer(EffectGameObject* p0);

    /**
     * @note[short] Windows: 0x2d27c0
     */
    TodoReturn ringJump(RingObject* p0, bool p1);

    /**
     * @note[short] Windows: 0x2d3340
     */
    TodoReturn rotateGameplay(int p0, int p1, bool p2, float p3, float p4, bool p5, bool p6);
    
private:
    [[deprecated("PlayerObject::rotateGameplayObject not implemented")]]
    /**
     */
    TodoReturn rotateGameplayObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::rotateGameplayOnly not implemented")]]
    /**
     */
    TodoReturn rotateGameplayOnly(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::rotatePreSlopeObjects not implemented")]]
    /**
     */
    TodoReturn rotatePreSlopeObjects();
public:

    /**
     * @note[short] Windows: 0x2c7e30
     */
    TodoReturn runBallRotation(float p0);

    /**
     * @note[short] Windows: 0x2c7f70
     */
    TodoReturn runBallRotation2();

    /**
     * @note[short] Windows: 0x2c7cf0
     */
    TodoReturn runNormalRotation();

    /**
     * @note[short] Windows: 0x2c7cf0
     */
    TodoReturn runNormalRotation(bool p0, float p1);
    
private:
    [[deprecated("PlayerObject::runRotateAction not implemented")]]
    /**
     */
    TodoReturn runRotateAction(bool p0, int p1);
public:

    /**
     * @note[short] Windows: 0x2d9c20
     */
    TodoReturn saveToCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] Windows: 0x2d65a0
     */
    void setSecondColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Windows: 0x2c3c80
     */
    void setupStreak();

    /**
     * @note[short] Windows: 0x2c40c0
     */
    void setYVelocity(double p0, int p1);
    
private:
    [[deprecated("PlayerObject::spawnCircle not implemented")]]
    /**
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("PlayerObject::spawnCircle2 not implemented")]]
    /**
     */
    TodoReturn spawnCircle2();
public:
    
private:
    [[deprecated("PlayerObject::spawnDualCircle not implemented")]]
    /**
     */
    TodoReturn spawnDualCircle();
public:

    /**
     * @note[short] Windows: 0x2d8f90
     */
    TodoReturn spawnFromPlayer(PlayerObject* p0, bool p1);

    /**
     * @note[short] Windows: 0x2d1810
     */
    TodoReturn spawnPortalCircle(cocos2d::ccColor3B p0, float p1);
    
private:
    [[deprecated("PlayerObject::spawnScaleCircle not implemented")]]
    /**
     */
    TodoReturn spawnScaleCircle();
public:
    
private:
    [[deprecated("PlayerObject::specialGroundHit not implemented")]]
    /**
     */
    TodoReturn specialGroundHit();
public:
    
private:
    [[deprecated("PlayerObject::speedDown not implemented")]]
    /**
     */
    TodoReturn speedDown();
public:
    
private:
    [[deprecated("PlayerObject::speedUp not implemented")]]
    /**
     */
    TodoReturn speedUp();
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJump not implemented")]]
    /**
     */
    TodoReturn spiderTestJump(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJumpInternal not implemented")]]
    /**
     */
    TodoReturn spiderTestJumpInternal(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJumpX not implemented")]]
    /**
     */
    TodoReturn spiderTestJumpX(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJumpY not implemented")]]
    /**
     */
    TodoReturn spiderTestJumpY(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::startDashing not implemented")]]
    /**
     */
    TodoReturn startDashing(DashRingObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::stopBurstEffect not implemented")]]
    /**
     */
    TodoReturn stopBurstEffect();
public:

    /**
     * @note[short] Windows: 0x2d0940
     */
    TodoReturn stopDashing();
    
private:
    [[deprecated("PlayerObject::stopParticles not implemented")]]
    /**
     */
    TodoReturn stopParticles();
public:
    
private:
    [[deprecated("PlayerObject::stopPlatformerJumpAnimation not implemented")]]
    /**
     */
    TodoReturn stopPlatformerJumpAnimation();
public:
    
private:
    [[deprecated("PlayerObject::stopRotation not implemented")]]
    /**
     */
    TodoReturn stopRotation(bool p0, int p1);
public:

    /**
     * @note[short] Windows: 0x2d8b20
     */
    TodoReturn stopStreak2();
    
private:
    [[deprecated("PlayerObject::storeCollision not implemented")]]
    /**
     */
    TodoReturn storeCollision(PlayerCollisionDirection p0, int p1);
public:

    /**
     * @note[short] Windows: 0x2d1c40
     */
    TodoReturn switchedDirTo(PlayerButton p0);

    /**
     * @note[short] Windows: 0x2d4fd0
     */
    TodoReturn switchedToMode(GameObjectType p0);
    
private:
    [[deprecated("PlayerObject::testForMoving not implemented")]]
    /**
     */
    TodoReturn testForMoving(float p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x2d3d30
     */
    TodoReturn toggleBirdMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d42f0
     */
    TodoReturn toggleDartMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d3aa0
     */
    TodoReturn toggleFlyMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d7a40
     */
    TodoReturn toggleGhostEffect(GhostType p0);

    /**
     * @note[short] Out of line
     */
    void togglePlatformerMode(bool val);

    /**
     * @note[short] Windows: 0x2d9170
     */
    TodoReturn togglePlayerScale(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d49f0
     */
    TodoReturn toggleRobotMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d48c0
     */
    TodoReturn toggleRollMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d4ce0
     */
    TodoReturn toggleSpiderMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d3fb0
     */
    TodoReturn toggleSwingMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2c63f0
     */
    TodoReturn toggleVisibility(bool p0);
    
private:
    [[deprecated("PlayerObject::touchedObject not implemented")]]
    /**
     */
    TodoReturn touchedObject(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x2da220
     */
    TodoReturn tryPlaceCheckpoint();
    
private:
    [[deprecated("PlayerObject::unrotateGameplayObject not implemented")]]
    /**
     */
    TodoReturn unrotateGameplayObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::unrotatePreSlopeObjects not implemented")]]
    /**
     */
    TodoReturn unrotatePreSlopeObjects();
public:
    
private:
    [[deprecated("PlayerObject::updateCheckpointMode not implemented")]]
    /**
     */
    TodoReturn updateCheckpointMode(bool p0);
public:

    /**
     * @note[short] Windows: 0x2c6310
     */
    TodoReturn updateCheckpointTest();
    
private:
    [[deprecated("PlayerObject::updateCollide not implemented")]]
    /**
     */
    TodoReturn updateCollide(PlayerCollisionDirection p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideBottom not implemented")]]
    /**
     */
    TodoReturn updateCollideBottom(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideLeft not implemented")]]
    /**
     */
    TodoReturn updateCollideLeft(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideRight not implemented")]]
    /**
     */
    TodoReturn updateCollideRight(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideTop not implemented")]]
    /**
     */
    TodoReturn updateCollideTop(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateDashAnimation not implemented")]]
    /**
     */
    TodoReturn updateDashAnimation();
public:

    /**
     * @note[short] Windows: 0x2d0530
     */
    TodoReturn updateDashArt();
    
private:
    [[deprecated("PlayerObject::updateEffects not implemented")]]
    /**
     */
    TodoReturn updateEffects(float p0);
public:

    /**
     * @note[short] Windows: 0x2d6610
     */
    TodoReturn updateGlowColor();
    
private:
    [[deprecated("PlayerObject::updateInternalActions not implemented")]]
    /**
     */
    TodoReturn updateInternalActions(float p0);
public:

    /**
     * @note[short] Windows: 0x2c67b0
     */
    TodoReturn updateJump(float p0);
    
private:
    [[deprecated("PlayerObject::updateJumpVariables not implemented")]]
    /**
     */
    TodoReturn updateJumpVariables();
public:
    
private:
    [[deprecated("PlayerObject::updateLastGroundObject not implemented")]]
    /**
     */
    TodoReturn updateLastGroundObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::updateMove not implemented")]]
    /**
     */
    TodoReturn updateMove(float p0);
public:

    /**
     * @note[short] Windows: 0x2d23e0
     */
    TodoReturn updatePlayerArt();

    /**
     * @note[short] Windows: 0x2d70e0
     */
    TodoReturn updatePlayerBirdFrame(int p0);

    /**
     * @note[short] Windows: 0x2d7680
     */
    TodoReturn updatePlayerDartFrame(int p0);
    
private:
    [[deprecated("PlayerObject::updatePlayerForce not implemented")]]
    /**
     */
    TodoReturn updatePlayerForce(cocos2d::CCPoint p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x2d6b90
     */
    TodoReturn updatePlayerFrame(int p0);

    /**
     * @note[short] Windows: 0x2d8c50
     */
    TodoReturn updatePlayerGlow();

    /**
     * @note[short] Windows: 0x2d6f20
     */
    TodoReturn updatePlayerJetpackFrame(int p0);

    /**
     * @note[short] Out of line
     */
    void updatePlayerRobotFrame(int id);

    /**
     * @note[short] Windows: 0x2d7300
     */
    TodoReturn updatePlayerRollFrame(int p0);

    /**
     * @note[short] Windows: 0x2d8bf0
     */
    TodoReturn updatePlayerScale();

    /**
     * @note[short] Windows: 0x2d6d60
     */
    TodoReturn updatePlayerShipFrame(int p0);

    /**
     * @note[short] Out of line
     */
    void updatePlayerSpiderFrame(int id);
    
private:
    [[deprecated("PlayerObject::updatePlayerSpriteExtra not implemented")]]
    /**
     */
    TodoReturn updatePlayerSpriteExtra(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x2d74c0
     */
    TodoReturn updatePlayerSwingFrame(int p0);
    
private:
    [[deprecated("PlayerObject::updateRobotAnimationSpeed not implemented")]]
    /**
     */
    TodoReturn updateRobotAnimationSpeed();
public:
    
private:
    [[deprecated("PlayerObject::updateRotation not implemented")]]
    /**
     */
    TodoReturn updateRotation(float p0, float p1);
public:

    /**
     * @note[short] Windows: 0x2cbd20
     */
    TodoReturn updateRotation(float p0);
    
private:
    [[deprecated("PlayerObject::updateShipRotation not implemented")]]
    /**
     */
    TodoReturn updateShipRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateShipSpriteExtra not implemented")]]
    /**
     */
    TodoReturn updateShipSpriteExtra(gd::string p0);
public:
    
private:
    [[deprecated("PlayerObject::updateSlopeRotation not implemented")]]
    /**
     */
    TodoReturn updateSlopeRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateSlopeYVelocity not implemented")]]
    /**
     */
    TodoReturn updateSlopeYVelocity(float p0);
public:

    /**
     * @note[short] Windows: 0x2c62c0
     */
    TodoReturn updateSpecial(float p0);
    
private:
    [[deprecated("PlayerObject::updateStateVariables not implemented")]]
    /**
     */
    TodoReturn updateStateVariables();
public:
    
private:
    [[deprecated("PlayerObject::updateStaticForce not implemented")]]
    /**
     */
    TodoReturn updateStaticForce(float p0, float p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x2c4050
     */
    void updateStreakBlend(bool p0);
    
private:
    [[deprecated("PlayerObject::updateStreaks not implemented")]]
    /**
     */
    TodoReturn updateStreaks(float p0);
public:

    /**
     * @note[short] Windows: 0x2d41e0
     */
    TodoReturn updateSwingFire();

    /**
     * @note[short] Windows: 0x2d95e0
     */
    TodoReturn updateTimeMod(float p0, bool p1);
    
private:
    [[deprecated("PlayerObject::usingWallLimitedMode not implemented")]]
    /**
     */
    TodoReturn usingWallLimitedMode();
public:
    
private:
    [[deprecated("PlayerObject::yStartDown not implemented")]]
    /**
     */
    TodoReturn yStartDown();
public:
    
private:
    [[deprecated("PlayerObject::yStartUp not implemented")]]
    /**
     */
    TodoReturn yStartUp();
public:

    /**
     * @note[short] Windows: 0x2c41b0
     */
    virtual void update(float p0);

    /**
     * @note[short] Windows: 0x2da740
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] Windows: 0x2da760
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] Windows: 0x2da780
     */
    virtual void setScale(float p0);

    /**
     * @note[short] Windows: 0x2d5860
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Windows: 0x2da7a0
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] Windows: 0x2da690
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] Windows: 0x2d6a90
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Windows: 0x2d6520
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Windows: 0x2da6b0
     */
    virtual void setFlipX(bool p0);
    
private:
    [[deprecated("PlayerObject::setFlipY not implemented")]]
    /**
     */
    virtual void setFlipY(bool p0);
public:

    /**
     * @note[short] Windows: 0x2d1100
     */
    virtual TodoReturn resetObject();

    /**
     * @note[short] Windows: 0x2d6b70
     */
    virtual cocos2d::CCPoint getRealPosition();
    
private:
    [[deprecated("PlayerObject::getOrientedBox not implemented")]]
    /**
     */
    virtual TodoReturn getOrientedBox();
public:
    
private:
    [[deprecated("PlayerObject::getObjectRotation not implemented")]]
    /**
     */
    virtual TodoReturn getObjectRotation();
public:
    
private:
    [[deprecated("PlayerObject::animationFinished not implemented")]]
    /**
     */
    virtual TodoReturn animationFinished(char const* p0);
public:
    cocos2d::CCNode* m_unk49c;
    GEODE_PAD(68);
    cocos2d::CCNode* m_unk4e4;
    cocos2d::CCDictionary* m_unk4e8;
    cocos2d::CCDictionary* m_unk4ec;
    cocos2d::CCDictionary* m_unk4f0;
    cocos2d::CCDictionary* m_unk4f4;
    GEODE_PAD(32);
    float m_unk518;
    GEODE_PAD(8);
    GameObject* m_collidedObject;
    GEODE_PAD(64);
    float m_unk568;
    cocos2d::CCSprite* m_unk56c;
    GEODE_PAD(4);
    GameObject* m_unk574;
    GameObject* m_unk578;
    GEODE_PAD(8);
    float unk_584;
    int unk_588;
    GEODE_PAD(4);
    cocos2d::CCArray* m_particleSystems;
    gd::unordered_map<int, GJPointDouble> m_unk594;
    gd::unordered_map<int, GameObject*> m_unk5b4;
    float m_unk5d4;
    float m_rotationSpeed;
    float m_unk5dc;
    bool m_isRotating;
    bool m_unk5e1;
    bool m_hasGlow;
    bool m_isHidden;
    int m_hasGhostTrail;
    GhostTrailEffect* m_ghostTrail;
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCSprite* m_iconSpriteSecondary;
    cocos2d::CCSprite* m_iconSpriteWhitener;
    cocos2d::CCSprite* m_iconGlow;
    cocos2d::CCSprite* m_vehicleSprite;
    cocos2d::CCSprite* m_vehicleSpriteSecondary;
    cocos2d::CCSprite* m_unk604;
    cocos2d::CCSprite* m_vehicleSpriteWhitener;
    cocos2d::CCSprite* m_vehicleGlow;
    PlayerFireBoostSprite* m_swingFireMiddle;
    PlayerFireBoostSprite* m_swingFireBottom;
    PlayerFireBoostSprite* m_swingFireTop;
    cocos2d::CCSprite* m_unk61c;
    cocos2d::CCMotionStreak* m_regularTrail;
    GEODE_PAD(4);
    HardStreak* m_waveTrail;
    float m_unk62c;
    GEODE_PAD(20);
    float m_unk644;
    float m_unk648;
    GEODE_PAD(12);
    bool m_unk658;
    bool m_unk659;
    bool m_unk65a;
    bool m_unk65b;
    bool m_unk65c;
    bool m_unk65d;
    bool m_unk65e;
    bool m_unk65f;
    GEODE_PAD(40);
    float m_unk688;
    float m_unk68c;
    GEODE_PAD(18);
    bool m_unk6a2;
    bool m_unk6a3;
    GEODE_PAD(24);
    GameObject* m_objectSnappedTo;
    GEODE_PAD(8);
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    GEODE_PAD(4);
    cocos2d::CCParticleSystemQuad* m_unk6dc;
    cocos2d::CCParticleSystemQuad* m_trailingParticles;
    cocos2d::CCParticleSystemQuad* m_shipClickParticles;
    cocos2d::CCParticleSystemQuad* m_unk6e8;
    cocos2d::CCParticleSystemQuad* m_ufoClickParticles;
    cocos2d::CCParticleSystemQuad* m_robotBurstParticles;
    cocos2d::CCParticleSystemQuad* m_unk6f4;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles1;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles2;
    GEODE_PAD(4);
    cocos2d::CCParticleSystemQuad* m_unk704;
    cocos2d::CCParticleSystemQuad* m_unk708;
    GEODE_PAD(108);
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    GEODE_PAD(36);
    double m_yVelocity;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    GEODE_PAD(7);
    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_unk7b3;
    bool m_isSwing;
    GEODE_PAD(16);
    float m_unk7c8;
    float m_unk7cc;
    float m_unk7d0;
    bool m_isDashing;
    GEODE_PAD(8);
    float m_vehicleSize;
    float m_playerSpeed;
    float m_unk7e0;
    float m_unk7e4;
    cocos2d::CCPoint m_unk7e8;
    cocos2d::CCPoint m_unk7f0;
    GEODE_PAD(28);
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    gd::unordered_set<int> m_unk828;
    GameObject* m_lastActivatedPortal;
    bool m_unk814;
    bool m_unk815;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    GEODE_PAD(20);
    float m_unk838;
    gd::unordered_map<int, int> m_unk83c;
    GEODE_PAD(16);
    double m_platformerXVelocity;
    GEODE_PAD(112);
    bool m_isPlatformer;
    int m_unk8ec;
    int m_unk8f0;
    int m_unk8f4;
    int m_unk8f8;
    float m_gravityMod;
    GEODE_PAD(4);
    cocos2d::CCPoint m_unk904;
    GEODE_PAD(4);
    gd::map<int, bool> m_unk910;
    float m_unk918;
    float m_unk91c;
    GEODE_PAD(4);
    gd::map<int, bool> m_unk924;
    GEODE_PAD(4);
    gd::string m_unk930;
    bool m_unk948;
    GEODE_PAD(3);
    int m_iconRequestID;
    cocos2d::CCSpriteBatchNode* m_unk950;
    cocos2d::CCSpriteBatchNode* m_unk954;
    cocos2d::CCArray* m_unk958;
    PlayerFireBoostSprite* m_robotFire;
    GEODE_PAD(4);
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCLayer* m_parentLayer;
    GJActionManager* m_actionManager;
    GEODE_PAD(4);
    float m_unk974;
    bool m_unk978;
    bool m_unk979;
    bool m_unk97a;
    bool m_unk97b;
    GEODE_PAD(4);
};
