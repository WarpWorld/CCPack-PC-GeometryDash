#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMessagePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadFromGJMessage
		#define GEODE_STATICS_loadFromGJMessage
		GEODE_AS_STATIC_FUNCTION(loadFromGJMessage) 
	#endif

	#ifndef GEODE_STATICS_onBlock
		#define GEODE_STATICS_onBlock
		GEODE_AS_STATIC_FUNCTION(onBlock) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onRemove
		#define GEODE_STATICS_onRemove
		GEODE_AS_STATIC_FUNCTION(onRemove) 
	#endif

	#ifndef GEODE_STATICS_onReply
		#define GEODE_STATICS_onReply
		GEODE_AS_STATIC_FUNCTION(onReply) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_downloadMessageFinished
		#define GEODE_STATICS_downloadMessageFinished
		GEODE_AS_STATIC_FUNCTION(downloadMessageFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadMessageFailed
		#define GEODE_STATICS_downloadMessageFailed
		GEODE_AS_STATIC_FUNCTION(downloadMessageFailed) 
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
	struct ModifyDerive<Der, GJMessagePopup> : ModifyBase<ModifyDerive<Der, GJMessagePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMessagePopup>>;
		using ModifyBase<ModifyDerive<Der, GJMessagePopup>>::ModifyBase;
		using Base = GJMessagePopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
