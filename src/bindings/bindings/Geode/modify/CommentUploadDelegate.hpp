#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CommentUploadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_commentUploadFinished
		#define GEODE_STATICS_commentUploadFinished
		GEODE_AS_STATIC_FUNCTION(commentUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFailed
		#define GEODE_STATICS_commentUploadFailed
		GEODE_AS_STATIC_FUNCTION(commentUploadFailed) 
	#endif

	#ifndef GEODE_STATICS_commentDeleteFailed
		#define GEODE_STATICS_commentDeleteFailed
		GEODE_AS_STATIC_FUNCTION(commentDeleteFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CommentUploadDelegate> : ModifyBase<ModifyDerive<Der, CommentUploadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CommentUploadDelegate>>;
		using ModifyBase<ModifyDerive<Der, CommentUploadDelegate>>::ModifyBase;
		using Base = CommentUploadDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
