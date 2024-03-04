#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AchievementCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromDict
		#define GEODE_STATICS_loadFromDict
		GEODE_AS_STATIC_FUNCTION(loadFromDict) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AchievementCell> : ModifyBase<ModifyDerive<Der, AchievementCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AchievementCell>>;
		using ModifyBase<ModifyDerive<Der, AchievementCell>>::ModifyBase;
		using Base = AchievementCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c730, Membercall, AchievementCell, loadFromDict, cocos2d::CCDictionary*)
		}
	};
}
