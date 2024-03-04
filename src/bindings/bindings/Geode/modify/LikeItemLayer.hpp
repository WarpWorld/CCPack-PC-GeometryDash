#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LikeItemLayer.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDislike
		#define GEODE_STATICS_onDislike
		GEODE_AS_STATIC_FUNCTION(onDislike) 
	#endif

	#ifndef GEODE_STATICS_onLike
		#define GEODE_STATICS_onLike
		GEODE_AS_STATIC_FUNCTION(onLike) 
	#endif

	#ifndef GEODE_STATICS_triggerLike
		#define GEODE_STATICS_triggerLike
		GEODE_AS_STATIC_FUNCTION(triggerLike) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LikeItemLayer> : ModifyBase<ModifyDerive<Der, LikeItemLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LikeItemLayer>>;
		using ModifyBase<ModifyDerive<Der, LikeItemLayer>>::ModifyBase;
		using Base = LikeItemLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x275d20, Optcall, LikeItemLayer, create, LikeItemType, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x275dd0, Membercall, LikeItemLayer, init, LikeItemType, int, int)
		}
	};
}
