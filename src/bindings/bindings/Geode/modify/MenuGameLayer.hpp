#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MenuGameLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_destroyPlayer
		#define GEODE_STATICS_destroyPlayer
		GEODE_AS_STATIC_FUNCTION(destroyPlayer) 
	#endif

	#ifndef GEODE_STATICS_getBGColor
		#define GEODE_STATICS_getBGColor
		GEODE_AS_STATIC_FUNCTION(getBGColor) 
	#endif

	#ifndef GEODE_STATICS_resetPlayer
		#define GEODE_STATICS_resetPlayer
		GEODE_AS_STATIC_FUNCTION(resetPlayer) 
	#endif

	#ifndef GEODE_STATICS_tryJump
		#define GEODE_STATICS_tryJump
		GEODE_AS_STATIC_FUNCTION(tryJump) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MenuGameLayer> : ModifyBase<ModifyDerive<Der, MenuGameLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MenuGameLayer>>;
		using ModifyBase<ModifyDerive<Der, MenuGameLayer>>::ModifyBase;
		using Base = MenuGameLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ae40, Membercall, MenuGameLayer, destroyPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x279fd0, Membercall, MenuGameLayer, resetPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2796d0, Membercall, MenuGameLayer, updateColor, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x279c60, Thiscall, MenuGameLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x279240, Thiscall, MenuGameLayer, init, )
		}
	};
}
