#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UserInfoDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getUserInfoFinished
		#define GEODE_STATICS_getUserInfoFinished
		GEODE_AS_STATIC_FUNCTION(getUserInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoFailed
		#define GEODE_STATICS_getUserInfoFailed
		GEODE_AS_STATIC_FUNCTION(getUserInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_userInfoChanged
		#define GEODE_STATICS_userInfoChanged
		GEODE_AS_STATIC_FUNCTION(userInfoChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UserInfoDelegate> : ModifyBase<ModifyDerive<Der, UserInfoDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UserInfoDelegate>>;
		using ModifyBase<ModifyDerive<Der, UserInfoDelegate>>::ModifyBase;
		using Base = UserInfoDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
