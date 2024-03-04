#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AchievementManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_achievementForUnlock
		#define GEODE_STATICS_achievementForUnlock
		GEODE_AS_STATIC_FUNCTION(achievementForUnlock) 
	#endif

	#ifndef GEODE_STATICS_addAchievement
		#define GEODE_STATICS_addAchievement
		GEODE_AS_STATIC_FUNCTION(addAchievement) 
	#endif

	#ifndef GEODE_STATICS_addManualAchievements
		#define GEODE_STATICS_addManualAchievements
		GEODE_AS_STATIC_FUNCTION(addManualAchievements) 
	#endif

	#ifndef GEODE_STATICS_areAchievementsEarned
		#define GEODE_STATICS_areAchievementsEarned
		GEODE_AS_STATIC_FUNCTION(areAchievementsEarned) 
	#endif

	#ifndef GEODE_STATICS_checkAchFromUnlock
		#define GEODE_STATICS_checkAchFromUnlock
		GEODE_AS_STATIC_FUNCTION(checkAchFromUnlock) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_getAchievementRewardDict
		#define GEODE_STATICS_getAchievementRewardDict
		GEODE_AS_STATIC_FUNCTION(getAchievementRewardDict) 
	#endif

	#ifndef GEODE_STATICS_getAchievementsWithID
		#define GEODE_STATICS_getAchievementsWithID
		GEODE_AS_STATIC_FUNCTION(getAchievementsWithID) 
	#endif

	#ifndef GEODE_STATICS_getAllAchievements
		#define GEODE_STATICS_getAllAchievements
		GEODE_AS_STATIC_FUNCTION(getAllAchievements) 
	#endif

	#ifndef GEODE_STATICS_getAllAchievementsSorted
		#define GEODE_STATICS_getAllAchievementsSorted
		GEODE_AS_STATIC_FUNCTION(getAllAchievementsSorted) 
	#endif

	#ifndef GEODE_STATICS_isAchievementAvailable
		#define GEODE_STATICS_isAchievementAvailable
		GEODE_AS_STATIC_FUNCTION(isAchievementAvailable) 
	#endif

	#ifndef GEODE_STATICS_isAchievementEarned
		#define GEODE_STATICS_isAchievementEarned
		GEODE_AS_STATIC_FUNCTION(isAchievementEarned) 
	#endif

	#ifndef GEODE_STATICS_limitForAchievement
		#define GEODE_STATICS_limitForAchievement
		GEODE_AS_STATIC_FUNCTION(limitForAchievement) 
	#endif

	#ifndef GEODE_STATICS_notifyAchievement
		#define GEODE_STATICS_notifyAchievement
		GEODE_AS_STATIC_FUNCTION(notifyAchievement) 
	#endif

	#ifndef GEODE_STATICS_notifyAchievementWithID
		#define GEODE_STATICS_notifyAchievementWithID
		GEODE_AS_STATIC_FUNCTION(notifyAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_percentageForCount
		#define GEODE_STATICS_percentageForCount
		GEODE_AS_STATIC_FUNCTION(percentageForCount) 
	#endif

	#ifndef GEODE_STATICS_percentForAchievement
		#define GEODE_STATICS_percentForAchievement
		GEODE_AS_STATIC_FUNCTION(percentForAchievement) 
	#endif

	#ifndef GEODE_STATICS_reportAchievementWithID
		#define GEODE_STATICS_reportAchievementWithID
		GEODE_AS_STATIC_FUNCTION(reportAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_reportPlatformAchievementWithID
		#define GEODE_STATICS_reportPlatformAchievementWithID
		GEODE_AS_STATIC_FUNCTION(reportPlatformAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_resetAchievement
		#define GEODE_STATICS_resetAchievement
		GEODE_AS_STATIC_FUNCTION(resetAchievement) 
	#endif

	#ifndef GEODE_STATICS_resetAchievements
		#define GEODE_STATICS_resetAchievements
		GEODE_AS_STATIC_FUNCTION(resetAchievements) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
	#endif

	#ifndef GEODE_STATICS_storeAchievementUnlocks
		#define GEODE_STATICS_storeAchievementUnlocks
		GEODE_AS_STATIC_FUNCTION(storeAchievementUnlocks) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AchievementManager> : ModifyBase<ModifyDerive<Der, AchievementManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AchievementManager>>;
		using ModifyBase<ModifyDerive<Der, AchievementManager>>::ModifyBase;
		using Base = AchievementManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ac0, Optcall, AchievementManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9bc0, Membercall, AchievementManager, addAchievement, gd::string, gd::string, gd::string, gd::string, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf74a, Membercall, AchievementManager, addManualAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b550, Membercall, AchievementManager, notifyAchievementWithID, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ab50, Membercall, AchievementManager, percentForAchievement, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b7e0, Membercall, AchievementManager, reportAchievementWithID, char const*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8f0, Membercall, AchievementManager, reportPlatformAchievementWithID, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b730, Membercall, AchievementManager, resetAchievement, char const*)
		}
	};
}
