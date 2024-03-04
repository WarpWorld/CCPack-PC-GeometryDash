#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadActionDelegate> : ModifyBase<ModifyDerive<Der, UploadActionDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadActionDelegate>>;
		using ModifyBase<ModifyDerive<Der, UploadActionDelegate>>::ModifyBase;
		using Base = UploadActionDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
