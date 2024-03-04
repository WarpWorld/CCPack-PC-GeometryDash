#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_backupAccount
		#define GEODE_STATICS_backupAccount
		GEODE_AS_STATIC_FUNCTION(backupAccount) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_getAccountBackupURL
		#define GEODE_STATICS_getAccountBackupURL
		GEODE_AS_STATIC_FUNCTION(getAccountBackupURL) 
	#endif

	#ifndef GEODE_STATICS_getAccountSyncURL
		#define GEODE_STATICS_getAccountSyncURL
		GEODE_AS_STATIC_FUNCTION(getAccountSyncURL) 
	#endif

	#ifndef GEODE_STATICS_getDLObject
		#define GEODE_STATICS_getDLObject
		GEODE_AS_STATIC_FUNCTION(getDLObject) 
	#endif

	#ifndef GEODE_STATICS_getShaPassword
		#define GEODE_STATICS_getShaPassword
		GEODE_AS_STATIC_FUNCTION(getShaPassword) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_handleItDelayed
		#define GEODE_STATICS_handleItDelayed
		GEODE_AS_STATIC_FUNCTION(handleItDelayed) 
	#endif

	#ifndef GEODE_STATICS_handleItND
		#define GEODE_STATICS_handleItND
		GEODE_AS_STATIC_FUNCTION(handleItND) 
	#endif

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_linkToAccount
		#define GEODE_STATICS_linkToAccount
		GEODE_AS_STATIC_FUNCTION(linkToAccount) 
	#endif

	#ifndef GEODE_STATICS_loginAccount
		#define GEODE_STATICS_loginAccount
		GEODE_AS_STATIC_FUNCTION(loginAccount) 
	#endif

	#ifndef GEODE_STATICS_onBackupAccountCompleted
		#define GEODE_STATICS_onBackupAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onBackupAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetAccountBackupURLCompleted
		#define GEODE_STATICS_onGetAccountBackupURLCompleted
		GEODE_AS_STATIC_FUNCTION(onGetAccountBackupURLCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetAccountSyncURLCompleted
		#define GEODE_STATICS_onGetAccountSyncURLCompleted
		GEODE_AS_STATIC_FUNCTION(onGetAccountSyncURLCompleted) 
	#endif

	#ifndef GEODE_STATICS_onLoginAccountCompleted
		#define GEODE_STATICS_onLoginAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onLoginAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRegisterAccountCompleted
		#define GEODE_STATICS_onRegisterAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onRegisterAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSyncAccountCompleted
		#define GEODE_STATICS_onSyncAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onSyncAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateAccountSettingsCompleted
		#define GEODE_STATICS_onUpdateAccountSettingsCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateAccountSettingsCompleted) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_registerAccount
		#define GEODE_STATICS_registerAccount
		GEODE_AS_STATIC_FUNCTION(registerAccount) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_syncAccount
		#define GEODE_STATICS_syncAccount
		GEODE_AS_STATIC_FUNCTION(syncAccount) 
	#endif

	#ifndef GEODE_STATICS_unlinkFromAccount
		#define GEODE_STATICS_unlinkFromAccount
		GEODE_AS_STATIC_FUNCTION(unlinkFromAccount) 
	#endif

	#ifndef GEODE_STATICS_updateAccountSettings
		#define GEODE_STATICS_updateAccountSettings
		GEODE_AS_STATIC_FUNCTION(updateAccountSettings) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountManager> : ModifyBase<ModifyDerive<Der, GJAccountManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountManager>>;
		using ModifyBase<ModifyDerive<Der, GJAccountManager>>::ModifyBase;
		using Base = GJAccountManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18a510, Optcall, GJAccountManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18aba0, Membercall, GJAccountManager, addDLToActive, char const*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18b530, Membercall, GJAccountManager, getAccountBackupURL, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18bdc0, Membercall, GJAccountManager, getAccountSyncURL, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18a830, Membercall, GJAccountManager, handleIt, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18afe0, Membercall, GJAccountManager, loginAccount, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18bb20, Membercall, GJAccountManager, onBackupAccountCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18b660, Membercall, GJAccountManager, onGetAccountBackupURLCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18bef0, Membercall, GJAccountManager, onGetAccountSyncURLCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18b260, Membercall, GJAccountManager, onLoginAccountCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18ae80, Membercall, GJAccountManager, onRegisterAccountCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18c230, Membercall, GJAccountManager, onSyncAccountCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18ce40, Membercall, GJAccountManager, onUpdateAccountSettingsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18ad00, Membercall, GJAccountManager, registerAccount, gd::string, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18ac50, Membercall, GJAccountManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18cc30, Membercall, GJAccountManager, updateAccountSettings, int, int, int, gd::string, gd::string, gd::string)
		}
	};
}
