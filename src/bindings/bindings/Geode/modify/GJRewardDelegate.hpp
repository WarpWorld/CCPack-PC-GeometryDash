#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRewardDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_rewardsStatusFinished
		#define GEODE_STATICS_rewardsStatusFinished
		GEODE_AS_STATIC_FUNCTION(rewardsStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_rewardsStatusFailed
		#define GEODE_STATICS_rewardsStatusFailed
		GEODE_AS_STATIC_FUNCTION(rewardsStatusFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRewardDelegate> : ModifyBase<ModifyDerive<Der, GJRewardDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRewardDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJRewardDelegate>>::ModifyBase;
		using Base = GJRewardDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
