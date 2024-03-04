#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJScoreCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromScore
		#define GEODE_STATICS_loadFromScore
		GEODE_AS_STATIC_FUNCTION(loadFromScore) 
	#endif

	#ifndef GEODE_STATICS_onBan
		#define GEODE_STATICS_onBan
		GEODE_AS_STATIC_FUNCTION(onBan) 
	#endif

	#ifndef GEODE_STATICS_onCheck
		#define GEODE_STATICS_onCheck
		GEODE_AS_STATIC_FUNCTION(onCheck) 
	#endif

	#ifndef GEODE_STATICS_onMoreLevels
		#define GEODE_STATICS_onMoreLevels
		GEODE_AS_STATIC_FUNCTION(onMoreLevels) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJScoreCell> : ModifyBase<ModifyDerive<Der, GJScoreCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJScoreCell>>;
		using ModifyBase<ModifyDerive<Der, GJScoreCell>>::ModifyBase;
		using Base = GJScoreCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x865b0, Membercall, GJScoreCell, loadFromScore, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x876f0, Membercall, GJScoreCell, onViewProfile, cocos2d::CCObject*)
		}
	};
}
