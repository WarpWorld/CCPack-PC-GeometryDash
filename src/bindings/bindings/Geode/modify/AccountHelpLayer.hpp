#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AccountHelpLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_doUnlink
		#define GEODE_STATICS_doUnlink
		GEODE_AS_STATIC_FUNCTION(doUnlink) 
	#endif

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_onAccountManagement
		#define GEODE_STATICS_onAccountManagement
		GEODE_AS_STATIC_FUNCTION(onAccountManagement) 
	#endif

	#ifndef GEODE_STATICS_onReLogin
		#define GEODE_STATICS_onReLogin
		GEODE_AS_STATIC_FUNCTION(onReLogin) 
	#endif

	#ifndef GEODE_STATICS_onUnlink
		#define GEODE_STATICS_onUnlink
		GEODE_AS_STATIC_FUNCTION(onUnlink) 
	#endif

	#ifndef GEODE_STATICS_updatePage
		#define GEODE_STATICS_updatePage
		GEODE_AS_STATIC_FUNCTION(updatePage) 
	#endif

	#ifndef GEODE_STATICS_verifyUnlink
		#define GEODE_STATICS_verifyUnlink
		GEODE_AS_STATIC_FUNCTION(verifyUnlink) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_layerHidden
		#define GEODE_STATICS_layerHidden
		GEODE_AS_STATIC_FUNCTION(layerHidden) 
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
	struct ModifyDerive<Der, AccountHelpLayer> : ModifyBase<ModifyDerive<Der, AccountHelpLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AccountHelpLayer>>;
		using ModifyBase<ModifyDerive<Der, AccountHelpLayer>>::ModifyBase;
		using Base = AccountHelpLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a10, Optcall, AccountHelpLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58b90, Thiscall, AccountHelpLayer, customSetup, )
		}
	};
}
