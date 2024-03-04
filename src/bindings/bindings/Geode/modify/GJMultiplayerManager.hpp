#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMultiplayerManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_addComment
		#define GEODE_STATICS_addComment
		GEODE_AS_STATIC_FUNCTION(addComment) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_createAndAddComment
		#define GEODE_STATICS_createAndAddComment
		GEODE_AS_STATIC_FUNCTION(createAndAddComment) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_exitLobby
		#define GEODE_STATICS_exitLobby
		GEODE_AS_STATIC_FUNCTION(exitLobby) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_getBasePostString
		#define GEODE_STATICS_getBasePostString
		GEODE_AS_STATIC_FUNCTION(getBasePostString) 
	#endif

	#ifndef GEODE_STATICS_getDLObject
		#define GEODE_STATICS_getDLObject
		GEODE_AS_STATIC_FUNCTION(getDLObject) 
	#endif

	#ifndef GEODE_STATICS_getLastCommentIDForGame
		#define GEODE_STATICS_getLastCommentIDForGame
		GEODE_AS_STATIC_FUNCTION(getLastCommentIDForGame) 
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

	#ifndef GEODE_STATICS_joinLobby
		#define GEODE_STATICS_joinLobby
		GEODE_AS_STATIC_FUNCTION(joinLobby) 
	#endif

	#ifndef GEODE_STATICS_onExitLobbyCompleted
		#define GEODE_STATICS_onExitLobbyCompleted
		GEODE_AS_STATIC_FUNCTION(onExitLobbyCompleted) 
	#endif

	#ifndef GEODE_STATICS_onJoinLobbyCompleted
		#define GEODE_STATICS_onJoinLobbyCompleted
		GEODE_AS_STATIC_FUNCTION(onJoinLobbyCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadCommentCompleted
		#define GEODE_STATICS_onUploadCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_uploadComment
		#define GEODE_STATICS_uploadComment
		GEODE_AS_STATIC_FUNCTION(uploadComment) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMultiplayerManager> : ModifyBase<ModifyDerive<Der, GJMultiplayerManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMultiplayerManager>>;
		using ModifyBase<ModifyDerive<Der, GJMultiplayerManager>>::ModifyBase;
		using Base = GJMultiplayerManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fc100, Membercall, GJMultiplayerManager, addComment, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fbfc0, Membercall, GJMultiplayerManager, createAndAddComment, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1faf80, Membercall, GJMultiplayerManager, handleIt, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fb820, Membercall, GJMultiplayerManager, onExitLobbyCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fb220, Membercall, GJMultiplayerManager, onJoinLobbyCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fae60, Membercall, GJMultiplayerManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fbe80, Membercall, GJMultiplayerManager, onUploadCommentCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fac50, Membercall, GJMultiplayerManager, ProcessHttpRequest, gd::string, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fb970, Membercall, GJMultiplayerManager, uploadComment, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fb1c0, Thiscall, GJMultiplayerManager, init, )
		}
	};
}
