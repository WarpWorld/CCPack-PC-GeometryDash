#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPurchaseDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_didPurchaseItem
		#define GEODE_STATICS_didPurchaseItem
		GEODE_AS_STATIC_FUNCTION(didPurchaseItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPurchaseDelegate> : ModifyBase<ModifyDerive<Der, GJPurchaseDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPurchaseDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJPurchaseDelegate>>::ModifyBase;
		using Base = GJPurchaseDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
