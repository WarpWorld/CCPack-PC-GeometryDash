#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShareCommentDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_shareCommentClosed
		#define GEODE_STATICS_shareCommentClosed
		GEODE_AS_STATIC_FUNCTION(shareCommentClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShareCommentDelegate> : ModifyBase<ModifyDerive<Der, ShareCommentDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShareCommentDelegate>>;
		using ModifyBase<ModifyDerive<Der, ShareCommentDelegate>>::ModifyBase;
		using Base = ShareCommentDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
