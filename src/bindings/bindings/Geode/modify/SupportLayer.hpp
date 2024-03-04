#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SupportLayer.hpp>
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

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_onCocos2d
		#define GEODE_STATICS_onCocos2d
		GEODE_AS_STATIC_FUNCTION(onCocos2d) 
	#endif

	#ifndef GEODE_STATICS_onEmail
		#define GEODE_STATICS_onEmail
		GEODE_AS_STATIC_FUNCTION(onEmail) 
	#endif

	#ifndef GEODE_STATICS_onGetReward
		#define GEODE_STATICS_onGetReward
		GEODE_AS_STATIC_FUNCTION(onGetReward) 
	#endif

	#ifndef GEODE_STATICS_onLinks
		#define GEODE_STATICS_onLinks
		GEODE_AS_STATIC_FUNCTION(onLinks) 
	#endif

	#ifndef GEODE_STATICS_onLowDetail
		#define GEODE_STATICS_onLowDetail
		GEODE_AS_STATIC_FUNCTION(onLowDetail) 
	#endif

	#ifndef GEODE_STATICS_onPrivacy
		#define GEODE_STATICS_onPrivacy
		GEODE_AS_STATIC_FUNCTION(onPrivacy) 
	#endif

	#ifndef GEODE_STATICS_onRequestAccess
		#define GEODE_STATICS_onRequestAccess
		GEODE_AS_STATIC_FUNCTION(onRequestAccess) 
	#endif

	#ifndef GEODE_STATICS_onRobTop
		#define GEODE_STATICS_onRobTop
		GEODE_AS_STATIC_FUNCTION(onRobTop) 
	#endif

	#ifndef GEODE_STATICS_onSFX
		#define GEODE_STATICS_onSFX
		GEODE_AS_STATIC_FUNCTION(onSFX) 
	#endif

	#ifndef GEODE_STATICS_onTOS
		#define GEODE_STATICS_onTOS
		GEODE_AS_STATIC_FUNCTION(onTOS) 
	#endif

	#ifndef GEODE_STATICS_sendSupportMail
		#define GEODE_STATICS_sendSupportMail
		GEODE_AS_STATIC_FUNCTION(sendSupportMail) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SupportLayer> : ModifyBase<ModifyDerive<Der, SupportLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SupportLayer>>;
		using ModifyBase<ModifyDerive<Der, SupportLayer>>::ModifyBase;
		using Base = SupportLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bbb30, Optcall, SupportLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bc520, Membercall, SupportLayer, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bce90, Membercall, SupportLayer, onLinks, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bcc50, Membercall, SupportLayer, onLowDetail, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bca70, Membercall, SupportLayer, onRequestAccess, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bcd40, Membercall, SupportLayer, sendSupportMail, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bbcc0, Thiscall, SupportLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bcbc0, Thiscall, SupportLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bcc20, Thiscall, SupportLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bd0b0, Thiscall, SupportLayer, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
