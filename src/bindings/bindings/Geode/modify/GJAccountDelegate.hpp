#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_accountStatusChanged
		#define GEODE_STATICS_accountStatusChanged
		GEODE_AS_STATIC_FUNCTION(accountStatusChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountDelegate> : ModifyBase<ModifyDerive<Der, GJAccountDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountDelegate>>::ModifyBase;
		using Base = GJAccountDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
