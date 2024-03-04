#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRewardItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createSpecial
		#define GEODE_STATICS_createSpecial
		GEODE_AS_STATIC_FUNCTION(createSpecial) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_createWithObject
		#define GEODE_STATICS_createWithObject
		GEODE_AS_STATIC_FUNCTION(createWithObject) 
	#endif

	#ifndef GEODE_STATICS_createWithObjects
		#define GEODE_STATICS_createWithObjects
		GEODE_AS_STATIC_FUNCTION(createWithObjects) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_getNextShardType
		#define GEODE_STATICS_getNextShardType
		GEODE_AS_STATIC_FUNCTION(getNextShardType) 
	#endif

	#ifndef GEODE_STATICS_getRandomNonMaxShardType
		#define GEODE_STATICS_getRandomNonMaxShardType
		GEODE_AS_STATIC_FUNCTION(getRandomNonMaxShardType) 
	#endif

	#ifndef GEODE_STATICS_getRandomShardType
		#define GEODE_STATICS_getRandomShardType
		GEODE_AS_STATIC_FUNCTION(getRandomShardType) 
	#endif

	#ifndef GEODE_STATICS_getRewardCount
		#define GEODE_STATICS_getRewardCount
		GEODE_AS_STATIC_FUNCTION(getRewardCount) 
	#endif

	#ifndef GEODE_STATICS_getRewardObjectForType
		#define GEODE_STATICS_getRewardObjectForType
		GEODE_AS_STATIC_FUNCTION(getRewardObjectForType) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isShardType
		#define GEODE_STATICS_isShardType
		GEODE_AS_STATIC_FUNCTION(isShardType) 
	#endif

	#ifndef GEODE_STATICS_rewardItemToStat
		#define GEODE_STATICS_rewardItemToStat
		GEODE_AS_STATIC_FUNCTION(rewardItemToStat) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRewardItem> : ModifyBase<ModifyDerive<Der, GJRewardItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRewardItem>>;
		using ModifyBase<ModifyDerive<Der, GJRewardItem>>::ModifyBase;
		using Base = GJRewardItem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x181cd0, Membercall, GJRewardItem, createSpecial, GJRewardType, int, int, SpecialRewardItem, int, SpecialRewardItem, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1826b0, Membercall, GJRewardItem, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x181e10, Membercall, GJRewardItem, createWithObjects, GJRewardType, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1825b0, Membercall, GJRewardItem, getRewardObjectForType, SpecialRewardItem)
		}
	};
}
