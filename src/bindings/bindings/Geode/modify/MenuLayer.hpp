#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MenuLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_endGame
		#define GEODE_STATICS_endGame
		GEODE_AS_STATIC_FUNCTION(endGame) 
	#endif

	#ifndef GEODE_STATICS_firstNetworkTest
		#define GEODE_STATICS_firstNetworkTest
		GEODE_AS_STATIC_FUNCTION(firstNetworkTest) 
	#endif

	#ifndef GEODE_STATICS_onAchievements
		#define GEODE_STATICS_onAchievements
		GEODE_AS_STATIC_FUNCTION(onAchievements) 
	#endif

	#ifndef GEODE_STATICS_onCreator
		#define GEODE_STATICS_onCreator
		GEODE_AS_STATIC_FUNCTION(onCreator) 
	#endif

	#ifndef GEODE_STATICS_onDaily
		#define GEODE_STATICS_onDaily
		GEODE_AS_STATIC_FUNCTION(onDaily) 
	#endif

	#ifndef GEODE_STATICS_onDiscord
		#define GEODE_STATICS_onDiscord
		GEODE_AS_STATIC_FUNCTION(onDiscord) 
	#endif

	#ifndef GEODE_STATICS_onEveryplay
		#define GEODE_STATICS_onEveryplay
		GEODE_AS_STATIC_FUNCTION(onEveryplay) 
	#endif

	#ifndef GEODE_STATICS_onFacebook
		#define GEODE_STATICS_onFacebook
		GEODE_AS_STATIC_FUNCTION(onFacebook) 
	#endif

	#ifndef GEODE_STATICS_onFreeLevels
		#define GEODE_STATICS_onFreeLevels
		GEODE_AS_STATIC_FUNCTION(onFreeLevels) 
	#endif

	#ifndef GEODE_STATICS_onFullVersion
		#define GEODE_STATICS_onFullVersion
		GEODE_AS_STATIC_FUNCTION(onFullVersion) 
	#endif

	#ifndef GEODE_STATICS_onGameCenter
		#define GEODE_STATICS_onGameCenter
		GEODE_AS_STATIC_FUNCTION(onGameCenter) 
	#endif

	#ifndef GEODE_STATICS_onGarage
		#define GEODE_STATICS_onGarage
		GEODE_AS_STATIC_FUNCTION(onGarage) 
	#endif

	#ifndef GEODE_STATICS_onGooglePlayGames
		#define GEODE_STATICS_onGooglePlayGames
		GEODE_AS_STATIC_FUNCTION(onGooglePlayGames) 
	#endif

	#ifndef GEODE_STATICS_onMoreGames
		#define GEODE_STATICS_onMoreGames
		GEODE_AS_STATIC_FUNCTION(onMoreGames) 
	#endif

	#ifndef GEODE_STATICS_onMyProfile
		#define GEODE_STATICS_onMyProfile
		GEODE_AS_STATIC_FUNCTION(onMyProfile) 
	#endif

	#ifndef GEODE_STATICS_onNewgrounds
		#define GEODE_STATICS_onNewgrounds
		GEODE_AS_STATIC_FUNCTION(onNewgrounds) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onOptionsInstant
		#define GEODE_STATICS_onOptionsInstant
		GEODE_AS_STATIC_FUNCTION(onOptionsInstant) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onQuit
		#define GEODE_STATICS_onQuit
		GEODE_AS_STATIC_FUNCTION(onQuit) 
	#endif

	#ifndef GEODE_STATICS_onRobTop
		#define GEODE_STATICS_onRobTop
		GEODE_AS_STATIC_FUNCTION(onRobTop) 
	#endif

	#ifndef GEODE_STATICS_onStats
		#define GEODE_STATICS_onStats
		GEODE_AS_STATIC_FUNCTION(onStats) 
	#endif

	#ifndef GEODE_STATICS_onTrailer
		#define GEODE_STATICS_onTrailer
		GEODE_AS_STATIC_FUNCTION(onTrailer) 
	#endif

	#ifndef GEODE_STATICS_onTwitch
		#define GEODE_STATICS_onTwitch
		GEODE_AS_STATIC_FUNCTION(onTwitch) 
	#endif

	#ifndef GEODE_STATICS_onTwitter
		#define GEODE_STATICS_onTwitter
		GEODE_AS_STATIC_FUNCTION(onTwitter) 
	#endif

	#ifndef GEODE_STATICS_onYouTube
		#define GEODE_STATICS_onYouTube
		GEODE_AS_STATIC_FUNCTION(onYouTube) 
	#endif

	#ifndef GEODE_STATICS_openOptions
		#define GEODE_STATICS_openOptions
		GEODE_AS_STATIC_FUNCTION(openOptions) 
	#endif

	#ifndef GEODE_STATICS_showGCQuestion
		#define GEODE_STATICS_showGCQuestion
		GEODE_AS_STATIC_FUNCTION(showGCQuestion) 
	#endif

	#ifndef GEODE_STATICS_showMeltdownPromo
		#define GEODE_STATICS_showMeltdownPromo
		GEODE_AS_STATIC_FUNCTION(showMeltdownPromo) 
	#endif

	#ifndef GEODE_STATICS_showTOS
		#define GEODE_STATICS_showTOS
		GEODE_AS_STATIC_FUNCTION(showTOS) 
	#endif

	#ifndef GEODE_STATICS_syncPlatformAchievements
		#define GEODE_STATICS_syncPlatformAchievements
		GEODE_AS_STATIC_FUNCTION(syncPlatformAchievements) 
	#endif

	#ifndef GEODE_STATICS_tryShowAd
		#define GEODE_STATICS_tryShowAd
		GEODE_AS_STATIC_FUNCTION(tryShowAd) 
	#endif

	#ifndef GEODE_STATICS_updateUserProfileButton
		#define GEODE_STATICS_updateUserProfileButton
		GEODE_AS_STATIC_FUNCTION(updateUserProfileButton) 
	#endif

	#ifndef GEODE_STATICS_videoOptionsClosed
		#define GEODE_STATICS_videoOptionsClosed
		GEODE_AS_STATIC_FUNCTION(videoOptionsClosed) 
	#endif

	#ifndef GEODE_STATICS_videoOptionsOpened
		#define GEODE_STATICS_videoOptionsOpened
		GEODE_AS_STATIC_FUNCTION(videoOptionsOpened) 
	#endif

	#ifndef GEODE_STATICS_willClose
		#define GEODE_STATICS_willClose
		GEODE_AS_STATIC_FUNCTION(willClose) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_googlePlaySignedIn
		#define GEODE_STATICS_googlePlaySignedIn
		GEODE_AS_STATIC_FUNCTION(googlePlaySignedIn) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MenuLayer> : ModifyBase<ModifyDerive<Der, MenuLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MenuLayer>>;
		using ModifyBase<ModifyDerive<Der, MenuLayer>>::ModifyBase;
		using Base = MenuLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b3d0, Optcall, MenuLayer, scene, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c830, Membercall, MenuLayer, onAchievements, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c9d0, Membercall, MenuLayer, onCreator, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ca40, Membercall, MenuLayer, onGarage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c7a0, Membercall, MenuLayer, onMoreGames, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27cae0, Membercall, MenuLayer, onNewgrounds, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c930, Membercall, MenuLayer, onOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c890, Membercall, MenuLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27cb70, Membercall, MenuLayer, onQuit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c9a0, Membercall, MenuLayer, onStats, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c660, Membercall, MenuLayer, showTOS, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c520, Membercall, MenuLayer, updateUserProfileButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b450, Thiscall, MenuLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27cb60, Thiscall, MenuLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27cd70, Thiscall, MenuLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c860, Thiscall, MenuLayer, googlePlaySignedIn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27cbf0, Thiscall, MenuLayer, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
