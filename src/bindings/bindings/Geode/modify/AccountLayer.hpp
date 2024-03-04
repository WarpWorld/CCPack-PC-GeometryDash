#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AccountLayer.hpp>
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

	#ifndef GEODE_STATICS_doBackup
		#define GEODE_STATICS_doBackup
		GEODE_AS_STATIC_FUNCTION(doBackup) 
	#endif

	#ifndef GEODE_STATICS_doSync
		#define GEODE_STATICS_doSync
		GEODE_AS_STATIC_FUNCTION(doSync) 
	#endif

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_hideLoadingUI
		#define GEODE_STATICS_hideLoadingUI
		GEODE_AS_STATIC_FUNCTION(hideLoadingUI) 
	#endif

	#ifndef GEODE_STATICS_onBackup
		#define GEODE_STATICS_onBackup
		GEODE_AS_STATIC_FUNCTION(onBackup) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onLogin
		#define GEODE_STATICS_onLogin
		GEODE_AS_STATIC_FUNCTION(onLogin) 
	#endif

	#ifndef GEODE_STATICS_onMore
		#define GEODE_STATICS_onMore
		GEODE_AS_STATIC_FUNCTION(onMore) 
	#endif

	#ifndef GEODE_STATICS_onRegister
		#define GEODE_STATICS_onRegister
		GEODE_AS_STATIC_FUNCTION(onRegister) 
	#endif

	#ifndef GEODE_STATICS_onSync
		#define GEODE_STATICS_onSync
		GEODE_AS_STATIC_FUNCTION(onSync) 
	#endif

	#ifndef GEODE_STATICS_showLoadingUI
		#define GEODE_STATICS_showLoadingUI
		GEODE_AS_STATIC_FUNCTION(showLoadingUI) 
	#endif

	#ifndef GEODE_STATICS_toggleUI
		#define GEODE_STATICS_toggleUI
		GEODE_AS_STATIC_FUNCTION(toggleUI) 
	#endif

	#ifndef GEODE_STATICS_updatePage
		#define GEODE_STATICS_updatePage
		GEODE_AS_STATIC_FUNCTION(updatePage) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_layerHidden
		#define GEODE_STATICS_layerHidden
		GEODE_AS_STATIC_FUNCTION(layerHidden) 
	#endif

	#ifndef GEODE_STATICS_backupAccountFinished
		#define GEODE_STATICS_backupAccountFinished
		GEODE_AS_STATIC_FUNCTION(backupAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_backupAccountFailed
		#define GEODE_STATICS_backupAccountFailed
		GEODE_AS_STATIC_FUNCTION(backupAccountFailed) 
	#endif

	#ifndef GEODE_STATICS_syncAccountFinished
		#define GEODE_STATICS_syncAccountFinished
		GEODE_AS_STATIC_FUNCTION(syncAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_syncAccountFailed
		#define GEODE_STATICS_syncAccountFailed
		GEODE_AS_STATIC_FUNCTION(syncAccountFailed) 
	#endif

	#ifndef GEODE_STATICS_accountStatusChanged
		#define GEODE_STATICS_accountStatusChanged
		GEODE_AS_STATIC_FUNCTION(accountStatusChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AccountLayer> : ModifyBase<ModifyDerive<Der, AccountLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AccountLayer>>;
		using ModifyBase<ModifyDerive<Der, AccountLayer>>::ModifyBase;
		using Base = AccountLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x573e0, Optcall, AccountLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57dc0, Membercall, AccountLayer, doBackup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57f20, Membercall, AccountLayer, doSync, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57c70, Membercall, AccountLayer, onBackup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57c20, Membercall, AccountLayer, onLogin, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58010, Membercall, AccountLayer, onMore, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57e30, Membercall, AccountLayer, onSync, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58060, Membercall, AccountLayer, updatePage, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x575c0, Thiscall, AccountLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x589b0, Thiscall, AccountLayer, layerHidden, )
		}
	};
}
