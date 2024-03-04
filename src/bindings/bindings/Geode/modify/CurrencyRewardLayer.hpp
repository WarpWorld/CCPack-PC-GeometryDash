#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CurrencyRewardLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createObjects
		#define GEODE_STATICS_createObjects
		GEODE_AS_STATIC_FUNCTION(createObjects) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFull
		#define GEODE_STATICS_createObjectsFull
		GEODE_AS_STATIC_FUNCTION(createObjectsFull) 
	#endif

	#ifndef GEODE_STATICS_createUnlockObject
		#define GEODE_STATICS_createUnlockObject
		GEODE_AS_STATIC_FUNCTION(createUnlockObject) 
	#endif

	#ifndef GEODE_STATICS_incrementCount
		#define GEODE_STATICS_incrementCount
		GEODE_AS_STATIC_FUNCTION(incrementCount) 
	#endif

	#ifndef GEODE_STATICS_incrementDiamondsCount
		#define GEODE_STATICS_incrementDiamondsCount
		GEODE_AS_STATIC_FUNCTION(incrementDiamondsCount) 
	#endif

	#ifndef GEODE_STATICS_incrementMoonsCount
		#define GEODE_STATICS_incrementMoonsCount
		GEODE_AS_STATIC_FUNCTION(incrementMoonsCount) 
	#endif

	#ifndef GEODE_STATICS_incrementSpecialCount1
		#define GEODE_STATICS_incrementSpecialCount1
		GEODE_AS_STATIC_FUNCTION(incrementSpecialCount1) 
	#endif

	#ifndef GEODE_STATICS_incrementSpecialCount2
		#define GEODE_STATICS_incrementSpecialCount2
		GEODE_AS_STATIC_FUNCTION(incrementSpecialCount2) 
	#endif

	#ifndef GEODE_STATICS_incrementStarsCount
		#define GEODE_STATICS_incrementStarsCount
		GEODE_AS_STATIC_FUNCTION(incrementStarsCount) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_pulseSprite
		#define GEODE_STATICS_pulseSprite
		GEODE_AS_STATIC_FUNCTION(pulseSprite) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CurrencyRewardLayer> : ModifyBase<ModifyDerive<Der, CurrencyRewardLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CurrencyRewardLayer>>;
		using ModifyBase<ModifyDerive<Der, CurrencyRewardLayer>>::ModifyBase;
		using Base = CurrencyRewardLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71c40, Optcall, CurrencyRewardLayer, create, int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71d30, Membercall, CurrencyRewardLayer, init, int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x744c0, Thiscall, CurrencyRewardLayer, update, float)
		}
	};
}
