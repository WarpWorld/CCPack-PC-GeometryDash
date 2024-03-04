#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RewardsPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getRewardFrame
		#define GEODE_STATICS_getRewardFrame
		GEODE_AS_STATIC_FUNCTION(getRewardFrame) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onFreeStuff
		#define GEODE_STATICS_onFreeStuff
		GEODE_AS_STATIC_FUNCTION(onFreeStuff) 
	#endif

	#ifndef GEODE_STATICS_onReward
		#define GEODE_STATICS_onReward
		GEODE_AS_STATIC_FUNCTION(onReward) 
	#endif

	#ifndef GEODE_STATICS_tryGetRewards
		#define GEODE_STATICS_tryGetRewards
		GEODE_AS_STATIC_FUNCTION(tryGetRewards) 
	#endif

	#ifndef GEODE_STATICS_unlockLayerClosed
		#define GEODE_STATICS_unlockLayerClosed
		GEODE_AS_STATIC_FUNCTION(unlockLayerClosed) 
	#endif

	#ifndef GEODE_STATICS_updateTimers
		#define GEODE_STATICS_updateTimers
		GEODE_AS_STATIC_FUNCTION(updateTimers) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_rewardsStatusFinished
		#define GEODE_STATICS_rewardsStatusFinished
		GEODE_AS_STATIC_FUNCTION(rewardsStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_rewardsStatusFailed
		#define GEODE_STATICS_rewardsStatusFailed
		GEODE_AS_STATIC_FUNCTION(rewardsStatusFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RewardsPage> : ModifyBase<ModifyDerive<Der, RewardsPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RewardsPage>>;
		using ModifyBase<ModifyDerive<Der, RewardsPage>>::ModifyBase;
		using Base = RewardsPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a750, Membercall, RewardsPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f7a00, Membercall, RewardsPage, onFreeStuff, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f74a0, Membercall, RewardsPage, onReward, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f67f0, Thiscall, RewardsPage, init, )
		}
	};
}
