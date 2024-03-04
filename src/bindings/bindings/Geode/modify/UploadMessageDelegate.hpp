#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadMessageDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_uploadMessageFinished
		#define GEODE_STATICS_uploadMessageFinished
		GEODE_AS_STATIC_FUNCTION(uploadMessageFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadMessageFailed
		#define GEODE_STATICS_uploadMessageFailed
		GEODE_AS_STATIC_FUNCTION(uploadMessageFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadMessageDelegate> : ModifyBase<ModifyDerive<Der, UploadMessageDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadMessageDelegate>>;
		using ModifyBase<ModifyDerive<Der, UploadMessageDelegate>>::ModifyBase;
		using Base = UploadMessageDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
