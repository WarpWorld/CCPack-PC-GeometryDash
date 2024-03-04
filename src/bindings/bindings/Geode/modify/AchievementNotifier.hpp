#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AchievementNotifier.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_achievementDisplayFinished
		#define GEODE_STATICS_achievementDisplayFinished
		GEODE_AS_STATIC_FUNCTION(achievementDisplayFinished) 
	#endif

	#ifndef GEODE_STATICS_notifyAchievement
		#define GEODE_STATICS_notifyAchievement
		GEODE_AS_STATIC_FUNCTION(notifyAchievement) 
	#endif

	#ifndef GEODE_STATICS_showNextAchievement
		#define GEODE_STATICS_showNextAchievement
		GEODE_AS_STATIC_FUNCTION(showNextAchievement) 
	#endif

	#ifndef GEODE_STATICS_willSwitchToScene
		#define GEODE_STATICS_willSwitchToScene
		GEODE_AS_STATIC_FUNCTION(willSwitchToScene) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AchievementNotifier> : ModifyBase<ModifyDerive<Der, AchievementNotifier>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AchievementNotifier>>;
		using ModifyBase<ModifyDerive<Der, AchievementNotifier>>::ModifyBase;
		using Base = AchievementNotifier;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c0a0, Membercall, AchievementNotifier, showNextAchievement, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c200, Membercall, AchievementNotifier, willSwitchToScene, cocos2d::CCScene*)
		}
	};
}
