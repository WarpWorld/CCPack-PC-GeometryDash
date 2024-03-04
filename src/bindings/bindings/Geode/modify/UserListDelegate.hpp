#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UserListDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getUserListFinished
		#define GEODE_STATICS_getUserListFinished
		GEODE_AS_STATIC_FUNCTION(getUserListFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserListFailed
		#define GEODE_STATICS_getUserListFailed
		GEODE_AS_STATIC_FUNCTION(getUserListFailed) 
	#endif

	#ifndef GEODE_STATICS_userListChanged
		#define GEODE_STATICS_userListChanged
		GEODE_AS_STATIC_FUNCTION(userListChanged) 
	#endif

	#ifndef GEODE_STATICS_forceReloadList
		#define GEODE_STATICS_forceReloadList
		GEODE_AS_STATIC_FUNCTION(forceReloadList) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UserListDelegate> : ModifyBase<ModifyDerive<Der, UserListDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UserListDelegate>>;
		using ModifyBase<ModifyDerive<Der, UserListDelegate>>::ModifyBase;
		using Base = UserListDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
