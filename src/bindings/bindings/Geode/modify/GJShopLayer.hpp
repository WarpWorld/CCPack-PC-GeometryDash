#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJShopLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_exitVideoAdItems
		#define GEODE_STATICS_exitVideoAdItems
		GEODE_AS_STATIC_FUNCTION(exitVideoAdItems) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onCommunityCredits
		#define GEODE_STATICS_onCommunityCredits
		GEODE_AS_STATIC_FUNCTION(onCommunityCredits) 
	#endif

	#ifndef GEODE_STATICS_onPlushies
		#define GEODE_STATICS_onPlushies
		GEODE_AS_STATIC_FUNCTION(onPlushies) 
	#endif

	#ifndef GEODE_STATICS_onSelectItem
		#define GEODE_STATICS_onSelectItem
		GEODE_AS_STATIC_FUNCTION(onSelectItem) 
	#endif

	#ifndef GEODE_STATICS_onVideoAd
		#define GEODE_STATICS_onVideoAd
		GEODE_AS_STATIC_FUNCTION(onVideoAd) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_showCantAffordMessage
		#define GEODE_STATICS_showCantAffordMessage
		GEODE_AS_STATIC_FUNCTION(showCantAffordMessage) 
	#endif

	#ifndef GEODE_STATICS_showReactMessage
		#define GEODE_STATICS_showReactMessage
		GEODE_AS_STATIC_FUNCTION(showReactMessage) 
	#endif

	#ifndef GEODE_STATICS_updateCurrencyCounter
		#define GEODE_STATICS_updateCurrencyCounter
		GEODE_AS_STATIC_FUNCTION(updateCurrencyCounter) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_didPurchaseItem
		#define GEODE_STATICS_didPurchaseItem
		GEODE_AS_STATIC_FUNCTION(didPurchaseItem) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoFinished
		#define GEODE_STATICS_rewardedVideoFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJShopLayer> : ModifyBase<ModifyDerive<Der, GJShopLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJShopLayer>>;
		using ModifyBase<ModifyDerive<Der, GJShopLayer>>::ModifyBase;
		using Base = GJShopLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x219ad0, Optcall, GJShopLayer, create, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x219b70, Membercall, GJShopLayer, init, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21b2c0, Membercall, GJShopLayer, onSelectItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x219a90, Membercall, GJShopLayer, scene, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21be50, Membercall, GJShopLayer, showReactMessage, )
		}
	};
}
