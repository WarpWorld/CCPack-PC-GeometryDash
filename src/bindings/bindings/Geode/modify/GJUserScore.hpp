#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJUserScore.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_isCurrentUser
		#define GEODE_STATICS_isCurrentUser
		GEODE_AS_STATIC_FUNCTION(isCurrentUser) 
	#endif

	#ifndef GEODE_STATICS_mergeWithScore
		#define GEODE_STATICS_mergeWithScore
		GEODE_AS_STATIC_FUNCTION(mergeWithScore) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJUserScore> : ModifyBase<ModifyDerive<Der, GJUserScore>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJUserScore>>;
		using ModifyBase<ModifyDerive<Der, GJUserScore>>::ModifyBase;
		using Base = GJUserScore;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x118ea0, Optcall, GJUserScore, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x117ea0, Optcall, GJUserScore, create, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x118fa0, Membercall, GJUserScore, isCurrentUser, )
		}
	};
}
