#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCScrollLayerExtDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scrllViewWillBeginDecelerating
		#define GEODE_STATICS_scrllViewWillBeginDecelerating
		GEODE_AS_STATIC_FUNCTION(scrllViewWillBeginDecelerating) 
	#endif

	#ifndef GEODE_STATICS_scrollViewDidEndDecelerating
		#define GEODE_STATICS_scrollViewDidEndDecelerating
		GEODE_AS_STATIC_FUNCTION(scrollViewDidEndDecelerating) 
	#endif

	#ifndef GEODE_STATICS_scrollViewTouchMoving
		#define GEODE_STATICS_scrollViewTouchMoving
		GEODE_AS_STATIC_FUNCTION(scrollViewTouchMoving) 
	#endif

	#ifndef GEODE_STATICS_scrollViewDidEndMoving
		#define GEODE_STATICS_scrollViewDidEndMoving
		GEODE_AS_STATIC_FUNCTION(scrollViewDidEndMoving) 
	#endif

	#ifndef GEODE_STATICS_scrollViewTouchBegin
		#define GEODE_STATICS_scrollViewTouchBegin
		GEODE_AS_STATIC_FUNCTION(scrollViewTouchBegin) 
	#endif

	#ifndef GEODE_STATICS_scrollViewTouchEnd
		#define GEODE_STATICS_scrollViewTouchEnd
		GEODE_AS_STATIC_FUNCTION(scrollViewTouchEnd) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCScrollLayerExtDelegate> : ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>>;
		using ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>>::ModifyBase;
		using Base = CCScrollLayerExtDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
