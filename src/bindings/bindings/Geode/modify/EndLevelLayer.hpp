#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EndLevelLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_coinEnterFinished
		#define GEODE_STATICS_coinEnterFinished
		GEODE_AS_STATIC_FUNCTION(coinEnterFinished) 
	#endif

	#ifndef GEODE_STATICS_coinEnterFinishedO
		#define GEODE_STATICS_coinEnterFinishedO
		GEODE_AS_STATIC_FUNCTION(coinEnterFinishedO) 
	#endif

	#ifndef GEODE_STATICS_currencyEnterFinished
		#define GEODE_STATICS_currencyEnterFinished
		GEODE_AS_STATIC_FUNCTION(currencyEnterFinished) 
	#endif

	#ifndef GEODE_STATICS_diamondEnterFinished
		#define GEODE_STATICS_diamondEnterFinished
		GEODE_AS_STATIC_FUNCTION(diamondEnterFinished) 
	#endif

	#ifndef GEODE_STATICS_getCoinString
		#define GEODE_STATICS_getCoinString
		GEODE_AS_STATIC_FUNCTION(getCoinString) 
	#endif

	#ifndef GEODE_STATICS_getEndText
		#define GEODE_STATICS_getEndText
		GEODE_AS_STATIC_FUNCTION(getEndText) 
	#endif

	#ifndef GEODE_STATICS_goEdit
		#define GEODE_STATICS_goEdit
		GEODE_AS_STATIC_FUNCTION(goEdit) 
	#endif

	#ifndef GEODE_STATICS_onEdit
		#define GEODE_STATICS_onEdit
		GEODE_AS_STATIC_FUNCTION(onEdit) 
	#endif

	#ifndef GEODE_STATICS_onEveryplay
		#define GEODE_STATICS_onEveryplay
		GEODE_AS_STATIC_FUNCTION(onEveryplay) 
	#endif

	#ifndef GEODE_STATICS_onLevelLeaderboard
		#define GEODE_STATICS_onLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(onLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_onMenu
		#define GEODE_STATICS_onMenu
		GEODE_AS_STATIC_FUNCTION(onMenu) 
	#endif

	#ifndef GEODE_STATICS_onReplay
		#define GEODE_STATICS_onReplay
		GEODE_AS_STATIC_FUNCTION(onReplay) 
	#endif

	#ifndef GEODE_STATICS_playCoinEffect
		#define GEODE_STATICS_playCoinEffect
		GEODE_AS_STATIC_FUNCTION(playCoinEffect) 
	#endif

	#ifndef GEODE_STATICS_playCurrencyEffect
		#define GEODE_STATICS_playCurrencyEffect
		GEODE_AS_STATIC_FUNCTION(playCurrencyEffect) 
	#endif

	#ifndef GEODE_STATICS_playDiamondEffect
		#define GEODE_STATICS_playDiamondEffect
		GEODE_AS_STATIC_FUNCTION(playDiamondEffect) 
	#endif

	#ifndef GEODE_STATICS_playEndEffect
		#define GEODE_STATICS_playEndEffect
		GEODE_AS_STATIC_FUNCTION(playEndEffect) 
	#endif

	#ifndef GEODE_STATICS_playStarEffect
		#define GEODE_STATICS_playStarEffect
		GEODE_AS_STATIC_FUNCTION(playStarEffect) 
	#endif

	#ifndef GEODE_STATICS_starEnterFinished
		#define GEODE_STATICS_starEnterFinished
		GEODE_AS_STATIC_FUNCTION(starEnterFinished) 
	#endif

	#ifndef GEODE_STATICS_tryShowBanner
		#define GEODE_STATICS_tryShowBanner
		GEODE_AS_STATIC_FUNCTION(tryShowBanner) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_showLayer
		#define GEODE_STATICS_showLayer
		GEODE_AS_STATIC_FUNCTION(showLayer) 
	#endif

	#ifndef GEODE_STATICS_enterAnimFinished
		#define GEODE_STATICS_enterAnimFinished
		GEODE_AS_STATIC_FUNCTION(enterAnimFinished) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EndLevelLayer> : ModifyBase<ModifyDerive<Der, EndLevelLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EndLevelLayer>>;
		using ModifyBase<ModifyDerive<Der, EndLevelLayer>>::ModifyBase;
		using Base = EndLevelLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe7380, Optcall, EndLevelLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9720, Membercall, EndLevelLayer, coinEnterFinished, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe96f0, Membercall, EndLevelLayer, coinEnterFinishedO, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9cd0, Membercall, EndLevelLayer, currencyEnterFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xea0c0, Membercall, EndLevelLayer, diamondEnterFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8a60, Membercall, EndLevelLayer, getCoinString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xea370, Membercall, EndLevelLayer, getEndText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9060, Membercall, EndLevelLayer, goEdit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8fb0, Membercall, EndLevelLayer, onEdit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe89f0, Membercall, EndLevelLayer, onLevelLeaderboard, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8ec0, Membercall, EndLevelLayer, onMenu, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8dc0, Membercall, EndLevelLayer, onReplay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9570, Membercall, EndLevelLayer, playCoinEffect, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe99c0, Membercall, EndLevelLayer, playCurrencyEffect, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9db0, Membercall, EndLevelLayer, playDiamondEffect, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xea1a0, Membercall, EndLevelLayer, playEndEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9120, Membercall, EndLevelLayer, playStarEffect, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9440, Membercall, EndLevelLayer, starEnterFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe74f0, Thiscall, EndLevelLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8c20, Thiscall, EndLevelLayer, showLayer, bool)
		}
	};
}
