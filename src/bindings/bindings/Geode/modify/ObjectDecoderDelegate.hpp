#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ObjectDecoderDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getDecodedObject
		#define GEODE_STATICS_getDecodedObject
		GEODE_AS_STATIC_FUNCTION(getDecodedObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ObjectDecoderDelegate> : ModifyBase<ModifyDerive<Der, ObjectDecoderDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ObjectDecoderDelegate>>;
		using ModifyBase<ModifyDerive<Der, ObjectDecoderDelegate>>::ModifyBase;
		using Base = ObjectDecoderDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
