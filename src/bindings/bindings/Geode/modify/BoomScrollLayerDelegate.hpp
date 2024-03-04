#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomScrollLayerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scrollLayerScrollingStarted
		#define GEODE_STATICS_scrollLayerScrollingStarted
		GEODE_AS_STATIC_FUNCTION(scrollLayerScrollingStarted) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerScrolledToPage
		#define GEODE_STATICS_scrollLayerScrolledToPage
		GEODE_AS_STATIC_FUNCTION(scrollLayerScrolledToPage) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerMoved
		#define GEODE_STATICS_scrollLayerMoved
		GEODE_AS_STATIC_FUNCTION(scrollLayerMoved) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerWillScrollToPage
		#define GEODE_STATICS_scrollLayerWillScrollToPage
		GEODE_AS_STATIC_FUNCTION(scrollLayerWillScrollToPage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BoomScrollLayerDelegate> : ModifyBase<ModifyDerive<Der, BoomScrollLayerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BoomScrollLayerDelegate>>;
		using ModifyBase<ModifyDerive<Der, BoomScrollLayerDelegate>>::ModifyBase;
		using Base = BoomScrollLayerDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
