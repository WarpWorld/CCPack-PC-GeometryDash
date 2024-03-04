#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelLeaderboard.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_deleteLocalScores
		#define GEODE_STATICS_deleteLocalScores
		GEODE_AS_STATIC_FUNCTION(deleteLocalScores) 
	#endif

	#ifndef GEODE_STATICS_getLocalScores
		#define GEODE_STATICS_getLocalScores
		GEODE_AS_STATIC_FUNCTION(getLocalScores) 
	#endif

	#ifndef GEODE_STATICS_getSpriteButton
		#define GEODE_STATICS_getSpriteButton
		GEODE_AS_STATIC_FUNCTION(getSpriteButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_loadScores
		#define GEODE_STATICS_loadScores
		GEODE_AS_STATIC_FUNCTION(loadScores) 
	#endif

	#ifndef GEODE_STATICS_onChangeMode
		#define GEODE_STATICS_onChangeMode
		GEODE_AS_STATIC_FUNCTION(onChangeMode) 
	#endif

	#ifndef GEODE_STATICS_onChangeType
		#define GEODE_STATICS_onChangeType
		GEODE_AS_STATIC_FUNCTION(onChangeType) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDeleteLocalScores
		#define GEODE_STATICS_onDeleteLocalScores
		GEODE_AS_STATIC_FUNCTION(onDeleteLocalScores) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_reloadLeaderboard
		#define GEODE_STATICS_reloadLeaderboard
		GEODE_AS_STATIC_FUNCTION(reloadLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_setupLeaderboard
		#define GEODE_STATICS_setupLeaderboard
		GEODE_AS_STATIC_FUNCTION(setupLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFinished
		#define GEODE_STATICS_loadLeaderboardFinished
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFailed
		#define GEODE_STATICS_loadLeaderboardFailed
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFailed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFailed
		#define GEODE_STATICS_updateUserScoreFailed
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelLeaderboard> : ModifyBase<ModifyDerive<Der, LevelLeaderboard>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelLeaderboard>>;
		using ModifyBase<ModifyDerive<Der, LevelLeaderboard>>::ModifyBase;
		using Base = LevelLeaderboard;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257fa0, Optcall, LevelLeaderboard, create, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x258060, Membercall, LevelLeaderboard, init, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2595f0, Membercall, LevelLeaderboard, onChangeMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2595a0, Membercall, LevelLeaderboard, onChangeType, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a750, Membercall, LevelLeaderboard, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x259630, Membercall, LevelLeaderboard, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2594f0, Membercall, LevelLeaderboard, reloadLeaderboard, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5d6d0, Thiscall, LevelLeaderboard, show, )
		}
	};
}
