#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountBackupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_backupAccountFinished
		#define GEODE_STATICS_backupAccountFinished
		GEODE_AS_STATIC_FUNCTION(backupAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_backupAccountFailed
		#define GEODE_STATICS_backupAccountFailed
		GEODE_AS_STATIC_FUNCTION(backupAccountFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountBackupDelegate> : ModifyBase<ModifyDerive<Der, GJAccountBackupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountBackupDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountBackupDelegate>>::ModifyBase;
		using Base = GJAccountBackupDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
