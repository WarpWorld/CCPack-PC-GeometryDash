#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ChallengeNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif

	#ifndef GEODE_STATICS_updateTimeLabel
		#define GEODE_STATICS_updateTimeLabel
		GEODE_AS_STATIC_FUNCTION(updateTimeLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ChallengeNode> : ModifyBase<ModifyDerive<Der, ChallengeNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ChallengeNode>>;
		using ModifyBase<ModifyDerive<Der, ChallengeNode>>::ModifyBase;
		using Base = ChallengeNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5da50, Optcall, ChallengeNode, create, GJChallengeItem*, ChallengesPage*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5db30, Membercall, ChallengeNode, init, GJChallengeItem*, ChallengesPage*, bool)
		}
	};
}
