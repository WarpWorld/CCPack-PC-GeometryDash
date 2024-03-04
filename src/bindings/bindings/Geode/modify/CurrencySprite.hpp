#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CurrencySprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithSprite
		#define GEODE_STATICS_createWithSprite
		GEODE_AS_STATIC_FUNCTION(createWithSprite) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_initWithSprite
		#define GEODE_STATICS_initWithSprite
		GEODE_AS_STATIC_FUNCTION(initWithSprite) 
	#endif

	#ifndef GEODE_STATICS_rewardToSpriteType
		#define GEODE_STATICS_rewardToSpriteType
		GEODE_AS_STATIC_FUNCTION(rewardToSpriteType) 
	#endif

	#ifndef GEODE_STATICS_spriteTypeToStat
		#define GEODE_STATICS_spriteTypeToStat
		GEODE_AS_STATIC_FUNCTION(spriteTypeToStat) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CurrencySprite> : ModifyBase<ModifyDerive<Der, CurrencySprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CurrencySprite>>;
		using ModifyBase<ModifyDerive<Der, CurrencySprite>>::ModifyBase;
		using Base = CurrencySprite;
        using Derived = Der;
		void apply() override {

		}
	};
}
