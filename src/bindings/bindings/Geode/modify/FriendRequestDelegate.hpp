#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendRequestDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFRequestsFinished
		#define GEODE_STATICS_loadFRequestsFinished
		GEODE_AS_STATIC_FUNCTION(loadFRequestsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadFRequestsFailed
		#define GEODE_STATICS_loadFRequestsFailed
		GEODE_AS_STATIC_FUNCTION(loadFRequestsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_forceReloadRequests
		#define GEODE_STATICS_forceReloadRequests
		GEODE_AS_STATIC_FUNCTION(forceReloadRequests) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendRequestDelegate> : ModifyBase<ModifyDerive<Der, FriendRequestDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendRequestDelegate>>;
		using ModifyBase<ModifyDerive<Der, FriendRequestDelegate>>::ModifyBase;
		using Base = FriendRequestDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
