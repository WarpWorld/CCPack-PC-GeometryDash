#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AnimatedShopKeeper.hpp>
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

	#ifndef GEODE_STATICS_playReactAnimation
		#define GEODE_STATICS_playReactAnimation
		GEODE_AS_STATIC_FUNCTION(playReactAnimation) 
	#endif

	#ifndef GEODE_STATICS_startAnimating
		#define GEODE_STATICS_startAnimating
		GEODE_AS_STATIC_FUNCTION(startAnimating) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AnimatedShopKeeper> : ModifyBase<ModifyDerive<Der, AnimatedShopKeeper>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AnimatedShopKeeper>>;
		using ModifyBase<ModifyDerive<Der, AnimatedShopKeeper>>::ModifyBase;
		using Base = AnimatedShopKeeper;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21d880, Optcall, AnimatedShopKeeper, create, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21d920, Membercall, AnimatedShopKeeper, init, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21da20, Membercall, AnimatedShopKeeper, playReactAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21db40, Membercall, AnimatedShopKeeper, startAnimating, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21db80, Thiscall, AnimatedShopKeeper, animationFinished, char const*)
		}
	};
}
