#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithTotalParticles
		#define GEODE_STATICS_createWithTotalParticles
		GEODE_AS_STATIC_FUNCTION(createWithTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_initParticle
		#define GEODE_STATICS_initParticle
		GEODE_AS_STATIC_FUNCTION(initParticle) 
	#endif

	#ifndef GEODE_STATICS_initWithDictionary
		#define GEODE_STATICS_initWithDictionary
		GEODE_AS_STATIC_FUNCTION(initWithDictionary) 
	#endif

	#ifndef GEODE_STATICS_initWithFile
		#define GEODE_STATICS_initWithFile
		GEODE_AS_STATIC_FUNCTION(initWithFile) 
	#endif

	#ifndef GEODE_STATICS_getAtlasIndex
		#define GEODE_STATICS_getAtlasIndex
		GEODE_AS_STATIC_FUNCTION(getAtlasIndex) 
	#endif

	#ifndef GEODE_STATICS_getDontCleanupOnFinish
		#define GEODE_STATICS_getDontCleanupOnFinish
		GEODE_AS_STATIC_FUNCTION(getDontCleanupOnFinish) 
	#endif

	#ifndef GEODE_STATICS_getDynamicRotationIsDir
		#define GEODE_STATICS_getDynamicRotationIsDir
		GEODE_AS_STATIC_FUNCTION(getDynamicRotationIsDir) 
	#endif

	#ifndef GEODE_STATICS_getEndRGBVarSync
		#define GEODE_STATICS_getEndRGBVarSync
		GEODE_AS_STATIC_FUNCTION(getEndRGBVarSync) 
	#endif

	#ifndef GEODE_STATICS_getFadeInTime
		#define GEODE_STATICS_getFadeInTime
		GEODE_AS_STATIC_FUNCTION(getFadeInTime) 
	#endif

	#ifndef GEODE_STATICS_getFadeInTimeVar
		#define GEODE_STATICS_getFadeInTimeVar
		GEODE_AS_STATIC_FUNCTION(getFadeInTimeVar) 
	#endif

	#ifndef GEODE_STATICS_getFadeOutTime
		#define GEODE_STATICS_getFadeOutTime
		GEODE_AS_STATIC_FUNCTION(getFadeOutTime) 
	#endif

	#ifndef GEODE_STATICS_getFadeOutTimeVar
		#define GEODE_STATICS_getFadeOutTimeVar
		GEODE_AS_STATIC_FUNCTION(getFadeOutTimeVar) 
	#endif

	#ifndef GEODE_STATICS_getFrictionPos
		#define GEODE_STATICS_getFrictionPos
		GEODE_AS_STATIC_FUNCTION(getFrictionPos) 
	#endif

	#ifndef GEODE_STATICS_getFrictionPosVar
		#define GEODE_STATICS_getFrictionPosVar
		GEODE_AS_STATIC_FUNCTION(getFrictionPosVar) 
	#endif

	#ifndef GEODE_STATICS_getFrictionRot
		#define GEODE_STATICS_getFrictionRot
		GEODE_AS_STATIC_FUNCTION(getFrictionRot) 
	#endif

	#ifndef GEODE_STATICS_getFrictionRotVar
		#define GEODE_STATICS_getFrictionRotVar
		GEODE_AS_STATIC_FUNCTION(getFrictionRotVar) 
	#endif

	#ifndef GEODE_STATICS_getFrictionSize
		#define GEODE_STATICS_getFrictionSize
		GEODE_AS_STATIC_FUNCTION(getFrictionSize) 
	#endif

	#ifndef GEODE_STATICS_getFrictionSizeVar
		#define GEODE_STATICS_getFrictionSizeVar
		GEODE_AS_STATIC_FUNCTION(getFrictionSizeVar) 
	#endif

	#ifndef GEODE_STATICS_getOrderSensitive
		#define GEODE_STATICS_getOrderSensitive
		GEODE_AS_STATIC_FUNCTION(getOrderSensitive) 
	#endif

	#ifndef GEODE_STATICS_getRespawn
		#define GEODE_STATICS_getRespawn
		GEODE_AS_STATIC_FUNCTION(getRespawn) 
	#endif

	#ifndef GEODE_STATICS_getRespawnVar
		#define GEODE_STATICS_getRespawnVar
		GEODE_AS_STATIC_FUNCTION(getRespawnVar) 
	#endif

	#ifndef GEODE_STATICS_getStartRGBVarSync
		#define GEODE_STATICS_getStartRGBVarSync
		GEODE_AS_STATIC_FUNCTION(getStartRGBVarSync) 
	#endif

	#ifndef GEODE_STATICS_getStartRadiusEqualToEnd
		#define GEODE_STATICS_getStartRadiusEqualToEnd
		GEODE_AS_STATIC_FUNCTION(getStartRadiusEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_getStartSizeEqualToEnd
		#define GEODE_STATICS_getStartSizeEqualToEnd
		GEODE_AS_STATIC_FUNCTION(getStartSizeEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_getStartSpinEqualToEnd
		#define GEODE_STATICS_getStartSpinEqualToEnd
		GEODE_AS_STATIC_FUNCTION(getStartSpinEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_getTimeElapsed
		#define GEODE_STATICS_getTimeElapsed
		GEODE_AS_STATIC_FUNCTION(getTimeElapsed) 
	#endif

	#ifndef GEODE_STATICS_getUseUniformColorMode
		#define GEODE_STATICS_getUseUniformColorMode
		GEODE_AS_STATIC_FUNCTION(getUseUniformColorMode) 
	#endif

	#ifndef GEODE_STATICS_getUsingSchedule
		#define GEODE_STATICS_getUsingSchedule
		GEODE_AS_STATIC_FUNCTION(getUsingSchedule) 
	#endif

	#ifndef GEODE_STATICS_getWasRemoved
		#define GEODE_STATICS_getWasRemoved
		GEODE_AS_STATIC_FUNCTION(getWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_setAtlasIndex
		#define GEODE_STATICS_setAtlasIndex
		GEODE_AS_STATIC_FUNCTION(setAtlasIndex) 
	#endif

	#ifndef GEODE_STATICS_setDontCleanupOnFinish
		#define GEODE_STATICS_setDontCleanupOnFinish
		GEODE_AS_STATIC_FUNCTION(setDontCleanupOnFinish) 
	#endif

	#ifndef GEODE_STATICS_setDynamicRotationIsDir
		#define GEODE_STATICS_setDynamicRotationIsDir
		GEODE_AS_STATIC_FUNCTION(setDynamicRotationIsDir) 
	#endif

	#ifndef GEODE_STATICS_setEndAlpha
		#define GEODE_STATICS_setEndAlpha
		GEODE_AS_STATIC_FUNCTION(setEndAlpha) 
	#endif

	#ifndef GEODE_STATICS_setEndRGBVarSync
		#define GEODE_STATICS_setEndRGBVarSync
		GEODE_AS_STATIC_FUNCTION(setEndRGBVarSync) 
	#endif

	#ifndef GEODE_STATICS_setFadeInTime
		#define GEODE_STATICS_setFadeInTime
		GEODE_AS_STATIC_FUNCTION(setFadeInTime) 
	#endif

	#ifndef GEODE_STATICS_setFadeInTimeVar
		#define GEODE_STATICS_setFadeInTimeVar
		GEODE_AS_STATIC_FUNCTION(setFadeInTimeVar) 
	#endif

	#ifndef GEODE_STATICS_setFadeOutTime
		#define GEODE_STATICS_setFadeOutTime
		GEODE_AS_STATIC_FUNCTION(setFadeOutTime) 
	#endif

	#ifndef GEODE_STATICS_setFadeOutTimeVar
		#define GEODE_STATICS_setFadeOutTimeVar
		GEODE_AS_STATIC_FUNCTION(setFadeOutTimeVar) 
	#endif

	#ifndef GEODE_STATICS_setFrictionPos
		#define GEODE_STATICS_setFrictionPos
		GEODE_AS_STATIC_FUNCTION(setFrictionPos) 
	#endif

	#ifndef GEODE_STATICS_setFrictionPosVar
		#define GEODE_STATICS_setFrictionPosVar
		GEODE_AS_STATIC_FUNCTION(setFrictionPosVar) 
	#endif

	#ifndef GEODE_STATICS_setFrictionRot
		#define GEODE_STATICS_setFrictionRot
		GEODE_AS_STATIC_FUNCTION(setFrictionRot) 
	#endif

	#ifndef GEODE_STATICS_setFrictionRotVar
		#define GEODE_STATICS_setFrictionRotVar
		GEODE_AS_STATIC_FUNCTION(setFrictionRotVar) 
	#endif

	#ifndef GEODE_STATICS_setFrictionSize
		#define GEODE_STATICS_setFrictionSize
		GEODE_AS_STATIC_FUNCTION(setFrictionSize) 
	#endif

	#ifndef GEODE_STATICS_setFrictionSizeVar
		#define GEODE_STATICS_setFrictionSizeVar
		GEODE_AS_STATIC_FUNCTION(setFrictionSizeVar) 
	#endif

	#ifndef GEODE_STATICS_setOrderSensitive
		#define GEODE_STATICS_setOrderSensitive
		GEODE_AS_STATIC_FUNCTION(setOrderSensitive) 
	#endif

	#ifndef GEODE_STATICS_setRespawn
		#define GEODE_STATICS_setRespawn
		GEODE_AS_STATIC_FUNCTION(setRespawn) 
	#endif

	#ifndef GEODE_STATICS_setRespawnVar
		#define GEODE_STATICS_setRespawnVar
		GEODE_AS_STATIC_FUNCTION(setRespawnVar) 
	#endif

	#ifndef GEODE_STATICS_setStartAlpha
		#define GEODE_STATICS_setStartAlpha
		GEODE_AS_STATIC_FUNCTION(setStartAlpha) 
	#endif

	#ifndef GEODE_STATICS_setStartRGBVarSync
		#define GEODE_STATICS_setStartRGBVarSync
		GEODE_AS_STATIC_FUNCTION(setStartRGBVarSync) 
	#endif

	#ifndef GEODE_STATICS_setStartRadiusEqualToEnd
		#define GEODE_STATICS_setStartRadiusEqualToEnd
		GEODE_AS_STATIC_FUNCTION(setStartRadiusEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_setStartSizeEqualToEnd
		#define GEODE_STATICS_setStartSizeEqualToEnd
		GEODE_AS_STATIC_FUNCTION(setStartSizeEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_setStartSpinEqualToEnd
		#define GEODE_STATICS_setStartSpinEqualToEnd
		GEODE_AS_STATIC_FUNCTION(setStartSpinEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_setUsingSchedule
		#define GEODE_STATICS_setUsingSchedule
		GEODE_AS_STATIC_FUNCTION(setUsingSchedule) 
	#endif

	#ifndef GEODE_STATICS_setWasRemoved
		#define GEODE_STATICS_setWasRemoved
		GEODE_AS_STATIC_FUNCTION(setWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_addParticle
		#define GEODE_STATICS_addParticle
		GEODE_AS_STATIC_FUNCTION(addParticle) 
	#endif

	#ifndef GEODE_STATICS_calculateWorldSpace
		#define GEODE_STATICS_calculateWorldSpace
		GEODE_AS_STATIC_FUNCTION(calculateWorldSpace) 
	#endif

	#ifndef GEODE_STATICS_isFull
		#define GEODE_STATICS_isFull
		GEODE_AS_STATIC_FUNCTION(isFull) 
	#endif

	#ifndef GEODE_STATICS_loadDefaults
		#define GEODE_STATICS_loadDefaults
		GEODE_AS_STATIC_FUNCTION(loadDefaults) 
	#endif

	#ifndef GEODE_STATICS_loadScaledDefaults
		#define GEODE_STATICS_loadScaledDefaults
		GEODE_AS_STATIC_FUNCTION(loadScaledDefaults) 
	#endif

	#ifndef GEODE_STATICS_resetSystem
		#define GEODE_STATICS_resetSystem
		GEODE_AS_STATIC_FUNCTION(resetSystem) 
	#endif

	#ifndef GEODE_STATICS_resumeSystem
		#define GEODE_STATICS_resumeSystem
		GEODE_AS_STATIC_FUNCTION(resumeSystem) 
	#endif

	#ifndef GEODE_STATICS_saveDefaults
		#define GEODE_STATICS_saveDefaults
		GEODE_AS_STATIC_FUNCTION(saveDefaults) 
	#endif

	#ifndef GEODE_STATICS_stopSystem
		#define GEODE_STATICS_stopSystem
		GEODE_AS_STATIC_FUNCTION(stopSystem) 
	#endif

	#ifndef GEODE_STATICS_toggleUniformColorMode
		#define GEODE_STATICS_toggleUniformColorMode
		GEODE_AS_STATIC_FUNCTION(toggleUniformColorMode) 
	#endif

	#ifndef GEODE_STATICS_updateVisible
		#define GEODE_STATICS_updateVisible
		GEODE_AS_STATIC_FUNCTION(updateVisible) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_getBatchNode
		#define GEODE_STATICS_getBatchNode
		GEODE_AS_STATIC_FUNCTION(getBatchNode) 
	#endif

	#ifndef GEODE_STATICS_setBatchNode
		#define GEODE_STATICS_setBatchNode
		GEODE_AS_STATIC_FUNCTION(setBatchNode) 
	#endif

	#ifndef GEODE_STATICS_getParticleCount
		#define GEODE_STATICS_getParticleCount
		GEODE_AS_STATIC_FUNCTION(getParticleCount) 
	#endif

	#ifndef GEODE_STATICS_getDuration
		#define GEODE_STATICS_getDuration
		GEODE_AS_STATIC_FUNCTION(getDuration) 
	#endif

	#ifndef GEODE_STATICS_setDuration
		#define GEODE_STATICS_setDuration
		GEODE_AS_STATIC_FUNCTION(setDuration) 
	#endif

	#ifndef GEODE_STATICS_getSourcePosition
		#define GEODE_STATICS_getSourcePosition
		GEODE_AS_STATIC_FUNCTION(getSourcePosition) 
	#endif

	#ifndef GEODE_STATICS_setSourcePosition
		#define GEODE_STATICS_setSourcePosition
		GEODE_AS_STATIC_FUNCTION(setSourcePosition) 
	#endif

	#ifndef GEODE_STATICS_getPosVar
		#define GEODE_STATICS_getPosVar
		GEODE_AS_STATIC_FUNCTION(getPosVar) 
	#endif

	#ifndef GEODE_STATICS_setPosVar
		#define GEODE_STATICS_setPosVar
		GEODE_AS_STATIC_FUNCTION(setPosVar) 
	#endif

	#ifndef GEODE_STATICS_getLife
		#define GEODE_STATICS_getLife
		GEODE_AS_STATIC_FUNCTION(getLife) 
	#endif

	#ifndef GEODE_STATICS_setLife
		#define GEODE_STATICS_setLife
		GEODE_AS_STATIC_FUNCTION(setLife) 
	#endif

	#ifndef GEODE_STATICS_getLifeVar
		#define GEODE_STATICS_getLifeVar
		GEODE_AS_STATIC_FUNCTION(getLifeVar) 
	#endif

	#ifndef GEODE_STATICS_setLifeVar
		#define GEODE_STATICS_setLifeVar
		GEODE_AS_STATIC_FUNCTION(setLifeVar) 
	#endif

	#ifndef GEODE_STATICS_getAngle
		#define GEODE_STATICS_getAngle
		GEODE_AS_STATIC_FUNCTION(getAngle) 
	#endif

	#ifndef GEODE_STATICS_setAngle
		#define GEODE_STATICS_setAngle
		GEODE_AS_STATIC_FUNCTION(setAngle) 
	#endif

	#ifndef GEODE_STATICS_getAngleVar
		#define GEODE_STATICS_getAngleVar
		GEODE_AS_STATIC_FUNCTION(getAngleVar) 
	#endif

	#ifndef GEODE_STATICS_setAngleVar
		#define GEODE_STATICS_setAngleVar
		GEODE_AS_STATIC_FUNCTION(setAngleVar) 
	#endif

	#ifndef GEODE_STATICS_updateEmissionRate
		#define GEODE_STATICS_updateEmissionRate
		GEODE_AS_STATIC_FUNCTION(updateEmissionRate) 
	#endif

	#ifndef GEODE_STATICS_getGravity
		#define GEODE_STATICS_getGravity
		GEODE_AS_STATIC_FUNCTION(getGravity) 
	#endif

	#ifndef GEODE_STATICS_setGravity
		#define GEODE_STATICS_setGravity
		GEODE_AS_STATIC_FUNCTION(setGravity) 
	#endif

	#ifndef GEODE_STATICS_getSpeed
		#define GEODE_STATICS_getSpeed
		GEODE_AS_STATIC_FUNCTION(getSpeed) 
	#endif

	#ifndef GEODE_STATICS_setSpeed
		#define GEODE_STATICS_setSpeed
		GEODE_AS_STATIC_FUNCTION(setSpeed) 
	#endif

	#ifndef GEODE_STATICS_getSpeedVar
		#define GEODE_STATICS_getSpeedVar
		GEODE_AS_STATIC_FUNCTION(getSpeedVar) 
	#endif

	#ifndef GEODE_STATICS_setSpeedVar
		#define GEODE_STATICS_setSpeedVar
		GEODE_AS_STATIC_FUNCTION(setSpeedVar) 
	#endif

	#ifndef GEODE_STATICS_getTangentialAccel
		#define GEODE_STATICS_getTangentialAccel
		GEODE_AS_STATIC_FUNCTION(getTangentialAccel) 
	#endif

	#ifndef GEODE_STATICS_setTangentialAccel
		#define GEODE_STATICS_setTangentialAccel
		GEODE_AS_STATIC_FUNCTION(setTangentialAccel) 
	#endif

	#ifndef GEODE_STATICS_getTangentialAccelVar
		#define GEODE_STATICS_getTangentialAccelVar
		GEODE_AS_STATIC_FUNCTION(getTangentialAccelVar) 
	#endif

	#ifndef GEODE_STATICS_setTangentialAccelVar
		#define GEODE_STATICS_setTangentialAccelVar
		GEODE_AS_STATIC_FUNCTION(setTangentialAccelVar) 
	#endif

	#ifndef GEODE_STATICS_getRadialAccel
		#define GEODE_STATICS_getRadialAccel
		GEODE_AS_STATIC_FUNCTION(getRadialAccel) 
	#endif

	#ifndef GEODE_STATICS_setRadialAccel
		#define GEODE_STATICS_setRadialAccel
		GEODE_AS_STATIC_FUNCTION(setRadialAccel) 
	#endif

	#ifndef GEODE_STATICS_getRadialAccelVar
		#define GEODE_STATICS_getRadialAccelVar
		GEODE_AS_STATIC_FUNCTION(getRadialAccelVar) 
	#endif

	#ifndef GEODE_STATICS_setRadialAccelVar
		#define GEODE_STATICS_setRadialAccelVar
		GEODE_AS_STATIC_FUNCTION(setRadialAccelVar) 
	#endif

	#ifndef GEODE_STATICS_getRotationIsDir
		#define GEODE_STATICS_getRotationIsDir
		GEODE_AS_STATIC_FUNCTION(getRotationIsDir) 
	#endif

	#ifndef GEODE_STATICS_setRotationIsDir
		#define GEODE_STATICS_setRotationIsDir
		GEODE_AS_STATIC_FUNCTION(setRotationIsDir) 
	#endif

	#ifndef GEODE_STATICS_getStartRadius
		#define GEODE_STATICS_getStartRadius
		GEODE_AS_STATIC_FUNCTION(getStartRadius) 
	#endif

	#ifndef GEODE_STATICS_setStartRadius
		#define GEODE_STATICS_setStartRadius
		GEODE_AS_STATIC_FUNCTION(setStartRadius) 
	#endif

	#ifndef GEODE_STATICS_getStartRadiusVar
		#define GEODE_STATICS_getStartRadiusVar
		GEODE_AS_STATIC_FUNCTION(getStartRadiusVar) 
	#endif

	#ifndef GEODE_STATICS_setStartRadiusVar
		#define GEODE_STATICS_setStartRadiusVar
		GEODE_AS_STATIC_FUNCTION(setStartRadiusVar) 
	#endif

	#ifndef GEODE_STATICS_getEndRadius
		#define GEODE_STATICS_getEndRadius
		GEODE_AS_STATIC_FUNCTION(getEndRadius) 
	#endif

	#ifndef GEODE_STATICS_setEndRadius
		#define GEODE_STATICS_setEndRadius
		GEODE_AS_STATIC_FUNCTION(setEndRadius) 
	#endif

	#ifndef GEODE_STATICS_getEndRadiusVar
		#define GEODE_STATICS_getEndRadiusVar
		GEODE_AS_STATIC_FUNCTION(getEndRadiusVar) 
	#endif

	#ifndef GEODE_STATICS_setEndRadiusVar
		#define GEODE_STATICS_setEndRadiusVar
		GEODE_AS_STATIC_FUNCTION(setEndRadiusVar) 
	#endif

	#ifndef GEODE_STATICS_getRotatePerSecond
		#define GEODE_STATICS_getRotatePerSecond
		GEODE_AS_STATIC_FUNCTION(getRotatePerSecond) 
	#endif

	#ifndef GEODE_STATICS_setRotatePerSecond
		#define GEODE_STATICS_setRotatePerSecond
		GEODE_AS_STATIC_FUNCTION(setRotatePerSecond) 
	#endif

	#ifndef GEODE_STATICS_getRotatePerSecondVar
		#define GEODE_STATICS_getRotatePerSecondVar
		GEODE_AS_STATIC_FUNCTION(getRotatePerSecondVar) 
	#endif

	#ifndef GEODE_STATICS_setRotatePerSecondVar
		#define GEODE_STATICS_setRotatePerSecondVar
		GEODE_AS_STATIC_FUNCTION(setRotatePerSecondVar) 
	#endif

	#ifndef GEODE_STATICS_isActive
		#define GEODE_STATICS_isActive
		GEODE_AS_STATIC_FUNCTION(isActive) 
	#endif

	#ifndef GEODE_STATICS_isBlendAdditive
		#define GEODE_STATICS_isBlendAdditive
		GEODE_AS_STATIC_FUNCTION(isBlendAdditive) 
	#endif

	#ifndef GEODE_STATICS_setBlendAdditive
		#define GEODE_STATICS_setBlendAdditive
		GEODE_AS_STATIC_FUNCTION(setBlendAdditive) 
	#endif

	#ifndef GEODE_STATICS_getStartSize
		#define GEODE_STATICS_getStartSize
		GEODE_AS_STATIC_FUNCTION(getStartSize) 
	#endif

	#ifndef GEODE_STATICS_setStartSize
		#define GEODE_STATICS_setStartSize
		GEODE_AS_STATIC_FUNCTION(setStartSize) 
	#endif

	#ifndef GEODE_STATICS_getStartSizeVar
		#define GEODE_STATICS_getStartSizeVar
		GEODE_AS_STATIC_FUNCTION(getStartSizeVar) 
	#endif

	#ifndef GEODE_STATICS_setStartSizeVar
		#define GEODE_STATICS_setStartSizeVar
		GEODE_AS_STATIC_FUNCTION(setStartSizeVar) 
	#endif

	#ifndef GEODE_STATICS_getEndSize
		#define GEODE_STATICS_getEndSize
		GEODE_AS_STATIC_FUNCTION(getEndSize) 
	#endif

	#ifndef GEODE_STATICS_setEndSize
		#define GEODE_STATICS_setEndSize
		GEODE_AS_STATIC_FUNCTION(setEndSize) 
	#endif

	#ifndef GEODE_STATICS_getEndSizeVar
		#define GEODE_STATICS_getEndSizeVar
		GEODE_AS_STATIC_FUNCTION(getEndSizeVar) 
	#endif

	#ifndef GEODE_STATICS_setEndSizeVar
		#define GEODE_STATICS_setEndSizeVar
		GEODE_AS_STATIC_FUNCTION(setEndSizeVar) 
	#endif

	#ifndef GEODE_STATICS_getStartColor
		#define GEODE_STATICS_getStartColor
		GEODE_AS_STATIC_FUNCTION(getStartColor) 
	#endif

	#ifndef GEODE_STATICS_setStartColor
		#define GEODE_STATICS_setStartColor
		GEODE_AS_STATIC_FUNCTION(setStartColor) 
	#endif

	#ifndef GEODE_STATICS_getStartColorVar
		#define GEODE_STATICS_getStartColorVar
		GEODE_AS_STATIC_FUNCTION(getStartColorVar) 
	#endif

	#ifndef GEODE_STATICS_setStartColorVar
		#define GEODE_STATICS_setStartColorVar
		GEODE_AS_STATIC_FUNCTION(setStartColorVar) 
	#endif

	#ifndef GEODE_STATICS_getEndColor
		#define GEODE_STATICS_getEndColor
		GEODE_AS_STATIC_FUNCTION(getEndColor) 
	#endif

	#ifndef GEODE_STATICS_setEndColor
		#define GEODE_STATICS_setEndColor
		GEODE_AS_STATIC_FUNCTION(setEndColor) 
	#endif

	#ifndef GEODE_STATICS_getEndColorVar
		#define GEODE_STATICS_getEndColorVar
		GEODE_AS_STATIC_FUNCTION(getEndColorVar) 
	#endif

	#ifndef GEODE_STATICS_setEndColorVar
		#define GEODE_STATICS_setEndColorVar
		GEODE_AS_STATIC_FUNCTION(setEndColorVar) 
	#endif

	#ifndef GEODE_STATICS_getStartSpin
		#define GEODE_STATICS_getStartSpin
		GEODE_AS_STATIC_FUNCTION(getStartSpin) 
	#endif

	#ifndef GEODE_STATICS_setStartSpin
		#define GEODE_STATICS_setStartSpin
		GEODE_AS_STATIC_FUNCTION(setStartSpin) 
	#endif

	#ifndef GEODE_STATICS_getStartSpinVar
		#define GEODE_STATICS_getStartSpinVar
		GEODE_AS_STATIC_FUNCTION(getStartSpinVar) 
	#endif

	#ifndef GEODE_STATICS_setStartSpinVar
		#define GEODE_STATICS_setStartSpinVar
		GEODE_AS_STATIC_FUNCTION(setStartSpinVar) 
	#endif

	#ifndef GEODE_STATICS_getEndSpin
		#define GEODE_STATICS_getEndSpin
		GEODE_AS_STATIC_FUNCTION(getEndSpin) 
	#endif

	#ifndef GEODE_STATICS_setEndSpin
		#define GEODE_STATICS_setEndSpin
		GEODE_AS_STATIC_FUNCTION(setEndSpin) 
	#endif

	#ifndef GEODE_STATICS_getEndSpinVar
		#define GEODE_STATICS_getEndSpinVar
		GEODE_AS_STATIC_FUNCTION(getEndSpinVar) 
	#endif

	#ifndef GEODE_STATICS_setEndSpinVar
		#define GEODE_STATICS_setEndSpinVar
		GEODE_AS_STATIC_FUNCTION(setEndSpinVar) 
	#endif

	#ifndef GEODE_STATICS_getEmissionRate
		#define GEODE_STATICS_getEmissionRate
		GEODE_AS_STATIC_FUNCTION(getEmissionRate) 
	#endif

	#ifndef GEODE_STATICS_setEmissionRate
		#define GEODE_STATICS_setEmissionRate
		GEODE_AS_STATIC_FUNCTION(setEmissionRate) 
	#endif

	#ifndef GEODE_STATICS_getTotalParticles
		#define GEODE_STATICS_getTotalParticles
		GEODE_AS_STATIC_FUNCTION(getTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_setTotalParticles
		#define GEODE_STATICS_setTotalParticles
		GEODE_AS_STATIC_FUNCTION(setTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_getOpacityModifyRGB
		#define GEODE_STATICS_getOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(getOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_getPositionType
		#define GEODE_STATICS_getPositionType
		GEODE_AS_STATIC_FUNCTION(getPositionType) 
	#endif

	#ifndef GEODE_STATICS_setPositionType
		#define GEODE_STATICS_setPositionType
		GEODE_AS_STATIC_FUNCTION(setPositionType) 
	#endif

	#ifndef GEODE_STATICS_isAutoRemoveOnFinish
		#define GEODE_STATICS_isAutoRemoveOnFinish
		GEODE_AS_STATIC_FUNCTION(isAutoRemoveOnFinish) 
	#endif

	#ifndef GEODE_STATICS_setAutoRemoveOnFinish
		#define GEODE_STATICS_setAutoRemoveOnFinish
		GEODE_AS_STATIC_FUNCTION(setAutoRemoveOnFinish) 
	#endif

	#ifndef GEODE_STATICS_getEmitterMode
		#define GEODE_STATICS_getEmitterMode
		GEODE_AS_STATIC_FUNCTION(getEmitterMode) 
	#endif

	#ifndef GEODE_STATICS_setEmitterMode
		#define GEODE_STATICS_setEmitterMode
		GEODE_AS_STATIC_FUNCTION(setEmitterMode) 
	#endif

	#ifndef GEODE_STATICS_initWithTotalParticles
		#define GEODE_STATICS_initWithTotalParticles
		GEODE_AS_STATIC_FUNCTION(initWithTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_updateQuadWithParticle
		#define GEODE_STATICS_updateQuadWithParticle
		GEODE_AS_STATIC_FUNCTION(updateQuadWithParticle) 
	#endif

	#ifndef GEODE_STATICS_postStep
		#define GEODE_STATICS_postStep
		GEODE_AS_STATIC_FUNCTION(postStep) 
	#endif

	#ifndef GEODE_STATICS_updateWithNoTime
		#define GEODE_STATICS_updateWithNoTime
		GEODE_AS_STATIC_FUNCTION(updateWithNoTime) 
	#endif

	#ifndef GEODE_STATICS_updateBlendFunc
		#define GEODE_STATICS_updateBlendFunc
		GEODE_AS_STATIC_FUNCTION(updateBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCParticleSystem> : ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystem>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystem>>::ModifyBase;
		using Base = cocos2d::CCParticleSystem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCParticleSystem::create)), Cdecl, cocos2d::CCParticleSystem, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCParticleSystem::createWithTotalParticles)), Cdecl, cocos2d::CCParticleSystem, createWithTotalParticles, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::sCCParticle*>::func(&cocos2d::CCParticleSystem::initParticle)), Thiscall, cocos2d::CCParticleSystem, initParticle, cocos2d::sCCParticle*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*, char const*, bool>::func(&cocos2d::CCParticleSystem::initWithDictionary)), Thiscall, cocos2d::CCParticleSystem, initWithDictionary, cocos2d::CCDictionary*, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*, bool>::func(&cocos2d::CCParticleSystem::initWithDictionary)), Thiscall, cocos2d::CCParticleSystem, initWithDictionary, cocos2d::CCDictionary*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&cocos2d::CCParticleSystem::initWithFile)), Thiscall, cocos2d::CCParticleSystem, initWithFile, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getAtlasIndex)), Thiscall, cocos2d::CCParticleSystem, getAtlasIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getDontCleanupOnFinish)), Thiscall, cocos2d::CCParticleSystem, getDontCleanupOnFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getDynamicRotationIsDir)), Thiscall, cocos2d::CCParticleSystem, getDynamicRotationIsDir, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndRGBVarSync)), Thiscall, cocos2d::CCParticleSystem, getEndRGBVarSync, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getFadeInTime)), Thiscall, cocos2d::CCParticleSystem, getFadeInTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getFadeInTimeVar)), Thiscall, cocos2d::CCParticleSystem, getFadeInTimeVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getFadeOutTime)), Thiscall, cocos2d::CCParticleSystem, getFadeOutTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getFadeOutTimeVar)), Thiscall, cocos2d::CCParticleSystem, getFadeOutTimeVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getFrictionPos)), Thiscall, cocos2d::CCParticleSystem, getFrictionPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getFrictionPosVar)), Thiscall, cocos2d::CCParticleSystem, getFrictionPosVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getFrictionRot)), Thiscall, cocos2d::CCParticleSystem, getFrictionRot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getFrictionRotVar)), Thiscall, cocos2d::CCParticleSystem, getFrictionRotVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getFrictionSize)), Thiscall, cocos2d::CCParticleSystem, getFrictionSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getFrictionSizeVar)), Thiscall, cocos2d::CCParticleSystem, getFrictionSizeVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getOrderSensitive)), Thiscall, cocos2d::CCParticleSystem, getOrderSensitive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRespawn)), Thiscall, cocos2d::CCParticleSystem, getRespawn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRespawnVar)), Thiscall, cocos2d::CCParticleSystem, getRespawnVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartRGBVarSync)), Thiscall, cocos2d::CCParticleSystem, getStartRGBVarSync, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartRadiusEqualToEnd)), Thiscall, cocos2d::CCParticleSystem, getStartRadiusEqualToEnd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartSizeEqualToEnd)), Thiscall, cocos2d::CCParticleSystem, getStartSizeEqualToEnd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartSpinEqualToEnd)), Thiscall, cocos2d::CCParticleSystem, getStartSpinEqualToEnd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getTimeElapsed)), Thiscall, cocos2d::CCParticleSystem, getTimeElapsed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getUseUniformColorMode)), Thiscall, cocos2d::CCParticleSystem, getUseUniformColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getUsingSchedule)), Thiscall, cocos2d::CCParticleSystem, getUsingSchedule, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getWasRemoved)), Thiscall, cocos2d::CCParticleSystem, getWasRemoved, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCParticleSystem::setAtlasIndex)), Thiscall, cocos2d::CCParticleSystem, setAtlasIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setDontCleanupOnFinish)), Thiscall, cocos2d::CCParticleSystem, setDontCleanupOnFinish, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setDynamicRotationIsDir)), Thiscall, cocos2d::CCParticleSystem, setDynamicRotationIsDir, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndAlpha)), Thiscall, cocos2d::CCParticleSystem, setEndAlpha, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setEndRGBVarSync)), Thiscall, cocos2d::CCParticleSystem, setEndRGBVarSync, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setFadeInTime)), Thiscall, cocos2d::CCParticleSystem, setFadeInTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setFadeInTimeVar)), Thiscall, cocos2d::CCParticleSystem, setFadeInTimeVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setFadeOutTime)), Thiscall, cocos2d::CCParticleSystem, setFadeOutTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setFadeOutTimeVar)), Thiscall, cocos2d::CCParticleSystem, setFadeOutTimeVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setFrictionPos)), Thiscall, cocos2d::CCParticleSystem, setFrictionPos, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setFrictionPosVar)), Thiscall, cocos2d::CCParticleSystem, setFrictionPosVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setFrictionRot)), Thiscall, cocos2d::CCParticleSystem, setFrictionRot, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setFrictionRotVar)), Thiscall, cocos2d::CCParticleSystem, setFrictionRotVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setFrictionSize)), Thiscall, cocos2d::CCParticleSystem, setFrictionSize, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setFrictionSizeVar)), Thiscall, cocos2d::CCParticleSystem, setFrictionSizeVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setOrderSensitive)), Thiscall, cocos2d::CCParticleSystem, setOrderSensitive, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRespawn)), Thiscall, cocos2d::CCParticleSystem, setRespawn, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRespawnVar)), Thiscall, cocos2d::CCParticleSystem, setRespawnVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartAlpha)), Thiscall, cocos2d::CCParticleSystem, setStartAlpha, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setStartRGBVarSync)), Thiscall, cocos2d::CCParticleSystem, setStartRGBVarSync, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setStartRadiusEqualToEnd)), Thiscall, cocos2d::CCParticleSystem, setStartRadiusEqualToEnd, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setStartSizeEqualToEnd)), Thiscall, cocos2d::CCParticleSystem, setStartSizeEqualToEnd, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setStartSpinEqualToEnd)), Thiscall, cocos2d::CCParticleSystem, setStartSpinEqualToEnd, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setUsingSchedule)), Thiscall, cocos2d::CCParticleSystem, setUsingSchedule, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setWasRemoved)), Thiscall, cocos2d::CCParticleSystem, setWasRemoved, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::addParticle)), Thiscall, cocos2d::CCParticleSystem, addParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::calculateWorldSpace)), Thiscall, cocos2d::CCParticleSystem, calculateWorldSpace, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::isFull)), Thiscall, cocos2d::CCParticleSystem, isFull, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::loadDefaults)), Thiscall, cocos2d::CCParticleSystem, loadDefaults, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::loadScaledDefaults)), Thiscall, cocos2d::CCParticleSystem, loadScaledDefaults, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::resetSystem)), Thiscall, cocos2d::CCParticleSystem, resetSystem, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::resumeSystem)), Thiscall, cocos2d::CCParticleSystem, resumeSystem, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::saveDefaults)), Thiscall, cocos2d::CCParticleSystem, saveDefaults, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::stopSystem)), Thiscall, cocos2d::CCParticleSystem, stopSystem, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::toggleUniformColorMode)), Thiscall, cocos2d::CCParticleSystem, toggleUniformColorMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::updateVisible)), Thiscall, cocos2d::CCParticleSystem, updateVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::update)), Thiscall, cocos2d::CCParticleSystem, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::init)), Thiscall, cocos2d::CCParticleSystem, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setScaleX)), Thiscall, cocos2d::CCParticleSystem, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setScaleY)), Thiscall, cocos2d::CCParticleSystem, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setScale)), Thiscall, cocos2d::CCParticleSystem, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setVisible)), Thiscall, cocos2d::CCParticleSystem, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRotation)), Thiscall, cocos2d::CCParticleSystem, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getBatchNode)), Thiscall, cocos2d::CCParticleSystem, getBatchNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCParticleBatchNode*>::func(&cocos2d::CCParticleSystem::setBatchNode)), Thiscall, cocos2d::CCParticleSystem, setBatchNode, cocos2d::CCParticleBatchNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getParticleCount)), Thiscall, cocos2d::CCParticleSystem, getParticleCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getDuration)), Thiscall, cocos2d::CCParticleSystem, getDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setDuration)), Thiscall, cocos2d::CCParticleSystem, setDuration, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getSourcePosition)), Thiscall, cocos2d::CCParticleSystem, getSourcePosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCParticleSystem::setSourcePosition)), Thiscall, cocos2d::CCParticleSystem, setSourcePosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getPosVar)), Thiscall, cocos2d::CCParticleSystem, getPosVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCParticleSystem::setPosVar)), Thiscall, cocos2d::CCParticleSystem, setPosVar, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getLife)), Thiscall, cocos2d::CCParticleSystem, getLife, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setLife)), Thiscall, cocos2d::CCParticleSystem, setLife, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getLifeVar)), Thiscall, cocos2d::CCParticleSystem, getLifeVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setLifeVar)), Thiscall, cocos2d::CCParticleSystem, setLifeVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getAngle)), Thiscall, cocos2d::CCParticleSystem, getAngle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setAngle)), Thiscall, cocos2d::CCParticleSystem, setAngle, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getAngleVar)), Thiscall, cocos2d::CCParticleSystem, getAngleVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setAngleVar)), Thiscall, cocos2d::CCParticleSystem, setAngleVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::updateEmissionRate)), Thiscall, cocos2d::CCParticleSystem, updateEmissionRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getGravity)), Thiscall, cocos2d::CCParticleSystem, getGravity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCParticleSystem::setGravity)), Thiscall, cocos2d::CCParticleSystem, setGravity, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getSpeed)), Thiscall, cocos2d::CCParticleSystem, getSpeed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setSpeed)), Thiscall, cocos2d::CCParticleSystem, setSpeed, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getSpeedVar)), Thiscall, cocos2d::CCParticleSystem, getSpeedVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setSpeedVar)), Thiscall, cocos2d::CCParticleSystem, setSpeedVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getTangentialAccel)), Thiscall, cocos2d::CCParticleSystem, getTangentialAccel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setTangentialAccel)), Thiscall, cocos2d::CCParticleSystem, setTangentialAccel, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getTangentialAccelVar)), Thiscall, cocos2d::CCParticleSystem, getTangentialAccelVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setTangentialAccelVar)), Thiscall, cocos2d::CCParticleSystem, setTangentialAccelVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRadialAccel)), Thiscall, cocos2d::CCParticleSystem, getRadialAccel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRadialAccel)), Thiscall, cocos2d::CCParticleSystem, setRadialAccel, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRadialAccelVar)), Thiscall, cocos2d::CCParticleSystem, getRadialAccelVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRadialAccelVar)), Thiscall, cocos2d::CCParticleSystem, setRadialAccelVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRotationIsDir)), Thiscall, cocos2d::CCParticleSystem, getRotationIsDir, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setRotationIsDir)), Thiscall, cocos2d::CCParticleSystem, setRotationIsDir, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartRadius)), Thiscall, cocos2d::CCParticleSystem, getStartRadius, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartRadius)), Thiscall, cocos2d::CCParticleSystem, setStartRadius, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartRadiusVar)), Thiscall, cocos2d::CCParticleSystem, getStartRadiusVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartRadiusVar)), Thiscall, cocos2d::CCParticleSystem, setStartRadiusVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndRadius)), Thiscall, cocos2d::CCParticleSystem, getEndRadius, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndRadius)), Thiscall, cocos2d::CCParticleSystem, setEndRadius, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndRadiusVar)), Thiscall, cocos2d::CCParticleSystem, getEndRadiusVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndRadiusVar)), Thiscall, cocos2d::CCParticleSystem, setEndRadiusVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRotatePerSecond)), Thiscall, cocos2d::CCParticleSystem, getRotatePerSecond, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRotatePerSecond)), Thiscall, cocos2d::CCParticleSystem, setRotatePerSecond, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRotatePerSecondVar)), Thiscall, cocos2d::CCParticleSystem, getRotatePerSecondVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRotatePerSecondVar)), Thiscall, cocos2d::CCParticleSystem, setRotatePerSecondVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::isActive)), Thiscall, cocos2d::CCParticleSystem, isActive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::isBlendAdditive)), Thiscall, cocos2d::CCParticleSystem, isBlendAdditive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setBlendAdditive)), Thiscall, cocos2d::CCParticleSystem, setBlendAdditive, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartSize)), Thiscall, cocos2d::CCParticleSystem, getStartSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartSize)), Thiscall, cocos2d::CCParticleSystem, setStartSize, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartSizeVar)), Thiscall, cocos2d::CCParticleSystem, getStartSizeVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartSizeVar)), Thiscall, cocos2d::CCParticleSystem, setStartSizeVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndSize)), Thiscall, cocos2d::CCParticleSystem, getEndSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndSize)), Thiscall, cocos2d::CCParticleSystem, setEndSize, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndSizeVar)), Thiscall, cocos2d::CCParticleSystem, getEndSizeVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndSizeVar)), Thiscall, cocos2d::CCParticleSystem, setEndSizeVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartColor)), Thiscall, cocos2d::CCParticleSystem, getStartColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor4F const&>::func(&cocos2d::CCParticleSystem::setStartColor)), Thiscall, cocos2d::CCParticleSystem, setStartColor, cocos2d::_ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartColorVar)), Thiscall, cocos2d::CCParticleSystem, getStartColorVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor4F const&>::func(&cocos2d::CCParticleSystem::setStartColorVar)), Thiscall, cocos2d::CCParticleSystem, setStartColorVar, cocos2d::_ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndColor)), Thiscall, cocos2d::CCParticleSystem, getEndColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor4F const&>::func(&cocos2d::CCParticleSystem::setEndColor)), Thiscall, cocos2d::CCParticleSystem, setEndColor, cocos2d::_ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndColorVar)), Thiscall, cocos2d::CCParticleSystem, getEndColorVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor4F const&>::func(&cocos2d::CCParticleSystem::setEndColorVar)), Thiscall, cocos2d::CCParticleSystem, setEndColorVar, cocos2d::_ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartSpin)), Thiscall, cocos2d::CCParticleSystem, getStartSpin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartSpin)), Thiscall, cocos2d::CCParticleSystem, setStartSpin, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartSpinVar)), Thiscall, cocos2d::CCParticleSystem, getStartSpinVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartSpinVar)), Thiscall, cocos2d::CCParticleSystem, setStartSpinVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndSpin)), Thiscall, cocos2d::CCParticleSystem, getEndSpin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndSpin)), Thiscall, cocos2d::CCParticleSystem, setEndSpin, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndSpinVar)), Thiscall, cocos2d::CCParticleSystem, getEndSpinVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndSpinVar)), Thiscall, cocos2d::CCParticleSystem, setEndSpinVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEmissionRate)), Thiscall, cocos2d::CCParticleSystem, getEmissionRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEmissionRate)), Thiscall, cocos2d::CCParticleSystem, setEmissionRate, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getTotalParticles)), Thiscall, cocos2d::CCParticleSystem, getTotalParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::CCParticleSystem::setTotalParticles)), Thiscall, cocos2d::CCParticleSystem, setTotalParticles, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getOpacityModifyRGB)), Thiscall, cocos2d::CCParticleSystem, getOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setOpacityModifyRGB)), Thiscall, cocos2d::CCParticleSystem, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getPositionType)), Thiscall, cocos2d::CCParticleSystem, getPositionType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::tCCPositionType>::func(&cocos2d::CCParticleSystem::setPositionType)), Thiscall, cocos2d::CCParticleSystem, setPositionType, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::isAutoRemoveOnFinish)), Thiscall, cocos2d::CCParticleSystem, isAutoRemoveOnFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setAutoRemoveOnFinish)), Thiscall, cocos2d::CCParticleSystem, setAutoRemoveOnFinish, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEmitterMode)), Thiscall, cocos2d::CCParticleSystem, getEmitterMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCParticleSystem::setEmitterMode)), Thiscall, cocos2d::CCParticleSystem, setEmitterMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCParticleSystem::initWithTotalParticles)), Thiscall, cocos2d::CCParticleSystem, initWithTotalParticles, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::sCCParticle*, cocos2d::CCPoint const&>::func(&cocos2d::CCParticleSystem::updateQuadWithParticle)), Thiscall, cocos2d::CCParticleSystem, updateQuadWithParticle, cocos2d::sCCParticle*, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::postStep)), Thiscall, cocos2d::CCParticleSystem, postStep, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::updateWithNoTime)), Thiscall, cocos2d::CCParticleSystem, updateWithNoTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::updateBlendFunc)), Thiscall, cocos2d::CCParticleSystem, updateBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccBlendFunc>::func(&cocos2d::CCParticleSystem::setBlendFunc)), Thiscall, cocos2d::CCParticleSystem, setBlendFunc, cocos2d::_ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getBlendFunc)), Thiscall, cocos2d::CCParticleSystem, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getTexture)), Thiscall, cocos2d::CCParticleSystem, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCParticleSystem::setTexture)), Thiscall, cocos2d::CCParticleSystem, setTexture, cocos2d::CCTexture2D*)
		}
	};
}
