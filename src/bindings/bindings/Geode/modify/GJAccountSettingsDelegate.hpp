#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountSettingsDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_updateSettingsFinished
		#define GEODE_STATICS_updateSettingsFinished
		GEODE_AS_STATIC_FUNCTION(updateSettingsFinished) 
	#endif

	#ifndef GEODE_STATICS_updateSettingsFailed
		#define GEODE_STATICS_updateSettingsFailed
		GEODE_AS_STATIC_FUNCTION(updateSettingsFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountSettingsDelegate> : ModifyBase<ModifyDerive<Der, GJAccountSettingsDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountSettingsDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountSettingsDelegate>>::ModifyBase;
		using Base = GJAccountSettingsDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
