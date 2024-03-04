#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPathPage.hpp>
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

	#ifndef GEODE_STATICS_onActivatePath
		#define GEODE_STATICS_onActivatePath
		GEODE_AS_STATIC_FUNCTION(onActivatePath) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onIconInfo
		#define GEODE_STATICS_onIconInfo
		GEODE_AS_STATIC_FUNCTION(onIconInfo) 
	#endif

	#ifndef GEODE_STATICS_onUnlock
		#define GEODE_STATICS_onUnlock
		GEODE_AS_STATIC_FUNCTION(onUnlock) 
	#endif

	#ifndef GEODE_STATICS_playUnlockAnimation
		#define GEODE_STATICS_playUnlockAnimation
		GEODE_AS_STATIC_FUNCTION(playUnlockAnimation) 
	#endif

	#ifndef GEODE_STATICS_showCantAffordMessage
		#define GEODE_STATICS_showCantAffordMessage
		GEODE_AS_STATIC_FUNCTION(showCantAffordMessage) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationFinished
		#define GEODE_STATICS_unlockAnimationFinished
		GEODE_AS_STATIC_FUNCTION(unlockAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationStep2
		#define GEODE_STATICS_unlockAnimationStep2
		GEODE_AS_STATIC_FUNCTION(unlockAnimationStep2) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationStep3
		#define GEODE_STATICS_unlockAnimationStep3
		GEODE_AS_STATIC_FUNCTION(unlockAnimationStep3) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_didPurchaseItem
		#define GEODE_STATICS_didPurchaseItem
		GEODE_AS_STATIC_FUNCTION(didPurchaseItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPathPage> : ModifyBase<ModifyDerive<Der, GJPathPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPathPage>>;
		using ModifyBase<ModifyDerive<Der, GJPathPage>>::ModifyBase;
		using Base = GJPathPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fd2c0, Optcall, GJPathPage, create, int, GJPathsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fd370, Membercall, GJPathPage, init, int, GJPathsLayer*)
		}
	};
}
