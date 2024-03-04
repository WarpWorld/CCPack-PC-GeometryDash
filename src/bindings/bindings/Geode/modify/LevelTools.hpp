#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelTools.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_artistForAudio
		#define GEODE_STATICS_artistForAudio
		GEODE_AS_STATIC_FUNCTION(artistForAudio) 
	#endif

	#ifndef GEODE_STATICS_base64DecodeString
		#define GEODE_STATICS_base64DecodeString
		GEODE_AS_STATIC_FUNCTION(base64DecodeString) 
	#endif

	#ifndef GEODE_STATICS_base64EncodeString
		#define GEODE_STATICS_base64EncodeString
		GEODE_AS_STATIC_FUNCTION(base64EncodeString) 
	#endif

	#ifndef GEODE_STATICS_createStarPackDict
		#define GEODE_STATICS_createStarPackDict
		GEODE_AS_STATIC_FUNCTION(createStarPackDict) 
	#endif

	#ifndef GEODE_STATICS_fbURLForArtist
		#define GEODE_STATICS_fbURLForArtist
		GEODE_AS_STATIC_FUNCTION(fbURLForArtist) 
	#endif

	#ifndef GEODE_STATICS_getAudioBPM
		#define GEODE_STATICS_getAudioBPM
		GEODE_AS_STATIC_FUNCTION(getAudioBPM) 
	#endif

	#ifndef GEODE_STATICS_getAudioFileName
		#define GEODE_STATICS_getAudioFileName
		GEODE_AS_STATIC_FUNCTION(getAudioFileName) 
	#endif

	#ifndef GEODE_STATICS_getAudioString
		#define GEODE_STATICS_getAudioString
		GEODE_AS_STATIC_FUNCTION(getAudioString) 
	#endif

	#ifndef GEODE_STATICS_getAudioTitle
		#define GEODE_STATICS_getAudioTitle
		GEODE_AS_STATIC_FUNCTION(getAudioTitle) 
	#endif

	#ifndef GEODE_STATICS_getLastGameplayReversed
		#define GEODE_STATICS_getLastGameplayReversed
		GEODE_AS_STATIC_FUNCTION(getLastGameplayReversed) 
	#endif

	#ifndef GEODE_STATICS_getLastGameplayRotated
		#define GEODE_STATICS_getLastGameplayRotated
		GEODE_AS_STATIC_FUNCTION(getLastGameplayRotated) 
	#endif

	#ifndef GEODE_STATICS_getLastTimewarp
		#define GEODE_STATICS_getLastTimewarp
		GEODE_AS_STATIC_FUNCTION(getLastTimewarp) 
	#endif

	#ifndef GEODE_STATICS_getLevel
		#define GEODE_STATICS_getLevel
		GEODE_AS_STATIC_FUNCTION(getLevel) 
	#endif

	#ifndef GEODE_STATICS_getLevelList
		#define GEODE_STATICS_getLevelList
		GEODE_AS_STATIC_FUNCTION(getLevelList) 
	#endif

	#ifndef GEODE_STATICS_getSongObject
		#define GEODE_STATICS_getSongObject
		GEODE_AS_STATIC_FUNCTION(getSongObject) 
	#endif

	#ifndef GEODE_STATICS_moveTriggerObjectsToArray
		#define GEODE_STATICS_moveTriggerObjectsToArray
		GEODE_AS_STATIC_FUNCTION(moveTriggerObjectsToArray) 
	#endif

	#ifndef GEODE_STATICS_nameForArtist
		#define GEODE_STATICS_nameForArtist
		GEODE_AS_STATIC_FUNCTION(nameForArtist) 
	#endif

	#ifndef GEODE_STATICS_ngURLForArtist
		#define GEODE_STATICS_ngURLForArtist
		GEODE_AS_STATIC_FUNCTION(ngURLForArtist) 
	#endif

	#ifndef GEODE_STATICS_offsetBPMForTrack
		#define GEODE_STATICS_offsetBPMForTrack
		GEODE_AS_STATIC_FUNCTION(offsetBPMForTrack) 
	#endif

	#ifndef GEODE_STATICS_posForTime
		#define GEODE_STATICS_posForTime
		GEODE_AS_STATIC_FUNCTION(posForTime) 
	#endif

	#ifndef GEODE_STATICS_posForTimeInternal
		#define GEODE_STATICS_posForTimeInternal
		GEODE_AS_STATIC_FUNCTION(posForTimeInternal) 
	#endif

	#ifndef GEODE_STATICS_sortChannelOrderObjects
		#define GEODE_STATICS_sortChannelOrderObjects
		GEODE_AS_STATIC_FUNCTION(sortChannelOrderObjects) 
	#endif

	#ifndef GEODE_STATICS_sortSpeedObjects
		#define GEODE_STATICS_sortSpeedObjects
		GEODE_AS_STATIC_FUNCTION(sortSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_timeForPos
		#define GEODE_STATICS_timeForPos
		GEODE_AS_STATIC_FUNCTION(timeForPos) 
	#endif

	#ifndef GEODE_STATICS_toggleDebugLogging
		#define GEODE_STATICS_toggleDebugLogging
		GEODE_AS_STATIC_FUNCTION(toggleDebugLogging) 
	#endif

	#ifndef GEODE_STATICS_urlForAudio
		#define GEODE_STATICS_urlForAudio
		GEODE_AS_STATIC_FUNCTION(urlForAudio) 
	#endif

	#ifndef GEODE_STATICS_valueForSpeedMod
		#define GEODE_STATICS_valueForSpeedMod
		GEODE_AS_STATIC_FUNCTION(valueForSpeedMod) 
	#endif

	#ifndef GEODE_STATICS_verifyLevelIntegrity
		#define GEODE_STATICS_verifyLevelIntegrity
		GEODE_AS_STATIC_FUNCTION(verifyLevelIntegrity) 
	#endif

	#ifndef GEODE_STATICS_ytURLForArtist
		#define GEODE_STATICS_ytURLForArtist
		GEODE_AS_STATIC_FUNCTION(ytURLForArtist) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelTools> : ModifyBase<ModifyDerive<Der, LevelTools>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelTools>>;
		using ModifyBase<ModifyDerive<Der, LevelTools>>::ModifyBase;
		using Base = LevelTools;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2737c0, Optcall, LevelTools, artistForAudio, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2753e0, Membercall, LevelTools, base64DecodeString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x275360, Membercall, LevelTools, base64EncodeString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x274010, Optcall, LevelTools, fbURLForArtist, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x273430, Optcall, LevelTools, getAudioFileName, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x274140, Optcall, LevelTools, getAudioString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x273090, Optcall, LevelTools, getAudioTitle, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2725d0, Optcall, LevelTools, getLevel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x275040, Membercall, LevelTools, getSongObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2738c0, Optcall, LevelTools, nameForArtist, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x273d90, Optcall, LevelTools, ngURLForArtist, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x274a60, Membercall, LevelTools, posForTimeInternal, float, cocos2d::CCArray*, int, bool, bool, bool, int&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x275600, Membercall, LevelTools, sortChannelOrderObjects, cocos2d::CCArray*, cocos2d::CCDictionary*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x275820, Membercall, LevelTools, sortSpeedObjects, cocos2d::CCArray*, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2743d0, Membercall, LevelTools, timeForPos, cocos2d::CCPoint, cocos2d::CCArray*, int, int, int, bool, bool, bool, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x273a00, Optcall, LevelTools, urlForAudio, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x274380, Membercall, LevelTools, valueForSpeedMod, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2751d0, Membercall, LevelTools, verifyLevelIntegrity, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x273ed0, Optcall, LevelTools, ytURLForArtist, int)
		}
	};
}
