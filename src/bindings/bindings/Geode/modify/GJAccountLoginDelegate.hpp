#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountLoginDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loginAccountFinished
		#define GEODE_STATICS_loginAccountFinished
		GEODE_AS_STATIC_FUNCTION(loginAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_loginAccountFailed
		#define GEODE_STATICS_loginAccountFailed
		GEODE_AS_STATIC_FUNCTION(loginAccountFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountLoginDelegate> : ModifyBase<ModifyDerive<Der, GJAccountLoginDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountLoginDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountLoginDelegate>>::ModifyBase;
		using Base = GJAccountLoginDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
