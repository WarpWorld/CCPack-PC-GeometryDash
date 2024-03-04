#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountSettingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCommentSetting
		#define GEODE_STATICS_onCommentSetting
		GEODE_AS_STATIC_FUNCTION(onCommentSetting) 
	#endif

	#ifndef GEODE_STATICS_onFriendRequests
		#define GEODE_STATICS_onFriendRequests
		GEODE_AS_STATIC_FUNCTION(onFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_onMessageSetting
		#define GEODE_STATICS_onMessageSetting
		GEODE_AS_STATIC_FUNCTION(onMessageSetting) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_updateScoreValues
		#define GEODE_STATICS_updateScoreValues
		GEODE_AS_STATIC_FUNCTION(updateScoreValues) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountSettingsLayer> : ModifyBase<ModifyDerive<Der, GJAccountSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, GJAccountSettingsLayer>>::ModifyBase;
		using Base = GJAccountSettingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x208440, Optcall, GJAccountSettingsLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2084f0, Membercall, GJAccountSettingsLayer, init, int)
		}
	};
}
