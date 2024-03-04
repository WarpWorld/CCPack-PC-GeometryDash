#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UpdateAccountSettingsPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_updateSettingsFinished
		#define GEODE_STATICS_updateSettingsFinished
		GEODE_AS_STATIC_FUNCTION(updateSettingsFinished) 
	#endif

	#ifndef GEODE_STATICS_updateSettingsFailed
		#define GEODE_STATICS_updateSettingsFailed
		GEODE_AS_STATIC_FUNCTION(updateSettingsFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UpdateAccountSettingsPopup> : ModifyBase<ModifyDerive<Der, UpdateAccountSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UpdateAccountSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, UpdateAccountSettingsPopup>>::ModifyBase;
		using Base = UpdateAccountSettingsPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
