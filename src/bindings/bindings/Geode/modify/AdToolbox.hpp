#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_cacheInterstitial
		#define GEODE_STATICS_cacheInterstitial
		GEODE_AS_STATIC_FUNCTION(cacheInterstitial) 
	#endif

	#ifndef GEODE_STATICS_cacheRewardedVideo
		#define GEODE_STATICS_cacheRewardedVideo
		GEODE_AS_STATIC_FUNCTION(cacheRewardedVideo) 
	#endif

	#ifndef GEODE_STATICS_disableBanner
		#define GEODE_STATICS_disableBanner
		GEODE_AS_STATIC_FUNCTION(disableBanner) 
	#endif

	#ifndef GEODE_STATICS_enableBanner
		#define GEODE_STATICS_enableBanner
		GEODE_AS_STATIC_FUNCTION(enableBanner) 
	#endif

	#ifndef GEODE_STATICS_enableBannerNoRefresh
		#define GEODE_STATICS_enableBannerNoRefresh
		GEODE_AS_STATIC_FUNCTION(enableBannerNoRefresh) 
	#endif

	#ifndef GEODE_STATICS_hasCachedInterstitial
		#define GEODE_STATICS_hasCachedInterstitial
		GEODE_AS_STATIC_FUNCTION(hasCachedInterstitial) 
	#endif

	#ifndef GEODE_STATICS_hasCachedRewardedVideo
		#define GEODE_STATICS_hasCachedRewardedVideo
		GEODE_AS_STATIC_FUNCTION(hasCachedRewardedVideo) 
	#endif

	#ifndef GEODE_STATICS_isShowingAd
		#define GEODE_STATICS_isShowingAd
		GEODE_AS_STATIC_FUNCTION(isShowingAd) 
	#endif

	#ifndef GEODE_STATICS_queueRefreshBanner
		#define GEODE_STATICS_queueRefreshBanner
		GEODE_AS_STATIC_FUNCTION(queueRefreshBanner) 
	#endif

	#ifndef GEODE_STATICS_setupAds
		#define GEODE_STATICS_setupAds
		GEODE_AS_STATIC_FUNCTION(setupAds) 
	#endif

	#ifndef GEODE_STATICS_showDebug
		#define GEODE_STATICS_showDebug
		GEODE_AS_STATIC_FUNCTION(showDebug) 
	#endif

	#ifndef GEODE_STATICS_showInterstitial
		#define GEODE_STATICS_showInterstitial
		GEODE_AS_STATIC_FUNCTION(showInterstitial) 
	#endif

	#ifndef GEODE_STATICS_showRewardedVideo
		#define GEODE_STATICS_showRewardedVideo
		GEODE_AS_STATIC_FUNCTION(showRewardedVideo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AdToolbox> : ModifyBase<ModifyDerive<Der, AdToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdToolbox>>;
		using ModifyBase<ModifyDerive<Der, AdToolbox>>::ModifyBase;
		using Base = AdToolbox;
        using Derived = Der;
		void apply() override {

		}
	};
}
