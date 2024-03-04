#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGameLevel.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_areCoinsVerified
		#define GEODE_STATICS_areCoinsVerified
		GEODE_AS_STATIC_FUNCTION(areCoinsVerified) 
	#endif

	#ifndef GEODE_STATICS_copyLevelInfo
		#define GEODE_STATICS_copyLevelInfo
		GEODE_AS_STATIC_FUNCTION(copyLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_demonIconForDifficulty
		#define GEODE_STATICS_demonIconForDifficulty
		GEODE_AS_STATIC_FUNCTION(demonIconForDifficulty) 
	#endif

	#ifndef GEODE_STATICS_generateSettingsString
		#define GEODE_STATICS_generateSettingsString
		GEODE_AS_STATIC_FUNCTION(generateSettingsString) 
	#endif

	#ifndef GEODE_STATICS_getAudioFileName
		#define GEODE_STATICS_getAudioFileName
		GEODE_AS_STATIC_FUNCTION(getAudioFileName) 
	#endif

	#ifndef GEODE_STATICS_getAverageDifficulty
		#define GEODE_STATICS_getAverageDifficulty
		GEODE_AS_STATIC_FUNCTION(getAverageDifficulty) 
	#endif

	#ifndef GEODE_STATICS_getCoinKey
		#define GEODE_STATICS_getCoinKey
		GEODE_AS_STATIC_FUNCTION(getCoinKey) 
	#endif

	#ifndef GEODE_STATICS_getLastBuildPageForTab
		#define GEODE_STATICS_getLastBuildPageForTab
		GEODE_AS_STATIC_FUNCTION(getLastBuildPageForTab) 
	#endif

	#ifndef GEODE_STATICS_getLengthKey
		#define GEODE_STATICS_getLengthKey
		GEODE_AS_STATIC_FUNCTION(getLengthKey) 
	#endif

	#ifndef GEODE_STATICS_getListSnapshot
		#define GEODE_STATICS_getListSnapshot
		GEODE_AS_STATIC_FUNCTION(getListSnapshot) 
	#endif

	#ifndef GEODE_STATICS_getNormalPercent
		#define GEODE_STATICS_getNormalPercent
		GEODE_AS_STATIC_FUNCTION(getNormalPercent) 
	#endif

	#ifndef GEODE_STATICS_getSongName
		#define GEODE_STATICS_getSongName
		GEODE_AS_STATIC_FUNCTION(getSongName) 
	#endif

	#ifndef GEODE_STATICS_getUnpackedLevelDescription
		#define GEODE_STATICS_getUnpackedLevelDescription
		GEODE_AS_STATIC_FUNCTION(getUnpackedLevelDescription) 
	#endif

	#ifndef GEODE_STATICS_handleStatsConflict
		#define GEODE_STATICS_handleStatsConflict
		GEODE_AS_STATIC_FUNCTION(handleStatsConflict) 
	#endif

	#ifndef GEODE_STATICS_lengthKeyToString
		#define GEODE_STATICS_lengthKeyToString
		GEODE_AS_STATIC_FUNCTION(lengthKeyToString) 
	#endif

	#ifndef GEODE_STATICS_levelWasAltered
		#define GEODE_STATICS_levelWasAltered
		GEODE_AS_STATIC_FUNCTION(levelWasAltered) 
	#endif

	#ifndef GEODE_STATICS_levelWasSubmitted
		#define GEODE_STATICS_levelWasSubmitted
		GEODE_AS_STATIC_FUNCTION(levelWasSubmitted) 
	#endif

	#ifndef GEODE_STATICS_parseSettingsString
		#define GEODE_STATICS_parseSettingsString
		GEODE_AS_STATIC_FUNCTION(parseSettingsString) 
	#endif

	#ifndef GEODE_STATICS_saveNewScore
		#define GEODE_STATICS_saveNewScore
		GEODE_AS_STATIC_FUNCTION(saveNewScore) 
	#endif

	#ifndef GEODE_STATICS_savePercentage
		#define GEODE_STATICS_savePercentage
		GEODE_AS_STATIC_FUNCTION(savePercentage) 
	#endif

	#ifndef GEODE_STATICS_scoreStringToVector
		#define GEODE_STATICS_scoreStringToVector
		GEODE_AS_STATIC_FUNCTION(scoreStringToVector) 
	#endif

	#ifndef GEODE_STATICS_scoreVectorToString
		#define GEODE_STATICS_scoreVectorToString
		GEODE_AS_STATIC_FUNCTION(scoreVectorToString) 
	#endif

	#ifndef GEODE_STATICS_setAccountID
		#define GEODE_STATICS_setAccountID
		GEODE_AS_STATIC_FUNCTION(setAccountID) 
	#endif

	#ifndef GEODE_STATICS_setAttempts
		#define GEODE_STATICS_setAttempts
		GEODE_AS_STATIC_FUNCTION(setAttempts) 
	#endif

	#ifndef GEODE_STATICS_setAttemptTime
		#define GEODE_STATICS_setAttemptTime
		GEODE_AS_STATIC_FUNCTION(setAttemptTime) 
	#endif

	#ifndef GEODE_STATICS_setClicks
		#define GEODE_STATICS_setClicks
		GEODE_AS_STATIC_FUNCTION(setClicks) 
	#endif

	#ifndef GEODE_STATICS_setCoinsVerified
		#define GEODE_STATICS_setCoinsVerified
		GEODE_AS_STATIC_FUNCTION(setCoinsVerified) 
	#endif

	#ifndef GEODE_STATICS_setDailyID
		#define GEODE_STATICS_setDailyID
		GEODE_AS_STATIC_FUNCTION(setDailyID) 
	#endif

	#ifndef GEODE_STATICS_setDemon
		#define GEODE_STATICS_setDemon
		GEODE_AS_STATIC_FUNCTION(setDemon) 
	#endif

	#ifndef GEODE_STATICS_setJumps
		#define GEODE_STATICS_setJumps
		GEODE_AS_STATIC_FUNCTION(setJumps) 
	#endif

	#ifndef GEODE_STATICS_setLastBuildPageForTab
		#define GEODE_STATICS_setLastBuildPageForTab
		GEODE_AS_STATIC_FUNCTION(setLastBuildPageForTab) 
	#endif

	#ifndef GEODE_STATICS_setLevelID
		#define GEODE_STATICS_setLevelID
		GEODE_AS_STATIC_FUNCTION(setLevelID) 
	#endif

	#ifndef GEODE_STATICS_setNewNormalPercent
		#define GEODE_STATICS_setNewNormalPercent
		GEODE_AS_STATIC_FUNCTION(setNewNormalPercent) 
	#endif

	#ifndef GEODE_STATICS_setNewNormalPercent2
		#define GEODE_STATICS_setNewNormalPercent2
		GEODE_AS_STATIC_FUNCTION(setNewNormalPercent2) 
	#endif

	#ifndef GEODE_STATICS_setNormalPercent
		#define GEODE_STATICS_setNormalPercent
		GEODE_AS_STATIC_FUNCTION(setNormalPercent) 
	#endif

	#ifndef GEODE_STATICS_setObjectCount
		#define GEODE_STATICS_setObjectCount
		GEODE_AS_STATIC_FUNCTION(setObjectCount) 
	#endif

	#ifndef GEODE_STATICS_setOriginalLevel
		#define GEODE_STATICS_setOriginalLevel
		GEODE_AS_STATIC_FUNCTION(setOriginalLevel) 
	#endif

	#ifndef GEODE_STATICS_setPassword
		#define GEODE_STATICS_setPassword
		GEODE_AS_STATIC_FUNCTION(setPassword) 
	#endif

	#ifndef GEODE_STATICS_setStars
		#define GEODE_STATICS_setStars
		GEODE_AS_STATIC_FUNCTION(setStars) 
	#endif

	#ifndef GEODE_STATICS_storeNewLocalScore
		#define GEODE_STATICS_storeNewLocalScore
		GEODE_AS_STATIC_FUNCTION(storeNewLocalScore) 
	#endif

	#ifndef GEODE_STATICS_unverifyCoins
		#define GEODE_STATICS_unverifyCoins
		GEODE_AS_STATIC_FUNCTION(unverifyCoins) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGameLevel> : ModifyBase<ModifyDerive<Der, GJGameLevel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGameLevel>>;
		using ModifyBase<ModifyDerive<Der, GJGameLevel>>::ModifyBase;
		using Base = GJGameLevel;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x113a60, Optcall, GJGameLevel, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x112680, Optcall, GJGameLevel, create, cocos2d::CCDictionary*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x116e00, Membercall, GJGameLevel, areCoinsVerified, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x115060, Membercall, GJGameLevel, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x114440, Membercall, GJGameLevel, getAudioFileName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x114180, Membercall, GJGameLevel, getAverageDifficulty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x114220, Membercall, GJGameLevel, getCoinKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1140c0, Membercall, GJGameLevel, getLengthKey, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x116f10, Membercall, GJGameLevel, getUnpackedLevelDescription, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x113d70, Membercall, GJGameLevel, savePercentage, int, bool, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1160d0, Thiscall, GJGameLevel, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x113b00, Thiscall, GJGameLevel, init, )
		}
	};
}
