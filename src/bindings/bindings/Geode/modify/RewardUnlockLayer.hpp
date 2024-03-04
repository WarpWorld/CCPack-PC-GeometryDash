#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RewardUnlockLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_connectionTimeout
		#define GEODE_STATICS_connectionTimeout
		GEODE_AS_STATIC_FUNCTION(connectionTimeout) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_labelEnterFinishedO
		#define GEODE_STATICS_labelEnterFinishedO
		GEODE_AS_STATIC_FUNCTION(labelEnterFinishedO) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_playDropSound
		#define GEODE_STATICS_playDropSound
		GEODE_AS_STATIC_FUNCTION(playDropSound) 
	#endif

	#ifndef GEODE_STATICS_playLabelEffect
		#define GEODE_STATICS_playLabelEffect
		GEODE_AS_STATIC_FUNCTION(playLabelEffect) 
	#endif

	#ifndef GEODE_STATICS_playRewardEffect
		#define GEODE_STATICS_playRewardEffect
		GEODE_AS_STATIC_FUNCTION(playRewardEffect) 
	#endif

	#ifndef GEODE_STATICS_readyToCollect
		#define GEODE_STATICS_readyToCollect
		GEODE_AS_STATIC_FUNCTION(readyToCollect) 
	#endif

	#ifndef GEODE_STATICS_showCloseButton
		#define GEODE_STATICS_showCloseButton
		GEODE_AS_STATIC_FUNCTION(showCloseButton) 
	#endif

	#ifndef GEODE_STATICS_showCollectReward
		#define GEODE_STATICS_showCollectReward
		GEODE_AS_STATIC_FUNCTION(showCollectReward) 
	#endif

	#ifndef GEODE_STATICS_step2
		#define GEODE_STATICS_step2
		GEODE_AS_STATIC_FUNCTION(step2) 
	#endif

	#ifndef GEODE_STATICS_step3
		#define GEODE_STATICS_step3
		GEODE_AS_STATIC_FUNCTION(step3) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_currencyWillExit
		#define GEODE_STATICS_currencyWillExit
		GEODE_AS_STATIC_FUNCTION(currencyWillExit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RewardUnlockLayer> : ModifyBase<ModifyDerive<Der, RewardUnlockLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RewardUnlockLayer>>;
		using ModifyBase<ModifyDerive<Der, RewardUnlockLayer>>::ModifyBase;
		using Base = RewardUnlockLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f8860, Membercall, RewardUnlockLayer, showCollectReward, GJRewardItem*)
		}
	};
}
