#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountRegisterDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_registerAccountFinished
		#define GEODE_STATICS_registerAccountFinished
		GEODE_AS_STATIC_FUNCTION(registerAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_registerAccountFailed
		#define GEODE_STATICS_registerAccountFailed
		GEODE_AS_STATIC_FUNCTION(registerAccountFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountRegisterDelegate> : ModifyBase<ModifyDerive<Der, GJAccountRegisterDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountRegisterDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountRegisterDelegate>>::ModifyBase;
		using Base = GJAccountRegisterDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
