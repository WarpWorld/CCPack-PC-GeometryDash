#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_rewardedVideoFinished
		#define GEODE_STATICS_rewardedVideoFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_STATICS_shouldOffsetRewardCurrency
		#define GEODE_STATICS_shouldOffsetRewardCurrency
		GEODE_AS_STATIC_FUNCTION(shouldOffsetRewardCurrency) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RewardedVideoDelegate> : ModifyBase<ModifyDerive<Der, RewardedVideoDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RewardedVideoDelegate>>;
		using ModifyBase<ModifyDerive<Der, RewardedVideoDelegate>>::ModifyBase;
		using Base = RewardedVideoDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
