#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountSyncDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_syncAccountFinished
		#define GEODE_STATICS_syncAccountFinished
		GEODE_AS_STATIC_FUNCTION(syncAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_syncAccountFailed
		#define GEODE_STATICS_syncAccountFailed
		GEODE_AS_STATIC_FUNCTION(syncAccountFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountSyncDelegate> : ModifyBase<ModifyDerive<Der, GJAccountSyncDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountSyncDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountSyncDelegate>>::ModifyBase;
		using Base = GJAccountSyncDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
