#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ListUploadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_listUploadFinished
		#define GEODE_STATICS_listUploadFinished
		GEODE_AS_STATIC_FUNCTION(listUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_listUploadFailed
		#define GEODE_STATICS_listUploadFailed
		GEODE_AS_STATIC_FUNCTION(listUploadFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ListUploadDelegate> : ModifyBase<ModifyDerive<Der, ListUploadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ListUploadDelegate>>;
		using ModifyBase<ModifyDerive<Der, ListUploadDelegate>>::ModifyBase;
		using Base = ListUploadDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
