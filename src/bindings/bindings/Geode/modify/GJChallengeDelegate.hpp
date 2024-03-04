#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJChallengeDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_challengeStatusFinished
		#define GEODE_STATICS_challengeStatusFinished
		GEODE_AS_STATIC_FUNCTION(challengeStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_challengeStatusFailed
		#define GEODE_STATICS_challengeStatusFailed
		GEODE_AS_STATIC_FUNCTION(challengeStatusFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJChallengeDelegate> : ModifyBase<ModifyDerive<Der, GJChallengeDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJChallengeDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJChallengeDelegate>>::ModifyBase;
		using Base = GJChallengeDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
