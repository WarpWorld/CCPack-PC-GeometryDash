#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMPDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_joinLobbyFinished
		#define GEODE_STATICS_joinLobbyFinished
		GEODE_AS_STATIC_FUNCTION(joinLobbyFinished) 
	#endif

	#ifndef GEODE_STATICS_joinLobbyFailed
		#define GEODE_STATICS_joinLobbyFailed
		GEODE_AS_STATIC_FUNCTION(joinLobbyFailed) 
	#endif

	#ifndef GEODE_STATICS_didUploadMPComment
		#define GEODE_STATICS_didUploadMPComment
		GEODE_AS_STATIC_FUNCTION(didUploadMPComment) 
	#endif

	#ifndef GEODE_STATICS_updateComments
		#define GEODE_STATICS_updateComments
		GEODE_AS_STATIC_FUNCTION(updateComments) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMPDelegate> : ModifyBase<ModifyDerive<Der, GJMPDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMPDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJMPDelegate>>::ModifyBase;
		using Base = GJMPDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
